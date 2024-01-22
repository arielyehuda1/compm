%{
#include <stdio.h>
#include <string.h>
void showToken(char *);
void showRes();
void showOp(char *name);
void showStr(char *name);
void newLine();
%}

%option yylineno noyywrap
%option   outfile="flex_example1.c" header-file="flex_example1.h"

digit       ([0-9])
letter      ([a-zA-Z])
whitespace  ([\t ])
escaped	    ([\t\n\"])


%%
\"([^\\\"\n\r])*\"										showStr("str");
int|float|void|write|read|optional|while|do|if|then|else|return			showRes();
{digit}+\.{digit}+             							showToken("realnum");
{digit}+                    							showToken("integernum");
{letter}+[_{digit}{letter}]*							showToken("id");
==|<>|<|<=|>|>=									showOp("relop");
\+|\-										showOp("addop");
\*|\/										showOp("mulop");
=										showOp("assign");
&&										showOp("and");
\|\|										showOp("or");
!										showOp("not");
{whitespace}		;
#.*\n			;
[\n\r]			newLine();
.                           printf("lex fails to recognize this (%s)!\n", yytext);
%%
void showRes()
{
	printf("<%s>", yytext);
}

void showToken(char *name)
{
	printf("<%s,%s>", name, yytext);
}

void showOp(char *name)
{
	printf("<%s,%s>", yytext, name);
}

void showStr(char *name)
{
	yytext[strlen(yytext)-1] = 0;
	printf("<%s,%s>", name, yytext+1);
}
void newLine()
{
	printf("%s", yytext);
}
