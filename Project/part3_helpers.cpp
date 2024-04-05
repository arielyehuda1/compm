/* 046266 Compilation Methods, EE Faculty, Technion                        */
/* part3_helpers.cpp - Helper functions for project part 3 - implementation  */


#include "part3_helpers.h"

extern int yyparse (void);
extern Node* root_node;		//root node
extern Vec_buf code_buffer;
extern variable_table var_table;
extern Function_Table func_table;

using namespace std;

/**************************************************************************/
/*               Terminal constructors implementation                     */
/**************************************************************************/

Terminal::Terminal(string type) :terminal_type(type) {};
Terminal::Terminal(string type, string terminal_val) : 
    terminal_type(type), terminal_value(terminal_val) {};

/**************************************************************************/
/*                       Variables Symbol Table                           */
/**************************************************************************/
/**************************************************************************/
/*          VARIABLE TABLE PER TYPE PER SCOPE - lower level               */
/**************************************************************************/



Table_per_type_block_scope::Table_per_type_block_scope(Type block_table_type): //constructor
    block_table_type(block_table_type){      
    if(block_table_type==int_){
        next_temp_reg = INT_REG_START;
        temp_start_idx = INT_REG_START;
        type_rep = "I";
    }
    else if(block_table_type==float_){
        next_temp_reg = FLOAT_REG_START;
        temp_start_idx = FLOAT_REG_START;
        type_rep = "F";
    }

}

// returns the next free temp register 
string Table_per_type_block_scope::get_next_temp(){
    return type_rep + to_string(next_temp_reg++);
}

void Table_per_type_block_scope::insert_var_to_map(string id, int offset){
    vars_in_block.insert(pair<string,int>(id,offset));
}

bool Table_per_type_block_scope::find_in_type_block_scope(Var_Table_Entry& var, string id){
    // looks for the proper var in table, if found store in Var_Table_Entry
    auto it = vars_in_block.find(id);
    if(it != vars_in_block.end()){ // id is within the symbol table
        var.type = block_table_type;
        var.offset = it->second;
        return true;
    }
    return false;
}

void Table_per_type_block_scope::reset_temp_reg(){
    next_temp_reg = temp_start_idx;
}

void Table_per_type_block_scope::store_reg_update_stack(){
    string three_add_code;
    int used_regs = next_temp_reg - temp_start_idx;
    string SP_reg = SP;
    if(used_regs > 0){
        if(block_table_type == float_){
            //Cast SP to a SP_F
            three_add_code = string("CITOF") + " " SP_F + " " + SP;
            code_buffer.emit(three_add_code);
            SP_reg = SP_F;
        }
        //Store registers
        for (int i=0; i<used_regs; i++){
            three_add_code = string("STOR") + type_rep + " " + type_rep + to_string(temp_start_idx + i) + " " + SP_reg + " " + to_string(i * 4);
            code_buffer.emit(three_add_code);
        }
        //Update SP
        three_add_code = string("ADD2I") + " " + SP + " " + SP + " " + to_string(used_regs * 4);
        code_buffer.emit(three_add_code);
    }
}

void Table_per_type_block_scope::load_reg_update_stack(){
    string three_add_code;
    int used_regs = next_temp_reg - temp_start_idx;
    if(used_regs > 0){
        //Update SP
        three_add_code = string("SUBTI") + " " + SP + " " + SP + " " + to_string(used_regs * 4);  
        code_buffer.emit(three_add_code);
        string SP_reg = SP;
        if(block_table_type == float_){
            //Cast SP to a SP_F
            three_add_code = string("CITOF") + " " + SP_F + " " SP;
            code_buffer.emit(three_add_code);
            SP_reg = SP_F;
        }
        //Store registers
        for (int i=0; i<used_regs; i++){
            three_add_code = string("LOAD") + type_rep + " " + type_rep + to_string(temp_start_idx + i) + " " + SP_reg + " " + to_string(i * 4);
            code_buffer.emit(three_add_code);
        }
    }
}



/**************************************************************************/
/*                VARIABLE TABLE PER TYPE - middle level                  */
/**************************************************************************/



