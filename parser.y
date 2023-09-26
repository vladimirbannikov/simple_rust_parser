%code requires {
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    extern int yylex();
    extern int yyline;
    extern char* yytext;
    extern FILE* yyin;
    extern void yyerror(const char* msg);
}
			
			
%token			FN
%token			LET MUT IF ELSE WHILE
			
%token			number ident string macro_ident
%token			'+' '-' '*' '/' '%'
%token			'!' and or eqt grt geq lrt leq neq

%token			'=' commentline quote

%token			'(' ')' '{' '}' '[' ']' ';'

%token 			':' '&' RIGHT_ARROW

%token			CONST RETURN BREAK CONTINUE
			

%left			and or '!'
%left			lrt grt eqt neq leq geq
%left			'*' '/' '%' 
%left			'+' '-'		
			
			
%start crate;
			
			
%%

crate: 	
	global_items
	|  %empty
;

global_items:
	global_item               
	| global_items global_item  
;

global_item:
	function
;

function:
	FN ident '(' maybe_params ')' maybe_return_type  '{' statements '}'
	| FN ident '(' maybe_params ')' maybe_return_type  '{' return_expression '}'
;

maybe_params
	: params
	| %empty
;

params
	: param                
	| params ',' param     
;

param
: pattern ':' func_params_type   
;

pattern:
	ident 
;

func_params_type:
	raw_type
	| '&' raw_type
	| '&' MUT raw_type
	| '*' maybe_mut_or_const raw_type
;

maybe_mut_or_const
: MUT  
| CONST  
| %empty 
;

raw_type:
	ident
	| array_or_slice_type
;

array_or_slice_type:
	'[' ident ']'
	'[' ident ';' number ']'
;

array_rvalue:
	'[' maybe_exprs ']'
	| '[' expr ';' number ']'
;

array_subscription:
	ident '[' expr ']'
;

maybe_exprs:
	expr
	| expr ',' expr
	| %empty
;

maybe_return_type:
	RIGHT_ARROW func_return_type
	| %empty
;

func_return_type:
	raw_type
	| '&' raw_type
	| '&' MUT raw_type
;

/*
{ x + 1 }
*/
return_expression:
	statements expr
;

statements:   	
	statements statement 
	|	%empty
;	
  
		
statement:  
	expr ';'
	| assignment 
	| if_statement 
	| while_statement 
	| comments 
	| return_token_expr
	| '{' statements '}'
;

return_token_expr:
	RETURN ';';
	| RETURN expr ';'
		
		
assignment:
	LET lvalue maybe_assignment_type '=' maybe_rvalue_prefix rvalue ';'  
	| LET MUT lvalue maybe_assignment_type '=' maybe_rvalue_prefix rvalue ';'
	| '*' lvalue maybe_assignment_type '=' maybe_rvalue_prefix rvalue ';'
	| lvalue maybe_assignment_type '=' maybe_rvalue_prefix rvalue ';'
;

lvalue:
	ident
	| array_subscription 
;

maybe_rvalue_prefix:
	'&'
	| '&' MUT
	| %empty
;

rvalue:
	expr
	| array_rvalue
	| '{' return_expression '}'
	| '{' statements '}'
;


maybe_assignment_type:
	':' raw_type
	| %empty
 ;
		
		
if_statement:
		IF expr '{' statements '}' 
	| 	IF expr '{' statements '}' ELSE '{' statements '}' 
	| 	IF expr '{' statements '}' ELSE if_statement 
;		


while_statement:
		WHILE expr '{' statements '}' 
; 


expr:
	expr_binary_operation
;

//expr_comparison_operation:
//	expr_comparison_operation comparison_operator expr_comparison_operation
//
//	| expr_token
//;


expr_binary_operation:
	expr_binary_operation and expr_binary_operation
	| expr_binary_operation or expr_binary_operation
	| expr_binary_operation eqt expr_binary_operation
	| expr_binary_operation neq expr_binary_operation
	| expr_binary_operation '+' expr_binary_operation
	| expr_binary_operation '-' expr_binary_operation
	| expr_binary_operation '*' expr_binary_operation
	| expr_binary_operation '/' expr_binary_operation
	| expr_binary_operation '%' expr_binary_operation
	| expr_binary_operation grt expr_binary_operation
	| expr_binary_operation geq expr_binary_operation
	| expr_binary_operation lrt expr_binary_operation
	| expr_binary_operation leq expr_binary_operation
	| '(' expr_binary_operation ')'
	| expr_token
;

/*binary_operator:
	default_binary_operator
	| comparison_operator
;

default_binary_operator:
	'+'
	| '-'
	| '*'
	| '/'
	| '%'
	| and
	| or
	| eqt
	| neq
;

comparison_operator:
	grt
	| geq
	| lrt
	| leq
;*/

expr_token:
	number 
	| '-' number 
	| ident 
	| string
	| function_call
	| macro_function_call
	| array_subscription
;

macro_function_call:
	macro_ident '(' maybe_args ')'


function_call:
	ident '(' maybe_args ')'
;


maybe_args:
	args
	| %empty
;


args
	: arg                
	| args ',' arg     
;


arg:
	expr_for_passing
	| '&' expr_for_passing
	| '&' MUT expr_for_passing
;


expr_for_passing:
	non_brackets_expr
	| '(' expr ')'
;


non_brackets_expr:
	number
	| array_rvalue
	| ident
	| function_call
	| macro_function_call
	| string
;


comments:   	commentline
;

%%

void yyerror(const char* err) {
    printf("Parser line %d: %s - '%s'\n", yyline, err, yytext);
}
