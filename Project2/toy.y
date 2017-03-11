%{
void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
%}

%start Program
%token _boolean
%token _break
%token _class
%token _double
%token _else
%token _extends
%token _for
%token _if
%token _implements
%token _interface
%token _int
%token _newarray
%token _println
%token _readln
%token _return
%token _string
%token _void
%token _while
%token _plus
%token _minus
%token _multiplication
%token _division
%token _mod
%token _less
%token _lessequal
%token _greater
%token _greaterequal
%token _equal
%token _notequal
%token _and
%token _or
%token _not
%token _assignop
%token _semicolon
%token _comma
%token _period
%token _leftparen
%token _rightparen
%token _leftbracket
%token _rightbracket
%token _leftbrace
%token _rightbrace
%token _intconstant
%token _doubleconstant
%token _stringconstant
%token _booleanconstant
%token _id
%left _assignop
%left _or
%left _and
%left _equal _notequal
%left _less _lessequal _greater _greaterequal
%left _plus _minus
%left _multiplication _division _mod
%left _not
%left _leftbracket _period
%nonassoc THEN
%nonassoc _else

%%
/* descriptions of expected inputs     corresponding actions (in C) */
Program		: Decl 												{printf("[reduce 1]");}
		| Decl Program											{printf("[reduce 2]");};
Decl 		: VariableDecl											{printf("[reduce 3]");}
		| FunctionDecl											{printf("[reduce 4]");}
		| ClassDecl											{printf("[reduce 5]");}
		| InterfaceDecl											{printf("[reduce 6]");};
VariableDecl 	: Variable _semicolon										{printf("[reduce 7]");};
Variable 	: Type _id 											{printf("[reduce 8]");};
Type 		: _int Type2											{printf("[reduce 9]");}
		| _double Type2 										{printf("[reduce 10]");}
		| _boolean Type2										{printf("[reduce 11]");}
		| _string Type2											{printf("[reduce 12]");}
		| _id Type2											{printf("[reduce 13]");}
 		| _int 												{printf("[reduce 14]");}
		| _double 											{printf("[reduce 15]");}
		| _boolean											{printf("[reduce 16]");}
		| _string											{printf("[reduce 17]");}
		| _id 												{printf("[reduce 18]");};
Type2		: _leftbracket _rightbracket									{printf("[reduce 19]");}
		| _leftbracket _rightbracket Type2								{printf("[reduce 20]");};
FunctionDecl 	: Type _id _leftparen Formals _rightparen StmtBlock 						{printf("[reduce 21]");}
		| _void _id _leftparen Formals _rightparen StmtBlock 						{printf("[reduce 22]");}
	 	| Type _id _leftparen _rightparen StmtBlock 							{printf("[reduce 23]");}
		| _void _id _leftparen _rightparen StmtBlock 							{printf("[reduce 24]");};
Formals		: Variables 											{printf("[reduce 25]");};
Variables 	: Variable _comma Variables 									{printf("[reduce 26]");}
		| Variable 											{printf("[reduce 27]");};
ClassDecl 	: _class _id Fields0 										{printf("[reduce 28]");}
		| _class _id _extends _id Fields0 								{printf("[reduce 29]");}
		| _class _id _implements Ids Fields0 								{printf("[reduce 30]");}
		| _class _id _extends _id _implements Ids Fields0 						{printf("[reduce 31]");};
Ids 		: _id 												{printf("[reduce 32]");}
		| _id _comma Ids										{printf("[reduce 33]");};
Fields0		: _leftbrace _rightbrace									{printf("[reduce 34]");}
		| _leftbrace Fields _rightbrace									{printf("[reduce 35]");};
Fields 		: Field 											{printf("[reduce 36]");}
		| Field Fields 											{printf("[reduce 37]");};
Field 		: VariableDecl 											{printf("[reduce 38]");}
		| FunctionDecl 											{printf("[reduce 39]");};
InterfaceDecl 	: _interface _id _leftbrace Prototypes _rightbrace						{printf("[reduce 40]");}
		| _interface _id _leftbrace _rightbrace								{printf("[reduce 41]");};
Prototypes 	: Prototype 											{printf("[reduce 42]");}
		| Prototype Prototypes 										{printf("[reduce 43]");};
Prototype 	: Type _id _leftparen Formals _rightparen _semicolon 						{printf("[reduce 44]");}
		| _void _id _leftparen Formals _rightparen _semicolon 						{printf("[reduce 45]");};
StmtBlock 	: _leftbrace VariableDecls _rightbrace	 							{printf("[reduce 46]");}
		| _leftbrace Stmts _rightbrace	 								{printf("[reduce 47]");}
		| _leftbrace VariableDecls Stmts _rightbrace							{printf("[reduce 48]");};
