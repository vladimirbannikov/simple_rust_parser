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
"/*"((\*+[^/*])|([^*]))*\**"*/" {}
\n { yyline++; }

"fn" { return FN; }
"use" { return USE; }
"as" { return AS; }
"pub" { return PUB; }
"enum" { return ENUM_TOK; }
"struct" { return STRUCT_TOK; }

"^" { return XOR; }
"^=" {return XOR_ASSIGN; }

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
"where" { return WHERE; }
"self" { return SELF; }

".." { return DOTDOT; }
"." { return '.'; }
"::" {return resolution_operator;}

"!" { return '!'; }
"&&" { return and; }
"|" { return '|'; }
"||" { return or; }
"==" { return eqt; }
"!=" { return neq; }
"<" { return '<'; }
">" { return '>'; }
"<=" { return leq; }
">=" { return geq; }
"=>" { return MATCH_ARROW; }
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

"|=" { return BIT_OR_ASSIGN; }

"+=" { return PLUS_OR_ASSIGN; }
"-=" { return MINUS_OR_ASSIGN; }
"*=" { return MUL_OR_ASSIGN; }
"/=" { return DIV_OR_ASSIGN; }

"#".*"\n" { return attribute; }

"?" { return '?'; }

":" {return ':';}
"&" {return '&';}
"->" {return RIGHT_ARROW;}

"const" {return CONST;}
"return" {return RETURN;}

"break" {return BREAK;}
"continue" {return CONTINUE;}

"match" {return MATCH;}

"trait" { return TRAIT; }

"impl" { return IMPL; }

"unsafe" { return UNSAFE; }

"'" { return '\''; }

"_" { return '_'; }

"ref" { return REF; }


0x[0-9a-fA-F_]+([eEuif][-\+]?[0-9_]+)?   { return lit_integer; }
0o[0-7_]+([eEuif][-\+]?[0-9_]+)?         { return lit_integer; }
0b[01_]+([eEuif][-\+]?[0-9_]+)?         { return lit_integer; }
[0-9][0-9_]*([eEuif][-\+]?[0-9_]+)?      { return lit_integer; }
[0-9][0-9_]*\.[0-9][0-9_]*([eE][-\+]?[0-9_]+)?          { return lit_real; }
(?:[a-zA-Z][a-zA-Z_0-9]*|_[_a-zA-Z0-9]+) {  return ident; }
(?:[a-zA-Z][a-zA-Z_0-9]*|_[_a-zA-Z0-9]+)! { return macro_ident; }
\".*\" { return line_string; }
\"(.*\\\n)+.+\" { return multiline_string; }
b\".*\" { return line_bstring; }
b\"(.*\\\n)+.+\" { return multiline_bstring; }



\'.\' { return char_; }




.  { yyerror("Lexer: unexpected character"); }
%%
