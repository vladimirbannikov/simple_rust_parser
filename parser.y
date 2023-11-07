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
%token			LET MUT IF ELSE WHILE LOOP FOR IN
			
%token			lit_integer lit_real ident line_string line_bstring multiline_string multiline_bstring macro_ident char_ bchar_
%token			'+' '-' '*' '/' '%'
%token			'!' and or eqt '>' geq '<' leq neq '?' BIT_OR_ASSIGN XOR_ASSIGN XOR EXTERN_TOK

%token			'='

%token			'(' ')' '{' '}' '[' ']' ';' ','

%token 			':' '&' RIGHT_ARROW '#'

%token			CONST RETURN BREAK CONTINUE DOTDOT USE AS PUB '\'' SELF REF UNSAFE TYPE_TOK MOD_TOKEN STATIC_TOKEN METK_TOKEN

%token	 		ENUM_TOK STRUCT_TOK WHERE MATCH MATCH_ARROW TRAIT IMPL

%token 			resolution_operator '|' '_' PLUS_OR_ASSIGN MINUS_OR_ASSIGN MUL_OR_ASSIGN DIV_OR_ASSIGN 		

%left			and or XOR '!' DOTDOT PLUS_OR_ASSIGN MINUS_OR_ASSIGN MUL_OR_ASSIGN DIV_OR_ASSIGN '=' BIT_OR_ASSIGN XOR_ASSIGN
%left			'&' '|' '<' '>' eqt neq leq geq
%left			'*' '/' '%' 
%left			'+' '-'	AS
			
			
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
	| PUB function
	| PUB UNSAFE function
	| UNSAFE function
	| PUB EXTERN_TOK function
	| EXTERN_TOK function
	| PUB EXTERN_TOK line_string function
	| EXTERN_TOK line_string function
	| attribute
	| use_sequence
	| enum
	| PUB enum
	| struct
	| PUB struct 
	| assignment
	| PUB assignment
	| trait
	| PUB trait
	| PUB UNSAFE trait
	| UNSAFE trait
	| implementation
	| PUB type_seq
	| type_seq
	| module
	| PUB module
	| crate_seq
	| macro_func
;

macro_func:
	macro_ident '{' statements '}'
;

attribute:
	'#' '[' attribute_inside_params ']'
	| '#' '!' '[' attribute_inside_params ']'
;

attribute_inside_params:
	attribute_inside_param
	| attribute_inside_params ',' attribute_inside_param
;

attribute_inside_param:
	ident_sequence
	| number
	| ident_sequence '(' attribute_inside_params ')'
	| ident_sequence '=' attribute_inside_param_assign_rvalue
;

attribute_inside_param_assign_rvalue:
	ident
	| string
	| number
;



module:
	MOD_TOKEN ident ';'
	| MOD_TOKEN ident '{' global_items '}'
;

type_seq:
	TYPE_TOK ident ';'
	| TYPE_TOK ident '=' ident_sequence maybe_generic ';'
;

implementation:
	IMPL maybe_generic ident_sequence maybe_generic maybe_for '{' function_defenition_sequence '}'
;

ident_sequence:
	ident
	| ident_sequence resolution_operator ident
;

maybe_for:
	FOR ident_sequence maybe_generic
	| %empty
;

function_defenition_sequence:
	function_def_token
	| function_defenition_sequence function_def_token
;

function_def_token:
	PUB function
	| function
	| PUB UNSAFE function
	| UNSAFE function
	| attribute
	| type_seq
;


trait:
	TRAIT ident '{' trait_inside_seq '}'
	| TRAIT ident '{' '}'
;

trait_inside_seq:
	trait_inside_tok
	| trait_inside_seq trait_inside_tok
;

trait_inside_tok:
	FN ident maybe_generic '(' maybe_params ')' maybe_return_type ';'
	| attribute
	| PUB FN ident maybe_generic '(' maybe_params ')' maybe_return_type ';'
	| PUB UNSAFE FN ident maybe_generic '(' maybe_params ')' maybe_return_type ';'
	| UNSAFE FN ident maybe_generic '(' maybe_params ')' maybe_return_type ';'
	| type_seq
	| PUB type_seq
;

crate_seq:
	EXTERN_TOK ident ident_sequence ';'
;

struct:
	STRUCT_TOK ident maybe_generic '{' struct_fields '}'
	| STRUCT_TOK ident maybe_generic '{' struct_fields ',' '}'
	| STRUCT_TOK ident maybe_generic maybe_args_for_struct ';'
