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
%token			LET MUT IF ELSE WHILE println readln
			
%token			number ident string macro_ident
%token			'+' '-' '*' '/' '%'
%token			'!' and or eqt grt geq lrt leq neq

%token			'=' commentline quote

%token			'(' ')' '{' '}' ';'

%token 			':' '&' RIGHT_ARROW

%token			CONST RETURN BREAK CONTINUE
			

%left			and or '!'
%left			lrt grt eqt neq leq geq
%left			'+' '-'
%left			'*' '/' '%' 

			
			
%union {
    int number;
    char* string;
}		
			
%type	<number>	number
%type	<string>	string
					
			
			

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
;

maybe_params
	: params
//	| params ','
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
	| array_or_slice
;

array_or_slice:
	'[' ident ']'
	'[' ident ';' number ']'
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
		
		
statements:   	
	statement statements 
	|	%empty
;
  
		
statement:   	
	assignment 
	| if_statement 
	| while_statement 
	| comments 
	| return_expr
;

return_expr:
	RETURN ';';
	| RETURN expr ';'
		
		
assignment:
		LET ident '=' expr ';' 
	| 	LET MUT ident '=' expr ';' 
	| 	ident '=' expr ';' 
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
	expr and expr 
	| expr or  expr 
	| expr eqt expr 
	| expr neq expr 
	| expr grt expr 
	| expr geq expr 
	| expr lrt expr 
	| expr leq expr 
		
	| expr '+' expr 
	| expr '*' expr 
	| expr '-' expr 
	| expr '/' expr 
	| expr '%' expr 

	| number 
	| '-' number 
	| ident 
	| string
	| function_call
	| macro_function_call
;

macro_function_call:
	macro_ident '(' maybe_args ')'

function_call:
	ident '(' maybe_args ')'
;

maybe_args
	: args
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
	| '(' only_with_brackets_expr_additional_brackets ')'
;

non_brackets_expr:
	number
	| array_or_slice
	| ident
	| function_call
	| macro_function_call
	| string
;

only_with_brackets_expr_additional_brackets:
	expr
	| '(' only_with_brackets_expr_additional_brackets ')'



comments:   	commentline
;

%%

void yyerror(const char* err) {
    printf("Parser line %d: %s - '%s'\n", yyline, err, yytext);
}
