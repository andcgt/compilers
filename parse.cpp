#include "parse.h"

vector<string> codeList;
vector<string> varList;
vector<string> funcList[100];
int temp_Num = -1;
int label_Num = -1;
vector<Block> blockstack;
vector<var_node> q;
int count_param;
int global=0;
int nowadd=0;
int now_func=-1;
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
           //cout << yytext << " yytext " << endl;
           if(strlen(yytext) > 1 && yytext[0] == '0' && (yytext[1] != 'x' && yytext[1]!='X')) {
               sscanf(yytext,"%o",&value);
           }
           else if(strlen(yytext) > 1 && (yytext[1] == 'x' || yytext[1]=='X')){
               sscanf(yytext,"%x",&value);
           }
           else value = atoi(yytext);
           //cout << value << " value " << endl;
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


string inttostr(int n) {
	char buf[10];
	sprintf(buf, "%d", n);
	string b = buf;
	return b;
}

int strtoint(string s) {
	int n;
	n = atoi(s.c_str());
	return n;
}

void addCode(string str) {
	codeList.push_back(str);
	//cout << str << endl;
}

void addvarCode(string str){
	if (nowadd>0){
		codeList.insert(codeList.begin()+nowadd,str);
	}else varList.push_back(str);
}

void printCode() {
	for (int i=0;i<varList.size();i++){
		cout << varList[i] << endl;
	}
	for (int i=0;i<codeList.size();i++){
		cout << codeList[i] << endl;
	}
}

void addblock(){
	Block newblock;
	blockstack.push_back(newblock);
}

void parse_unit(struct gramTree* node){
	struct gramTree* next=node->left;
	//cout << next->name << endl;
	if (next->name=="tran_unit"){
		parse_unit(next);
		parse_ext_decl(next->right);
	} else parse_ext_decl(next);
	//cout << " OK test" << endl;
}

void parse_Block(struct gramTree* node){
	struct gramTree* next=node->left;
	//cout << "parse_block OK" << endl;
	//cout << next->right->name << endl;
	if (next->right->name=="block_item_list"){
		parse_block_item_list(next->right);
	}
	//cout << " OK test" << endl;
}

void parse_block_item_list(struct gramTree* node){
	//cout << node->left->name << "test block" << endl;
	if (node->left->name=="block_item_list"){
		parse_block_item_list(node->left);
		parse_block_item(node->left->right);
	}else parse_block_item(node->left);
}

void parse_block_item(struct gramTree* node){
	//cout << node->left->name << endl;
	if (node->left->name=="decl"){
		parse_decl(node->left);
	}else{
		Block newblock;
		blockstack.push_back(newblock);
		parse_sta(node->left);
		blockstack.pop_back();
	}
}

void parse_sta(struct gramTree* node){
	struct gramTree* next=node->left;
	//cout << node->left->name << endl;
	
	if (next->name=="Block"){
		parse_Block(next);
	}else if (next->name=="exp_sta"){
		parse_exp_sta(next);
	}else if (next->name=="if_sta"){
		parse_if_sta(next);
	}else if (next->name=="iter_sta"){
		parse_iter_sta(next);
	}else if (next->name=="jump_sta"){
		parse_jump_sta(next);
	}
}

void FuncRParams(struct gramTree* node){
	struct gramTree* next=node->left;
	if (next->name=="FuncRParams"){
		FuncRParams(next);
		next=next->right->right;
	}
	funcList[now_func].push_back("param "+parse_add_exp(next).name);
	//addCode("param "+parse_add_exp(next).name);
}

void parse_exp_sta(struct gramTree* node){
	//cout << "exp_sta" << endl;
	struct gramTree* next=node->left;
	if (next->name=="LVal"){
		var_node node1=parse_LVal(next);
		var_node node2=parse_add_exp(next->right->right);
		addCode(node1.name+" = "+node2.name);
	}else if (next->name=="add_exp"){
		parse_add_exp(next);
	}else{
		//cout << "test exp sta " << next->right->right->name << endl;
		now_func++;
		if (next->right->right->name=="FuncRParams"){
			FuncRParams(next->right->right);
		}
		for (int i=0;i<funcList[now_func].size();i++)
			addCode(funcList[now_func][i]);
		funcList[now_func].clear();
		now_func--;
		//cout << "test exp sta 1" << endl;
		addCode("call f_"+next->content);
	}
}

