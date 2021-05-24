#ifndef _TREE_H_

#define _TREE_H_

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdarg>
#include<iostream>
#include<string>
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

struct gramTree* create(string name, int num,...);
void printtree(struct gramTree *head,int leavel);
void freeGramTree(gramTree* node);

#endif
