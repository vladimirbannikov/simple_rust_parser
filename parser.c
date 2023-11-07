/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
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
#line 1 "parser.y" /* yacc.c:355  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    extern int yylex();
    extern int yyline;
    extern char* yytext;
    extern FILE* yyin;
    extern void yyerror(const char* msg);

#line 109 "parser.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FN = 258,
    attribute = 259,
    LET = 260,
    MUT = 261,
    IF = 262,
    ELSE = 263,
    WHILE = 264,
    LOOP = 265,
    FOR = 266,
    IN = 267,
    lit_integer = 268,
    lit_real = 269,
    ident = 270,
    line_string = 271,
    line_bstring = 272,
    multiline_string = 273,
    multiline_bstring = 274,
    macro_ident = 275,
    char_ = 276,
    and = 277,
    or = 278,
    eqt = 279,
    geq = 280,
    leq = 281,
    neq = 282,
    BIT_OR_ASSIGN = 283,
    XOR_ASSIGN = 284,
    XOR = 285,
    RIGHT_ARROW = 286,
    CONST = 287,
    RETURN = 288,
    BREAK = 289,
    CONTINUE = 290,
    DOTDOT = 291,
    USE = 292,
    AS = 293,
    PUB = 294,
    SELF = 295,
    REF = 296,
    UNSAFE = 297,
    ENUM_TOK = 298,
    STRUCT_TOK = 299,
    WHERE = 300,
    MATCH = 301,
    MATCH_ARROW = 302,
    TRAIT = 303,
    IMPL = 304,
    resolution_operator = 305,
    PLUS_OR_ASSIGN = 306,
    MINUS_OR_ASSIGN = 307,
    MUL_OR_ASSIGN = 308,
    DIV_OR_ASSIGN = 309
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

/* Copy the second part of user declarations.  */

#line 187 "parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  93
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2885

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  355
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  670

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    52,     2,    26,    50,    61,
      41,    42,    24,    22,    48,    23,    79,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    47,
      33,    40,    31,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,    74,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,    73,    44,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    28,    29,    30,
      32,    34,    35,    37,    38,    39,    51,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    75,    76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    47,    51,    52,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      73,    77,    78,    82,    83,    87,    88,    92,    93,    94,
      95,   100,   104,   105,   109,   113,   114,   115,   119,   120,
     124,   125,   129,   130,   134,   135,   142,   146,   147,   151,
     155,   156,   160,   161,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   178,   179,   184,   185,   189,   190,
     194,   198,   199,   200,   201,   206,   207,   212,   213,   217,
     221,   222,   223,   224,   228,   229,   234,   235,   239,   240,
     241,   242,   247,   248,   252,   253,   257,   258,   259,   263,
     264,   265,   266,   270,   274,   275,   279,   280,   281,   282,
     283,   287,   288,   292,   293,   297,   301,   302,   306,   310,
     311,   312,   313,   317,   322,   323,   324,   328,   329,   333,
     334,   335,   336,   337,   341,   345,   346,   347,   351,   355,
     356,   360,   361,   365,   366,   370,   371,   375,   376,   380,
     381,   388,   389,   390,   391,   395,   396,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   415,   416,   421,
     422,   426,   427,   428,   432,   433,   438,   439,   440,   444,
     445,   446,   447,   451,   452,   453,   454,   455,   456,   457,
     461,   462,   463,   467,   468,   469,   470,   471,   476,   477,
     478,   479,   480,   481,   485,   489,   490,   494,   495,   499,
     500,   501,   502,   506,   507,   508,   512,   513,   514,   515,
     516,   517,   518,   519,   523,   524,   529,   530,   534,   535,
     536,   540,   541,   542,   547,   548,   553,   554,   559,   560,
     564,   565,   566,   570,   571,   572,   577,   578,   579,   584,
     585,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   605,   606,   607,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   648,   652,   656,   657,   685,   686,   687,   688,
     689,   690,   691,   692,   693,   694,   698,   699,   703,   704,
     708,   709,   710,   714,   715,   716,   717,   718,   722,   723,
     724,   728,   729,   733,   738,   739,   740,   745,   746,   751,
     752,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   769,   770,   775,   776,   777,   778,   779,
     780,   781,   785,   786,   787,   788
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FN", "attribute", "LET", "MUT", "IF",
  "ELSE", "WHILE", "LOOP", "FOR", "IN", "lit_integer", "lit_real", "ident",
  "line_string", "line_bstring", "multiline_string", "multiline_bstring",
  "macro_ident", "char_", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "and",
  "or", "eqt", "'>'", "geq", "'<'", "leq", "neq", "'?'", "BIT_OR_ASSIGN",
  "XOR_ASSIGN", "XOR", "'='", "'('", "')'", "'{'", "'}'", "'['", "']'",
  "';'", "','", "':'", "'&'", "RIGHT_ARROW", "'#'", "CONST", "RETURN",
  "BREAK", "CONTINUE", "DOTDOT", "USE", "AS", "PUB", "'\\''", "SELF",
  "REF", "UNSAFE", "ENUM_TOK", "STRUCT_TOK", "WHERE", "MATCH",
  "MATCH_ARROW", "TRAIT", "IMPL", "resolution_operator", "'|'", "'_'",
  "PLUS_OR_ASSIGN", "MINUS_OR_ASSIGN", "MUL_OR_ASSIGN", "DIV_OR_ASSIGN",
  "'.'", "$accept", "crate", "global_items", "global_item",
  "implementation", "ident_sequence", "maybe_for",
  "function_defenition_sequence", "function_def_token", "trait",
  "function_declaration_sequence", "function_declaration", "struct",
  "maybe_args_for_struct", "maybe_args_for_struct_sequence",
  "types_sequences", "struct_fields", "struct_field", "maybe_attribute",
  "type_or_generic_for_struct", "struct_type_ident",
  "struct_type_ident_token", "maybe_mut_for_struct", "maybe_pub", "enum",
  "enum_fields", "enum_field", "enum_field_token", "unsafe_block",
  "maybe_generic", "generic", "generic_seq", "generic_seq_or_empty",
  "maybe_ident", "generic_symbol", "use_sequence", "use_left",
  "use_left_token", "use_args", "use_right", "function", "maybe_params",
  "params", "param", "func_param_type_or_generic", "fn_params_type_ident",
  "fn_params_type_ident_token", "maybe_mut_for_fn_params", "pattern",
  "maybe_mut_or_const", "raw_type", "array_or_slice_type", "array_slice",
  "array_rvalue", "array_indexing", "maybe_exprs", "exprs",
  "maybe_return_type", "func_return_type", "where_types_sequence",
  "where_types_sequence_ident", "return_expression", "statements",
  "statement", "match_statement", "match_inside_statements",
  "match_inside_statement", "match_ident", "return_token_expr",
  "assignment_without_semicolon", "assignment_operator",
  "assignment_without_semicolon_rvalue", "assignment", "lvalue",
  "tuple_lvalue", "tuple_lvalue_ident_seq", "tuple_lvalue_ident",
  "maybe_tuple_lvalue_ident_prefix", "maybe_rvalue_prefix", "rvalue",
  "lvalue_outside_brackets", "inside_brackets_types_rvalue",
  "inside_brackets_types_rvalue_ident",
  "inside_brackets_types_rvalue_ident_left", "maybe_assignment_type",
  "assignment_type", "if_statement", "if_let_statement",
  "if_expr_statement", "cycle_statement", "statements_in_cycle",
  "statement_in_cycle", "expr", "expr_binary_operation", "pointer",
  "borrow", "type_for_as_seq", "expr_token", "number", "method_or_field",
  "method_or_field_2", "method_or_field_token", "generic_function_call",
  "macro_call", "function_call", "maybe_args", "args", "arg",
  "expr_for_passing", "non_brackets_expr", "string", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    43,    45,    42,    47,    37,    33,   277,   278,
     279,    62,   280,    60,   281,   282,    63,   283,   284,   285,
      61,    40,    41,   123,   125,    91,    93,    59,    44,    58,
      38,   286,    35,   287,   288,   289,   290,   291,   292,   293,
     294,    39,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   124,    95,   306,   307,   308,   309,    46
};
# endif

