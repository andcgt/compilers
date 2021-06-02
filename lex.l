%{
#include<cstdio>
#include<cstring>
#include<iostream>
#include"y.tab.h"
#include"parse.h"
using namespace std;
void comment();
void count(void);
int column=0;
%}

%option yylineno

digit			[0-9]
letter		[A-Za-z_]
letter1		[A-Za-z0-9_]
H					[a-fA-F0-9]

%%

"/*"					{comment();}
"//"[^\n]*		{}

"const"				{count();yylval.gramtree=create("CONST",0,yylineno);	return(CONST);}
"int"					{count();yylval.gramtree=create("INT",0,yylineno);		return(INT);}
"void"						{count();yylval.gramtree=create("VOID",0,yylineno);			return(VOID);}
"if"						{count();yylval.gramtree=create("IF",0,yylineno);			return(IF);}
"while"						{count();yylval.gramtree=create("WHILE",0,yylineno);			return(WHILE);}
"break"						{count();yylval.gramtree=create("BREAK",0,yylineno);			return(BREAK);}
"continue"						{count();yylval.gramtree=create("CONTINUE",0,yylineno);			return(CONTINUE);}
"return"						{count();yylval.gramtree=create("RETURN",0,yylineno);			return(RETURN);}


"("						{count();yylval.gramtree=create("(",0,yylineno);			return('(');}
")"						{count();yylval.gramtree=create(")",0,yylineno);			return(')');}
"{"						{count();yylval.gramtree=create("{",0,yylineno);			return('{');}
"}"						{count();yylval.gramtree=create("}",0,yylineno);			return('}');}
"["						{count();yylval.gramtree=create("[",0,yylineno);			return('[');}
"]"						{count();yylval.gramtree=create("]",0,yylineno);			return(']');}
"="						{count();yylval.gramtree=create("=",0,yylineno);			return('=');}
","						{count();yylval.gramtree=create(",",0,yylineno);			return(',');}
";"						{count();yylval.gramtree=create(";",0,yylineno);			return(';');}
"+"						{count();yylval.gramtree=create("+",0,yylineno);			return('+');}
"-"						{count();yylval.gramtree=create("-",0,yylineno);			return('-');}
"!"						{count();yylval.gramtree=create("!",0,yylineno);			return('!');}
"*"						{count();yylval.gramtree=create("*",0,yylineno);			return('*');}
"/"						{count();yylval.gramtree=create("/",0,yylineno);			return('/');}
"%"						{count();yylval.gramtree=create("%",0,yylineno);			return('%');}
"<"						{count();yylval.gramtree=create("<",0,yylineno);			return('<');}
">"						{count();yylval.gramtree=create(">",0,yylineno);			return('>');}

"<="						{count();yylval.gramtree=create("LE",0,yylineno);			return(LE);}
">="						{count();yylval.gramtree=create("GE",0,yylineno);			return(GE);}
"=="						{count();yylval.gramtree=create("EQ",0,yylineno);			return(EQ);}
"!="						{count();yylval.gramtree=create("NE",0,yylineno);			return(NE);}
"||"						{count();yylval.gramtree=create("OR",0,yylineno);			return(OR);}
"&&"						{count();yylval.gramtree=create("AND",0,yylineno);			return(AND);}

0[Xx]{H}			{count();yylval.gramtree=create("INTNUM",0,yylineno);			return(INTNUM);}
0[0-7]*				{count();yylval.gramtree=create("INTNUM",0,yylineno);			return(INTNUM);}
[1-9]{digit}*			{count();yylval.gramtree=create("INTNUM",0,yylineno);	return(INTNUM);}
{letter}{letter1}*	{count();yylval.gramtree=create("VAR",0,yylineno);			return(VAR);}
[\t\v\n\f ]		{ count();}

%%

int yywrap(){
	return 1;
}

void count(void)
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 4 - (column % 4);
		else
			column++;
	ECHO;
}

void comment(){
	char now,pre='0';
	while ((now=yyinput())!=0){
		if (now=='/' && pre=='*')
			return;
		pre=now;
	}
}
