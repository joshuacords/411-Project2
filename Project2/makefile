toy: toy.y toy.l
	yacc -dv toy.y
	flex toy.l
	touch mod.y.tab.c || exit
	sed "s/\/\* Shift the lookahead token.  \*\//\/\* Shift the lookahead token.  \*\/\nprintf\(\"\[shift\]\\\n\"\)\;/g" y.tab.c> mod.y.tab.c
	gcc lex.yy.c mod.y.tab.c -o toy $(GCCOPTS)

clean:
	rm lex.yy.c a.out y.output y.tab.h y.tab.c mod.y.tab.c toy 
