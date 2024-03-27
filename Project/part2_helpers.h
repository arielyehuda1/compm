/* 046266 Compilation Methods, EE Faculty, Technion                        */
/* part2_helpers.h - Helper functions for project part 2 - API definitions */

#ifndef COMMON_H
#define COMMON_H
#include <stdlib.h>
#include<vector>
#include<string>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct node {
    char * type;
    char * value;
    struct node *sibling;
    struct node *child;
} ParserNode;


struct boolean : node {
    std::vector<int> truelist;
    std::vector<int> falselist;
};

struct statement : node {
    std::vector<int> nextlist;
};

struct expression : node {
    std::string place; // Maybe it should be std::string? But then how we calculate? Maybe auto?
};

//Maybe structs and classes for booleans and arithmetic operations?

class Vec_buf {
private:
    std::vector<std::string> buffer;
public:
    int nextquad();
    void emit(std::string command);
    void backpatch(std::vector<int> commitment_list, int address);
    std::string newtemp(); //Need to be a function that returns either new memory place or names for id's.
};



#define YYSTYPE ParserNode* // changed yylval type to ParserNode*

ParserNode *makeNode(const char* type,const char* value, ParserNode *child);

ParserNode *concatList(ParserNode *listHead,ParserNode *newItem);

void dumpParseTree(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //COMMON_H
