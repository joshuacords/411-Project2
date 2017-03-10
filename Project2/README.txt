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

Added %left for _assignop, _or, _and, _equal, _notequal, _less, _lessequal, _greater, _greaterequal, _plus, _minus, _multiplication, _division, _mod, and _not

