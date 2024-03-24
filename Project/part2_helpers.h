/* 046266 Compilation Methods, EE Faculty, Technion                        */
/* part2_helpers.h - Helper functions for project part 2 - API definitions */

#ifndef COMMON_H
#define COMMON_H
#include <stdlib.h>
#include <string.h>

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
    vector<int> truelist;
    vector<int> falselist;
};

struct statement : node {
    vector<int> nextlist;
};

struct expression : node {
    auto place; // Maybe it should be std::string? But then how we calculate?
};

class Vec_buf {
private:
    vector<std::string> buffer;
public:
    int nextquad();
    void emit(std::string command);
    void backpatch(vector<int> commitment_list, int address);
};



#define YYSTYPE ParserNode* // changed yylval type to ParserNode*

ParserNode *makeNode(const char* type,const char* value, ParserNode *child);

ParserNode *concatList(ParserNode *listHead,ParserNode *newItem);

void dumpParseTree(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //COMMON_H