void parse_if_sta(struct gramTree* node){
	//cout << "if_sta" << endl;
	if (node->left->right->right->right->right->right==NULL){
		//cout << "if if "<<endl;
		Block newblock;
		blockstack.push_back(newblock);
		var_node node1=parse_or_exp(node->left->right->right);
		string l1="l"+inttostr(++label_Num);
		string l2="l"+inttostr(++label_Num);
		addCode("if "+node1.name+" == 0 goto "+l1);
		//cout << l1 << endl;
		addCode(l2+":");
		parse_sta(node->left->right->right->right->right);
		addCode(l1+":");
		blockstack.pop_back();
	}else{
		Block newblock;
		blockstack.push_back(newblock);
		var_node node1=parse_or_exp(node->left->right->right);
		string l1="l"+inttostr(++label_Num);
		string l2="l"+inttostr(++label_Num);
		string l3="l"+inttostr(++label_Num);
		addCode("if "+node1.name+" == 0 goto "+l1);
		addCode(l2+":");
		parse_sta(node->left->right->right->right->right);
		addCode("goto "+l3);
		addCode(l1+":");
		parse_sta(node->left->right->right->right->right->right->right);
		addCode(l3+":");
		blockstack.pop_back();
	}
}

void parse_iter_sta(struct gramTree* node){
	Block newblock;
	string l1="l"+inttostr(++label_Num);
	string l2="l"+inttostr(++label_Num);
	newblock.iswhile=true;
	newblock.continue_name=l1;
	newblock.break_name=l2;
	blockstack.push_back(newblock);
	//cout << "continue "<<l1<<endl;
	//cout << "break "<<l2<<endl;
	addCode(l1+":");
	var_node node1=parse_or_exp(node->left->right->right);
	addCode("if "+node1.name+" == 0 goto "+l2);
	parse_sta(node->left->right->right->right->right);
	addCode("goto "+l1);
	addCode(l2+":");
	blockstack.pop_back();
}

void parse_jump_sta(struct gramTree* node){
	struct gramTree* next=node->left;
	//cout << next->name << endl;
	if (next->name=="RETURN"){
		//cout << next->right->name << endl;
		if (next->right->name==";"){
			addCode("return");
		}else{
			var_node node1=parse_add_exp(next->right);
			addCode("return "+node1.name);
		}
	}else if (next->name=="CONTINUE"){
		for (int i=blockstack.size()-1;i>=0;i--){
			if (blockstack[i].iswhile==true){
				addCode("goto "+blockstack[i].continue_name);
				return;
			}
		}
	}else if (next->name=="BREAK"){
		//cout << "BREAK TEST " << endl;
		for (int i=blockstack.size()-1;i>=0;i--){
			if (blockstack[i].iswhile==true){
				addCode("goto "+blockstack[i].break_name);
				//cout << "break name " << blockstack[i].break_name << endl;
				return;
			}
		}
	}
	//cout << "OK jump" << endl;
}

var_node parse_or_exp(struct gramTree* node){
	struct gramTree* next=node->left;
	if (next->name=="and_exp"){
		return parse_and_exp(next);
	}else {
		var_node node3;
		temp_Num++;
		node3.name="T"+inttostr(temp_Num);
		addvarCode("var "+node3.name);
		addCode(node3.name+" = 0");
		string l1="l"+inttostr(++label_Num);
		string l2="l"+inttostr(++label_Num);
		node3.type="BOOL";
		var_node node1=parse_or_exp(next);
		addCode("if "+node1.name+"== 1 goto "+l1);
		var_node node2=parse_and_exp(next->right->right);
		addCode("if "+node2.name+"== 1 goto "+l1);
		addCode("goto "+l2);
		addCode(l1+":");
		addCode(node3.name+" = 1");
		addCode(l2+":");
		return node3;
	}
}

