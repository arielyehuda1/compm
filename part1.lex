%{
#include <stdio.h>
#include <string.h>
void showToken(char *);
void showRes();
void showStr(char *name);
void showSymbol();
void newLine();
void showError();
%}

%option yylineno noyywrap


digit       ([0-9])
letter      ([a-zA-Z])
whitespace  ([\t ])
escaped	    ([\t\n\"])
symbols     ([\(\)\{\},;:])

%%
int|float|void|write|read|optional|while|do|if|then|else|return			showRes();
{letter}+(_|{digit}|{letter})*							showToken("id");
{digit}+                    							showToken("integernum");
{digit}+\.{digit}+             							showToken("realnum");
\"(?:\\\"|[^"\n])*\"								showStr("str");
[\n\r]+										newLine();
==|<>|<|<=|>|>=									showToken("relop");
\+|\-										showToken("addop");
\*|\/										showToken("mulop");
=										showToken("assign");
&&										showToken("and");
\|\|										showToken("or");
!										showToken("not");
{whitespace}|{symbols}								showSymbol();
#[^\n\r]*			;
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

void newLine()
{
	printf("%s", yytext);
}

void showError()
{
	printf("\nLexical error: '%s' in line number %d\n", yytext, yylineno);
	exit(7);
}
