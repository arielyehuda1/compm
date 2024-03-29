/* 046266 Compilation Methods, EE Faculty, Technion                        */
/* part3_helpers.c - Helper functions for project part 3 - implementation  */
#include <stdio.h>

#include "part3_helpers.h"

extern int yyparse (void);
extern Vec_buf code_buffer; //defined in parser


/**************************************************************************/
/*              Class for the buffer we emit the commands to              */
/**************************************************************************/

Vec_buf::Vec_buf(){}    //constructor

int Vec_buf::nextquad(){
    return buffer.size() + 1;
}

void Vec_buf::backpatch(vector<int> commitment_list, int line_number) {
    for (int commitment : commitment_list) {
        if (commitment < buffer.size()) {
            buffer[commitment] += " " + to_string(line_number); // Concatenating the jump address to the end of the string
        }
    }
}

void Vec_buf::print_code(ofstream& output_file){
    for(string three_add_code : buffer)
        output_file << three_add_code << endl;
}



/**************************************************************************/
/*                       Variables Symbol Table                           */
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

bool TypedVarScopeTable::type_block_scope_lookup(Var_Table_Entry& var, string id){
    // looks for the proper var in table, if found store in Var_Table_Entry
    auto it = vars_in_block.find(id);
    if(it != vars_in_block.end()){ // id is within the symbol table
        var.type = block_table_type;
        var.offset = it->second;
        return true;
    }
    return false;
}

void TypedVarScopeTable::reset_temp_reg(){
    next_temp_reg = temp_start_idx;
}

void TypedVarScopeTable::store_reg_update_stack(){
    int used_regs = next_temp_reg - temp_start_idx;
    string SP_reg = SP;
    if(used_regs > 0){
        if(block_table_type == float_){
            //Cast SP to a SP_F
            code_buffer.emit("CITOF",SP_F, SP_reg);
            SP_reg = SP_F;
        }
        //Store registers
        for (int i=0; i<used_regs; i++){
            code_buffer.emit(string("STOR")+type_rep + " " +  type_rep + to_string(temp_start_idx + i) + " " + SP_reg + " " + to_string(i * 4));
        }
        //Update SP
        code_buffer.emit(string("ADD2I ") + SP + " " + SP + " " + to_string(used_regs * 4));
    }
}

void TypedVarScopeTable::load_reg_update_stack(){
    int used_regs = next_temp_reg - temp_start_idx;
    if(used_regs > 0){
        //Update SP
        code_buffer.emit(string("SUBTI ") + SP + " " + SP + " " + to_string(used_regs * 4));
        string SP_reg = SP;
        if(block_table_type == float_){
            //Cast SP to a SP_F
            code_buffer.emit("CITOF",SP_F, SP);
            SP_reg = SP_F;
        }
        //Store registers
        for (int i=0; i<used_regs; i++){
            code_buffer.emit(string("LOAD")+type_rep + " " +  type_rep + to_string(temp_start_idx + i) + " " + SP_reg + " " + to_string(i * 4));
        }
    }
}
























/**************************************************************************/
/*                       Functions Symbol Table                           */
/**************************************************************************/
/**************************************************************************/
/*                       FUNCTION ENTRY                                   */
/**************************************************************************/
Function_Table_Entry::Function_Table_Entry(Type& ret_type, string& func_id, vector<Arg_dcl_data>& func_args) : 
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
 
bool Function_Table_Entry::is_matching(Type& other_ret_type, string& other_func_id, vector<Arg_dcl_data>& other_func_args){
    if(ret_type != other_ret_type || func_id != other_func_id || func_args.size() != other_func_args.size())
        return false;       //checks if any of the function properties is different
    
    for(auto it_a = func_args.begin(), it_b = other_func_args.begin();it_a != func_args.end(); it_a++,it_b++){
        if(it_a->type != it_b->type) //different arg names allowed
            return false;
    }
    return true;
}


/**************************************************************************/
/*                       FUNCTION TABLE                                   */
/**************************************************************************/
Function_Table_Entry* FunctionTable::find_func_entry(string id){
    auto it = Func_Table.find(id);  //map method
    if(it != Func_Table.end()) //found the function entry
        return &(it->second);
    return nullptr;
}

Function_Table_Entry* insert_func_entry(Type& ret_type, string& func_id, vector<Arg_dcl_data>& func_args){
    Function_Table_Entry newEntry(ret_type, func_id, func_args);
    Function_Table_Entry.insert( pair<string,Function_Table_Entry>(func_id, newEntry));
    auto it = Func_Table.find(func_id);
    return &(it->second);
}

// NEED TO ADD 2 METHODS FOR LINKER SUPPORT


/**************************************************************************/
/*                           Main of parser                               */
/**************************************************************************/
int main(void)
{
    int rc;
#if YYDEBUG
    yydebug=1;
#endif
    rc = yyparse();
    if (rc == 0) { // Parsed successfully
        dumpParseTree();
    }
    return rc;
}
