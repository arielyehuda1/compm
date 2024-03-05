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
	yylval = makeToken(yytext,NULL);
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
	yylval = makeToken("id",yytext);
	return ID;
}

{integernum}		{
	yylval = makeToken("integernum",yytext);
	return INTEGERNUM;
}

{realnum}  {
	yylval = makeToken("realnum",yytext);
	return	REALNUM;
}


{str}	   {
	// may be problematic
	yytext[strlen(yytext)-1] = 0;
	yylval = makeToken("str",yytext+1);
	return	STR;
}


==|<>|<|<=|>|>=		{
	yylval = makeToken("relop",yytext);
	return	RELOP;
}


\+|\-		{
	yylval = makeToken("addop",yytext);
	return	ADDOP;
}


\*|\/		{
	yylval = makeToken("mulop",yytext);
	return	MULOP;
}

=			{
	yylval = makeToken("assign",yytext);
	return	ASSIGN;
}


&&			{
	yylval = makeToken("and",yytext);
	return	AND;
}

\|\|		{
	yylval = makeToken("or",yytext);
	return	OR;
}


!			{
	yylval = makeToken("not",yytext);
	return	NOT;
}

{symbols}	{
	yylval = makeToken(yytext,NULL);
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
