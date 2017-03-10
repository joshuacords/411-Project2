%{
#include "y.h"
%}
%x C_COMMENT
%x LINE_COMMENT

%%
"boolean"										return _boolean;
"break"											return _break;
"class"											return _class;
"double"										return _double;
"else"											return _else;
"extends"										return _extends;
"for"											return _for;
"if"											return _if;
"implements"										return _implements;
"interface"										return _interface;
"int"											return _integer;
"newarray"										return _newarray;
"println"										return _println;
"readln"										return _readln;
"return"										return _return;
"string"										return _string;
"void"											return _void;
"while"											return _while;
"+"											return _plus;
"-"											return _minus;
"*"											return _multiplication;
"/"											return _division;
"%"											return _mod;
"<="											return _lessequal;
"<"											return _less;
">="											return _greaterequal;
">"											return _greater;
"=="											return _equal;
"!="											return _notequal;
"&&"											return _and;
"||"											return _or;
"!"											return _not;
"="											return _assignop;
";"											return _semicolon;
","											return _comma;
"."											return _period;
"("											return _leftparen;
")"											return _rightparen;
"["											return _leftbracket;
"]"											return _rightbracket;
"{"											return _leftbrace;
"}"											return _rightbrace;
([1-9][0-9]*|0[xX][0-9a-fA-F]+|0)							return _intconstant;
([1-9]+[eE][+-]?[1-9][0-9]*)|([0-9]+\.[0-9]*([eE][+-]?[1-9][0-9]*)?)|[1-9][0-9]*	return _doubleconstant;
\"([^\\\"]|\\.)*\"									return _stringconstant;
(true|false)										return _booleanconstant;
[a-zA-Z][_a-zA-Z0-9]*									return _id;
[ \t]											;
\n											{printf("\n");}
"/*"											{ BEGIN(C_COMMENT); }
<C_COMMENT>\n										;
<C_COMMENT>"*/"										{ BEGIN(INITIAL); }
<C_COMMENT>.										;
"//"											{ BEGIN(LINE_COMMENT); }
<LINE_COMMENT>\n									{ BEGIN(INITIAL); }
<LINE_COMMENT>.										{ }
.											;

%%

int yywrap(void)
{
	return 1;
}