Table_block_scope::Table_block_scope(int start_offset):
    int_table(int_), float_table(float_) {
    stack_offset = start_offset;
    stack_start_idx = start_offset;
}

string Table_block_scope::next_temp_reg(Type type) {
    if (type == void_t)
        return "-1";
    else if (type == int_) {
        return int_table.get_next_temp();
    }
    else {  //type == float_
        return float_table.get_next_temp();
    }
}

int Table_block_scope::insert_variable(string id, Type type) {
    if (type == void_t)
        return -1;
    else if (type == int_) {
        int_table.insert_var_to_map(id, stack_offset);
    }
    else if (type == float_) {  //type == float_
        float_table.insert_var_to_map(id, stack_offset);
    }
    stack_offset += 4;  //update sp by type int/float size
    return stack_offset;
}

bool Table_block_scope::find_in_block_scope(Var_Table_Entry& var, string id) {   //returns true if variable is in one of the tables
    return int_table.find_in_type_block_scope(var, id) || float_table.find_in_type_block_scope(var, id);
}

void Table_block_scope::reset_reg() {
    int_table.reset_temp_reg();
    float_table.reset_temp_reg();
}

void Table_block_scope::store_reg() {
    int_table.store_reg_update_stack();
    float_table.store_reg_update_stack();
}

void Table_block_scope::load_reg() {
    int_table.load_reg_update_stack();
    float_table.load_reg_update_stack();
}

void Table_block_scope::empty_stack() {
    string three_add_code = string("SUBTI") + " " + SP + " " + SP + " " + to_string(stack_offset);
    if (stack_offset > stack_start_idx) //we used a stack for this block (the stack isn't empty)
        code_buffer.emit(three_add_code);
}



/**************************************************************************/
/*                    VARIABLE TABLE - upper level                        */
/**************************************************************************/



void variable_table::add_block_table() {
    int stack_offset = 0;
    if (block_tables.size() > 0) {  //if there are tables, get the offset
        stack_offset = block_tables.front().stack_offset;
    }
    Table_block_scope new_table(stack_offset);  //create new block table
    block_tables.push_front(new_table); //push it in front of other tables, so inner blocks are precedent to outer blocks
}

void variable_table::remove_block_table() {
    block_tables.front().empty_stack();     //first empty the stack, TODO maybe it's not suppose to update stack
    block_tables.pop_front();   //then pop the block table from vector
    if (block_tables.size())     //if there's still a table, reset the registers for it
        block_tables.front().reset_reg();
}

bool variable_table::is_var_exist(Var_Table_Entry& var, string id) {
    // new table is always inserted in the front of the vector, 
    // iterating from the head of the vector ensures the right ordering for searching
    for (auto it = block_tables.begin(); it != block_tables.end(); it++) {
        if (it->find_in_block_scope(var, id)) 
            return true;    //found the variable within this table
    }
    return false;   //didn't find the variable in any var table from the list
}

void variable_table::store() {
    block_tables.front().store_reg();
}

void variable_table::load() {
    block_tables.front().load_reg();
}

bool variable_table::find_var_in_block(string id) {
    Var_Table_Entry temp_var;
    return block_tables.front().find_in_block_scope(temp_var, id);
}




/**************************************************************************/
/*                       Functions Symbol Table                           */
/**************************************************************************/
/**************************************************************************/
/*                          FUNCTION ENTRY                                */
/**************************************************************************/




Function_Table_Entry::Function_Table_Entry(Type& ret_type, string& func_id, list<Arg_dcl>& func_args) :     // constructor
    def_line(-1) , ret_type(ret_type), func_id(func_id), func_args(func_args) {};

string Function_Table_Entry::get_func_def_place(int caller_line){
    if(def_line==-1){   //function not defined yet, add to caller_list for backpatch
        callers_list.push_back(caller_line);
    }
    return to_string(def_line); //returns the line where the function was defined, will be "-1" if not defined   
}

void Function_Table_Entry::define_and_backpatch(int func_def_line){
    def_line = func_def_line;   // update function definition line
    code_buffer.backpatch(callers_list, func_def_line);     //backpatch func_def address to all callers
}
 
