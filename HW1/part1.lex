%{
#include <stdio.h>
#include <string.h>
void showToken(char *);
void showRes();
void showStr(char *name);
void showSymbol();
void showError();
%}

%option yylineno noyywrap


digit       ([0-9])
letter      ([a-zA-Z])
whitespace  ([\t ])
escaped	    ([tn"])
symbols     ([\(\)\{\},;:])

id		({letter}+(_|{digit}|{letter})*)
integernum	({digit}+)
realnum		({digit}+\.{digit}+)
str		(\"(?:\\{escaped}|[^\\\"\n\r])*\")
comment		(#[^\n\r]*)

%%
int|float|void|write|read|optional|while|do|if|then|else|return			showRes();
{id}										showToken("id");
{integernum}                    						showToken("integernum");
{realnum}             								showToken("realnum");
{str}										showStr("str");
[\n\r]										showSymbol();
==|<>|<|<=|>|>=									showToken("relop");
\+|\-										showToken("addop");
\*|\/										showToken("mulop");
=										showToken("assign");
&&										showToken("and");
\|\|										showToken("or");
!										showToken("not");
{whitespace}|{symbols}								showSymbol();
{comment}									;
.										showError();                           
%%
void showRes()
{
	printf("<%s>", yytext);
}

void showToken(char *name)
{
	printf("<%s,%s>", name, yytext);
}

void showStr(char *name)
{
	yytext[strlen(yytext)-1] = 0;
	printf("<%s,%s>", name, yytext+1);
}

void showSymbol()
{
	printf("%s", yytext);
}

void showError()
{
	printf("\nLexical error: '%s' in line number %d\n", yytext, yylineno);
	exit(7);
}
