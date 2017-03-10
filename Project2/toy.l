%{
#include "y.tab.h"
int COUNTER = 0;
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_boolean", "_break", "_class",
  "_double", "_else", "_extends", "_for", "_if", "_implements",
  "_interface", "_int", "_newarray", "_println", "_readln", "_return",
  "_string", "_void", "_while", "_plus", "_minus", "_multiplication",
  "_division", "_mod", "_less", "_lessequal", "_greater", "_greaterequal",
  "_equal", "_notequal", "_and", "_or", "_not", "_assignop", "_semicolon",
  "_comma", "_period", "_leftparen", "_rightparen", "_leftbracket",
  "_rightbracket", "_leftbrace", "_rightbrace", "_intconstant",
  "_doubleconstant", "_stringconstant", "_booleanconstant", "_id",
  "$accept", "Program", "Decl", "VariableDecl", "Variable", "Type",
  "FunctionDecl", "Formals", "Variables", "ClassDecl", "Ids", "Fields0",
  "Fields", "Field", "InterfaceDecl", "Prototypes", "Prototype",
  "StmtBlock", "VariableDecls", "Stmts", "Stmt", "IfStmt", "WhileStmt",
  "ForStmt", "BreakStmt", "ReturnStmt", "PrintStmt", "Exprs", "Expr",
  "Lvalue", "Call", "Actuals", "Constant",
};

void printToken(int token){
	printf("%s ", yytname[token - 255]);
}

%}
%x C_COMMENT
%x LINE_COMMENT

%%
"boolean"										{printToken(_boolean); return _boolean;}
"break"											{printToken(_break); return _break;}
"class"											{printToken(_class); return _class;}
"double"										{printToken(_double); return _double;}
"else"											{printToken(_else); return _else;}
"extends"										{printToken(_extends); return _extends;}
"for"											{printToken(_for); return _for;}
"if"											{printToken(_if); return _if;}
"implements"										{printToken(_implements); return _implements;}
"interface"										{printToken(_interface); return _interface;}
"int"											{printToken(_int); return _int;}
"newarray"										{printToken(_newarray); return _newarray;}
"println"										{printToken(_println); return _println;}
"readln"										{printToken(_readln); return _readln;}
"return"										{printToken(_return); return _return;}
"string"										{printToken(_string); return _string;}
"void"											{printToken(_void); return _void;}
"while"											{printToken(_while); return _while;}
"+"											{printToken(_plus); return _plus;}
"-"											{printToken(_minus); return _minus;}
"*"											{printToken(_multiplication); return _multiplication;}
"/"											{printToken(_division); return _division;}
"%"											{printToken(_mod); return _mod;}
"<="											{printToken(_lessequal); return _lessequal;}
"<"											{printToken(_less); return _less;}
">="											{printToken(_greaterequal); return _greaterequal;}
">"											{printToken(_greater); return _greater;}
"=="											{printToken(_equal); return _equal;}
"!="											{printToken(_notequal); return _notequal;}
"&&"											{printToken(_and); return _and;}
"||"											{printToken(_or); return _or;}
"!"											{printToken(_not); return _not;}
"="											{printToken(_assignop); return _assignop;}
";"											{printToken(_semicolon); return _semicolon;}
","											{printToken(_comma); return _comma;}
"."											{printToken(_period); return _period;}
"("											{printToken(_leftparen); return _leftparen;}
")"											{printToken(_rightparen); return _rightparen;}
"["											{printToken(_leftbracket); return _leftbracket;}
"]"											{printToken(_rightbracket); return _rightbracket;}
"{"											{printToken(_leftbrace); return _leftbrace;}
"}"											{printToken(_rightbrace); return _rightbrace;}
([1-9][0-9]*|0[xX][0-9a-fA-F]+|0)							{printToken(_intconstant); return _intconstant;}
([1-9]+[eE][+-]?[1-9][0-9]*)|([0-9]+\.[0-9]*([eE][+-]?[1-9][0-9]*)?)|[1-9][0-9]*	{printToken(_doubleconstant); return _doubleconstant;}
\"([^\\\"]|\\.)*\"									{printToken(_stringconstant); return _stringconstant;}
(true|false)										{printToken(_booleanconstant); return _booleanconstant;}
[a-zA-Z][_a-zA-Z0-9]*									{printToken(_id); return _id;}
[ \t]											;
\n											{;}
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