#define YYPACT_NINF -537

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-537)))

#define YYTABLE_NINF -317

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     226,    52,  -537,   203,   351,  2701,   212,   154,    69,   202,
      55,    77,   137,   140,   208,   220,   136,   239,   226,  -537,
    -537,  -537,  -537,  -537,  -537,  -537,   254,  -537,   198,  -537,
     198,  -537,   292,  -537,   349,   136,    20,   198,   841,  2161,
    -537,  -537,   351,  -537,  -537,  -537,  -537,   283,  -537,   393,
    2701,  2701,  2161,  2701,  -537,   230,  -537,  -537,   254,  2450,
    -537,  -537,  -537,  -537,  -537,   349,  -537,   331,   270,   271,
    -537,   305,   285,   291,   243,   314,  -537,    80,  -537,    16,
     317,   137,  -537,  -537,  -537,  -537,  -537,   136,   136,   334,
     188,   418,  -537,  -537,  -537,   211,   671,   671,   279,   279,
     409,   198,   671,   350,  2497,  2161,  1854,  -537,    77,  2213,
     458,  -537,  -537,   438,  -537,  2450,  -537,   440,   444,   441,
    -537,   445,   841,   841,  -537,  2812,  2256,   454,   431,  -537,
    2701,  2701,  2701,  2701,  2701,  2701,  2701,  2701,  2535,  2701,
    2739,  2701,  2701,  2701,  2701,  2573,    41,  2701,   464,   511,
     513,   161,   488,  -537,  -537,   154,   351,  -537,  -537,  -537,
     211,   495,   496,   504,  -537,   535,   202,  -537,   523,   424,
     564,   301,    54,  -537,    31,   191,  -537,  -537,  -537,  -537,
      65,   525,   265,  -537,  -537,  -537,  -537,  -537,  -537,  -537,
    -537,  -537,   518,   518,   307,  -537,   355,  -537,   100,   671,
     518,  -537,   528,   530,   371,   982,    77,  -537,  -537,   498,
     289,  -537,  1688,  -537,   531,   533,  -537,  2161,   532,  1184,
    -537,  -537,   249,   249,   249,  2812,  2812,   431,  2701,   431,
     431,  2777,   431,   431,   431,  2812,   431,  2625,  2812,   142,
     575,   128,   431,   841,   540,   559,  -537,   521,   841,  -537,
     671,    80,    80,  -537,  -537,   546,  -537,   591,   265,   591,
     550,   584,    43,  -537,  -537,  -537,  -537,   188,   188,    85,
     590,   596,  -537,   603,  2001,  2001,   279,   279,  -537,  -537,
    -537,   569,   570,  -537,   557,   571,   518,  2001,  -537,  2161,
     524,   351,  -537,  2161,  2161,  -537,  -537,  -537,  -537,   349,
    -537,  -537,  -537,  2057,   351,   296,  -537,   572,  -537,   349,
    -537,  -537,  -537,   576,  -537,  1016,  2161,   580,   612,   689,
    1892,  -537,  -537,  -537,  2109,   299,  -537,  -537,  1709,  -537,
    -537,  -537,  -537,   585,  -537,  -537,  -537,  -537,   105,    24,
     399,  1813,   431,   275,  2303,   431,  2701,  2812,  -537,  -537,
    -537,  -537,  -537,  -537,  -537,   587,   527,   589,   586,   595,
     594,   518,  -537,  -537,  -537,  -537,   618,   324,  -537,   600,
    -537,   597,   436,  -537,   583,  -537,   136,  -537,  -537,   602,
      35,   602,   610,  -537,   418,   611,  -537,  1688,  -537,  -537,
    -537,   608,   613,  -537,   614,  -537,  -537,   606,   120,  -537,
      79,  2001,   615,  -537,   621,   625,   616,   627,  -537,  -537,
    -537,   121,  2355,  -537,   236,  1761,   617,   198,   629,    21,
     628,   632,  -537,   668,  1930,  1240,  -537,   636,   638,   406,
     644,  -537,   289,   646,  -537,  2407,   337,   249,  -537,   645,
     649,   841,  -537,  -537,  -537,  2001,   361,  -537,  -537,    45,
    -537,   265,  -537,   224,  -537,   682,   657,  -537,  -537,    65,
      53,  2256,    30,   655,  1296,  -537,   289,  -537,    79,   659,
    -537,  -537,    25,    70,   265,  -537,   660,  -537,  -537,  -537,
    -537,   669,  1352,  -537,  -537,  2663,  -537,    20,   198,  -537,
     671,  -537,   671,  -537,   783,  2161,  -537,   105,  -537,  -537,
    1802,   448,  -537,   480,  -537,  -537,   670,   667,   591,   591,
     265,  -537,  -537,  -537,  -537,  -537,  -537,   672,   100,  -537,
      37,   137,    74,  -537,  -537,  -537,  -537,  -537,   463,   650,
    -537,  -537,  -537,   701,  -537,   703,   136,   647,  -537,  -537,
    -537,  -537,  -537,   198,   671,  1408,   518,  1464,   518,   920,
    -537,  -537,  -537,   673,   678,  -537,  -537,  -537,  -537,  -537,
    -537,  -537,   681,   690,   666,   466,  -537,   675,  -537,   237,
    -537,  -537,   421,   469,  -537,    79,   694,   137,  -537,  -537,
    -537,  -537,  -537,   245,   265,   695,  1520,   734,   735,  -537,
     265,   671,   518,   742,   303,   744,   303,  -537,  1072,  -537,
    -537,  -537,  -537,  2001,  -537,  1750,  1945,  -537,  -537,   591,
    -537,  -537,   304,   606,  -537,  -537,   693,   707,  -537,  -537,
    -537,  -537,  -537,  -537,   518,   303,   194,   417,  -537,  -537,
     713,   310,  -537,  -537,  1128,  -537,  -537,  -537,  2001,  -537,
     715,   136,   686,  -537,   712,  2161,   265,   303,  -537,  -537,
    -537,  -537,  -537,  -537,  -537,  -537,  -537,   304,  -537,  -537,
     309,  -537,  -537,  1576,  1632,  -537,    79,  -537,  -537,  -537
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,    10,     0,   198,     0,     0,   212,     0,     0,
       0,   201,     0,     0,     0,     0,    78,     0,     2,     4,
      19,    17,    14,    12,    11,     6,   202,    16,   235,   203,
     235,   200,     0,   317,   199,    78,     0,   235,   326,     0,
     306,   307,   298,   352,   353,   354,   355,     0,   300,     0,
       0,     0,     0,     0,   314,     0,   290,   304,   303,   292,
     288,   291,   296,   305,   302,   301,   299,     0,     0,     0,
     209,   211,     0,   205,     0,     0,    96,     0,    97,     0,
      95,     0,    18,    15,    13,     7,     9,    78,    78,     0,
      87,     0,    77,     1,     5,     0,     0,     0,     0,     0,
       0,   235,     0,   298,     0,   140,     0,   263,   334,     0,
       0,   331,   332,     0,   329,   262,   264,   305,     0,   324,
     327,     0,   326,   326,   297,   287,     0,     0,   293,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,   210,   204,   212,   207,   316,   208,   315,
       0,   100,   102,     0,    92,     0,     0,     8,     0,    38,
       0,   127,     0,    89,     0,     0,    83,    88,   128,    21,
      78,   127,     0,   236,   234,   185,   184,   183,   186,   187,
     188,   189,   215,   215,   313,   308,   310,   309,   110,     0,
     215,   325,     0,   139,   141,     0,   335,   333,   330,     0,
       0,   323,     0,   138,     0,     0,   286,     0,     0,     0,
     269,   270,   271,   272,   273,   265,   266,   267,     0,   274,
     275,     0,   276,   277,   268,   282,   279,     0,   283,   126,
     120,     0,   278,   326,     0,     0,   129,     0,   326,   206,
       0,     0,     0,    98,   103,     0,    94,    47,    40,    47,
       0,     0,     0,    32,    91,    90,    79,    87,    87,    87,
       0,    24,   237,   213,     0,     0,     0,     0,   123,   109,
     106,     0,   107,   111,     0,     0,   215,     0,   135,     0,
       0,   346,   350,     0,   140,   336,   345,   351,   348,   347,
     337,   343,   349,     0,   232,     0,   226,   228,   231,   233,
     328,   321,   322,     0,    76,     0,     0,     0,     0,   298,
       0,   156,    75,   166,     0,     0,   165,   152,   303,   155,
     164,   162,   159,     0,   160,   239,   238,   161,   151,   235,
     305,   301,   281,   298,     0,   280,     0,   284,   124,   125,
     122,   121,   295,   294,   289,     0,     0,     0,     0,     0,
       0,   215,    99,   101,    93,    48,     0,     0,    68,     0,
      41,    43,     0,    44,    65,    37,    78,    31,    33,    80,
       0,    84,     0,    22,     0,     0,   214,     0,   156,   217,
     223,     0,     0,   216,     0,   311,   312,   144,   108,   114,
      63,     0,     0,   142,     0,     0,     0,   141,   156,   338,
     341,     0,     0,   134,     0,   298,     0,   235,     0,   235,
     305,     0,   250,     0,   211,     0,   176,     0,     0,   313,
       0,   175,     0,     0,   157,     0,   298,   285,   319,     0,
       0,   326,   131,   130,   318,     0,    78,    70,    66,    47,
      39,     0,    35,    47,    64,     0,     0,    81,    82,    78,
       0,   262,     0,     0,     0,   197,     0,   196,    63,     0,
     112,    54,    57,    56,     0,   113,     0,   193,   137,   136,
     344,     0,     0,   342,   227,     0,   229,     0,   235,   156,
       0,   156,     0,   250,     0,     0,   163,     0,   178,   177,
       0,     0,   158,   298,   133,   132,     0,     0,    47,    47,
       0,    71,    67,    69,    42,    36,    45,     0,   110,    23,
       0,     0,     0,    25,    28,   218,   219,   220,     0,   145,
     143,   156,    58,     0,    55,     0,    78,   117,   118,   195,
     340,   339,   230,   235,     0,     0,   215,     0,   215,     0,
     250,   247,   261,     0,     0,   260,   259,   255,   252,   253,
     254,   249,     0,     0,     0,     0,   169,     0,   153,     0,
     320,   194,     0,     0,    72,    63,     0,     0,    27,    30,
      20,    26,   221,     0,     0,     0,     0,    60,    59,   115,
       0,     0,   215,   240,     0,   243,     0,   246,     0,   257,
     258,   251,   250,     0,   167,     0,     0,   154,    74,    47,
      73,    46,     0,   144,    29,   222,     0,   146,   147,   105,
     104,    62,    61,   116,   215,     0,     0,   313,   182,   192,
     315,     0,   181,   256,     0,   172,   168,   170,     0,   171,
       0,    78,    51,    52,     0,     0,     0,     0,   179,   156,
     242,   156,   245,   248,   173,    53,    49,     0,    34,   149,
     301,   148,   180,     0,     0,    50,    63,   241,   244,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -537,  -537,  -537,   745,  -537,   376,  -537,  -537,   240,   775,
    -537,   529,   777,  -537,  -537,   338,  -537,   342,  -239,  -537,
     148,  -537,   234,  -537,   801,    49,  -424,  -537,  -537,   -33,
    -537,   347,  -537,  -537,  -537,    12,   648,  -537,   268,  -537,
      11,   294,  -537,   415,   420,   225,  -536,   676,  -537,  -537,
     -66,     7,  -537,   -21,    90,  -537,  -537,   204,   152,  -537,
     175,  -351,  -276,  -537,  -248,  -537,   218,  -537,  -453,  -537,
     -92,  -457,    14,    -2,  -537,   674,  -537,  -537,  -189,  -268,
    -108,  -226,  -383,  -537,   -20,   665,  -435,  -537,  -537,  -447,
    -441,  -537,   407,   639,    15,  -537,  -537,  -537,   -27,     0,
     -83,   -55,  -537,   626,     6,   -72,   447,   623,  -537,  -537,
     641
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,    19,    20,   180,   385,   522,   523,    21,
     262,   263,    22,   260,   369,   370,   372,   373,   366,   611,
     641,   642,   474,   455,    23,   367,   368,   447,    56,    91,
      92,   174,   382,   175,   176,   326,    79,    80,   163,   255,
      25,   281,   282,   283,   529,   536,   537,   284,   285,   350,
     177,   178,    57,   112,    58,   202,   203,   469,   530,   617,
     618,   218,   219,   329,   330,   565,   566,   430,   331,   416,
     192,   628,   332,    28,    29,    72,    73,    74,   274,   391,
     113,   305,   306,   307,    97,   184,   334,   335,   336,   337,
     494,   561,   114,   115,   116,    60,   354,    61,    62,    63,
     195,    32,    33,    64,    65,   118,   119,   120,   300,   301,
      66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    37,   100,    31,   275,   193,    34,   394,    96,    34,
     200,   287,    24,    69,    27,    30,   197,   102,    31,   402,
     374,    85,   124,    86,    34,   513,   390,   390,   484,   183,
      24,   532,    27,    30,   101,     4,    31,   463,   117,   390,
       1,   557,    34,   196,   196,   425,   261,   560,   616,   365,
     214,   215,   549,     6,   168,   169,     1,   481,     1,   559,
    -264,     7,   266,   164,  -264,   239,   457,    35,  -264,   181,
      95,  -264,   525,    95,   158,   165,   534,     1,   212,   267,
     159,   199,    11,   267,    75,   471,   533,   377,   207,   512,
      26,   240,   167,    26,   183,   161,   557,   401,    90,    68,
     171,   577,   560,   472,   159,   159,   265,   286,    26,   598,
     616,   333,   464,   520,   559,   278,   272,   521,   580,    81,
      13,    14,   117,   117,   239,    15,    26,   -85,   264,   473,
      68,   535,   482,   476,   520,   278,   304,   270,   521,   632,
       1,   433,   162,   181,   239,   557,   172,   271,   348,  -314,
     240,   560,   434,   390,     6,    87,  -314,   279,   361,   173,
      70,   634,  -119,   559,   157,   483,   392,   392,   648,    90,
     240,   355,   445,    68,   280,   353,   360,   507,   296,   392,
     585,   557,  -119,    54,   295,   513,   484,   560,   157,   157,
     662,   650,   371,   395,   396,   349,   652,   390,   327,   559,
     484,   315,   352,   171,    71,   297,   501,   246,   247,    36,
     308,   299,   117,   545,   374,   547,   309,    76,     4,   340,
     359,   196,   196,    88,   268,   341,   181,    67,   365,     1,
       2,     3,   269,    68,   339,    89,     6,   649,    69,    93,
     528,     4,   487,   117,     7,    77,   556,    95,   117,   172,
       5,     4,   304,   389,   389,   586,    68,    68,   156,     6,
     304,   182,   173,   405,    78,    11,   389,     7,   515,     6,
       6,   130,   131,   129,   117,   117,     6,     7,     6,     8,
     181,   607,   159,   159,     9,   151,    10,   117,    11,   615,
      12,    13,    14,   392,   194,   157,    15,    16,    11,    54,
     157,   556,   152,   427,   304,    54,   148,    54,   146,   328,
      68,   153,     6,   417,   429,   420,    38,   315,   627,   181,
     435,   341,     6,   150,   122,   431,  -316,   154,   123,   440,
     419,   159,     6,  -316,   -86,   635,     6,   392,   639,   155,
     410,    54,   -86,   456,   411,   640,   149,  -313,    38,    68,
     556,    54,    39,   651,  -313,   390,   333,   594,   390,   596,
     666,    54,   148,   160,    98,    54,   157,   157,   448,   506,
     654,    99,   449,   663,   333,   664,   149,   170,    38,   150,
     389,  -315,    39,   246,   247,   371,   556,   117,  -315,   166,
     390,    38,    38,  -224,    90,    39,    39,   490,   546,   492,
     548,   117,   508,   625,   509,   328,    40,    41,   538,  -313,
     510,   308,   488,   511,    31,   157,  -313,   309,   290,   217,
      34,  -315,  -313,  -313,   389,   420,   519,   276,  -315,  -313,
    -313,   341,   308,   179,   277,   647,  -200,  -200,   309,  -200,
     339,   117,  -225,   327,   574,   117,   121,    38,  -200,  -174,
     198,    39,   592,   130,   131,   132,   133,   134,    38,   127,
    -190,   327,    39,   608,   340,   258,   308,   259,   544,   609,
     341,   524,   309,   209,  -200,  -200,  -200,  -200,   333,   339,
     452,   210,   340,  -225,   453,   543,   211,    31,   341,   212,
     146,   213,   568,    34,   420,   392,   569,   339,   392,   624,
     341,   157,   217,   589,    26,   243,   555,   582,   558,   339,
     604,   583,   204,   610,   605,   328,   208,   609,   538,   362,
     363,    38,   157,   591,   538,    39,   244,   356,   245,   248,
     392,   578,   579,   524,    40,    41,   358,    40,    41,   404,
      40,    41,   439,   251,   252,   420,   643,   420,   253,   420,
     254,   341,  -313,   341,   328,   341,   157,   572,   573,  -313,
     339,   555,   339,   558,   339,   327,   257,   261,   273,   308,
     149,   303,   328,   311,   288,   309,   314,    26,   289,   312,
     538,   351,   389,   308,   328,   389,   340,   356,   614,   309,
     357,   643,   341,   364,   629,   365,   629,   375,   420,   376,
     630,   339,   630,   117,   341,   383,   117,   384,   656,   386,
     555,   397,   558,   339,   379,   380,   381,   389,   398,   399,
     400,   412,   413,   422,   313,   629,   338,   423,   432,   438,
     441,   630,   442,   446,   420,   328,   444,   328,   117,   328,
     341,   443,   450,   454,    59,   451,   555,   629,   558,   339,
     267,   660,   458,   630,   460,   465,   466,   468,   480,   157,
     489,   467,   477,   420,   420,  -200,  -200,   478,  -200,   341,
     341,   479,   491,   157,   290,   493,   328,  -200,   339,   339,
     495,   393,   393,   498,   157,   499,   157,   500,   328,   125,
     126,   504,   128,   502,   393,   505,   403,   517,   518,   526,
     406,   407,   531,  -200,  -200,  -200,  -200,   539,   185,   186,
     409,   187,   570,   540,   571,   157,   587,   584,   588,   590,
     599,   575,   418,   421,   328,   600,  -198,  -198,   601,  -198,
      38,   428,  -224,   602,    39,   603,   613,   157,  -198,   619,
     621,   622,   645,   126,   606,   128,   188,   189,   190,   191,
     626,   127,   631,   328,   328,   646,  -191,   655,   657,   658,
     459,  -313,   581,    94,  -198,  -198,  -198,  -198,  -313,   220,
     221,   222,   223,   224,   225,   226,   227,   229,   230,   232,
     233,   234,   235,   236,   238,    82,   242,    83,     3,   514,
     315,   378,   316,   317,   318,   516,    40,    41,   415,    43,
      44,    45,    46,    47,    48,   665,    49,     5,   393,   612,
      50,    84,   576,   470,   256,   623,     6,   644,   669,   486,
     475,   661,   241,   637,   320,   250,   550,   551,    52,   249,
     552,   298,   497,    53,   462,   310,     8,   324,   553,   554,
     107,     9,   121,     0,     0,    11,   302,    55,     0,     0,
       0,   325,   393,     0,    40,    41,   103,    43,    44,    45,
      46,    47,    48,     0,    49,     5,     0,   342,    50,     0,
     345,   338,     0,     0,     6,     0,   347,     0,     0,     0,
       0,     0,   104,     0,     0,     0,   105,     0,     0,   338,
       0,   106,     0,     0,     0,     0,     0,     0,   107,     0,
       0,   562,   563,   108,   109,    55,     0,   567,     0,     0,
       0,     0,     0,     0,   110,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,   315,     0,   316,
     317,   318,     0,    40,    41,   415,    43,    44,    45,    46,
      47,    48,     0,    49,     5,     0,     0,    50,     0,     0,
       0,     0,   497,     6,   497,     0,   562,     0,     0,   126,
       0,   320,     0,   550,   597,    52,     0,   552,     0,     0,
      53,     0,     0,     8,   324,   553,   554,   107,     9,     0,
       0,     0,    11,     0,    55,   437,     0,     0,   325,     0,
       0,     0,     0,   338,     0,    40,    41,   291,    43,    44,
      45,    46,    47,   292,     0,   562,     0,     0,     0,     0,
     393,     0,   567,   393,     0,     6,     0,     0,     0,     0,
       0,   414,     0,   293,     0,     0,   461,   294,     0,    40,
      41,   415,    43,    44,    45,    46,    47,    48,     0,    49,
       5,   562,     0,    50,    54,   393,     0,     0,     0,     6,
       0,     0,   659,     0,     0,     0,     0,   320,     0,     0,
       0,    52,     0,   128,     0,     0,    53,     0,     0,     0,
     497,   497,     0,   107,     0,     0,     0,     3,    11,   315,
      55,   316,   317,   318,     0,    40,    41,   415,    43,    44,
      45,    46,    47,    48,     0,    49,     5,     0,     0,    50,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,   320,     0,   550,   633,    52,     0,   552,
       0,     0,    53,     0,   126,     8,   324,   553,   554,   107,
       9,     0,     0,     3,    11,   315,    55,   316,   317,   318,
     325,    40,    41,   415,    43,    44,    45,    46,    47,    48,
       0,    49,     5,     0,     0,    50,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,   320,
       0,   550,   653,    52,     0,   552,     0,     0,    53,     0,
       0,     8,   324,   553,   554,   107,     9,     0,     0,     3,
      11,   315,    55,   316,   317,   318,   325,    40,    41,   319,
      43,    44,    45,    46,    47,    48,     0,    49,     5,     0,
       0,    50,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,   320,     0,   321,   322,   105,
       0,   323,     0,     0,    53,     0,     0,     8,   324,     0,
       0,   107,     9,     0,     0,     3,    11,   315,    55,   316,
     317,   318,   325,    40,    41,   415,    43,    44,    45,    46,
      47,    48,     0,    49,     5,     0,     0,    50,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,   320,     0,   321,   496,    52,     0,   323,     0,     0,
      53,     0,     0,     8,   324,     0,     0,   107,     9,     0,
       0,     3,    11,   315,    55,   316,   317,   318,   325,    40,
      41,   319,    43,    44,    45,    46,    47,    48,     0,    49,
       5,     0,     0,    50,     0,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,   320,     0,   321,
     527,   105,     0,   323,     0,     0,    53,     0,     0,     8,
     324,     0,     0,   107,     9,     0,     0,     3,    11,   315,
      55,   316,   317,   318,   325,    40,    41,   319,    43,    44,
      45,    46,    47,    48,     0,    49,     5,     0,     0,    50,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,   320,     0,   321,   541,   105,     0,   323,
       0,     0,    53,     0,     0,     8,   324,     0,     0,   107,
       9,     0,     0,     3,    11,   315,    55,   316,   317,   318,
     325,    40,    41,   415,    43,    44,    45,    46,    47,    48,
       0,    49,     5,     0,     0,    50,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,   320,
       0,   321,   593,    52,     0,   323,     0,     0,    53,     0,
       0,     8,   324,     0,     0,   107,     9,     0,     0,     3,
      11,   315,    55,   316,   317,   318,   325,    40,    41,   415,
      43,    44,    45,    46,    47,    48,     0,    49,     5,     0,
       0,    50,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,   320,     0,   321,   595,    52,
       0,   323,     0,     0,    53,     0,     0,     8,   324,     0,
       0,   107,     9,     0,     0,     3,    11,   315,    55,   316,
     317,   318,   325,    40,    41,   319,    43,    44,    45,    46,
      47,    48,     0,    49,     5,     0,     0,    50,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,   320,     0,   321,   620,   105,     0,   323,     0,     0,
      53,     0,     0,     8,   324,     0,     0,   107,     9,     0,
       0,     3,    11,   315,    55,   316,   317,   318,   325,    40,
      41,   415,    43,    44,    45,    46,    47,    48,     0,    49,
       5,     0,     0,    50,     0,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,   320,     0,   321,
     667,    52,     0,   323,     0,     0,    53,     0,     0,     8,
     324,     0,     0,   107,     9,     0,     0,     3,    11,   315,
      55,   316,   317,   318,   325,    40,    41,   415,    43,    44,
      45,    46,    47,    48,     0,    49,     5,     0,     0,    50,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,   320,     0,   321,   668,    52,     0,   323,
       0,     0,    53,     0,     0,     8,   324,     0,     0,   107,
       9,     0,     0,     0,    11,     0,    55,     0,     0,     0,
     325,    40,    41,   103,    43,    44,    45,    46,    47,    48,
       0,    49,     5,     0,     0,    50,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,   105,     0,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,   107,  -202,  -202,     0,  -202,
     108,   109,    55,     0,     0,     0,     0,     0,  -202,     0,
       0,   110,   111,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,     5,     0,     0,    50,     0,     0,
       0,  -316,     0,     6,  -202,  -202,  -202,  -202,  -316,     0,
       0,    51,     0,     0,   636,    52,     0,     0,  -198,  -198,
      53,  -198,    38,     0,     0,     0,    39,   107,     0,     0,
    -198,     0,    54,     0,    55,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   564,    49,     5,     0,     0,    50,
       0,     0,     0,  -313,     0,     6,  -198,  -198,  -198,  -198,
    -313,     0,     0,    51,     0,     0,     0,    52,     0,     0,
    -199,  -199,    53,  -199,     0,     0,     0,     0,     0,   107,
     205,     0,  -199,     0,    54,     0,    55,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   564,    49,     0,     0,
       0,    50,     0,     0,     0,  -315,     0,     6,  -199,  -199,
    -199,  -199,  -315,     0,     0,    51,     0,     0,    70,    52,
       0,     0,     0,     0,    53,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,   206,     0,    55,    50,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,   153,    52,     0,     0,
       0,     0,   424,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    54,     0,    55,    50,    40,    41,
     103,    43,    44,    45,    46,    47,    48,     0,    49,     5,
       0,    51,    50,     0,     0,    52,     0,     0,     6,     0,
      53,     0,     0,     0,     0,     0,   387,     0,   388,     0,
     105,     0,    54,     0,    55,    53,     0,     0,     0,   638,
       0,     0,   107,     0,     0,     0,     0,    54,     0,    55,
       0,     0,     0,   325,    40,    41,   103,    43,    44,    45,
      46,    47,    48,     0,    49,     5,     0,     0,    50,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,   387,     0,   388,     0,   105,     0,     0,     0,
       0,    53,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,    54,     0,    55,     0,     0,     0,   325,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,     5,     0,     0,    50,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,    51,     0,
     408,     0,    52,     0,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,    54,
       0,    55,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,     5,     0,     0,    50,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,   105,     0,   426,     0,     0,    53,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,    54,     0,    55,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,     5,     0,     0,    50,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,    52,     0,     0,     0,
       0,    53,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,    54,     0,    55,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     5,     0,     0,
      50,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,   105,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,    54,     0,    55,   130,   131,
     132,   133,   134,     0,   135,   136,   137,   138,   139,   140,
     141,   142,     0,     0,     0,   143,     0,     0,   216,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,     0,
       0,     0,     0,   145,     0,   146,    40,    41,   436,    43,
      44,    45,    46,    47,    48,     0,    49,     5,     0,   147,
      50,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,    52,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,    54,     0,    55,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,     5,
       0,     0,    50,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,   485,     0,     0,     0,
      52,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,    54,     0,    55,
      40,    41,   503,    43,    44,    45,    46,    47,    48,     0,
      49,     5,     0,     0,    50,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,    52,     0,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,    54,
       0,    55,   130,   131,   132,   133,   134,     0,   135,   136,
     137,   138,   139,   140,   141,   142,     0,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,     0,     0,   145,     0,   146,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,     0,     0,   147,    50,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,    51,   201,
       0,     0,    52,     0,     0,     0,     0,    53,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    54,
       0,    55,    50,     0,     0,     0,   228,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
      52,     0,     0,     0,     0,    53,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    54,     0,    55,
      50,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,   237,    51,     0,     0,     0,    52,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,    55,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,   346,
       0,     0,    50,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
      52,     0,     0,     0,     0,    53,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    54,     0,    55,
      50,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,    51,   542,     0,     0,    52,     0,
       0,     0,     0,    53,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    54,     0,    55,    50,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,    52,     0,     0,     0,
       0,    53,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    54,     0,    55,    50,     0,     0,     0,
       0,     0,   231,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,    52,     0,     0,     0,     0,    53,
      40,    41,   343,    43,    44,    45,    46,    47,    48,     0,
      49,    54,     0,    55,    50,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,   344,     0,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,   130,   131,   132,   133,   134,    54,
       0,    55,   137,   138,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147
};