var_node parse_and_exp(struct gramTree* node){
	//cout <<"and_exp"<<endl;
	struct gramTree* next=node->left;
	if (next->name=="eq_exp"){
		return parse_eq_exp(next);
	}else {
		var_node node3;
		temp_Num++;
		node3.name="T"+inttostr(temp_Num);
		addvarCode("var "+node3.name);
		addCode(node3.name+" = 1");
		string l1="l"+inttostr(++label_Num);
		string l2="l"+inttostr(++label_Num);
		node3.type="BOOL";
		var_node node1=parse_and_exp(next);
		addCode("if "+node1.name+"== 0 goto "+l1);
		var_node node2=parse_eq_exp(next->right->right);
		addCode("if "+node2.name+"== 0 goto "+l1);
		addCode("goto "+l2);
		addCode(l1+":");
		addCode(node3.name+" = 0");
		addCode(l2+":");
		blockstack.back().varMap.insert({node3.name,node3});
		return node3;
	}
}

var_node parse_eq_exp(struct gramTree* node){
	struct gramTree* next=node->left;
	//cout << "eq_exp" << endl;
	if (next->name=="rel_exp"){
		return parse_rel_exp(next);
	}else {
		var_node node1=parse_eq_exp(next);
		var_node node2=parse_rel_exp(next->right->right);
		var_node node3;
		temp_Num++;
		node3.name="T"+inttostr(temp_Num);
		addvarCode("var "+node3.name);
		node3.type="BOOL";
		string op;
		if (next->right->name=="EQ") op="==";
			else op="!=";
		blockstack.back().varMap.insert({node3.name,node3});
		addCode(node3.name+" = "+node1.name+" "+op+" "+node2.name);
		return node3;
	}
}

var_node parse_rel_exp(struct gramTree* node){
	//cout << "rel_exp"<< endl;
	struct gramTree* next=node->left;
	if (next->name=="add_exp"){
		return parse_add_exp(next);
	}else {
		//cout <<"rel_exp" << endl;
		var_node node1=parse_rel_exp(next);
		var_node node2=parse_add_exp(next->right->right);
		var_node node3;
		temp_Num++;
		node3.name="T"+inttostr(temp_Num);
		addvarCode("var "+node3.name);
		node3.type="BOOL";
		string op;
		//cout << next->right->name << "???" << endl;
		if (next->right->name=="<") op="<";
			else if (next->right->name==">") op=">";
				else if (next->right->name=="LE") op="<=";
					else op=">=";
		blockstack.back().varMap.insert({node3.name,node3});
		addCode(node3.name+" = "+node1.name+" "+op+" "+node2.name);
		return node3;
	}
}

void parse_ext_decl(struct gramTree* node){
	struct gramTree* next=node->left;
	if (next->name=="decl"){
		parse_decl(next);
	}else{
		//cout << "ok func_def" << endl;
		parse_func_def(next);	
	}
}

void FuncFParams(struct gramTree* node){
	//cout << node->left->name << endl;
	if (node->left->name=="FuncFParam"){
		FuncFParam(node->left->left->right);
	}else{
		FuncFParams(node->left);
		FuncFParam(node->left->right->right->left->right);
	}
}

void FuncFParam(struct gramTree* node){
	struct gramTree* next=node->left;
	//cout << next->name << endl;
	if (next->name=="VAR"){
		string var=next->content;
		var_node node1;
		temp_Num++;
		node1.type="INT";
		node1.name="p"+inttostr(count_param);
		//addvarCode("var "+node1.name);
		count_param++;
		blockstack.back().varMap.insert({var,node1});
	}else {
		array_node arr;
		struct gramTree* now=next;
		arr.sum=1;
		while (now->name!="VAR"){
			int x;
			if (now->right->right->name=="const_exp"){
				x=parse_const_exp(now->right->right);
			}else x=0;
			arr.arraysize.push_back(create_const(x));
			arr.sum=arr.sum*x;
			arr.len++;
			now=now->left;
		}
		//cout << "arr.sum  "<<arr.sum << endl;
		reverse(arr.arraysize.begin(),arr.arraysize.end());
		arr.name="p"+inttostr(count_param);
		count_param++;
		for (int i=0;i<arr.sum;i++)
			arr.a.push_back(create_const(0));
		blockstack.back().arrayMap.insert({now->content,arr});
	}
}

