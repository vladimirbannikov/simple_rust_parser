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
			
			
%token			FN attribute
%token			LET MUT IF ELSE WHILE LOOP FOR IN
			
%token			lit_integer lit_real ident line_string line_bstring multiline_string multiline_bstring macro_ident char_
%token			'+' '-' '*' '/' '%'
%token			'!' and or eqt grt geq lrt leq neq

%token			'=' commentline comment_block

%token			'(' ')' '{' '}' '[' ']' ';' ','

%token 			':' '&' RIGHT_ARROW '#'

%token			CONST RETURN BREAK CONTINUE DOTDOT

%token 			resolution_operator '|'
			

%left			and or '!' DOTDOT '='
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
	| comment_block
	| attribute
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

array_indexing:
	ident '[' expr ']'
;

maybe_exprs:
	exprs
	| %empty
;

exprs:
	expr
	| exprs ',' expr
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
	| statements array_rvalue
;

statements:   	
	statements statement 
	|	%empty
;	
  
		
statement:  
	expr ';'
	| assignment 
	| if_statement 
	| cycle_statement 
	| comments 
	| return_token_expr
	| '{' statements '}'
;

return_token_expr:
	RETURN ';';
	| RETURN expr ';'
	| RETURN array_rvalue ';'
		
		
assignment:
	LET lvalue maybe_assignment_type '=' maybe_rvalue_prefix rvalue ';'  
	| LET MUT lvalue maybe_assignment_type '=' maybe_rvalue_prefix rvalue ';'
	| '*' lvalue maybe_assignment_type '=' maybe_rvalue_prefix rvalue ';'
	| lvalue maybe_assignment_type '=' maybe_rvalue_prefix rvalue ';'
;


lvalue:
	ident
	| array_indexing 
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
	| IF expr '{' statements '}' ELSE '{' statements '}' 
	| IF expr '{' statements '}' ELSE if_statement 
;		


cycle_statement:
	WHILE expr '{' statements_in_cycle '}' 
	| LOOP '{' statements_in_cycle '}'
	| FOR ident IN expr '{' statements_in_cycle '}'
; 


statements_in_cycle:   	
	statements_in_cycle statement_in_cycle 
	|	%empty
;

statement_in_cycle:  
	expr ';'
	| assignment 
	| if_statement 
	| cycle_statement 
	| comments 
	| return_token_expr
	| '{' statements_in_cycle '}'
	| BREAK ';'
	| CONTINUE ';'
;


expr:
	expr_binary_operation
	| DOTDOT
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
	| expr_binary_operation DOTDOT expr_binary_operation
	| expr_binary_operation DOTDOT '=' expr_binary_operation
	| expr_binary_operation DOTDOT '=' '*' expr_binary_operation
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
	| char_
	| function_call
	| macro_function_call
	| array_indexing
	| method_or_field
;

number:
	lit_integer 
	| lit_real
;

method_or_field:
	ident resolution_operator method_or_field_2
	| ident '.' method_or_field_2
	| function_call resolution_operator method_or_field_2
	| function_call '.' method_or_field_2
;

method_or_field_2:
	ident
	| function_call
	| ident resolution_operator method_or_field_2
	| ident '.' method_or_field_2
	| function_call resolution_operator method_or_field_2
	| function_call '.' method_or_field_2
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
	expr
	| array_rvalue
	| '&' expr_for_passing
	| '&' MUT expr_for_passing
	| '|' ident '|' non_brackets_expr
	| '|' ident '|' '{' statements '}'
	| '|' ident '|' '{' return_expression '}'
;


expr_for_passing:
	non_brackets_expr
	| '(' expr ')'
;


non_brackets_expr:
	number
	| ident
	| function_call
	| macro_function_call
	| string
	| char_ 
	| method_or_field
;

string:
	line_string
	| line_bstring
	| multiline_string
	| multiline_bstring
;


comments:   	commentline
;

%%

void yyerror(const char* err) {
    printf("Parser line %d: %s - '%s'\n", yyline, err, yytext);
}
