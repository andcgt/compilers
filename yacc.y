%{
#include "tree.h"
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

extern char *yytext;
extern FILE *yyin;
extern int column;
gramTree *root;
extern int yylineno;

int yylex(void);
void yyerror(const char*);

%}

%union{
	struct gramTree* gramtree;
}

%token<gramtree> CONST INT VOID IF WHILE BREAK CONTINUE RETURN ELSE
%token<gramtree> '(' ')' '[' ']' '{' '}' '=' ',' ';' 
%token<gramtree> '+' '-' '!' '*' '/' '%' '<' '>'
%token<gramtree> LE GE EQ NE OR AND INTNUM VAR

%type<gramtree> primary_exp postfix_exp arg_exp_list
%type<gramtree> unary_exp unary_oper mult_exp
%type<gramtree> add_exp rel_exp eq_exp
%type<gramtree> and_exp or_exp ass_exp exp
%type<gramtree> typ decl init_del_list init_del
%type<gramtree> del param_list param_decl idt_list
%type<gramtree> init init_list sta more_sta
%type<gramtree> block_item_list block_item exp_sta if_sta 
%type<gramtree> iter_sta jump_sta ext_decl 
%type<gramtree> func_def decl_list tran_unit
//%type<gramtree> Program

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%%

Program:
	tran_unit{
		//printf("unit\n");
		root=create("Program",1,$1);
	};

primary_exp:
	VAR {
		printf("primary");
		$$=create("primary_exp",1,$1);
	}
	|
	INTNUM {
		//printf("test INTNUM\n");
		$$=create("primary_exp",1,$1);
	}
	|
	'(' exp ')' {
		$$=create("primary_exp",3,$1,$2,$3);
	};
	
postfix_exp:
	primary_exp{
		$$=create("postfix_exp",1,$1);
	}
	|
	postfix_exp '[' exp ']' {
		$$=create("postfix_exp",4,$1,$2,$3,$4);
	}
	|
	postfix_exp '(' ')'{
		$$=create("postfix_exp",3,$1,$2,$3);
	}
	|
	postfix_exp '(' arg_exp_list ')' {
		$$=create("postfix_exp",4,$1,$2,$3,$4);
	};

arg_exp_list:
	ass_exp{
		$$=create("arg_exp_list",1,$1);
	}
	|
	arg_exp_list ',' ass_exp {
		$$=create("arg_exp_list",3,$1,$2,$3);
	};

unary_exp:
	postfix_exp{
		$$=create("unary_exp",1,$1);
	}
	|
	unary_oper unary_exp{
		$$=create("unary_exp",2,$1,$2);
	};

unary_oper:
	'+' {
		$$=create("unary_oper",1,$1);
	}
	|
	'-' {
		$$=create("unary_oper",1,$1);
	}
	|
	'!' {
		$$=create("unary_oper",1,$1);
	};

mult_exp:
	unary_exp{
		$$=create("mult_exp",1,$1);
	}
	|
	mult_exp '*' unary_exp{
		$$=create("mult_exp",3,$1,$2,$3);
	}
	|
	mult_exp '%' unary_exp{
		$$=create("mult_exp",3,$1,$2,$3);
	}
	|
	mult_exp '/' unary_exp{
		$$=create("mult_exp",3,$1,$2,$3);
	};
	
add_exp:
	mult_exp {
		$$=create("add_exp",1,$1);
	}
	|
	add_exp '+' mult_exp{
		$$=create("add_exp",3,$1,$2,$3);
	}
	|
	add_exp '-' mult_exp{
		$$=create("add_exp",3,$1,$2,$3);
	}
	;
	
rel_exp:
	add_exp {
		$$=create("rel_exp",1,$1);
	}
	|
	rel_exp '<' add_exp{
		$$=create("rel_exp",3,$1,$2,$3);
	}
	|
	rel_exp '>' add_exp{
		$$=create("rel_exp",3,$1,$2,$3);
	}
	|
	rel_exp LE add_exp{
		$$=create("rel_exp",3,$1,$2,$3);
	}
	|
	rel_exp GE add_exp{
		$$=create("rel_exp",3,$1,$2,$3);
	};

eq_exp:
	rel_exp{
		$$=create("eq_exp",1,$1);
	}
	|
	eq_exp EQ rel_exp{
		$$=create("eq_exp",3,$1,$2,$3);
	}
	|
	eq_exp NE rel_exp{
		$$=create("eq_exp",3,$1,$2,$3);
	};
	
and_exp:
	eq_exp{
		$$=create("and_exp",1,$1);
	}
	|
	and_exp AND eq_exp{
		$$=create("and_exp",3,$1,$2,$3);
	};
	
or_exp:
	and_exp{
		$$=create("or_exp",1,$1);
	}
	|
	or_exp OR and_exp{
		$$=create("or_exp",3,$1,$2,$3);
	};
	
ass_exp:
	or_exp{
		//printf("or test\n");
		$$=create("ass_exp",1,$1);
	}
	|
	unary_exp '=' ass_exp{
		$$=create("ass_exp",3,$1,$2,$3);
	};
	
exp:
	ass_exp{
		$$=create("exp",1,$1);
	}
	|
	exp ',' ass_exp{
		$$=create("exp",3,$1,$2,$3);
	};

typ:
	VOID {
		$$=create("typ",1,$1);
	}
	|
	INT{
		//printf("INT test\n");
		$$=create("typ",1,$1);
	};
	