void parse_func_def(struct gramTree* node){
	//cout << "func_def" << endl;
	global=1;
	struct gramTree* next=node->left;
	Block funcblock;
	funcblock.isfunc=true;
	blockstack.push_back(funcblock);
	func_node fn;
	fn.name=next->right->content;
	fn.type=next->name;
	count_param=0;
	//cout << next->right->right->right->name << endl;
	if (next->right->right->right->name=="FuncFParams"){
		FuncFParams(next->right->right->right);
	}
	addCode("f_"+fn.name+" ["+inttostr(count_param)+"]");
	nowadd=codeList.size();
	//cout << "func_del OK" << endl;
	if (next->right->right->right->name=="FuncFParams"){
		parse_Block(next->right->right->right->right->right);
	}else{
		parse_Block(next->right->right->right->right);
	}
	if (next->name=="VOID"){
		addCode("return");
	}
	addCode("end f_"+fn.name);
	blockstack.pop_back();
	nowadd=0;
	global=0;
}

void parse_decl(struct gramTree *node){
	//cout << "ok" << endl;
	struct gramTree* next=node->left;
	if (next->name=="CONST"){
		//cout << "const decl" << endl;
		//cout << "const decl1" << endl;
		parse_const_init_del_list(next->right->right);
	}else{
		parse_init_del_list(next->right);
	}
}

void parse_const_init_del_list(struct gramTree *node){
	struct gramTree* next=node->left;
	//cout << next->name << endl;
	if (next->name == "const_init_del_list"){
		parse_const_init_del_list(next);
		parse_const_init_del(next->right->right);
	}else{
		parse_const_init_del(next);
	}
}

void dfs_const(struct gramTree *node){
	if (node==NULL)return;
	if (node->left->name == "{"){
		q.push_back(create_le());
		if (node->left->right->name!="}")
			dfs1_const(node->left->right);
		q.push_back(create_ri());
	}else if (node->left->name == "add_exp"){
		int x=parse_const_add_exp(node->left);
		q.push_back(create_const(x));
	}
	return;
}