;

maybe_args_for_struct:
	%empty
	| '(' maybe_args_for_struct_sequence ')'
;

maybe_args_for_struct_sequence:
	%empty
	| types_sequences
	| PUB types_sequences
	| '(' ')'
;

types_sequences:
	raw_type ',' types_sequences
	| raw_type
;

struct_fields:
	struct_field               
	| struct_fields ',' struct_field 
;

//struct Electron;
//struct Colorss(i32, i32, i32);

struct_field:
	maybe_attribute maybe_pub ident ':' type_or_generic_for_struct
;

maybe_attribute:
	%empty
	| attribute
;

type_or_generic_for_struct:
	maybe_mut_for_struct struct_type_ident maybe_generic
;

struct_type_ident:
	struct_type_ident_token resolution_operator struct_type_ident
	| struct_type_ident_token
;

struct_type_ident_token:
	raw_type
	| '(' ')'
;

maybe_mut_for_struct:
	MUT
	| '&' MUT
	| '&'
	| '*'
	| '*' MUT
	| '&' '\'' ident
	| '&' '\'' STATIC_TOKEN
	| '*' '\'' ident
	| '&' '\'' ident MUT
	| '*' '\'' ident MUT
	| %empty
;

maybe_pub:
	PUB
	| %empty
;


enum:
	ENUM_TOK ident maybe_generic '{' enum_fields '}'
	| ENUM_TOK ident maybe_generic '{' enum_fields ',' '}'
;

enum_fields
	: enum_field               
	| enum_fields ',' enum_field 
;

enum_field:
	maybe_attribute enum_field_token
;

enum_field_token:
	ident maybe_generic
	| ident ':' raw_type maybe_generic
	| ident '{' enum_fields '}'
	| ident '(' enum_fields ')'
	| ident '=' ident
	| ident '=' number
;


unsafe_statements_block:
	UNSAFE '{' statements '}'
;

unsafe_return_block:
	UNSAFE '{' return_expression '}'
;


maybe_generic:
	generic
	| %empty
;

generic:
	'<' generic_seq '>'
;

generic_seq:
	generic_seq ',' generic_seq
	| maybe_ident '<' generic_seq '>'
	| maybe_ident '(' generic_seq_or_empty ')'
	| generic_symbol
;

generic_seq_or_empty:
	generic_seq
	| %empty
;


maybe_ident:
	ident
	| %empty
;

generic_types_sequence:
	raw_type
	| ident_sequence resolution_operator raw_type
;

generic_symbol:
	generic_types_sequence
	| '&' generic_types_sequence
	| generic_types_sequence ':' generic_types_sequence
	| '_'
	| '\'' generic_types_sequence
	| '\'' '_'
	//| '(' ')'
;

use_sequence:
	USE use_left ';'
	| USE use_left AS use_right ';'
	//| USE use_left '{' use_tuple_seq '}' ';'
;

use_left:
	use_left_token resolution_operator use_left
	| use_left_token 
;

use_left_token:
	ident
	| SELF
	| '{' use_args '}'
	| '*'
;

use_args:
	ident ',' use_args
	| ident
	| SELF ',' use_args
	| SELF
	| ident AS ident ',' use_args
;

use_right:
	ident
;

function:
	FN ident maybe_generic '(' maybe_params ')' maybe_return_type  '{' statements '}'
	| FN ident maybe_generic '(' maybe_params ')' maybe_return_type  '{' return_expression '}'
;

maybe_params:
	params
	| params ','
	| DOTDOT
	| %empty
;

params
	: param                
	| params ',' param     
;

param: 
	pattern ':' func_param_type_or_generic   
	| maybe_mut_for_fn_params SELF
	| MUT SELF
	| '_'
;

func_param_type_or_generic:
	maybe_mut_for_struct fn_params_type_ident maybe_generic
;

fn_params_type_ident:
	fn_params_type_ident_token resolution_operator fn_params_type_ident
	| fn_params_type_ident_token
;

fn_params_type_ident_token:
	raw_type
;

maybe_mut_for_fn_params:
	%empty
	| '&'
	| '&' MUT
	| '*' maybe_mut_or_const
;

pattern:
	ident 
	| '_'
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
	| '[' ident ';' expr ']'
	| '[' '&' ident ';' expr ']'
	| ident '[' ident ';' expr ']'
;

array_slice:
	'[' expr ',' expr ']'
;

