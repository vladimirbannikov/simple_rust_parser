/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "parser.y" /* yacc.c:1909  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    extern int yylex();
    extern int yyline;
    extern char* yytext;
    extern FILE* yyin;
    extern void yyerror(const char* msg);

#line 56 "parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FN = 258,
    LET = 259,
    MUT = 260,
    IF = 261,
    ELSE = 262,
    WHILE = 263,
    LOOP = 264,
    FOR = 265,
    IN = 266,
    lit_integer = 267,
    lit_real = 268,
    ident = 269,
    line_string = 270,
    line_bstring = 271,
    multiline_string = 272,
    multiline_bstring = 273,
    macro_ident = 274,
    char_ = 275,
    bchar_ = 276,
    and = 277,
    or = 278,
    eqt = 279,
    geq = 280,
    leq = 281,
    neq = 282,
    BIT_OR_ASSIGN = 283,
    XOR_ASSIGN = 284,
    XOR = 285,
    EXTERN_TOK = 286,
    RIGHT_ARROW = 287,
    CONST = 288,
    RETURN = 289,
    BREAK = 290,
    CONTINUE = 291,
    DOTDOT = 292,
    USE = 293,
    AS = 294,
    PUB = 295,
    SELF = 296,
    REF = 297,
    UNSAFE = 298,
    TYPE_TOK = 299,
    MOD_TOKEN = 300,
    STATIC_TOKEN = 301,
    METK_TOKEN = 302,
    ENUM_TOK = 303,
    STRUCT_TOK = 304,
    WHERE = 305,
    MATCH = 306,
    MATCH_ARROW = 307,
    TRAIT = 308,
    IMPL = 309,
    resolution_operator = 310,
    PLUS_OR_ASSIGN = 311,
    MINUS_OR_ASSIGN = 312,
    MUL_OR_ASSIGN = 313,
    DIV_OR_ASSIGN = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
