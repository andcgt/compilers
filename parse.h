#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include<cstdarg>
using namespace std;

extern char *yytext;
extern int yylineno;
using namespace std;


struct gramTree {
    string content;
    string name;
    int line;
    struct gramTree *left;
    struct gramTree *right;
};

extern struct gramTree *root;

struct var_node{
	string name;
	string type;
	int isconst=0;
	int val=0;
	int num=-1;
};

struct array_node{
	string name;
	int len=0;
	int isconst=0;//0 no 1 yes
	int sum=0;
	vector<var_node>arraysize;
	vector<var_node> a;
	int num=-1;
};

struct func_node{
	string name;
	string type;
};

struct Block{
	bool isfunc=false;
	map<string,struct var_node> varMap;
	map<string,struct array_node> arrayMap;
	//map<string,string> paramap;
	string break_name;
	string continue_name;
	bool iswhile=false;
};

struct gramTree* create(string name, int num,...);
void printtree(struct gramTree *head,int leavel);
string inttostr(int n);
int strtoint(string s);
void addCode(string str);
void addvarCode(string str);
void printCode();
void parse_unit(struct gramTree* node);
void parse_Block(struct gramTree* node);
void parse_block_item_list(struct gramTree* node);
void parse_block_item(struct gramTree* node);
void parse_sta(struct gramTree* node);
void FuncRParams(struct gramTree* node);
void parse_exp_sta(struct gramTree* node);
void parse_if_sta(struct gramTree* node);
void parse_iter_sta(struct gramTree* node);
void parse_jump_sta(struct gramTree* node);
var_node parse_or_exp(struct gramTree* node);
var_node parse_and_exp(struct gramTree* node);
var_node parse_eq_exp(struct gramTree* node);
var_node parse_rel_exp(struct gramTree* node);
void parse_ext_decl(struct gramTree* node);
void FuncFParams(struct gramTree* node);
void FuncFParam(struct gramTree* node);
void parse_func_def(struct gramTree* node);
void parse_decl(struct gramTree* node);
void parse_const_init_del_list(struct gramTree* node);
void dfs_const(struct gramTree* node);
void parse_const_init_del(struct gramTree* node);
int parse_const_exp(struct gramTree* node);
int parse_const_add_exp(struct gramTree* node);
int parse_const_mult_exp(struct gramTree* node);
int parse_const_unary_exp(struct gramTree* node);
int parse_const_primary_exp(struct gramTree* node);
int parse_const_LVal(struct gramTree* node);
void parse_init_del_list(struct gramTree* node);
void dfs(struct gramTree* node);
var_node parse_add_exp(struct gramTree* node);
var_node parse_mult_exp(struct gramTree* node);
var_node parse_unary_exp(struct gramTree* node);
var_node parse_primary_exp(struct gramTree* node);
var_node parse_LVal(struct gramTree* node);
void parse_init_del(struct gramTree* node);
var_node create_le();
var_node create_ri();
var_node create_const(int x);
var_node blockFindVar(string name);
array_node blockFindArray(string name);
