flex lex.l
bison -vdty yacc.y
g++ -std=c++11 -o compiler tree.cpp tools.cpp lex.yy.c y.tab.c
./compiler test.c
