#makefile to create executable syntax analyser

CC = g++
LEX = flex
YACC = bison

all:	part2

part2.tab.cpp:	part2.ypp part2_helpers.h
	$(YACC) -d part2.ypp

lex.yy.c:	part1.lex part2_helpers.h
	$(LEX) part1.lex

part2:	lex.yy.c part2_helpers.c part2.tab.cpp
	$(CC) -o $@ $^

clean:
	rm -f part2 *.o lex.yy.c part2.tab.cpp part2.tab.hpp
