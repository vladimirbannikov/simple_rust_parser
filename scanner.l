%{
// HEADERS
#include <stdlib.h>
#include "parser.h"

// variables maintained by the lexical analyser
int yyline = 1;
%}

%option noyywrap

%%

[ \t]+ {  }
\/\/.* {  }
\n { yyline++; }

"fn" { return FN; }

"let" { return LET; }
"mut" { return MUT; }
"true" { return number; }
"false" { return number; }
"if" { return IF; }
"else" { return ELSE; }
"while" { return WHILE; }

"!" { return '!'; }
"&&" { return and; }
"||" { return or; }
"==" { return eqt; }
"!=" { return neq; }
"<" { return lrt; }
">" { return grt; }
"<=" { return leq; }
">=" { return geq; }
"=" { return '='; }
"{" { return '{'; }
"}" { return '}'; }
"(" { return '('; }
")" { return ')'; }
";" { return ';'; }

"+" { return '+'; }
"-" { return '-'; }
"*" { return '*'; }
"/" { return '/'; }
"%" { return '%'; }

":" {return ':';}
"&" {return '&';}
"->" {return RIGHT_ARROW;}

"const" {return CONST;}
"return" {return RETURN;}

"break" {return BREAK;}
"continue" {return CONTINUE;}


[0-9]+ { return number; }
[a-zA-Z_][a-zA-Z_0-9]* {  return ident; }
 [a-zA-Z_][a-zA-Z_0-9]*! { return macro_ident; }
\".*\" { return string; }


.  { yyerror("Lexer: unexpected character"); }
%%