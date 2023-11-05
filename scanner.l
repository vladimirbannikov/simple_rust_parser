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
"true" { return lit_integer; }
"false" { return lit_integer; }
"if" { return IF; }
"else" { return ELSE; }

"while" { return WHILE; }
"loop" { return LOOP; }
"for" { return FOR; }
"in" { return IN; }

".." { return DOTDOT; }
"." { return '.'; }
"::" {return resolution_operator;}

"!" { return '!'; }
"&&" { return and; }
"|" { return '|'; }
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
"[" { return '[';}
"]" { return ']';}
";" { return ';'; }
"," { return ','; }

"+" { return '+'; }
"-" { return '-'; }
"*" { return '*'; }
"/" { return '/'; }
"%" { return '%'; }

"#".*"\n" { return attribute; }

":" {return ':';}
"&" {return '&';}
"->" {return RIGHT_ARROW;}

"const" {return CONST;}
"return" {return RETURN;}

"break" {return BREAK;}
"continue" {return CONTINUE;}


0x[0-9a-fA-F_]+([eEuif][-\+]?[0-9_]+)?   { return lit_integer; }
0o[0-7_]+([eEuif][-\+]?[0-9_]+)?         { return lit_integer; }
0b[01_]+([eEuif][-\+]?[0-9_]+)?         { return lit_integer; }
[0-9][0-9_]*([eEuif][-\+]?[0-9_]+)?      { return lit_integer; }
[0-9][0-9_]*\.[0-9][0-9_]*([eE][-\+]?[0-9_]+)?          { return lit_real; }
[a-zA-Z_][a-zA-Z_0-9]* {  return ident; }
[a-zA-Z_][a-zA-Z_0-9]*! { return macro_ident; }
\".*\" { return line_string; }
\"(.*\\\n)+.+\" { return multiline_string; }
b\".*\" { return line_bstring; }
b\"(.*\\\n)+.+\" { return multiline_bstring; }



\'.\' { return char_; }
"/*"((\*+[^/*])|([^*]))*\**"*/" {return comment_block;}




.  { yyerror("Lexer: unexpected character"); }
%%