array_rvalue:
	'[' maybe_exprs ']'
	| '[' expr ';' expr ']'
;

array_indexing:
	ident '[' expr ']'
	| ident '[' DOTDOT ']'
	| ident '[' expr_binary_operation DOTDOT ']'
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
	| RIGHT_ARROW tuple_return_types
	| RIGHT_ARROW '!'
	| %empty
;

tuple_return_types:
	'(' types_sequence_return_tuple ')'
;

types_sequence_return_tuple:
	raw_type maybe_generic ',' types_sequence_return_tuple
	| raw_type maybe_generic
;

func_return_type:
	func_param_type_or_generic
	| func_param_type_or_generic WHERE where_types_sequence
;

where_types_sequence:
	where_types_sequence_ident
	| where_types_sequence ','  where_types_sequence_ident
;

where_types_sequence_ident:
	fn_params_type_ident_token ':' expr
	| fn_params_type_ident_token ':' function_call RIGHT_ARROW func_return_type
;

/*
{ x + 1 }
*/
return_expression:
	statements expr
	| statements RETURN
	| statements array_rvalue
	| statements assignment_without_semicolon
	| statements lvalue_outside_brackets '{' inside_brackets_types_rvalue '}'
	| statements lvalue_outside_brackets '{' inside_brackets_types_rvalue ',' '}'
;

statements:   	
	statements statement 
	|	%empty
;	
  
		
statement:  
	expr ';'
	| unsafe_return_block
	| unsafe_statements_block
	| expr '?' ';'
	| assignment 
	| attribute assignment 
	| if_statement 
	| cycle_statement 
	| attribute cycle_statement
	| return_token_expr
	| '{' statements '}'
	| match_statement
	| use_sequence
	| ';'
	| BREAK maybe_metk maybe_exprs ';'
	| CONTINUE  maybe_metk ';'
	| metk_statement
	| PUB EXTERN_TOK function
	| EXTERN_TOK function
;


match_statement:
	MATCH match_ident '{' match_inside_statements '}'
	| MATCH match_ident '{' match_inside_statements ',' '}'
;


match_inside_statements:  	
	match_inside_statement
	| match_inside_statements ',' match_inside_statement 
;	

match_inside_statement:
	expr_or_unsafe_expr MATCH_ARROW rvalue
	| '_' MATCH_ARROW rvalue
	| expr_or_unsafe_expr MATCH_ARROW RETURN rvalue
	| '_' MATCH_ARROW RETURN rvalue
	| expr_or_unsafe_expr MATCH_ARROW BREAK
	| '_' MATCH_ARROW BREAK
	| expr_or_unsafe_expr MATCH_ARROW CONTINUE
	| '_' MATCH_ARROW CONTINUE
;

match_ident:
	expr_or_unsafe_expr
;


return_token_expr:
	RETURN ';'
	| RETURN expr_or_unsafe_expr ';'
	| RETURN array_rvalue ';'
;	

assignment_without_semicolon:
	LET lvalue maybe_assignment_type assignment_operator maybe_rvalue_prefix assignment_without_semicolon_rvalue  
	| LET MUT lvalue maybe_assignment_type assignment_operator maybe_rvalue_prefix assignment_without_semicolon_rvalue 
	| LET MUT lvalue
	| LET lvalue
	| pointer maybe_assignment_type assignment_operator maybe_rvalue_prefix assignment_without_semicolon_rvalue 
	| lvalue maybe_assignment_type assignment_operator maybe_rvalue_prefix assignment_without_semicolon_rvalue 
;

assignment_operator:
	'='
	| XOR_ASSIGN
	| BIT_OR_ASSIGN
	| PLUS_OR_ASSIGN 
	| MINUS_OR_ASSIGN 
	| MUL_OR_ASSIGN 
	| DIV_OR_ASSIGN
;

assignment_without_semicolon_rvalue:
	ident
	| function_call
	| method_or_field
;
		
assignment:
	LET lvalue maybe_assignment_type assignment_operator maybe_rvalue_prefix rvalue ';'  
	| CONST ident ':' assignment_type assignment_operator maybe_rvalue_prefix rvalue ';'
	| STATIC_TOKEN MUT ident ':' assignment_type assignment_operator maybe_rvalue_prefix rvalue ';'
	| LET MUT lvalue maybe_assignment_type assignment_operator maybe_rvalue_prefix rvalue ';'
	| LET lvalue maybe_assignment_type assignment_operator closure ';'
	| LET lvalue ':' assignment_type ';'
	| LET MUT lvalue ':' assignment_type ';'
	| pointer maybe_assignment_type assignment_operator maybe_rvalue_prefix rvalue ';'
	| lvalue maybe_assignment_type assignment_operator maybe_rvalue_prefix rvalue ';'
	| LET MUT lvalue ';'
	| LET lvalue ';'
	| STATIC_TOKEN REF ident ':' assignment_type assignment_operator maybe_rvalue_prefix rvalue ';'
