%{
void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%union {int num; char id;}         /* Yacc definitions */
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

%%
/* descriptions of expected inputs     corresponding actions (in C) */
Program	: Decl 													{printf("reduce 1")}
		| Program Decl 											{printf("reduce 2")};
Decl 	: VariableDecl											{printf("reduce 3")}
		| FunctionDecl											{printf("reduce 4")}
		| ClassDecl												{printf("reduce 5")}
		| InterfaceDecl											{printf("reduce 6")};
VariableDecl : Variable _semicolon								{printf("reduce 7")};
Variable : 	Type _id 											{printf("reduce 8")};
Type 	: _int 													{printf("reduce 9")}
		| _double 												{printf("reduce 10")}
		| _boolean												{printf("reduce 11")}
		| _string												{printf("reduce 12")}
		| Type _leftbracket _rightbracket						{printf("reduce 13")}
		| _id 													{printf("reduce 14")};
FunctionDecl : Type _id _leftparen Formals _rightparen StmtBlock {printf("reduce 15")}
		| void _id _leftparen Formals _rightparen StmtBlock 	{printf("reduce 16")};
Formals	: Variable 												{printf("reduce 17")}
		| Variables 											{printf("reduce 18")}
		| 														{printf("reduce 19")};
Variables : Variable _comma Variables 							{printf("reduce 20")}
		| Variable 												{printf("reduce 21")};
ClassDecl : class _id Field0 									{printf("reduce 22")}
		| class _id _extends _id Field0 						{printf("reduce 23")}
		| class _id _implements Ids Field0 						{printf("reduce 24")}
		| class _id _extends _id _implements Ids Fields0 		{printf("reduce 25")};
Ids 	: _id 													{printf("reduce 26")}
		| _id, Ids												{printf("reduce 27")};
Field0 	: _leftbracket '}'										{printf("reduce 28")}
		| _leftbracket Fields '}'								{printf("reduce 29")};
Fields 	: Field 												{printf("reduce 30")}
		| Field Fields 											{printf("reduce 31")};
Field 	: VariableDecl 											{printf("reduce 32")}
		| FunctionDecl 											{printf("reduce 33")};
InterfaceDecl : interface _id _leftbracket Prototypes _rightbracket {printf("reduce 34")}
		| interface _id _leftbracket '}'						{printf("reduce 35")};
Prototypes : Prototype 											{printf("reduce 36")}
		| Prototype Prototypes 									{printf("reduce 37")};
Prototype : Type _id _leftparen Formals _rightparen _semicolon 	{printf("reduce 38")}
		| void _id _leftparen Formals _rightparen _semicolon 	{printf("reduce 39")};
StmtBlock : _leftbracket VariableDecls _rightbracket 			{printf("reduce 40")}
		| _leftbracket Stmts _rightbracket 						{printf("reduce 41")}
		| _leftbracket VariableDecls Stmts _rightbracket 		{printf("reduce 42")};
VariableDecls : VariableDecl 									{printf("reduce 43")}
		| VariableDecl VariableDecls 							{printf("reduce 44")};
Stmts 	: Stmt 													{printf("reduce 45")}
		| Stmt Stmts 											{printf("reduce 46")};
Stmt 	: _semicolon 											{printf("reduce 47")}
		| Expr _semicolon 										{printf("reduce 48")}
		| IfStmt 												{printf("reduce 49")}
		| WhileStmt 											{printf("reduce 50")}
		| ForStmt												{printf("reduce 51")}
		| BreakStmt 											{printf("reduce 52")}
		| ReturnStmt 											{printf("reduce 53")}
		| PrintStmt 											{printf("reduce 54")}
		| StmtBlock 											{printf("reduce 55")};
IfStmt 	: _if _leftparen Expr _rightparen Stmt 					{printf("reduce 56")}
		| _if _leftparen Expr _rightparen Stmt _else Stmt 		{printf("reduce 57")};
WhileStmt : _while _leftparen Expr _rightparen Stmt 			{printf("reduce 58")};
ForStmt : _for _leftparen _semicolon Expr _semicolon _rightparen Stmt {printf("reduce 59")}
		| _for _leftparen Expr _semicolon Expr _semicolon _rightparen Stmt {printf("reduce 60")}
		| _for _leftparen _semicolon Expr _semicolon Expr _rightparen Stmt {printf("reduce 61")}
		| _for _leftparen Expr _semicolon Expr _semicolon Expr _rightparen Stmt {printf("reduce 62")};
BreakStmt : _break _semicolon 									{printf("reduce 63")};
ReturnStmt : _return _semicolon 								{printf("reduce 64")}
		| _return Expr _semicolon								{printf("reduce 65")};
PrintStmt : _println _leftparen Exprs _rightparen _semicolon 	{printf("reduce 66")};
Exprs 	: Expr 													{printf("reduce 67")}
		| Expr _comma Exprs 									{printf("reduce 68")};
Expr 	: Constant 												{printf("reduce 69")}
		| Lvalue 												{printf("reduce 70")}
		| Call 													{printf("reduce 71")}
		| _leftparen Expr _rightparen 							{printf("reduce 72")}
		| _readln _leftparen _rightparen 						{printf("reduce 73")}
		| _newarray _leftparen _intconstant _comma Type _rightparen {printf("reduce 74")}
		| Lvalue '=' Expr 										{printf("reduce 75")}
		| Expr _or Expr 										{printf("reduce 76")}
		| Expr _and Expr 										{printf("reduce 77")}
		| Expr _equal Expr 										{printf("reduce 78")}
		| Expr _notequal Expr 									{printf("reduce 79")}
		| Expr _less Expr 										{printf("reduce 80")}
		| Expr _lessequal Expr 									{printf("reduce 81")}
		| Expr _greater Expr 									{printf("reduce 82")}
		| Expr _greaterequal Expr 								{printf("reduce 83")}
		| Expr _plus Expr 										{printf("reduce 84")}
		| Expr _minus Expr 										{printf("reduce 85")}
		| Expr _multiplication Expr 							{printf("reduce 86")}
		| Expr _division Expr 									{printf("reduce 87")}
		| Expr _mod Expr 										{printf("reduce 88")}
		| _not Expr 											{printf("reduce 89")}
		| _minus Expr 											{printf("reduce 90")};
Lvalue 	: _id 													{printf("reduce 91")}
		| Lvalue _leftbracket Expr _rightbracket 				{printf("reduce 92")}
		| Lvalue _period _id 									{printf("reduce 93")};
Call 	: _id _leftparen Actuals _rightparen 					{printf("reduce 94")}
		| _id _period _id _leftparen Actuals _rightparen 		{printf("reduce 95")};
Actuals : Exprs 												{printf("reduce 96")}
		| 														{printf("reduce 97")};
Contant : _intconstant 											{printf("reduce 98")}
		| _doubleconstant 										{printf("reduce 99")}
		| _stringconstant 										{printf("reduce 100")}
		| _booleanconstant 										{printf("reduce 101")};


%%                     /* C code */

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
} 

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return symbols[bucket];
}

/* updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	symbols[bucket] = val;
}

int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<52; i++) {
		symbols[i] = 0;
	}

	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 