void dfs1_const(struct gramTree *node){
	if (node->left->name=="const_init_list"){
		dfs1_const(node->left);
		dfs_const(node->left->right->right);
	}else{
		dfs_const(node->left);
	}
}
void parse_const_init_del(struct gramTree *node){
	//cout << "const_init_del" << endl;
	struct gramTree* next=node->left;
	if (next->left->name=="VAR"){
		string var=next->left->content;
		var_node node1;
		temp_Num++;
		node1.type="INT";
		node1.num=temp_Num;
		node1.name="T"+inttostr(temp_Num);
		addvarCode("var "+node1.name);
		node1.isconst=1;
		int val=parse_const_add_exp(next->right->right->left);
		node1.val=val;
		addCode(node1.name +" = "+inttostr(val));
		blockstack.back().varMap.insert({var,node1});
	}else {
		array_node arr;
		arr.isconst=1;
		struct gramTree* now=next->left;
		int nowneed=1;
		while (now->name!="VAR"){
			int x=parse_const_exp(now->right->right);
			arr.arraysize.push_back(create_const(x));
			arr.len++;
			nowneed=nowneed*x;
			now=now->left;
		}
		reverse(arr.arraysize.begin(),arr.arraysize.end());
		arr.sum=nowneed;
		temp_Num++;
		arr.name="T"+inttostr(temp_Num);
		addvarCode("var "+inttostr(nowneed*4)+" "+arr.name);
		q.clear();
		//cout << next->right->right->name << endl;
		if (next->right->right->name!="}")
			dfs_const(next->right->right);
		vector<int> pre;
		pre.push_back(0);
		int leftsum=0;
		int nowsum=0;
		//cout << nowneed << " nowneed " << endl;
		for (int i=1;i<q.size()-1;i++){
			if (q[i].type=="INT"){
				arr.a.push_back(q[i]);
				nowsum++;
			}else if (q[i].type=="{"){
				nowneed=nowneed/arr.arraysize[leftsum].val;
				leftsum++;
				pre.push_back(nowsum);
			}else{
				for (int i=1;i<=nowneed-(nowsum-pre[leftsum]);i++){
					arr.a.push_back(create_const(0));
					//nowsum++;
				}
				nowsum=nowneed+pre[leftsum];
				pre.pop_back();
				leftsum--;
				nowneed=nowneed*arr.arraysize[leftsum].val;
			}
		}
		for (int i=1;i<=nowneed-nowsum;i++)
			arr.a.push_back(create_const(0));
		arr.sum=nowneed;
		arr.isconst=1;
		blockstack.back().arrayMap.insert({now->content,arr});
		for (int i=0;i<arr.a.size();i++)
			addCode(arr.name+"["+inttostr(4*i)+"] = "+inttostr(arr.a[i].val));
	}
}

int parse_const_exp(struct gramTree *node){
	return parse_const_add_exp(node->left);
}

int parse_const_add_exp(struct gramTree* node){
	//cout << "add_exp" << endl;
	struct gramTree* next=node->left;
	if (next->name=="mult_exp")
		return parse_const_mult_exp(next);
	else if (next->right->name == "+")
		return parse_const_add_exp(next)+parse_const_mult_exp(next->right->right);
	else return parse_const_add_exp(next)-parse_const_mult_exp(next->right->right);
}

int parse_const_mult_exp(struct gramTree *node){
	struct gramTree* next=node->left;
	if (next->name=="unary_exp")
		return parse_const_unary_exp(next);
	else if (next->right->name == "*")
		return parse_const_mult_exp(next)*parse_const_unary_exp(next->right->right);
	else if (next->right->name == "/")
		return parse_const_mult_exp(next)/parse_const_unary_exp(next->right->right);
	else if (next->right->name == "%")
		return parse_const_mult_exp(next)%parse_const_unary_exp(next->right->right);
	return 0;
}

int parse_const_unary_exp(struct gramTree *node){
	struct gramTree* next=node->left;
	if (next->name=="unary_oper"){
		if (next->left->name=="+")
			return parse_const_unary_exp(next->right);
			else return -parse_const_unary_exp(next->right);
	}else{
		return parse_const_primary_exp(next);
	}
}

int parse_const_primary_exp(struct gramTree *node){
	struct gramTree* next=node->left;
	if (next->name=="INTNUM")
		return strtoint(next->content);
	else if (next->name=="LVal")
		return parse_const_LVal(next);
	else return parse_const_add_exp(next->right);
}

int parse_const_LVal(struct gramTree *node){
	struct gramTree* next=node->left;
	//cout << "const LVal " << next->name << endl;
	if (next->name=="VAR"){
		var_node node1=blockFindVar(next->content);
		return node1.val;
	}else {//if (next->right->name=="["){
		vector<int> vec;
		while (next->name=="LVal"){
			vec.push_back(parse_const_add_exp(next->right->right));
			next=next->left;
		}
		reverse(vec.begin(),vec.end());
		array_node arr=blockFindArray(next->content);
		int id=0;
		int now=1;
		for (int i=arr.len-1;i>=0;i--){
			id+=now*vec[i];
			now=now*arr.arraysize[i].val;
		}
		return arr.a[id].val;
	}
}

