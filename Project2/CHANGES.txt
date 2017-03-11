Changes March 9th	Bolton

Field0 to Fields0
Contant to Constant
one instance of ',' char to _comma
class declarations under ClassDecl to _class
interface declarations under InterfaceDecl to _interface
added _interface token under _integer
void under Prototype, FunctionsDecl to _void


We have some sr and rr conflicts

'=' under Lvalue to _assignop
Fields0 : _leftbracket '}'	->	_leftbrace _rightbrace
	| _leftbracket Fields '}'	->	_leftbrace Fields _rightbrace

InterfaceDecl	all instances of _leftbracket to _leftbrace
		'}' to _rightbrace
		_rightbracket to _rightbrace

StmtBlock	all instances of _leftbracket to _left brace
		all instances of _rightbracket to _rightbrace

appendded a semicolon to all the printf statements in toy.y
bracketed all the reduce statements

----

Added %left for _assignop, _or, _and, _equal, _notequal, _less, _lessequal, _greater, _greaterequal, _plus, _minus, _multiplication, _division, _mod, and _not
^ Got rid of most S/R conflicts involving mathematical and logical operators

Removed Actuals.

Reordered Stmts and VariableDecl to try to remove left recursion.

----

State 90 conflicts: 1 shift/reduce, 1 reduce/reduce
State 91 conflicts: 1 shift/reduce
State 119 conflicts: 1 shift/reduce
State 195 conflicts: 1 shift/reduce

State 90

   14 Type: _id .
   91 Lvalue: _id .
   94 Call: _id . _leftparen Exprs _rightparen
   95     | _id . _period _id _leftparen Exprs _rightparen
   96     | _id . _leftparen _rightparen
   97     | _id . _period _id _leftparen _rightparen

    _period     shift, and go to state 125
    _leftparen  shift, and go to state 126

    _period       [reduce using rule 91 (Lvalue)]
    _leftbracket  reduce using rule 14 (Type)
    _leftbracket  [reduce using rule 91 (Lvalue)]
    _id           reduce using rule 14 (Type)
    $default      reduce using rule 91 (Lvalue)

State 91

   43 VariableDecls: VariableDecl .
   44              | VariableDecl . VariableDecls

    _boolean  shift, and go to state 1
    _double   shift, and go to state 3
    _int      shift, and go to state 5
    _string   shift, and go to state 6
    _id       shift, and go to state 8

    _id       [reduce using rule 43 (VariableDecls)]
    $default  reduce using rule 43 (VariableDecls)

    VariableDecl   go to state 91
    Variable       go to state 12
    Type           go to state 48
    VariableDecls  go to state 127

State 119

   91 Lvalue: _id .
   94 Call: _id . _leftparen Exprs _rightparen
   95     | _id . _period _id _leftparen Exprs _rightparen
   96     | _id . _leftparen _rightparen
   97     | _id . _period _id _leftparen _rightparen

    _period     shift, and go to state 125
    _leftparen  shift, and go to state 126

    _period   [reduce using rule 91 (Lvalue)]
    $default  reduce using rule 91 (Lvalue)

State 195

   56 IfStmt: _if _leftparen Expr _rightparen Stmt .
   57       | _if _leftparen Expr _rightparen Stmt . _else Stmt

    _else  shift, and go to state 205

    _else     [reduce using rule 56 (IfStmt)]
    $default  reduce using rule 56 (IfStmt)

Attempt to reduce conflicts by introducing operator precedence for logical not, unary minus, array indexing, and field selection.

Adding %left _leftbracket _period

Didn't do anything.

Changing
   91 Lvalue: _id
   92       | Lvalue _leftbracket Expr _rightbracket
   93       | Lvalue _period _id
to
Lvalue		: _id 												{printf("[reduce 92]");}
		| _id Lvalue2											{printf("[reduce 92`]")};
Lvalue2		: _leftbracket Expr _rightbracket 								{printf("[reduce 93]");}
		| _period _id 											{printf("[reduce 94]");}
		| _leftbracket Expr _rightbracket Lvalue2							{printf("[reduce 93`]");}
		| _period _id Lvalue2										{printf("[reduce 94`]");};

Perhaps left-recursion is the issue.

I did eliminate the errors but new ones cropped up, though they may have the same state numbers, that is misleading.

