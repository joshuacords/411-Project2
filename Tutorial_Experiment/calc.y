%{
void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%union {int num; char id;}         /* Yacc definitions */
%start line
%token print
%token exit_command
%token <num> number
%token <id> identifier
%type <num> line exp term 
%type <id> assignment

%%

/* descriptions of expected inputs     corresponding actions (in C) */









Program	: Decl 					{printf("reduce 1")}
		| Program Decl 			{printf("reduce 2")};
Decl 	: VariableDecl			{printf("reduce 3")}
		| FunctionDecl			{printf("reduce 4")}
		| ClassDecl				{printf("reduce 5")}
		| InterfaceDecl			{printf("reduce 6")};
VariableDecl : Variable ';'		{printf("reduce 7")};
Variable : 	Type id 			{printf("reduce 8")};
Type 	: int 					{printf("reduce 9")}
		| double 				{printf("reduce 10")}
		| boolean				{printf("reduce 11")}
		| string				{printf("reduce 12")}
		| Type '[]'				{printf("reduce 13")}
		| id 					{printf("reduce 14")};
FunctionDecl : Type id '(' Formals ')' StmtBlock {printf("reduce 15")}
		| void id '(' Formals ')' StmtBlock {printf("reduce 16")};
Formals	: Variable 				{printf("reduce 17")}
		| Variables 			{printf("reduce 18")}
		| 						{printf("reduce 19")};
Variables : Variable ',' Variables {printf("reduce 20")}
		| Variable 				{printf("reduce 21")};
ClassDecl : class id Field0 	{printf("reduce 22")}
		| class id extends id Field0 {printf("reduce 23")}
		| class id implements Ids Field0 {printf("reduce 24")}
		| class id extends id implements Ids Fields0 {printf("reduce 25")};
Ids 	: id 					{printf("reduce 26")}
		| id, Ids				{printf("reduce 27")};
Field0 	: '{' '}'				{printf("reduce 28")}
		| '{' Fields '}'		{printf("reduce 29")};
Fields 	: Field 				{printf("reduce 30")}
		| Field Fields 			{printf("reduce 31")};
Field 	: VariableDecl 			{printf("reduce 32")}
		| FunctionDecl 			{printf("reduce 33")};
InterfaceDecl : interface id '{' Prototypes '}' {printf("reduce 34")}
		| interface id '{' '}'	{printf("reduce 35")};
Prototypes : Prototype 			{printf("reduce 36")}
		| Prototype Prototypes 	{printf("reduce 37")};
Prototype : Type id '(' Formals ')' ';' {printf("reduce 38")}
		| void id '(' Formals ')' ';' {printf("reduce 39")};
StmtBlock : '{' VariableDecls '}' {printf("reduce 40")}
		| '{' Stmts '}' 		{printf("reduce 41")}
		| '{' VariableDecls Stmts '}' {printf("reduce 42")};
VariableDecls : VariableDecl 	{printf("reduce 43")}
		| VariableDecl VariableDecls {printf("reduce 44")};
Stmts 	: Stmt 					{printf("reduce 45")}
		| Stmt Stmts 			{printf("reduce 46")};
Stmt 	: ';' 					{printf("reduce 47")}
		| Expr ';' 				{printf("reduce 48")}
		| IfStmt 				{printf("reduce 49")}
		| WhileStmt 			{printf("reduce 50")}
		| ForStmt				{printf("reduce 51")}
		| BreakStmt 			{printf("reduce 52")}
		| ReturnStmt 			{printf("reduce 53")}
		| PrintStmt 			{printf("reduce 54")}
		| StmtBlock 			{printf("reduce 55")};
IfStmt 	: if '(' Expr ')' Stmt 	{printf("reduce 56")}
		| if '(' Expr ')' Stmt else Stmt {printf("reduce 57")};
WhileStmt : while '(' Expr ')' Stmt {printf("reduce 58")};
ForStmt : for '(' ';' Expr ';' ')' Stmt {printf("reduce 59")}
		| for '(' Expr ';' Expr ';' ')' Stmt {printf("reduce 60")}
		| for '(' ';' Expr ';' Expr ')' Stmt {printf("reduce 61")}
		| for '(' Expr ';' Expr ';' Expr ')' Stmt {printf("reduce 62")};
BreakStmt : break ';' 			{printf("reduce 63")};
ReturnStmt : return ';' 		{printf("reduce 64")}
		| return Expr ';'		{printf("reduce 65")};
PrintStmt : println '(' Exprs ')' ';' {printf("reduce 66")};
Exprs 	: Expr 					{printf("reduce 67")}
		| Expr ',' Exprs 		{printf("reduce 68")};
Expr 	: Constant 				{printf("reduce 69")}
		| Lvalue 				{printf("reduce 70")}
		| Call 					{printf("reduce 71")}
		| '(' Expr ')' 			{printf("reduce 72")}
		| readln '(' ')' 		{printf("reduce 73")}
		| newarray '(' intconstant ',' Type ')' {printf("reduce 74")}
		| Lvalue '=' Expr 		{printf("reduce 75")}
		| Expr '||' Expr 		{printf("reduce 76")}
		| Expr '&&' Expr 		{printf("reduce 77")}
		| Expr '==' Expr 		{printf("reduce 78")}
		| Expr '!=' Expr 		{printf("reduce 79")}
		| Expr '<' Expr 		{printf("reduce 80")}
		| Expr '<=' Expr 		{printf("reduce 81")}
		| Expr '>' Expr 		{printf("reduce 82")}
		| Expr '>=' Expr 		{printf("reduce 83")}
		| Expr '+' Expr 		{printf("reduce 84")}
		| Expr '-' Expr 		{printf("reduce 85")}
		| Expr '*' Expr 		{printf("reduce 86")}
		| Expr '/' Expr 		{printf("reduce 87")}
		| Expr '%' Expr 		{printf("reduce 88")}
		| '!' Expr 				{printf("reduce 89")}
		| '-' Expr 				{printf("reduce 90")};
Lvalue 	: id 					{printf("reduce 91")}
		| Lvalue '[' Expr ']' 	{printf("reduce 92")}
		| Lvalue '.' id 		{printf("reduce 93")};
Call 	: id '(' Actuals ')' 	{printf("reduce 94")}
		| id '.' id '(' Actuals ')' {printf("reduce 95")};
Actuals : Exprs 				{printf("reduce 96")}
		| 						{printf("reduce 97")};
Contant : intconstant 			{printf("reduce 98")}
		| doubleconstant 		{printf("reduce 99")}
		| stringconstant 		{printf("reduce 100")}
		| booleanconstant 		{printf("reduce 101")};


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