bool Function_Table_Entry::is_matching(Type& other_ret_type, string& other_func_id, list<Arg_dcl>& other_func_args){
    if(ret_type != other_ret_type || func_id != other_func_id || func_args.size() != other_func_args.size())
        return false;       //checks if any of the function properties is different
    
    for(auto it_a = func_args.begin(), it_b = other_func_args.begin();it_a != func_args.end(); it_a++,it_b++){
        if(it_a->type != it_b->type) //different arg names allowed
            return false;
    }
    return true;
}


/**************************************************************************/
/*                           FUNCTION TABLE                               */
/**************************************************************************/

Function_Table_Entry* Function_Table::find_func_entry(string id){
    auto it = func_table_mp.find(id);  //map method
    if(it != func_table_mp.end()) //found the function entry
        return &(it->second);
    return NULL;
}

Function_Table_Entry* Function_Table::insert_func_entry(Type& ret_type, string& func_id, list<Arg_dcl>& func_args){
    Function_Table_Entry newEntry(ret_type, func_id, func_args);
    func_table_mp.insert( pair<string,Function_Table_Entry>(func_id, newEntry));
    auto it = func_table_mp.find(func_id);
    return &(it->second);
}

string Function_Table::unimplemented_funcs() {
    string str;
    for (auto const& funcIt : func_table_mp) {
        Function_Table_Entry func = funcIt.second;
        if (func.def_line == -1) {    //callers_list.size() != 0    this was the previous condition
            str += " ";
            str += func.func_id;
            for (int line : func.callers_list) {
                str += ",";
                str += to_string(line);
            }
        }
    }
    return str;
}

string Function_Table::implemented_funcs() {
    string str;
    for (auto const& funcIt : func_table_mp) {
        Function_Table_Entry func = funcIt.second;
        if (func.def_line != -1) {
            str += " ";
            str += func.func_id;
            str += ",";
            str += func.get_func_def_place(0);
        }
    }
    return str;
}



/**************************************************************************/
/*              Class for the buffer we emit the commands to              */
/**************************************************************************/

//Vec_buf::Vec_buf(){}    //constructor     TODO remove

int Vec_buf::nextquad(){
    return buffer.size() + 1;
}

void Vec_buf::backpatch(list<int> commitment_list, int line_number) {
    for (int commitment : commitment_list) {
        if (commitment < buffer.size()) {
            buffer[commitment - 1] += " " + to_string(line_number);
        }
    }
}

void Vec_buf::print_code(ofstream& output_file){
    for(string three_add_code : buffer)
        output_file << three_add_code << endl;
}

void Vec_buf::emit(string& str) {
    buffer.push_back(str);
}



/**************************************************************************/
/*                           Main of parser                               */
/**************************************************************************/
int main(int argc, char** argv)
{
    int rc;
    #if YYDEBUG
        yydebug=1;
    #endif
    
    extern FILE* yyin;
    // Open the input file, pass to bison 
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        operational_err("can't open input file");
    }

    rc = yyparse();
    if (rc == 0) { // Parsed successfully
        ofstream outFile;
        string outputName = argv[1];
        bool replaceName = replace(outputName, ".cmm", ".rsk");
        if (!replaceName) {
            operational_err("invalid file name. must end with .cmm");
        }
        outFile.open(outputName);
        //Print headers (for linker)
        outFile << "<header>" << endl;
        outFile << "<unimplemented>" << func_table.unimplemented_funcs() << endl;
        outFile << "<implemented>" << func_table.implemented_funcs() << endl;
        outFile << "</header>" << endl;
        //Print code
        for (string c : code_buffer.buffer) {
            outFile << c << endl;
        }
        outFile.close();
    }
    //delete root_node; TODO maybe uncomment this line
    return rc;
}

bool replace(string& str, const string& src, const string& dst) {
    size_t start_pos = str.find(src);
    if (start_pos == string::npos)
        return false;
    str.replace(start_pos, src.length(), dst);
    return true;
}