void parse_init_del_list(struct gramTree *node){
	struct gramTree* next=node->left;
	//cout << next->name << endl;
	//cout << next->content << endl;
	if (next->name == "init_del_list"){
		parse_init_del_list(next);
		parse_init_del(next->right->right);
	}else {
		parse_init_del(next);
	}
}

void dfs(struct gramTree *node){
	//cout << "dfs ok " << node->left->name << endl;
	if (node->left->name == "{"){
		//cout << " okkkk { " << endl;
		q.push_back(create_le());
		if (node->left->right->name!="}")
			dfs1(node->left->right);
		q.push_back(create_ri());
	}else if (node->left->name == "add_exp"){
		//cout << "go go " << endl;
		if (global==1){
			var_node x=parse_add_exp(node->left);
			q.push_back(x);
		}else{
			int x=parse_const_add_exp(node->left);
			q.push_back(create_const(x));
		}
	}
	return;
}

void dfs1(struct gramTree *node){
	//cout << node->left->name << " dfs1 ! " << endl;
	if (node->left->name=="init_list"){
		dfs1(node->left);
		dfs(node->left->right->right);
	}else{
		dfs(node->left);
	}
}

var_node parse_add_exp(struct gramTree *node){
	struct gramTree* next=node->left;
	//cout << next->name << endl;
	if (next->name=="mult_exp")
		return parse_mult_exp(next);
	else{
			var_node node1=parse_add_exp(next);
			var_node node2=parse_mult_exp(next->right->right);
			var_node node3;
			string op=next->right->name;
			temp_Num++;
			node3.type="INT";
			node3.name="t"+inttostr(temp_Num);
			addvarCode("var "+node3.name);
			addCode(node3.name+" = "+node1.name+" "+op+" "+node2.name);
			return node3;
		}
}

var_node parse_mult_exp(struct gramTree *node){
	struct gramTree* next=node->left;
	if (next->name=="unary_exp"){
		return parse_unary_exp(next);
	}else{	
		var_node node1=parse_mult_exp(next);
		var_node node2=parse_unary_exp(next->right->right);
		var_node node3;
		string op=next->right->name;
		temp_Num++;
		node3.type="INT";
		node3.name="t"+inttostr(temp_Num);
		addvarCode("var "+node3.name);
		addCode(node3.name+" = "+node1.name+" "+op+" "+node2.name);
		return node3;
	}
}

var_node parse_unary_exp(struct gramTree *node){
	struct gramTree* next=node->left;
	//cout << next->name << endl;
	if (next->name=="primary_exp"){
		return parse_primary_exp(next);
	}else if (next->name=="unary_oper"){
		//cout << "ok1"<<endl;
		var_node node1=parse_unary_exp(next->right);
		if (next->left->name=="+")return node1;
		//cout << "ok2"<<endl;
		string op=next->left->name;
		//cout << op << endl;
		var_node node2;
		temp_Num++;
		node2.type="INT";
		node2.name="t"+inttostr(temp_Num);
		addvarCode("var "+node2.name);
		addCode(node2.name+" = "+op+node1.name);
		return node2;
	}else{
		//cout << "funcc!!!!" << endl;
		//cout << next->right->right->name << endl;
		now_func++;
		if (next->right->right->name=="FuncRParams"){
			FuncRParams(next->right->right);
		}
		for (int i=0;i<funcList[now_func].size();i++)
			addCode(funcList[now_func][i]);
		funcList[now_func].clear();
		now_func--;
		var_node node3;
		temp_Num++;
		node3.type="INT";
		node3.name="t"+inttostr(temp_Num);
		addvarCode("var "+node3.name);
		addCode(node3.name+" = "+"call f_"+next->content);
		return node3;
	}
}

var_node parse_primary_exp(struct gramTree *node){
	struct gramTree* next=node->left;
	//cout << next->name << endl;
	if (next->name=="LVal"){
		var_node node1=parse_LVal(next);
		var_node node2;
		temp_Num++;
		node2.name="t"+inttostr(temp_Num);
		node2.type="INT";
		addCode(node2.name+" = "+node1.name);
		addvarCode("var "+node2.name);
		return node2;
	}else if (next->name=="INTNUM"){
		//cout << "??" << strtoint(next->content) << endl;
		return create_const(strtoint(next->content));
	}else{
		return parse_add_exp(next->right);
	}
}

