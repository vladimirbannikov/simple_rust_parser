 // Use "%code requires" to make declarations go
 // into both parser.c and parser.h
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
			
			
//  Tokens
%token			fn
%token			let mut IF ELSE WHILE println readln
			
%token			number symbol string
%token			plus minus mult divi mod
%token			not and or eqt grt geq lrt leq neq

%token			equal commentline quote

%token			'(' ')' '{' '}' ';'
			
// Operator associativity & precedence
%left			and or not
%left			lrt grt eqt neq leq geq
%left			plus minus
%left			mult divi mod

			
// Types/values in association to grammar symbols.			
%union {
    int number;
    char* string;
}		
			
%type	<number>	number
%type	<string>	string
					
			
			
 // Root-level grammar symbol
%start program;
			
			
%%

program: 	main { } ;
		
main: 		fn fmain '(' ')' '{' statements '}' {} 
		
statements:   	statement statements {}
	|	{  }
  
		
statement:   	assignment | if_statement | while_statement | io_func | comments ;
		
		
assignment:
		let symbol equal expr ';' {}
	| 	let mut symbol equal expr ';' {}
	| 	symbol equal expr ';' {}
         
		
		
if_statement:
		IF expr '{' statements '}' {}
	| 	IF expr '{' statements '}' ELSE '{' statements '}' {}
	| 	IF expr '{' statements '}' ELSE if_statement {}
         	
		

while_statement:
		WHILE expr '{' statements '}' {} 
		
		
io_func:  	fprintln | freadln ;
	       	

		
fprintln:
		println '(' string ')' ';' {}
	| 	println '(' symbol ')' ';' {}
	| 	println '(' number ')' ';' {}

		
freadln:  	readln '(' symbol ')' ';' {}
	|	let symbol equal readln '(' ')' ';' {}


expr:
		expr and expr {}
	| 	expr or  expr {}
	| 	expr eqt expr {}
	| 	expr neq expr {}
	| 	expr grt expr {}
	| 	expr geq expr {}
	| 	expr lrt expr {}
	| 	expr leq expr {}
		
	|	expr plus expr {}
	| 	expr mult expr {}
	| 	expr minus expr {}
	| 	expr divi expr {}
	| 	expr mod expr {}

	| 	number {}
	| 	minus number {}
	| 	symbol {}
         	
comments:   	commentline

%%

void yyerror(const char* err) {
    printf("Parser line %d: %s - '%s'\n", yyline, err, yytext);
}
