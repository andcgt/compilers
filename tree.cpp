#include"tree.h"
#include"tools.h"


gramTree* create(string name, int num,...) {
    va_list valist;
    gramTree* head = new gramTree();
    head->left = NULL;
    head->right = NULL;
    head->content = "";
    gramTree* temp = NULL;
    head->name = name;
    //cout << endl << name << "   " << num << endl;
    va_start(valist,num);
    if(num == 0) {
        int line = va_arg(valist,int);
        head->line = line;
        if(head->name == "INTNUM") {
           int value;
           if(strlen(yytext) > 1 && yytext[0] == '0' && yytext[1] != 'x') {
               sscanf(yytext,"%o",&value);
           }
           else if(strlen(yytext) > 1 && yytext[1] == 'x'){
               sscanf(yytext,"%x",&value);
           }
           else value = atoi(yytext);
           head->content = inttostr(value);
        }
        else {
            head->content = yytext;
        }
    }
    else {
        temp = va_arg(valist,gramTree*);
        head->left = temp;
        head->line = temp->line;
        if(num == 1) {
            if(temp->content.size() > 0) {
                head->content = temp->content;
            }
            else head->content = "";
        }
        else {
            for(int i = 1; i < num; ++i ) {
                temp->right = va_arg(valist,gramTree*);
                temp = temp->right;
            }
        }
    }
    return head;
}

void printtree(gramTree *head,int leavel) {
		//printf("print\n");
    if(head!=NULL) {
        string Name = head->name;
        if(head->line!=-1) {
            for(int i=0;i<leavel;++i) {
                cout << ". ";
            }
           cout << head->name;
        
            if(head->name == "VAR"|| head->name == "INT") {
                cout << ":" << head->content;
            }
            else if(head->name == "INTNUM") {
                cout << ":" << head->content << " ";
            }
            else {
                cout << " <" << head->line << ">";
            }
            cout << endl;
        }
        printtree(head->left,leavel+1);
        printtree(head->right,leavel);
    }
}

void freeGramTree(gramTree* node) {
	if (node == NULL)
		return;
	freeGramTree(node->left);
	delete node;
	freeGramTree(node->right);
}