var_node parse_LVal(struct gramTree *node){
	struct gramTree* next=node->left;
	struct gramTree* now=next;
	while (now->name=="LVal"){
		now=now->left;
	}
	string name=now->content;
	var_node node1;
	array_node arr;
	int flag=0;
	//cout << name << endl;
	for (int i=blockstack.size()-1;i>=0;i--){
		if (blockstack[i].varMap.find(name)!=blockstack[i].varMap.end()){
			node1=blockstack[i].varMap[name];
			flag=0;
			break;
		}
		if (blockstack[i].arrayMap.find(name)!=blockstack[i].arrayMap.end()){
			arr=blockstack[i].arrayMap[name];
			flag=1;
			break;
		}
	}
	//cout << flag << endl;
	if (flag==0){
		return node1;
	}else {
		//cout << "okkkk"<<endl;
		//cout << arr.len << endl;
		int ll=0;
		vector<var_node> vec;
		while (next->name!="VAR"){
			vec.push_back(parse_add_exp(next->right->right));
			next=next->left;
			ll++;
		}
		reverse(vec.begin(),vec.end());
		if (ll<arr.len){
			var_node id;
			temp_Num++;
			id.name="t"+inttostr(temp_Num);
			id.type="INT";
			addCode(id.name + "= 0");
			addvarCode("var "+id.name);
			int now=1;
			var_node tmp;
			temp_Num++;
			tmp.name="t"+inttostr(temp_Num);
			tmp.type="INT";
			addCode(tmp.name + "= 0");
			addvarCode("var "+tmp.name);
			for (int i=arr.len-1;i>=ll-1;i--){
				now=now*arr.arraysize[i].val;
			}
			for (int i=ll-1;i>=0;i--){
				addCode(tmp.name+" = "+vec[i].name+" * "+inttostr(now));
				addCode(id.name+" = "+id.name+" + "+tmp.name);
				now=now*arr.arraysize[i].val;
			}
			var_node node2;
			node2.type="INT";
			node2.name=arr.name+"+"+id.name;
			return node2;
		}
		var_node id;
		temp_Num++;
		id.name="t"+inttostr(temp_Num);
		id.type="INT";
		addCode(id.name + "= 0");
		addvarCode("var "+id.name);
		int now=1;
		var_node tmp;
		temp_Num++;
		tmp.name="t"+inttostr(temp_Num);
		tmp.type="INT";
		addCode(tmp.name + "= 0");
		addvarCode("var "+tmp.name);
		for (int i=arr.len-1;i>=0;i--){
			addCode(tmp.name+" = "+vec[i].name+" * "+inttostr(now));
			//id+=now*vec[i];
			addCode(id.name+" = "+id.name+" + "+tmp.name);
			now=now*arr.arraysize[i].val;
		}
		//arr.a[id];
		var_node node2;
		addCode(id.name+" = "+id.name+" * 4");
		node2.type="INT";
		node2.name=arr.name+"["+id.name+"]";
		return node2;
	}
}

