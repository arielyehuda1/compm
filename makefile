#makefile to create executable lexical analyser

all:	part1

lex.yy.c:	part1.lex
	flex part1.lex

part1:	lex.yy.c
	gcc -ll lex.yy.c -o part1

clean:
	rm -f part1 lex.yy.c
