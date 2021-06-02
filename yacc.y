%{
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include "parse.h"
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

%type<gramtree> primary_exp LVal del FuncFParam FuncFParams
%type<gramtree> unary_exp unary_oper mult_exp FuncRParams
%type<gramtree> add_exp rel_exp eq_exp const_exp
%type<gramtree> and_exp or_exp const_init_list
%type<gramtree> decl init_del_list init_del
%type<gramtree> init init_list sta Block const_init
%type<gramtree> block_item_list block_item exp_sta if_sta 
%type<gramtree> iter_sta jump_sta ext_decl const_init_del
%type<gramtree> func_def tran_unit const_init_del_list
//%type<gramtree> Program

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%%

Program:
	tran_unit{
		//printf("unit\n");
		root=create("Program",1,$1);
	};

LVal:
	VAR{
		$$=create("LVal",1,$1);
	}
	|
	LVal '[' add_exp ']' {
		$$=create("LVal",4,$1,$2,$3,$4);
	}

primary_exp:
	LVal {
		//printf("LVal");
		$$=create("primary_exp",1,$1);
	}
	|
	INTNUM {
		//printf("test INTNUM\n");
		$$=create("primary_exp",1,$1);
	}
	|
	'(' add_exp ')' {
		$$=create("primary_exp",3,$1,$2,$3);
	};
	
FuncRParams:
	add_exp {
		$$=create("FuncRParams",1,$1);
	}	
	|
	FuncRParams ',' add_exp{
		$$=create("FuncRParams",3,$1,$2,$3);
	};
	
unary_exp:
	primary_exp{
		$$=create("unary_exp",1,$1);
	}
	|
	VAR '(' FuncRParams ')'{
		$$=create("unary_exp",4,$1,$2,$3,$4);
	}
	|
	VAR '(' ')' {
		$$=create("unary_exp",3,$1,$2,$3);
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

decl:
		INT init_del_list ';' {
			$$=create("decl",3,$1,$2,$3);
		}
		|
		CONST INT const_init_del_list ';' {
			$$=create("decl",4,$1,$2,$3,$4);
		};
	
const_init_del_list:	
	const_init_del{
		$$=create("const_init_del",1,$1);
	}
	|
	const_init_del_list ',' const_init_del {
		$$=create("const_init_del_list",3,$1,$2,$3);
	};
	
const_init_del:
	del '=' const_init {
		$$=create("const_init_del",3,$1,$2,$3);
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
	del '[' const_exp ']' {
		$$=create("del",4,$1,$2,$3,$4);
	}
	|
	del '[' ']' {
		$$=create("del",3,$1,$2,$3);
	};
	
const_exp:
	add_exp {
		$$=create("const_exp",1,$1);
	};

FuncFParams:
	FuncFParam {
		$$=create("FuncFParams",1,$1);
	}
	|
	FuncFParams ',' FuncFParam{
		$$=create("FuncFParams",3,$1,$2,$3);
	};
	
FuncFParam:
	INT del{
		$$=create("FuncFParam",2,$1,$2);
	};

init:
	add_exp{
		$$=create("init",1,$1);
	}	
	|
	'{' init_list '}'{
		$$=create("init",3,$1,$2,$3);
	};
	
const_init:
	const_exp{
		$$=create("const_init",1,$1);
	}
	|
	'{' const_init_list '}' {
		$$=create("const_init",3,$1,$2,$3);
	};
	
init_list:
	init{
		$$=create("init_list",1,$1);
	}
	|
	init_list ',' init{
		$$=create("init_list",3,$1,$2,$3);
	};
	
const_init_list:
	const_init{
		$$=create("const_init_list",1,$1);
	}
	|
	const_init_list ',' const_init{
		$$=create("const_init_list",3,$1,$2,$3);
	};

sta:
	Block{
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
	
Block:
	'{' '}'{
		$$=create("Block",2,$1,$2);
	}
	|
	'{' block_item_list '}' {
		$$=create("Block",3,$1,$2,$3);
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
	LVal '=' add_exp ';'{
		$$=create("exp_sta",4,$1,$2,$3,$4);
	}
	|
	';' {
		$$=create("exp_sta",1,$1);
	}
	|
	VOID VAR '(' ')' ';'{
		$$=create("exp_sta",5,$1,$2,$3,$4,$5);
	}
	|
	VOID VAR '(' FuncRParams ')' ';'{
		$$=create("exp_sta",6,$1,$2,$3,$4,$5,$6);
	};
	
if_sta:
	IF '(' or_exp ')' sta %prec LOWER_THAN_ELSE{
		$$=create("if_sta",5,$1,$2,$3,$4,$5);
	}
	|
	IF '(' or_exp ')' sta ELSE sta{
		$$=create("if_sta",7,$1,$2,$3,$4,$5,$6,$7);
	};

iter_sta:
	WHILE '(' or_exp ')' sta{
		$$=create("iter_statemenr",5,$1,$2,$3,$4,$5);
	};
	
jump_sta:
	RETURN ';'{
		$$=create("jump_sta",2,$1,$2);
	}
	|
	RETURN add_exp ';'{
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
	INT VAR '(' FuncFParams ')' Block{
		$$=create("func_def",6,$1,$2,$3,$4,$5,$6);
	}
	|
	INT VAR '(' ')' Block{
		//printf("func test\n");
		$$=create("func_def",5,$1,$2,$3,$4,$5);
	}
	|
	VOID VAR '(' FuncFParams ')' Block{
		$$=create("func_def",6,$1,$2,$3,$4,$5,$6);
	}
	|
	VOID VAR '(' ')' Block{
		//printf("func test\n");
		$$=create("func_def",5,$1,$2,$3,$4,$5);
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
	//printtree(root,0);
	parse_unit(root->left);
	//printf("test ok!\n");
	
	printCode();
	fclose(yyin);
}


