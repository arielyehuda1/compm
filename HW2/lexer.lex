%{
#include <stdio.h>
#include <string.h>
void showToken(char *);
void showError();
#include "part2_helpers.h"
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
int|float|void|write|read|optional|while|do|if|then|else|return	{
	// In case of reserved word
	yylval = makeNode(yytext,NULL,NULL);
	// switch case for all possiblities of yytext
	if(!strcmp(yytext,"int"))
		return INT;
	else if(!strcmp(yytext,"float"))
		return FLOAT;
	else if(!strcmp(yytext,"void"))
		return VOID;
	else if(!strcmp(yytext,"write"))
		return WRITE;
	else if(!strcmp(yytext,"read"))
		return READ;
	else if(!strcmp(yytext,"optional"))
		return OPTIONAL;
	else if(!strcmp(yytext,"while"))
		return WHILE;
	else if(!strcmp(yytext,"do"))
		return DO;
	else if(!strcmp(yytext,"if"))
		return IF;
	else if(!strcmp(yytext,"then"))
		return THEN;
	else if(!strcmp(yytext,"else"))
		return ELSE;
	else if(!strcmp(yytext,"return"))
		return RETURN;
	else // just for code completeness, won't run
		return 0;
}

{id}	{
	yylval = makeNode("id",yytext,NULL);
	return ID;
}

{integernum}		{
	yylval = makeNode("integernum",yytext,NULL);
	return INTEGERNUM;
}

{realnum}  {
	yylval = makeNode("realnum",yytext,NULL);
	return	REALNUM;
}


{str}	   {
	// may be problematic
	yytext[strlen(yytext)-1] = 0;
	yylval = makeNode("str",yytext+1,NULL);
	return	STR;
}


==|<>|<|<=|>|>=		{
	yylval = makeNode("relop",yytext,NULL);
	return	RELOP;
}


\+|\-		{
	yylval = makeNode("addop",yytext,NULL);
	return	ADDOP;
}


\*|\/		{
	yylval = makeNode("mulop",yytext,NULL);
	return	MULOP;
}

=			{
	yylval = makeNode("assign",yytext,NULL);
	return	ASSIGN;
}


&&			{
	yylval = makeNode("and",yytext,NULL);
	return	AND;
}

\|\|		{
	yylval = makeNode("or",yytext,NULL);
	return	OR;
}


!			{
	yylval = makeNode("not",yytext,NULL);
	return	NOT;
}

{symbols}	{
	yylval = makeNode(yytext,NULL,NULL);
	return	yytext[0];
}

[\n\r]							;
{whitespace}|					;			
{comment}						;			
.								showError();                           
%%

void showError()
{
	printf("\nLexical error: '%s' in line number %d\n", yytext, yylineno);
	exit(7);
}