static const yytype_int16 yycheck[] =
{
       0,     3,    35,     3,   193,    97,     0,   275,    28,     3,
     102,   200,     0,     6,     0,     0,    99,    37,    18,   287,
     259,    10,    49,    12,    18,   449,   274,   275,   411,    95,
      18,     6,    18,    18,    36,    15,    36,   388,    38,   287,
       3,   494,    36,    98,    99,   321,     3,   494,   584,     4,
     122,   123,   493,    33,    87,    88,     3,   408,     3,   494,
      36,    41,    31,    47,    43,    24,    31,    15,    44,    15,
      49,    47,    42,    49,    74,    59,     6,     3,    48,    48,
      74,   101,    62,    48,    15,     6,    61,    44,   109,    44,
       0,    50,    81,     3,   160,    15,   549,   286,    33,    45,
      15,    64,   549,    24,    98,    99,   172,   199,    18,   550,
     646,   219,   388,    60,   549,    15,   182,    64,    44,    64,
      65,    66,   122,   123,    24,    70,    36,    42,    74,    50,
      45,    61,   408,   401,    60,    15,    15,    72,    64,   596,
       3,    36,    62,    15,    24,   598,    61,   180,     6,    72,
      50,   598,    47,   401,    33,    15,    79,    57,   250,    74,
       6,   602,    62,   598,    74,    44,   274,   275,   625,    33,
      50,   243,   361,    45,    74,   241,   248,   445,   205,   287,
     531,   634,    62,    62,   205,   609,   569,   634,    98,    99,
     647,   626,   258,   276,   277,    53,   631,   445,   219,   634,
     583,     7,    74,    15,    50,   205,   432,    46,    47,     6,
     210,   205,   212,   489,   453,   491,   210,    15,    15,   219,
     247,   276,   277,    15,    33,   219,    15,    15,     4,     3,
       4,     5,    41,    45,   219,    15,    33,    43,   231,     0,
     466,    15,     6,   243,    41,    43,   494,    49,   248,    61,
      24,    15,    15,   274,   275,   531,    45,    45,    15,    33,
      15,    50,    74,   290,    62,    62,   287,    41,    44,    33,
      33,    22,    23,    43,   274,   275,    33,    41,    33,    53,
      15,    44,   276,   277,    58,    15,    60,   287,    62,    44,
      64,    65,    66,   401,    15,   205,    70,    71,    62,    62,
     210,   549,    31,   324,    15,    62,    31,    62,    59,   219,
      45,     6,    33,   315,    15,   315,    41,     7,    15,    15,
      45,   315,    33,    48,    41,   325,    72,    42,    45,   356,
     315,   325,    33,    79,    33,   603,    33,   445,   606,    48,
      44,    62,    41,   376,    48,    41,    45,    72,    41,    45,
     598,    62,    45,    43,    79,   603,   464,   546,   606,   548,
      51,    62,    31,    49,    72,    62,   276,   277,    44,   441,
     638,    79,    48,   649,   482,   651,    45,    43,    41,    48,
     401,    72,    45,    46,    47,   451,   634,   387,    79,    72,
     638,    41,    41,    43,    33,    45,    45,   417,   490,   419,
     492,   401,    41,   592,    43,   315,    13,    14,   474,    72,
      49,   411,   414,   446,   414,   325,    79,   411,    47,    48,
     414,    72,    72,    72,   445,   425,   459,    72,    79,    79,
      79,   425,   432,    15,    79,   624,    37,    38,   432,    40,
     425,   441,    43,   464,   510,   445,    39,    41,    49,    43,
      41,    45,   544,    22,    23,    24,    25,    26,    41,    52,
      43,   482,    45,    42,   464,    41,   466,    43,   488,    48,
     464,   460,   466,    15,    75,    76,    77,    78,   586,   464,
      44,    43,   482,    43,    48,   487,    42,   487,   482,    48,
      59,    46,    44,   487,   494,   603,    48,   482,   606,   591,
     494,   411,    48,   536,   414,    41,   494,    44,   494,   494,
      44,    48,   105,    44,    48,   425,   109,    48,   584,   251,
     252,    41,   432,   543,   590,    45,    15,    47,    15,    41,
     638,   520,   521,   522,    13,    14,    15,    13,    14,    15,
      13,    14,    15,    48,    48,   545,   612,   547,    44,   549,
      15,   545,    72,   547,   464,   549,   466,   508,   509,    79,
     545,   549,   547,   549,   549,   586,    43,     3,    50,   569,
      45,    73,   482,    42,    46,   569,    44,   487,    48,    46,
     646,     6,   603,   583,   494,   606,   586,    47,   577,   583,
      31,   657,   586,    47,   594,     4,   596,    47,   598,    15,
     594,   586,   596,   603,   598,    15,   606,    11,   641,     6,
     598,    42,   598,   598,   267,   268,   269,   638,    48,    62,
      49,    49,    46,    43,   217,   625,   219,    15,    43,    42,
      41,   625,    46,    15,   634,   545,    42,   547,   638,   549,
     634,    46,    42,    60,     5,    48,   634,   647,   634,   634,
      48,   645,    42,   647,    43,    47,    43,    51,    42,   569,
      43,    47,    47,   663,   664,    37,    38,    46,    40,   663,
     664,    46,    43,   583,    47,    43,   586,    49,   663,   664,
      12,   274,   275,    47,   594,    47,   596,    43,   598,    50,
      51,    46,    53,    47,   287,    46,   289,    15,    41,    44,
     293,   294,    43,    75,    76,    77,    78,    47,    37,    38,
     303,    40,    42,    44,    47,   625,    15,    67,    15,    72,
      47,    49,   315,   316,   634,    47,    37,    38,    47,    40,
      41,   324,    43,    43,    45,    69,    42,   647,    49,    44,
       6,     6,    49,   104,    69,   106,    75,    76,    77,    78,
       8,   344,     8,   663,   664,    48,    43,    42,    72,    47,
     384,    72,   522,    18,    75,    76,    77,    78,    79,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    10,   147,    10,     5,   451,
       7,   262,     9,    10,    11,   453,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   657,    23,    24,   401,   575,
      27,    10,   518,   398,   166,   590,    33,   613,   666,   412,
     400,   646,   146,   605,    41,   160,    43,    44,    45,   155,
      47,   205,   425,    50,   387,   212,    53,    54,    55,    56,
      57,    58,   435,    -1,    -1,    62,   205,    64,    -1,    -1,
      -1,    68,   445,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,   228,    27,    -1,
     231,   464,    -1,    -1,    33,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,   482,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,   494,   495,    62,    63,    64,    -1,   500,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,   545,    33,   547,    -1,   549,    -1,    -1,   320,
      -1,    41,    -1,    43,    44,    45,    -1,    47,    -1,    -1,
      50,    -1,    -1,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    62,    -1,    64,   346,    -1,    -1,    68,    -1,
      -1,    -1,    -1,   586,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,   598,    -1,    -1,    -1,    -1,
     603,    -1,   605,   606,    -1,    33,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    41,    -1,    -1,   387,    45,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,   634,    -1,    27,    62,   638,    -1,    -1,    -1,    33,
      -1,    -1,   645,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    -1,   424,    -1,    -1,    50,    -1,    -1,    -1,
     663,   664,    -1,    57,    -1,    -1,    -1,     5,    62,     7,
      64,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    44,    45,    -1,    47,
      -1,    -1,    50,    -1,   485,    53,    54,    55,    56,    57,
      58,    -1,    -1,     5,    62,     7,    64,     9,    10,    11,
      68,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    44,    45,    -1,    47,    -1,    -1,    50,    -1,
      -1,    53,    54,    55,    56,    57,    58,    -1,    -1,     5,
      62,     7,    64,     9,    10,    11,    68,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,    45,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    54,    -1,
      -1,    57,    58,    -1,    -1,     5,    62,     7,    64,     9,
      10,    11,    68,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    44,    45,    -1,    47,    -1,    -1,
      50,    -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,     5,    62,     7,    64,     9,    10,    11,    68,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      44,    45,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,
      54,    -1,    -1,    57,    58,    -1,    -1,     5,    62,     7,
      64,     9,    10,    11,    68,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    44,    45,    -1,    47,
      -1,    -1,    50,    -1,    -1,    53,    54,    -1,    -1,    57,
      58,    -1,    -1,     5,    62,     7,    64,     9,    10,    11,
      68,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    44,    45,    -1,    47,    -1,    -1,    50,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    -1,    -1,     5,
      62,     7,    64,     9,    10,    11,    68,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,    45,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    54,    -1,
      -1,    57,    58,    -1,    -1,     5,    62,     7,    64,     9,
      10,    11,    68,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    43,    44,    45,    -1,    47,    -1,    -1,
      50,    -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,     5,    62,     7,    64,     9,    10,    11,    68,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      44,    45,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,
      54,    -1,    -1,    57,    58,    -1,    -1,     5,    62,     7,
      64,     9,    10,    11,    68,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    43,    44,    45,    -1,    47,
      -1,    -1,    50,    -1,    -1,    53,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,
      68,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    37,    38,    -1,    40,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    73,    74,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    72,    -1,    33,    75,    76,    77,    78,    79,    -1,
      -1,    41,    -1,    -1,    44,    45,    -1,    -1,    37,    38,
      50,    40,    41,    -1,    -1,    -1,    45,    57,    -1,    -1,
      49,    -1,    62,    -1,    64,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    74,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    72,    -1,    33,    75,    76,    77,    78,
      79,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,
      37,    38,    50,    40,    -1,    -1,    -1,    -1,    -1,    57,
       6,    -1,    49,    -1,    62,    -1,    64,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    74,    23,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    72,    -1,    33,    75,    76,
      77,    78,    79,    -1,    -1,    41,    -1,    -1,     6,    45,
      -1,    -1,    -1,    -1,    50,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    62,    -1,    64,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,     6,    45,    -1,    -1,
      -1,    -1,    50,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    62,    -1,    64,    27,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    41,    27,    -1,    -1,    45,    -1,    -1,    33,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      45,    -1,    62,    -1,    64,    50,    -1,    -1,    -1,    54,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      -1,    -1,    -1,    68,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    43,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    -1,    -1,    68,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    64,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    73,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    64,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    64,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    64,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    73,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    62,
      -1,    64,    27,    -1,    -1,    -1,    31,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    50,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    62,    -1,    64,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    50,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    62,    -1,    64,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    62,    -1,    64,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    62,    -1,    64,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    62,    -1,    64,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    62,
      -1,    64,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    24,    33,    41,    53,    58,
      60,    62,    64,    65,    66,    70,    71,    81,    82,    83,
      84,    89,    92,   104,   115,   120,   134,   152,   153,   154,
     174,   179,   181,   182,   184,    15,     6,   153,    41,    45,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    23,
      27,    41,    45,    50,    62,    64,   108,   132,   134,   173,
     175,   177,   178,   179,   183,   184,   190,    15,    45,   131,
       6,    50,   155,   156,   157,    15,    15,    43,    62,   116,
     117,    64,    89,    92,   104,   120,   120,    15,    15,    15,
      33,   109,   110,     0,    83,    49,   164,   164,    72,    79,
     109,   153,   164,    15,    41,    45,    50,    57,    62,    63,
      73,    74,   133,   160,   172,   173,   174,   179,   185,   186,
     187,   172,    41,    45,   178,   173,   173,   172,   173,    43,
      22,    23,    24,    25,    26,    28,    29,    30,    31,    32,
      33,    34,    35,    39,    50,    57,    59,    73,    31,    45,
      48,    15,    31,     6,    42,    48,    15,   134,   179,   184,
      49,    15,    62,   118,    47,    59,    72,   120,   109,   109,
      43,    15,    61,    74,   111,   113,   114,   130,   131,    15,
      85,    15,    50,   130,   165,    37,    38,    40,    75,    76,
      77,    78,   150,   150,    15,   180,   181,   180,    41,   164,
     150,    42,   135,   136,   172,     6,    62,   133,   172,    15,
      43,    42,    48,    46,   185,   185,    42,    48,   141,   142,
     173,   173,   173,   173,   173,   173,   173,   173,    31,   173,
     173,    33,   173,   173,   173,   173,   173,    40,   173,    24,
      50,   127,   173,    41,    15,    15,    46,    47,    41,   155,
     165,    48,    48,    44,    15,   119,   116,    43,    41,    43,
      93,     3,    90,    91,    74,   130,    31,    48,    33,    41,
      72,   109,   130,    50,   158,   158,    72,    79,    15,    57,
      74,   121,   122,   123,   127,   128,   150,   158,    46,    48,
      47,    15,    21,    41,    45,   133,   178,   179,   183,   184,
     188,   189,   190,    73,    15,   161,   162,   163,   179,   184,
     187,    42,    46,   172,    44,     7,     9,    10,    11,    15,
      41,    43,    44,    47,    54,    68,   115,   133,   134,   143,
     144,   148,   152,   160,   166,   167,   168,   169,   172,   174,
     179,   184,   173,    15,    45,   173,    24,   173,     6,    53,
     129,     6,    74,   130,   176,   185,    47,    31,    15,   178,
     185,   150,   118,   118,    47,     4,    98,   105,   106,    94,
      95,   130,    96,    97,    98,    47,    15,    44,    91,   111,
     111,   111,   112,    15,    11,    86,     6,    41,    43,   133,
     144,   159,   160,   172,   159,   180,   180,    42,    48,    62,
      49,   158,   159,   172,    15,   178,   172,   172,    43,   172,
      44,    48,    49,    46,     5,    15,   149,   153,   172,   174,
     179,   172,    43,    15,    50,   142,    47,   133,   172,    15,
     147,   179,    43,    36,    47,    45,    15,   173,    42,    15,
     178,    41,    46,    46,    42,   158,    15,   107,    44,    48,
      42,    48,    44,    48,    60,   103,   109,    31,    42,    85,
      43,   173,   186,   141,   142,    47,    43,    47,    51,   137,
     123,     6,    24,    50,   102,   124,   159,    47,    46,    46,
      42,   141,   142,    44,   162,    41,   172,     6,   153,    43,
     164,    43,   164,    43,   170,    12,    44,   172,    47,    47,
      43,   161,    47,    15,    46,    46,   185,   159,    41,    43,
      49,   109,    44,   106,    95,    44,    97,    15,    41,   109,
      60,    64,    87,    88,   120,    42,    44,    44,   161,   124,
     138,    43,     6,    61,     6,    61,   125,   126,   130,    47,
      44,    44,    42,   153,   164,   142,   150,   142,   150,   170,
      43,    44,    47,    55,    56,   115,   144,   148,   152,   166,
     169,   171,   172,   172,    74,   145,   146,   172,    44,    48,
      42,    47,   105,   105,   130,    49,   121,    64,   120,   120,
      44,    88,    44,    48,    67,   141,   142,    15,    15,   109,
      72,   164,   150,    44,   158,    44,   158,    44,   170,    47,
      47,    47,    43,    69,    44,    48,    69,    44,    42,    48,
      44,    99,   102,    42,   120,    44,   126,   139,   140,    44,
      44,     6,     6,   125,   150,   158,     8,    15,   151,   179,
     184,     8,   151,    44,   170,   159,    44,   146,    54,   159,
      41,   100,   101,   130,   137,    49,    48,   158,   151,    43,
     166,    43,   166,    44,   159,    42,   109,    72,    47,   172,
     184,   140,   151,   142,   142,   100,    51,    44,    44,   138
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    89,    90,    90,    91,    92,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     111,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   118,
     118,   118,   118,   119,   120,   120,   121,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   125,   125,   126,   127,
     127,   127,   127,   128,   129,   129,   129,   130,   130,   131,
     131,   131,   131,   131,   132,   133,   133,   133,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   141,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   144,   144,   145,
     145,   146,   146,   146,   147,   147,   148,   148,   148,   149,
     149,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     151,   151,   151,   152,   152,   152,   152,   152,   153,   153,
     153,   153,   153,   153,   154,   155,   155,   156,   156,   157,
     157,   157,   157,   158,   158,   158,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   161,   161,   162,   162,
     162,   163,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   167,   168,   168,   168,   169,   169,   169,   170,
     170,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   172,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   174,   175,   176,   176,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   178,   178,   179,   179,
     180,   180,   180,   181,   181,   181,   181,   181,   182,   182,
     182,   183,   183,   184,   185,   185,   185,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   188,   188,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   190,   190
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       1,     1,     1,     2,     1,     2,     1,     1,     2,     1,
       8,     1,     3,     3,     0,     1,     2,     2,     1,     3,
       2,     5,     1,     2,     8,     6,     7,     5,     0,     3,
       0,     1,     3,     1,     1,     3,     5,     0,     1,     3,
       3,     1,     1,     2,     1,     2,     1,     1,     2,     3,
       3,     4,     4,     0,     1,     0,     6,     7,     1,     3,
       2,     2,     3,     4,     4,     4,     4,     1,     0,     3,
       3,     4,     4,     1,     1,     0,     1,     0,     1,     1,
       2,     2,     3,     5,     3,     1,     1,     1,     3,     3,
       1,     3,     1,     1,    10,    10,     1,     1,     2,     1,
       0,     1,     3,     3,     2,     3,     3,     1,     1,     0,
       1,     2,     2,     1,     1,     1,     0,     1,     1,     3,
       5,     5,     6,     6,     5,     3,     5,     5,     4,     1,
       0,     1,     3,     2,     0,     1,     3,     1,     3,     3,
       5,     2,     2,     5,     6,     2,     0,     2,     3,     1,
       1,     1,     1,     3,     1,     1,     1,     5,     6,     1,
       3,     3,     3,     4,     1,     1,     2,     3,     3,     6,
       7,     5,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     7,     8,     8,     6,     6,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     2,     2,     1,
       2,     1,     0,     1,     2,     0,     1,     1,     3,     3,
       3,     4,     5,     1,     1,     1,     1,     3,     1,     3,
       4,     1,     1,     1,     2,     0,     1,     2,     1,     1,
       5,     9,     7,     5,     9,     7,     5,     4,     7,     2,
       0,     2,     1,     1,     1,     1,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     4,     3,     3,     4,     5,     3,     2,     1,     4,
       1,     1,     2,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     6,     6,
       8,     4,     4,     4,     1,     2,     0,     1,     3,     1,
       2,     1,     1,     2,     1,     2,     3,     3,     4,     6,
       6,     4,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 2206 "parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 791 "parser.y" /* yacc.c:1906  */


void yyerror(const char* err) {
    printf("Parser line %d: %s - '%s'\n", yyline, err, yytext);
}