;


lvalue:
	ident
	| function_call
	| method_or_field
	| SELF
	| array_indexing 
	| tuple_lvalue
	| '_'
;

tuple_lvalue:
	'(' tuple_lvalue_ident_seq ')'
;

tuple_lvalue_ident_seq:
	tuple_lvalue_ident
	| tuple_lvalue_ident ',' tuple_lvalue_ident_seq
;

tuple_lvalue_ident:
	maybe_tuple_lvalue_ident_prefix ident
	| maybe_tuple_lvalue_ident_prefix method_or_field
;

maybe_tuple_lvalue_ident_prefix:
	MUT
	| '&' MUT
	| '&'
	| %empty
;

maybe_rvalue_prefix:
	'&'
	| '&' MUT
	| %empty
;

rvalue:
	expr
	| unsafe_expr
	| array_rvalue
	| '{' return_expression '}'
	| '{' statements '}'
	|  lvalue_outside_brackets '{' inside_brackets_types_rvalue '}'
	|  lvalue_outside_brackets '{' inside_brackets_types_rvalue ',' '}'
	| match_statement
	| method_or_field '?'
	| function_call '?'
	| if_statement
	| '(' ')'
	| cycle_statement
;

lvalue_outside_brackets:
	ident
	| method_or_field
;


inside_brackets_types_rvalue:
	inside_brackets_types_rvalue_ident
	| inside_brackets_types_rvalue ',' inside_brackets_types_rvalue_ident
;

inside_brackets_types_rvalue_ident:
	inside_brackets_types_rvalue_ident_left
	| inside_brackets_types_rvalue_ident_left ':' expr
	| inside_brackets_types_rvalue_ident_left ':' '(' ')'
;

inside_brackets_types_rvalue_ident_left:
	method_or_field
	| ident
	| function_call
	| DOTDOT method_or_field
;


maybe_assignment_type:
	':' assignment_type_seq
	| ':' '(' assignment_type_seq ')'
	| %empty
 ;

 assignment_type_seq:
	assignment_type ',' assignment_type_seq
	| assignment_type
 ;


assignment_type:
	raw_type
	| '&' raw_type
	| '&' '\'' STATIC_TOKEN raw_type
	| CONST raw_type
	| '*' CONST raw_type
	| ident_sequence generic
;

		
if_statement:
	if_expr_statement
	| if_let_statement
;

if_let_statement:
	IF assignment_without_semicolon '{' statements '}' 
	| IF assignment_without_semicolon '{' statements '}' ELSE '{' statements '}' 
	| IF assignment_without_semicolon '{' statements '}' ELSE if_statement

	| IF assignment_without_semicolon '{' return_expression '}' 
	| IF assignment_without_semicolon '{' return_expression '}' ELSE '{' return_expression '}' 
	| IF assignment_without_semicolon '{' return_expression '}' ELSE if_statement
;

if_expr_statement:
	IF expr_or_unsafe_expr '{' statements '}' 
	| IF expr_or_unsafe_expr '{' statements '}' ELSE '{' statements '}' 
	| IF expr_or_unsafe_expr '{' statements '}' ELSE if_statement 

	| IF expr_or_unsafe_expr '{' return_expression '}' 
	| IF expr_or_unsafe_expr '{' return_expression '}' ELSE '{' return_expression '}' 
	| IF expr_or_unsafe_expr '{' return_expression '}' ELSE if_statement 
;	

metk_statement:
	METK_TOKEN ':' cycle_statement
;

maybe_metk:
	%empty
	| METK_TOKEN
;

cycle_statement:
	WHILE condition '{' statements '}' 
	| LOOP '{' statements '}'
	| FOR ident IN condition '{' statements '}'
; 

condition:
	expr_or_unsafe_expr
	| assignment_without_semicolon
;

expr_or_unsafe_expr:
	expr
	| unsafe_expr
;


expr:
	expr_binary_operation
	| pointer
	//| unsafe_expr
;