void parse_init_del(struct gramTree* node){
	struct gramTree* next=node->left;
	//cout << "init_del test" << endl;
	//cout << next->left->name << endl;
	if (next->left->name=="VAR"){
		string var=next->left->content;
		//cout << "test var " << var << endl;
		var_node node1;
		temp_Num++;
		node1.type="INT";
		node1.num=temp_Num;
		node1.name="T"+inttostr(temp_Num);
		//cout << "okkk"<< endl;
		addvarCode("var "+node1.name);
		blockstack.back().varMap.insert({var,node1});
		//cout << "okkk" << endl;
		if (next->right==NULL)return;
		//cout << next->right->right->left->name << endl;
		if (global==0){
			int x=parse_const_add_exp(next->right->right->left);
			addCode(node1.name + " = "+inttostr(x));
		}else{
			var_node node2=parse_add_exp(next->right->right->left);
			addCode(node1.name +" = "+node2.name);
		}
	}else {
		//cout << "???"<<endl;
		//cout << "c[5]" << endl;
		array_node arr;
		struct gramTree* now=next->left;
		int nowneed=1;
		while (now->name!="VAR"){
			int x=parse_const_exp(now->right->right);
			//cout << "x:: " << x << endl;
			arr.arraysize.push_back(create_const(x));
			arr.len++;
			nowneed=nowneed*x;
			now=now->left;
		}
		arr.sum=nowneed;
		reverse(arr.arraysize.begin(),arr.arraysize.end());
		temp_Num++;
		arr.name="T"+inttostr(temp_Num);
		//cout << nowneed << endl;
		addvarCode("var "+inttostr(nowneed*4)+" "+arr.name);
		if (next->right==NULL){
			for (int i=0;i<nowneed;i++)
				arr.a.push_back(create_const(0));
			blockstack.back().arrayMap.insert({now->content,arr});
			return;
		}
		q.clear();
		//cout << "ok dfs" << endl;
		if (next->right->right->name!="}")
			dfs(next->right->right);
		//cout << "ok dfs1" << endl;
		vector<int> pre;
		pre.clear();
		pre.push_back(0);
		int leftsum=0;
		int nowsum=0;
		//cout << "!!!"<<endl;
		for (int i=1;i<q.size()-1;i++){
			//cout << q[i].type << "  " << endl;
			if (q[i].type=="INT"){
				arr.a.push_back(q[i]);
				nowsum++;
			}else if (q[i].type=="{"){
				nowneed=nowneed/arr.arraysize[leftsum].val;
				leftsum++;
				//cout << nowsum << "nowsum" << endl;
				pre.push_back(nowsum);
			}else{
				//cout << nowneed << "  " << nowsum << "  " << pre[leftsum] << endl;
				for (int i=1;i<=nowneed-(nowsum-pre[leftsum]);i++){
					arr.a.push_back(create_const(0));
					//nowsum++;
				}
				nowsum=pre[leftsum]+nowneed;
				pre.pop_back();
				leftsum--;
				nowneed=nowneed*arr.arraysize[leftsum].val;
			}
		}
		for (int i=1;i<=nowneed-nowsum;i++)
			arr.a.push_back(create_const(0));
		//cout << now->content << endl;
		blockstack.back().arrayMap.insert({now->content,arr});
		if (global==1){
			for (int i=0;i<arr.a.size();i++)
				addCode(arr.name+"["+inttostr(4*i)+"] = "+arr.a[i].name);
		}else{
			for (int i=0;i<arr.a.size();i++)
				addCode(arr.name+"["+inttostr(4*i)+"] = "+inttostr(arr.a[i].val));
		}
	}
}

var_node create_le(){
	var_node a;
	a.type="{";
	return a;
}

var_node create_ri(){
	var_node a;
	a.type="}";
	return a;
}

var_node create_const(int x){
	//cout << "x: " << x << endl;
	var_node a;
	temp_Num++;
	a.name="t"+inttostr(temp_Num);
	addvarCode("var "+a.name);
	addCode(a.name +" = "+inttostr(x));
	a.type="INT";
	a.val=x;
	a.isconst=1;
	//cout << "ok test" << endl;
	return a;
}

var_node blockFindVar(string name){
	for (int i=blockstack.size()-1;i>=0;i--)
		if (blockstack[i].varMap.find(name)!=blockstack[i].varMap.end()){
			//cout << "is find! " << endl;
			return blockstack[i].varMap[name];
		}
	var_node node1;
	return node1;
}

array_node blockFindArray(string name){
	for (int i=blockstack.size()-1;i>=0;i--)
		if (blockstack[i].arrayMap.find(name)!=blockstack[i].arrayMap.end())
			return blockstack[i].arrayMap[name];
	array_node node1;
	return node1;
}


