To Compile:
yacc -d calc.y
flex calc.l
gcc lex.yy.c y.tab.c -o calc