unsafe_expr:
	unsafe_expr neq unsafe_expr
	| unsafe_expr neq expr_binary_operation
	| expr_binary_operation neq unsafe_expr
	//| unsafe_expr AS maybe_mut_for_fn_params type_for_as_seq
	| unsafe_return_block
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
	| expr_binary_operation '>' expr_binary_operation
	| expr_binary_operation geq expr_binary_operation
	| expr_binary_operation '<' expr_binary_operation
	| expr_binary_operation leq expr_binary_operation
	| expr_binary_operation '|' expr_binary_operation
	| expr_binary_operation '&' expr_binary_operation
	| expr_binary_operation '<' '<' expr_binary_operation
	| expr_binary_operation '>' '>' expr_binary_operation
	| expr_binary_operation XOR expr_binary_operation
	| expr_binary_operation DOTDOT expr_binary_operation
	| expr_binary_operation DOTDOT '=' expr_binary_operation
	| expr_binary_operation DOTDOT '=' '*' expr_binary_operation
	| '(' expr_binary_operation ')'
	| '!' expr_binary_operation
	//| UNSAFE '{' return_expression '}'
	| borrow
	| expr_binary_operation AS maybe_mut_for_fn_params type_for_as_seq
	| expr_token
;

pointer:
	'*' expr_binary_operation
;

borrow:
	'&' expr_binary_operation
	| '&' '*' expr_binary_operation
;

type_for_as_seq:
	raw_type
	| '_'
	| '(' assignment_type_seq ')'
	| '(' ')'
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
	| SELF
	| string 
	| char_
	| bchar_
	| function_call
	| macro_call
	| array_indexing
	| array_slice
	| method_or_field
	| '(' args ')'
	| '(' args ',' ')'
	| DOTDOT method_or_field
	| resolution_operator method_or_field
;

number:
	lit_integer 
	| lit_real
;

method_or_field:
	method_or_field_token resolution_operator method_or_field_2
	| method_or_field_token '.' method_or_field_2
	| string '.' method_or_field_2
;

method_or_field_2:
	method_or_field_token
	| method_or_field_token resolution_operator method_or_field_2
	| method_or_field_token '.' method_or_field_2
;

method_or_field_token:
	ident
	| SELF
	| function_call
	| array_indexing
	| generic_function_call
;

generic_function_call:
	'<' array_or_slice_type '>' '(' maybe_args ')'
	| '<' ident '>' '(' maybe_args ')'
	| '<' ident ',' ident '>' '(' maybe_args ')'
;

macro_call:
	macro_ident '(' maybe_args ')'
	| macro_ident '[' maybe_args ']'
;

function_call:
	ident '(' maybe_args ')'
;


maybe_args:
	args
	| args ','
	| '(' ')'
	| %empty
;


args
	: arg                
	| args ',' arg     
;


arg:
	expr
	| DOTDOT
	| REF expr
	| '_'
	| array_rvalue
	| REF array_rvalue
	| '&' MUT array_rvalue
	| '&' MUT expr_for_passing
	|  MUT expr_for_passing
	|  lvalue_outside_brackets '{' inside_brackets_types_rvalue '}'
	|  lvalue_outside_brackets '{' inside_brackets_types_rvalue ',' '}'
	| closure
;


closure:
	 '|' closure_seq '|' expr
	| '|' closure_seq '|' '{' statements '}'
	| '|' closure_seq '|' '{' return_expression '}'
	| '|' closure_seq '|' RIGHT_ARROW maybe_rvalue_prefix lvalue_outside_brackets '{' inside_brackets_types_rvalue '}'
	| '|' closure_seq '|' RIGHT_ARROW maybe_rvalue_prefix lvalue_outside_brackets '{' inside_brackets_types_rvalue ',' '}'
	| '|' closure_seq '|' RIGHT_ARROW raw_type '{' statements '}'
;

//maybe_assignment_type

closure_seq:
	closure_seq_token
	| closure_seq ',' closure_seq_token
;

closure_seq_token:
	lvalue maybe_assignment_type
;


expr_for_passing:
	non_brackets_expr
	| '(' expr ')'
;


non_brackets_expr:
	number
	| SELF
	| array_indexing
	| ident
	| function_call
	| macro_call
	| string
	| char_ 
	| bchar_
	| method_or_field
;

string:
	line_string
	| line_bstring
	| multiline_string
	| multiline_bstring
;

%%


void yyerror(const char* err) {
    printf("Parser line %d: %s - '%s'\n", yyline, err, yytext);
}