decl:
		typ init_del_list ';' {
			$$=create("decl",3,$1,$2,$3);
		}
		|
		CONST typ init_del_list ';' {
			$$=create("decl",4,$1,$2,$3,$4);
		};
	
init_del_list:
	init_del{
		$$=create("init_del",1,$1);
	}
	|
	init_del_list ',' init_del {
		$$=create("init_del_list",3,$1,$2,$3);
	};

init_del:
	del{
		$$=create("init_del",1,$1);
	}
	|
	del '=' init {
		//printf("test int b=1??\n");
		$$=create("init_del",3,$1,$2,$3);
	};

del:
	VAR{
		//printf("test var\n");
		$$=create("del",1,$1);
	}
	|
	'(' del ')' {
		$$=create("del",3,$1,$2,$3);
	}
	|
	del '[' ass_exp ']' {
		$$=create("del",4,$1,$2,$3,$4);
	}
	|
	del '[' ']' {
		$$=create("del",3,$1,$2,$3);
	}
	|
	del '(' param_list ')' {
		$$=create("del",4,$1,$2,$3,$4);
	}
	|
	del '(' idt_list ')' {
		$$=create("del",4,$1,$2,$3,$4);
	}
	|
	del '(' ')'{
		//printf("() test");
		$$=create("del",3,$1,$2,$3);
	};
	
param_list:
	param_decl {
		$$=create("param_list",1,$1);
	}
	|
	param_list ',' param_decl{
		$$=create("param_list",3,$1,$2,$3);
	};
	
param_decl:
	INT del{
		$$=create("param_decl",2,$1,$2);
	};
	
idt_list:
	VAR{
		$$=create("idt_list",1,$1);
	}
	|
	idt_list ',' VAR{
		$$=create("idt_list",3,$1,$2,$3);
	};
	
init:
	ass_exp{
		$$=create("initalizer",1,$1);
	}	
	|
	'{' init_list '}'{
		$$=create("init",3,$1,$2,$3);
	};
	
init_list:
	init{
		$$=create("init_list",1,$1);
	}
	|
	init_list ',' init{
		$$=create("init_list",3,$1,$2,$3);
	};
	
sta:
	more_sta{
		$$=create("sta",1,$1);
	}
	|
	exp_sta{
		$$=create("sta",1,$1);
	}
	|
	if_sta{
		$$=create("sta",1,$1);
	}
	|
	iter_sta{
		$$=create("sta",1,$1);
	}
	|
	jump_sta{
		$$=create("sta",1,$1);
	};
	
more_sta:
	'{' '}'{
		$$=create("more_sta",2,$1,$2);
	}
	|
	'{' block_item_list '}' {
		$$=create("more_sta",3,$1,$2,$3);
	};

block_item_list:
	block_item{
		$$=create("block_item_list",1,$1);
	}
	|
	block_item_list block_item{
		$$=create("block_item_list",2,$1,$2);
	};
	
block_item:
	decl{
		$$=create("block_item",1,$1);
	}
	|
	sta{
		$$=create("block_item",1,$1);
	};

exp_sta:
	exp ';'{
		$$=create("exp_sta",2,$1,$2);
	};
	
if_sta:
	IF '(' exp ')' sta %prec LOWER_THAN_ELSE{
		$$=create("if_sta",5,$1,$2,$3,$4,$5);
	}
	|
	IF '(' exp ')' sta ELSE sta{
		$$=create("if_sta",7,$1,$2,$3,$4,$5,$6,$7);
	};

iter_sta:
	WHILE '(' exp ')' sta{
		$$=create("iter_statemenr",5,$1,$2,$3,$4,$5);
	};
	
jump_sta:
	RETURN ';'{
		$$=create("jump_sta",2,$1,$2);
	}
	|
	RETURN exp ';'{
		$$=create("jump_sta",3,$1,$2,$3);
	}
	|
	CONTINUE ';'{
		$$=create("jump_sta",2,$1,$2);
	}
	|
	BREAK ';' {
		$$=create("jump_sta",2,$1,$2);
	}
	
tran_unit:
	ext_decl{
		$$=create("tran_unit",1,$1);
	}
	|
	tran_unit ext_decl{
		$$=create("tran_unit",2,$1,$2);
	};
	
ext_decl:
	func_def{
		$$=create("ext_decl",1,$1);
	}
	|
	decl{
		$$=create("ext_decl",1,$1);
	};

func_def:
	typ del decl_list more_sta{
		$$=create("func_def",4,$1,$2,$3,$4);
	}
	|
	typ del more_sta{
		//printf("func test\n");
		$$=create("func_def",3,$1,$2,$3);
	};
	
decl_list:
	decl{
		$$=create("decl_list",1,$1);
	}
	|
	decl_list decl{
		$$=create("decl_list",2,$1,$2);
	};

	
%%

void yyerror(const char *s){
	printf("??? %d\n",yylineno);
	printf("??? %s\n",yytext);
	//printf("??? \n%*s\n%*s\n", column, "^", column, s);
}

int main(int argc,char *argv[]){
	//printf("ok!\n");
	yyin = fopen(argv[1],"r");
	//printf("ok1\n");
	yyparse();
	//printf("ok2\n");
	printtree(root,0);
	freeGramTree(root);

	fclose(yyin);
}


