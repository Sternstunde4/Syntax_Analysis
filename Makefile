pj2: pj2.tab.c lex.yy.c pj2.cpp tree.h tree.c
	g++ pj2.cpp tree.c pj2.tab.c lex.yy.c -o pj2 -g
pj2.tab.c: pj2.y
	bison -d pj2.y
lex.yy.c: pj2.lex
	flex pj2.lex