VariableDecls	: VariableDecl 											{printf("[reduce 49]");}
		| VariableDecl VariableDecls 									{printf("[reduce 50]");};
Stmts 		: Stmt 												{printf("[reduce 51]");}
		| Stmt Stmts 											{printf("[reduce 52]");};
Stmt 		: _semicolon 											{printf("[reduce 53]");}
		| Expr _semicolon 										{printf("[reduce 54]");}
		| IfStmt 											{printf("[reduce 55]");}
		| WhileStmt 											{printf("[reduce 56]");}
		| ForStmt											{printf("[reduce 57]");}
		| BreakStmt 											{printf("[reduce 58]");}
		| ReturnStmt 											{printf("[reduce 59]");}
		| PrintStmt 											{printf("[reduce 60]");}
		| StmtBlock 											{printf("[reduce 61]");};
IfStmt 		: _if _leftparen Expr _rightparen Stmt 			%prec THEN				{printf("[reduce 62]");}
		| _if _leftparen Expr _rightparen Stmt _else Stmt 						{printf("[reduce 63]");};
WhileStmt 	: _while _leftparen Expr _rightparen Stmt 							{printf("[reduce 64]");};
ForStmt		: _for _leftparen _semicolon Expr _semicolon _rightparen Stmt 					{printf("[reduce 65]");}
		| _for _leftparen Expr _semicolon Expr _semicolon _rightparen Stmt				{printf("[reduce 66]");}
		| _for _leftparen _semicolon Expr _semicolon Expr _rightparen Stmt 				{printf("[reduce 67]");}
		| _for _leftparen Expr _semicolon Expr _semicolon Expr _rightparen Stmt 			{printf("[reduce 68]");};
BreakStmt	: _break _semicolon 										{printf("[reduce 69]");};
ReturnStmt	: _return _semicolon 										{printf("[reduce 70]");}
		| _return Expr _semicolon									{printf("[reduce 71]");};
PrintStmt	: _println _leftparen Exprs _rightparen _semicolon 						{printf("[reduce 72]");};
Exprs 		: Expr 												{printf("[reduce 73]");}
		| Expr _comma Exprs 										{printf("[reduce 74]");};
Expr 		: Constant 											{printf("[reduce 75]");}
		| Lvalue 											{printf("[reduce 76]");}
		| Call 												{printf("[reduce 77]");}
		| _readln _leftparen _rightparen 								{printf("[reduce 78]");}
		| _newarray _leftparen _intconstant _comma Type _rightparen 					{printf("[reduce 79]");}
		| Lvalue _assignop Expr 									{printf("[reduce 80]");}
		| Expr _or Expr 										{printf("[reduce 81]");}
		| Expr _and Expr 										{printf("[reduce 82]");}
		| Expr _equal Expr 										{printf("[reduce 83]");}
		| Expr _notequal Expr 										{printf("[reduce 84]");}
		| Expr _less Expr 										{printf("[reduce 85]");}
		| Expr _lessequal Expr 										{printf("[reduce 86]");}
		| Expr _greater Expr 										{printf("[reduce 87]");}
		| Expr _greaterequal Expr 									{printf("[reduce 88]");}
		| Expr _plus Expr 										{printf("[reduce 89]");}
		| Expr _minus Expr 										{printf("[reduce 90]");}
		| Expr _multiplication Expr 									{printf("[reduce 91]");}
		| Expr _division Expr 										{printf("[reduce 92]");}
		| Expr _mod Expr 										{printf("[reduce 93]");}
		| _not Expr 											{printf("[reduce 94]");}
		| _minus Expr 											{printf("[reduce 95]");}
		| _leftparen Expr _rightparen 									{printf("[reduce 96]");};
Lvalue		: _id 												{printf("[reduce 97]");}
		| _id Lvalue2											{printf("[reduce 98]");};
Lvalue2		: _leftbracket Expr _rightbracket 								{printf("[reduce 99]");}
		| _period _id 											{printf("[reduce 100]");}
		| _leftbracket Expr _rightbracket Lvalue2							{printf("[reduce 101]");}
		| _period _id Lvalue2										{printf("[reduce 102]");};
Call 		: _id _leftparen Exprs _rightparen 								{printf("[reduce 103]");}
		| _id _period _id _leftparen Exprs _rightparen 							{printf("[reduce 104]");}
		| _id _leftparen _rightparen 									{printf("[reduce 105]");}
		| _id _period _id _leftparen _rightparen 							{printf("[reduce 106]");};
Constant 	: _intconstant 											{printf("[reduce 107]");}
		| _doubleconstant 										{printf("[reduce 108]");}
		| _booleanconstant 										{printf("[reduce 109]");}
		| _stringconstant 										{printf("[reduce 110]");};
%%                     
int main (void) {
	yyparse ( );
}

void yyerror (char *s) {printf ("[REJECT]\n");} 