State 90 conflicts: 1 shift/reduce
State 91 conflicts: 1 shift/reduce
State 196 conflicts: 1 shift/reduce

State 90

   14 Type: _id .
   91 Lvalue: _id .
   92       | _id . Lvalue2
   97 Call: _id . _leftparen Exprs _rightparen
   98     | _id . _period _id _leftparen Exprs _rightparen
   99     | _id . _leftparen _rightparen
  100     | _id . _period _id _leftparen _rightparen

    _period       shift, and go to state 125
    _leftparen    shift, and go to state 126
    _leftbracket  shift, and go to state 127

    _leftbracket  [reduce using rule 14 (Type)]
    _id           reduce using rule 14 (Type)
    $default      reduce using rule 91 (Lvalue)

    Lvalue2  go to state 128

State 91

   43 VariableDecls: VariableDecl .
   44              | VariableDecl . VariableDecls

    _boolean  shift, and go to state 1
    _double   shift, and go to state 3
    _int      shift, and go to state 5
    _string   shift, and go to state 6
    _id       shift, and go to state 8

    _id       [reduce using rule 43 (VariableDecls)]
    $default  reduce using rule 43 (VariableDecls)

    VariableDecl   go to state 91
    Variable       go to state 12
    Type           go to state 48
    VariableDecls  go to state 129

State 196

   56 IfStmt: _if _leftparen Expr _rightparen Stmt .
   57       | _if _leftparen Expr _rightparen Stmt . _else Stmt

    _else  shift, and go to state 208

    _else     [reduce using rule 56 (IfStmt)]
    $default  reduce using rule 56 (IfStmt)

Changing
    9 Type: _int
   10     | _double
   11     | _boolean
   12     | _string
   13     | Type _leftbracket _rightbracket
   14     | _id
to
Type 		: _int Type2											{printf("[reduce 9]");}
		| _double Type2 										{printf("[reduce 10]");}
		| _boolean Type2										{printf("[reduce 11]");}
		| _string Type2											{printf("[reduce 12]");}
		| _id Type2											{printf("[reduce 14]");}
 		| _int 												{printf("[reduce 9]");}
		| _double 											{printf("[reduce 10]");}
		| _boolean											{printf("[reduce 11]");}
		| _string											{printf("[reduce 12]");}
		| _id 												{printf("[reduce 14]");};
Type2		: _leftbracket _rightbracket									{printf("[reduce 13]");}
		| _leftbracket _rightbracket Type2								{printf("[reduce 13`]");};

Only two conflicts remain.

State 97 conflicts: 1 shift/reduce
State 203 conflicts: 1 shift/reduce

State 97

   49 VariableDecls: VariableDecl .
   50              | VariableDecl . VariableDecls

    _boolean  shift, and go to state 1
    _double   shift, and go to state 3
    _int      shift, and go to state 5
    _string   shift, and go to state 6
    _id       shift, and go to state 8

    _id       [reduce using rule 49 (VariableDecls)]
    $default  reduce using rule 49 (VariableDecls)

    VariableDecl   go to state 97
    Variable       go to state 12
    Type           go to state 54
    VariableDecls  go to state 135

State 203

   62 IfStmt: _if _leftparen Expr _rightparen Stmt .
   63       | _if _leftparen Expr _rightparen Stmt . _else Stmt

    _else  shift, and go to state 215

    _else     [reduce using rule 62 (IfStmt)]
    $default  reduce using rule 62 (IfStmt)

Going to attempt to remove left-recursion on VariableDecls and IfStmt

Conflict on state 97 might be unavoidable without changing the lexxer. The conflict is rooted in VariableDecl and if the Type is an _id.

The IfStmt conflict is a common one. The problem is that when the parser has read upto Stmt, it doesn't know whether to reduce the statement or shift the _else token. To fix this, we will introduce a precedence to make sure that the _else shift is preferred over the reduction.

Changing
IfStmt 		: _if _leftparen Expr _rightparen Stmt 								{printf("[reduce 56]");}
		| _if _leftparen Expr _rightparen Stmt _else Stmt 						{printf("[reduce 57]");};
to
%nonassoc THEN
%nonassoc _else
%%
IfStmt 		: _if _leftparen Expr _rightparen Stmt 			%prec THEN				{printf("[reduce 56]");}
		| _if _leftparen Expr _rightparen Stmt _else Stmt 						{printf("[reduce 57]");};

