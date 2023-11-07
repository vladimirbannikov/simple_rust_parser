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

/* Copy the second part of user declarations.  */

#line 192 "parser.c" /* yacc.c:358  */

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
#define YYFINAL  122
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  473
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  960

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    53,     2,    26,    51,    62,
      42,    43,    24,    22,    49,    23,    84,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    48,
      33,    41,    31,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,    79,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,    78,    45,     2,     2,     2,     2,
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
      32,    34,    35,    37,    38,    39,    40,    52,    54,    55,
      56,    57,    58,    59,    60,    61,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    80,    81,    82,    83
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    46,    50,    51,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    85,    89,    90,    94,    95,    99,   100,
     101,   102,   106,   107,   108,   114,   115,   119,   120,   124,
     128,   129,   133,   134,   138,   139,   143,   144,   145,   146,
     147,   148,   153,   154,   158,   159,   163,   164,   165,   166,
     167,   168,   169,   173,   177,   178,   179,   183,   184,   188,
     189,   190,   191,   195,   196,   200,   201,   208,   212,   213,
     217,   221,   222,   226,   227,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   245,   246,   251,   252,
     256,   257,   261,   265,   266,   267,   268,   269,   270,   275,
     279,   284,   285,   289,   293,   294,   295,   296,   300,   301,
     306,   307,   311,   312,   316,   317,   318,   319,   320,   321,
     326,   327,   332,   333,   337,   338,   339,   340,   344,   345,
     346,   347,   348,   352,   356,   357,   361,   362,   363,   364,
     368,   369,   373,   374,   375,   376,   380,   384,   385,   389,
     393,   394,   395,   396,   400,   401,   406,   407,   408,   412,
     413,   417,   418,   419,   420,   424,   428,   429,   433,   434,
     435,   439,   440,   444,   445,   449,   450,   451,   452,   456,
     460,   461,   465,   466,   470,   471,   475,   476,   483,   484,
     485,   486,   487,   488,   492,   493,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   521,   522,   527,   528,   532,
     533,   534,   535,   536,   537,   538,   539,   543,   548,   549,
     550,   554,   555,   556,   557,   558,   559,   563,   564,   565,
     566,   567,   568,   569,   573,   574,   575,   579,   580,   581,
     582,   583,   584,   585,   586,   587,   588,   589,   590,   595,
     596,   597,   598,   599,   600,   601,   605,   609,   610,   614,
     615,   619,   620,   621,   622,   626,   627,   628,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   648,   649,   654,   655,   659,   660,   661,   665,   666,
     667,   668,   673,   674,   675,   679,   680,   685,   686,   687,
     688,   689,   690,   695,   696,   700,   701,   702,   704,   705,
     706,   710,   711,   712,   714,   715,   716,   720,   724,   725,
     729,   730,   731,   735,   736,   740,   741,   746,   747,   752,
     753,   754,   756,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   791,   792,   793,   797,
     801,   802,   806,   807,   808,   809,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,   850,
     851,   852,   856,   857,   861,   862,   863,   867,   868,   869,
     873,   874,   875,   876,   877,   881,   882,   883,   887,   888,
     892,   897,   898,   899,   900,   905,   906,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   922,   927,
     928,   929,   930,   931,   932,   938,   939,   943,   948,   949,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     967,   968,   969,   970
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FN", "LET", "MUT", "IF", "ELSE",
  "WHILE", "LOOP", "FOR", "IN", "lit_integer", "lit_real", "ident",
  "line_string", "line_bstring", "multiline_string", "multiline_bstring",
  "macro_ident", "char_", "bchar_", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "and", "or", "eqt", "'>'", "geq", "'<'", "leq", "neq", "'?'",
  "BIT_OR_ASSIGN", "XOR_ASSIGN", "XOR", "EXTERN_TOK", "'='", "'('", "')'",
  "'{'", "'}'", "'['", "']'", "';'", "','", "':'", "'&'", "RIGHT_ARROW",
  "'#'", "CONST", "RETURN", "BREAK", "CONTINUE", "DOTDOT", "USE", "AS",
  "PUB", "'\\''", "SELF", "REF", "UNSAFE", "TYPE_TOK", "MOD_TOKEN",
  "STATIC_TOKEN", "METK_TOKEN", "ENUM_TOK", "STRUCT_TOK", "WHERE", "MATCH",
  "MATCH_ARROW", "TRAIT", "IMPL", "resolution_operator", "'|'", "'_'",
  "PLUS_OR_ASSIGN", "MINUS_OR_ASSIGN", "MUL_OR_ASSIGN", "DIV_OR_ASSIGN",
  "'.'", "$accept", "crate", "global_items", "global_item", "macro_func",
  "attribute", "attribute_inside_params", "attribute_inside_param",
  "attribute_inside_param_assign_rvalue", "module", "type_seq",
  "implementation", "ident_sequence", "maybe_for",
  "function_defenition_sequence", "function_def_token", "trait",
  "trait_inside_seq", "trait_inside_tok", "crate_seq", "struct",
  "maybe_args_for_struct", "maybe_args_for_struct_sequence",
  "types_sequences", "struct_fields", "struct_field", "maybe_attribute",
  "type_or_generic_for_struct", "struct_type_ident",
  "struct_type_ident_token", "maybe_mut_for_struct", "maybe_pub", "enum",
  "enum_fields", "enum_field", "enum_field_token",
  "unsafe_statements_block", "unsafe_return_block", "maybe_generic",
  "generic", "generic_seq", "generic_seq_or_empty", "maybe_ident",
  "generic_types_sequence", "generic_symbol", "use_sequence", "use_left",
  "use_left_token", "use_args", "use_right", "function", "maybe_params",
  "params", "param", "func_param_type_or_generic", "fn_params_type_ident",
  "fn_params_type_ident_token", "maybe_mut_for_fn_params", "pattern",
  "maybe_mut_or_const", "raw_type", "array_or_slice_type", "array_slice",
  "array_rvalue", "array_indexing", "maybe_exprs", "exprs",
  "maybe_return_type", "tuple_return_types", "types_sequence_return_tuple",
  "func_return_type", "where_types_sequence", "where_types_sequence_ident",
  "return_expression", "statements", "statement", "match_statement",
  "match_inside_statements", "match_inside_statement", "match_ident",
  "return_token_expr", "assignment_without_semicolon",
  "assignment_operator", "assignment_without_semicolon_rvalue",
  "assignment", "lvalue", "tuple_lvalue", "tuple_lvalue_ident_seq",
  "tuple_lvalue_ident", "maybe_tuple_lvalue_ident_prefix",
  "maybe_rvalue_prefix", "rvalue", "lvalue_outside_brackets",
  "inside_brackets_types_rvalue", "inside_brackets_types_rvalue_ident",
  "inside_brackets_types_rvalue_ident_left", "maybe_assignment_type",
  "assignment_type_seq", "assignment_type", "if_statement",
  "if_let_statement", "if_expr_statement", "metk_statement", "maybe_metk",
  "cycle_statement", "condition", "expr_or_unsafe_expr", "expr",
  "unsafe_expr", "expr_binary_operation", "pointer", "borrow",
  "type_for_as_seq", "expr_token", "number", "method_or_field",
  "method_or_field_2", "method_or_field_token", "generic_function_call",
  "macro_call", "function_call", "maybe_args", "args", "arg", "closure",
  "closure_seq", "closure_seq_token", "expr_for_passing",
  "non_brackets_expr", "string", YY_NULLPTR
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
     286,    61,    40,    41,   123,   125,    91,    93,    59,    44,
      58,    38,   287,    35,   288,   289,   290,   291,   292,   293,
     294,   295,    39,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   124,    95,
     311,   312,   313,   314,    46
};
# endif

#define YYPACT_NINF -780

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-780)))

#define YYTABLE_NINF -424

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1848,    61,   169,   586,  -780,  -780,  -780,  -780,    70,  5161,
      60,   587,   184,   164,    91,   246,  2108,   249,    47,   178,
     198,    68,   258,   278,   313,   299,  -780,   413,  1848,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,   305,  -780,   366,  -780,   366,  -780,   387,  -780,   464,
     414,   299,   802,   562,  3598,  4534,  -780,  -780,  -780,   586,
     338,  -780,  -780,   469,  5161,  3666,  4586,  4638,   606,   249,
     606,  -780,   305,  4326,  -780,  -780,  -780,  -780,  -780,   464,
     414,   478,   264,   472,   476,   519,  -780,  -780,   503,   485,
     490,   940,   517,   812,   528,  -780,  -780,    45,  -780,   355,
     526,   424,    47,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,   502,   544,   611,   619,   299,   299,   623,    74,
     476,  -780,  -780,  -780,   993,   773,   773,   181,   181,   181,
     600,   639,  -780,   993,   773,  5320,   531,  3326,  4586,  3802,
     606,  4690,   802,  -780,  -780,   628,  -780,  4326,  -780,   665,
     608,   666,  -780,  -780,   452,   682,  4485,  2182,  3598,  3598,
    -780,   836,  1692,    51,   696,  5161,   701,   584,  -780,  -780,
    -780,  -780,  -780,  5161,  5161,  5161,  5161,  5161,  5161,  5161,
    5161,  4742,  5161,  5213,  5161,  5161,  5161,  5161,  4794,   350,
    5161,   689,   734,   737,   633,   740,   722,  -780,   211,  -780,
    -780,  -780,   184,   586,  -780,   812,   607,  -780,   244,  -780,
     459,   209,   718,   727,  -780,   763,   246,   519,  -780,  -780,
    -780,   476,  -780,  1848,  -780,   741,   750,   749,   650,   202,
     270,    81,    72,  -780,   728,   307,    59,   752,  -780,  -780,
    -780,    56,   304,   753,   459,   179,   283,    56,  -780,  -780,
     766,  -780,  -780,  -780,  -780,  -780,  -780,  -780,   761,   761,
    -780,   480,  -780,  -780,    66,  -780,   993,   773,   688,   328,
     586,  -780,  -780,  4586,   249,   305,  -780,  -780,  -780,   464,
    -780,  -780,   414,  -780,   774,   784,   708,  1458,  -780,  -780,
     366,   224,  -780,   620,  -780,  3666,  -780,  -780,  4427,  3258,
    3258,   778,   826,  2053,   519,  3734,  -780,  -780,  -780,  4320,
     776,   776,   803,  1369,   808,   814,  4479,  1631,  -780,  -780,
    -780,  1500,  -780,  -780,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,   406,   399,   910,  1757,   829,   827,  -780,  -780,  3394,
    4586,   370,  -780,  -780,   370,   370,   370,   836,   836,   701,
    5161,   701,   701,  5265,   701,   701,   701,   836,   701,  4846,
     836,   172,   870,    69,   701,  3598,   828,   851,  -780,  4586,
     840,  3598,  -780,   869,  -780,   663,  -780,   812,  1592,   812,
     773,    45,   876,    45,  -780,  -780,   859,  -780,  -780,    56,
    1333,   459,   459,   860,   262,   860,   872,   908,  -780,   113,
     920,  -780,  -780,   322,  -780,  -780,  -780,  -780,   358,  -780,
      74,    74,   120,    81,   915,   283,   885,   884,   867,  -780,
    -780,  -780,   459,   931,  4052,  4052,   181,   181,   874,  -780,
    -780,   888,   897,   894,  -780,   886,   903,   731,   761,  -780,
    4052,   913,   919,  -780,  4586,  4586,  4586,  -780,  -780,  -780,
     802,  4375,   586,   606,   598,  -780,   916,  -780,   464,  -780,
    -780,   479,   921,  -780,   927,   366,   932,  -780,   948,  5008,
     475,  -780,   942,  -780,  -780,   973,  -780,  5320,  3854,  2254,
    -780,   941,   947,  -780,  4586,   950,   519,  -780,   821,   956,
    -780,  -780,  -780,   953,  -780,  -780,  -780,  -780,   928,   701,
     207,  4898,   701,  5161,   836,  -780,  -780,  -780,  -780,  1110,
    -780,  -780,  -780,   959,  4586,   966,   965,  4586,   963,  -780,
    -780,  -780,  -780,  -780,  -780,  -780,   536,   761,  -780,   962,
    -780,  -780,   967,  -780,   773,   773,  -780,   999,   610,  -780,
     975,   283,   976,  -780,   971,   658,  -780,   968,  -780,   299,
    1009,  1021,  -780,  1011,  -780,  -780,   157,  -780,   977,   395,
     977,   985,  -780,   476,   986,  -780,  -780,   283,  -780,  -780,
    3462,  -780,  -780,  -780,   983,   992,  -780,  -780,  -780,   948,
     173,   131,   989,  -780,  -780,  -780,   988,   125,  -780,   247,
    -780,  4052,   995,  -780,  -780,  -780,   994,   997,  -780,  -780,
     382,  -780,  -780,  -780,   551,  4950,   802,   530,  -780,  -780,
     773,  -780,  5002,  5002,   773,  -780,  2326,  3258,  1458,  -780,
    -780,  -780,   998,  -780,  -780,  -780,  1004,  2398,  -780,  4252,
    -780,  -780,  5057,   505,  5109,   370,  -780,  1023,  -780,  1022,
    3598,  -780,  1029,  -780,  -780,  4052,    45,  -780,   761,   761,
     496,  -780,  -780,   230,  -780,  -780,  -780,   283,  -780,   433,
    -780,  1054,  1035,   299,  1065,   299,  -780,  -780,    56,    99,
    -780,  -780,  1036,  2470,  -780,   620,  -780,  -780,  -780,   438,
    1039,  -780,  -780,    79,   108,   283,  -780,  1032,  -780,  -780,
    1040,  2542,  1043,  1181,  -780,  -780,  3530,  -780,   555,   773,
    3190,  1046,  2614,   761,  1048,  2686,  -780,  5271,  -780,   701,
     761,  2758,  -780,  1044,  -780,  -780,   771,  1999,  -780,  4320,
    -780,  -780,   366,  1050,   406,   550,  1383,  1010,   717,  -780,
    1027,   265,   849,  -780,  -780,  1060,  -780,  1058,  -780,  4052,
    4052,   835,   860,   860,   283,  -780,  -780,  -780,  -780,  -780,
    -780,  1059,    66,  1069,   299,  1070,  -780,    82,   519,  -780,
    -780,   333,  -780,  -780,  -780,  -780,   720,  -780,   283,  1041,
    -780,  -780,  -780,  -780,  1103,  -780,    58,   299,  1042,  -780,
    -780,  -780,  -780,  -780,   653,  1074,  -780,  -780,   773,   761,
    1115,  1116,  1243,  1118,  1120,  1243,  -780,  -780,   802,   410,
     773,   620,   773,  3920,  -780,  4184,  3986,  -780,  -780,  1080,
    1081,  -780,  -780,   570,   725,   299,   247,  1087,    66,  1089,
      66,   519,  -780,  -780,  -780,  -780,  -780,   901,   299,  1093,
     283,  1092,  2830,  1134,  1141,  -780,  -780,   283,  2902,   620,
     761,  1243,    52,   150,   662,  -780,  -780,  1099,   218,   221,
    -780,  2974,   640,   773,   761,   733,   761,  4052,  -780,  -780,
    -780,  -780,  -780,  4052,  -780,  -780,  -780,  -780,  -780,  -780,
     860,  -780,  -780,  -780,   317,   988,  1104,    66,  1105,  -780,
    -780,  1100,  -780,  1102,  1101,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,   745,  1243,  -780,  -780,  -780,  -780,  -780,  -780,
    -780,  -780,  -780,  -780,   773,   328,  4118,  -780,   964,  4118,
    -780,  -780,  1112,   299,  1082,  -780,  1119,   988,  1117,   988,
     283,  4586,   283,  -780,  1057,  -780,  1123,  3046,  1124,  3118,
     761,  4118,   430,   487,   136,  -780,  -780,  -780,   317,  -780,
    1125,   988,  1126,  -780,  -780,   368,  -780,  -780,  -780,  -780,
    -780,  -780,  4118,  -780,  -780,  1130,  -780,   247,  -780,  -780
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,   279,   470,   471,   472,   473,     0,     0,
       0,     0,   294,     0,     0,     0,     0,   282,     0,     0,
       0,     0,     0,     0,     0,   122,   285,     0,     2,     4,
      32,    14,    29,    28,    26,    22,    31,    18,    16,    15,
       6,   283,    20,   324,   284,   324,   281,     0,   424,   280,
       0,   122,     0,   324,   434,     0,   215,   412,   413,   398,
       0,   401,   402,     0,     0,     0,     0,     0,     0,   399,
       0,   406,   405,   389,   386,   388,   396,   407,   404,   403,
     400,     0,     0,     0,     0,     0,    11,   291,   293,     0,
     287,     0,     0,     0,     0,   144,   147,     0,   145,     0,
     143,     0,     0,    30,    27,    23,    19,    17,     7,    21,
      25,     9,     0,     0,     0,     0,   122,   122,     0,   131,
       0,   121,     1,     5,     0,     0,     0,     0,     0,     0,
       0,   324,   277,     0,     0,     0,   398,     0,   192,     0,
     438,     0,     0,   440,   441,     0,   437,   357,   358,   407,
       0,   431,   435,   448,     0,     0,   357,     0,   434,   434,
     397,   385,   357,     0,     0,     0,   390,   420,   421,   423,
     410,   422,   411,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   170,
       0,     0,     0,     0,     0,     0,     0,    50,     0,    13,
     292,   286,   294,   289,   290,     0,     0,    36,    38,    39,
       0,   149,   151,     0,   140,     0,     0,     0,    10,    24,
       8,     0,    47,     0,    45,     0,     0,     0,    77,     0,
     179,     0,     0,   137,     0,     0,     0,   134,   127,   132,
     180,   122,   179,     0,     0,     0,     0,     0,   327,   322,
     326,   259,   258,   257,   260,   261,   262,   263,   297,   297,
     414,   417,   415,   416,   159,   276,     0,     0,   326,   297,
     463,   467,   468,     0,   461,   462,   460,   469,   465,   464,
     445,   458,   466,   433,     0,   191,   193,     0,   442,   439,
     324,     0,   455,     0,   430,   432,   189,   188,     0,     0,
       0,     0,     0,   398,     0,     0,   215,    33,   229,     0,
     348,   348,     0,   399,     0,     0,     0,     0,   218,   217,
     228,   405,   214,   227,   225,   220,   222,   334,   333,   232,
     223,     0,   324,   407,   403,     0,     0,   384,   408,     0,
       0,   391,   367,   368,   369,   370,   371,   363,   364,   365,
       0,   372,   373,     0,   374,   375,   366,   380,   377,     0,
     381,   178,   171,     0,   376,   434,     0,     0,   181,     0,
       0,   434,    73,     0,   288,     0,    34,     0,     0,     0,
       0,     0,     0,     0,   146,   153,     0,   142,    12,   122,
       0,     0,     0,    88,    79,    88,     0,     0,    63,     0,
       0,    67,    71,     0,    64,   135,   139,   138,     0,   123,
     131,   131,   131,     0,    53,     0,     0,   179,     0,   328,
     330,   332,     0,   295,     0,     0,     0,     0,     0,   174,
     158,   165,     0,   156,   160,     0,     0,   326,   297,   272,
       0,     0,     0,   186,     0,     0,   192,   443,   444,   457,
       0,     0,   319,     0,     0,   313,   315,   318,   320,   436,
     190,     0,     0,   362,     0,   324,     0,   355,   356,   357,
     324,   354,     0,   353,   215,     0,   234,     0,   293,     0,
     248,     0,     0,   349,   192,     0,     0,   215,     0,     0,
     247,   221,   224,     0,   216,   428,   429,   409,     0,   379,
     398,     0,   378,     0,   382,   176,   177,   173,   172,     0,
     393,   392,   387,     0,     0,     0,     0,     0,     0,    51,
      35,    37,    42,    41,    44,    43,     0,   297,   148,     0,
     150,   141,     0,    46,     0,     0,    89,     0,     0,   110,
       0,     0,     0,    80,    84,     0,    85,   107,    76,   122,
       0,     0,    72,     0,    62,    65,   179,   133,   124,     0,
     128,     0,   136,     0,     0,   331,   323,     0,   325,   296,
       0,   215,   300,   305,     0,     0,   308,   310,   298,   299,
     407,   403,     0,   418,   419,   164,   198,   157,   163,   105,
     273,     0,     0,   271,   459,   194,     0,   193,   456,   215,
     297,   449,   321,   446,     0,     0,     0,   324,   215,   215,
       0,   215,     0,     0,     0,   215,     0,     0,     0,   226,
     250,   249,     0,   193,   231,   233,     0,     0,   347,     0,
     219,   185,     0,   398,     0,   383,   395,     0,   426,     0,
     434,   182,     0,   425,    40,     0,     0,    48,   297,   297,
     122,   112,   108,    88,    82,    81,    78,     0,    74,    88,
     106,     0,     0,   122,     0,   122,   125,   126,   122,     0,
     329,   309,     0,     0,   275,     0,   306,   307,   274,   105,
       0,   161,    95,    98,    97,     0,   162,     0,   267,   187,
       0,     0,     0,     0,   447,   314,     0,   316,   324,     0,
       0,     0,     0,   297,     0,     0,   359,   360,   361,   366,
     297,     0,   351,     0,   230,   120,     0,   398,   119,   209,
     210,   211,   324,     0,   208,   324,   407,     0,     0,   237,
       0,   398,   398,   394,   184,     0,   183,     0,   152,     0,
       0,     0,    88,    88,     0,   113,   109,   111,    83,    75,
      86,     0,   159,     0,   122,     0,    52,     0,     0,    60,
      61,     0,    54,    57,   301,   302,     0,   197,     0,   202,
     196,   195,   215,    99,     0,    96,     0,   122,   168,   169,
     270,   451,   450,   215,   420,     0,   312,   317,     0,   297,
     338,   335,     0,   344,   341,     0,   350,   215,     0,   324,
       0,     0,     0,     0,   235,     0,     0,   427,   268,     0,
       0,   117,   118,     0,     0,   122,   105,     0,   159,     0,
     159,     0,    56,    59,    49,    55,   303,     0,   122,     0,
       0,     0,     0,   102,   100,   101,   166,     0,     0,     0,
     297,     0,     0,     0,   420,   256,   266,   422,     0,     0,
     255,     0,   324,     0,   297,     0,   297,     0,   244,   246,
     240,   236,   238,     0,   243,   245,   239,   269,   278,   116,
      88,   115,   114,    87,     0,   198,     0,   159,     0,    58,
     304,   201,   199,     0,   203,   204,   155,   154,   104,   103,
     167,   454,     0,     0,   251,   215,   340,   215,   337,   215,
     346,   215,   343,   352,     0,   297,     0,   212,     0,     0,
     242,   241,     0,   122,    92,    93,     0,   198,     0,   198,
       0,     0,     0,   452,     0,   252,     0,     0,     0,     0,
     297,     0,   398,   407,   403,   213,    94,    90,     0,    66,
       0,   198,     0,   200,   206,   403,   205,   453,   339,   336,
     345,   342,     0,    91,    68,     0,    70,   105,    69,   207
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -780,  -780,   949,   -22,  -780,     7,  -179,   786,  -780,  1155,
      -8,  -780,   123,  -780,  -780,   418,    48,  -780,   777,  -780,
    1165,  -780,  -780,  -495,  -780,   524,  -380,  -780,   250,  -780,
     369,  -780,  1168,    94,  -616,  -780,  -780,   405,   -19,   944,
     493,  -780,  -780,  -184,  -780,    27,   991,  -780,  -345,  -780,
       2,  -708,  -780,   602,   603,   364,  -779,  1015,  -780,  -780,
    1136,    13,  -780,  1402,  1142,   721,  -780,  -744,  -780,   289,
     254,  -780,   291,  -490,   -55,  -780,   359,  -780,   412,  -780,
    -780,  -269,  -123,  -713,    17,   272,  -780,  1017,  -780,  -780,
    -192,  -302,   743,  -633,  -594,  -780,   -24,  -232,  -111,  1154,
    -780,  -780,  -780,   909,   824,   609,  -256,  1187,  -260,   877,
      41,  -780,  -780,  -780,   -59,     0,   -50,   -66,  -780,  -126,
     294,  -134,   -44,   -94,  -264,  -780,   781,  -273,  -780,  1138
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,   317,   206,   207,   523,    32,
      33,    34,   247,   564,   761,   762,    35,   403,   404,    36,
      37,   396,   542,   543,   545,   546,   537,   873,   913,   914,
     685,   661,    38,   538,   539,   651,   318,   463,   120,   121,
     235,   561,   236,   237,   238,   320,    99,   100,   213,   386,
      40,   432,   433,   434,   769,   777,   778,   435,   436,   507,
     248,   240,    71,   572,    72,   284,   285,   680,   770,   829,
     771,   884,   885,   626,   700,   322,   323,   728,   729,   489,
     324,   721,   258,   845,   325,    43,    44,    89,    90,    91,
     424,   574,   575,   454,   455,   456,   126,   249,   250,   326,
     327,   328,   329,   484,   330,   472,   473,   578,   579,   147,
     148,    74,   512,    75,    76,    77,   260,    47,    48,    78,
      79,   150,   151,   152,   153,   291,   292,   280,   281,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   157,    46,   259,   160,   441,   123,    31,   104,   278,
     695,   269,   416,    86,   448,   547,    46,    42,   108,   125,
     111,   163,   268,    83,   335,   336,   375,    39,    46,   134,
     464,   471,   130,   109,   209,    31,   528,   747,   530,   468,
     468,    45,   766,   466,   817,    42,   655,   405,   407,   468,
       1,   883,    46,   482,   149,    39,   468,    45,   299,   211,
     490,   261,   261,   261,   105,   149,   110,   425,   170,    45,
     172,   428,   834,   114,    81,    51,   276,   440,   262,   263,
     429,   672,   850,   417,   773,     1,   242,   199,   230,   119,
     361,   204,   411,   163,   338,   242,   895,   227,   228,   380,
     339,   412,     1,   218,   220,    94,    82,   267,   212,   690,
     876,   509,   878,   775,    56,    82,   550,   362,    82,   701,
      82,   704,    24,   582,   430,   231,   835,    82,   894,  -170,
     428,   916,   115,   373,   230,   277,   232,   149,   592,   429,
     170,   774,    46,   883,   438,   431,   209,   821,   510,   361,
     219,   406,    13,   233,   170,   437,   299,   333,   149,   149,
     757,   278,   748,  -129,   758,    19,    82,   677,   855,   918,
     776,   231,   677,   940,    52,   942,   362,   505,   551,    19,
     925,  -265,   232,     3,     4,     5,     6,     7,  -170,    87,
     568,    92,   112,   417,   897,   167,   850,   955,   332,   233,
     526,   459,    10,   192,   431,   397,   892,   198,  -422,   676,
      93,    12,   113,  -422,    10,  -422,   208,  -312,   894,   388,
    -422,   402,   414,    46,   299,    82,   506,   299,   276,   562,
      31,   513,    17,   695,   -51,    88,   401,   518,   191,   925,
      42,   418,   234,   241,   168,   459,   591,   398,    26,    54,
      39,   479,   682,   632,   747,    13,   193,   527,   381,   372,
      95,   163,   899,   399,    45,   901,   449,   400,    19,   382,
      96,   683,   116,   450,    53,   746,   417,   637,   194,   547,
     534,   535,   831,    13,  -420,   378,   379,   277,   373,   687,
      97,  -420,   117,   457,    49,   149,    49,   417,   684,   333,
     333,   738,   451,  -130,   540,   149,   476,    54,    82,    98,
      49,    55,  -130,   514,   695,   195,   192,    46,   209,   524,
     209,   373,    49,   541,   131,   397,  -421,   118,   208,    82,
     695,   417,   119,  -421,   491,   645,     1,   -50,   409,   149,
     470,   470,  -420,   737,   389,   448,    49,   -50,   471,  -420,
     192,   278,   706,   708,   234,   234,   410,   468,    45,   912,
     261,   261,   171,    82,   171,   149,    83,   554,   123,   468,
     532,   149,   556,   730,   361,    13,   583,   584,   824,   423,
     158,   -50,  -423,   399,   159,   171,    13,   400,    19,  -423,
      46,   552,   173,   174,   757,   402,   417,    31,   758,    19,
     536,   362,   536,   214,    82,   926,   142,    42,   693,   928,
     401,   648,   649,   122,   290,   215,   124,    39,   276,   616,
     957,   171,   171,   171,   580,   580,   666,     1,    82,   279,
     189,    45,   627,   423,   171,  -358,    49,   809,   810,   217,
     580,   610,   493,   682,   410,  -422,   614,  -358,   171,   124,
      46,   334,  -422,   602,   494,  -254,   739,   740,   132,   468,
     133,    46,   683,   482,   127,   767,   167,     4,     5,     6,
       7,   128,    54,   242,  -311,  -264,    55,   277,   749,   333,
     768,    57,    58,   243,   606,    10,    13,   703,   625,   684,
     197,   710,   278,     3,     4,     5,     6,     7,   129,   296,
     208,   860,   208,   196,   866,    82,   735,  -420,   200,   191,
     245,   792,    10,   246,  -420,   168,   673,    49,   795,  -358,
     332,    12,     1,   676,   192,   124,   163,   193,   201,   119,
     662,  -312,  -266,   234,   234,   234,   234,   741,   742,   202,
     743,  -422,    17,   221,   691,   468,   744,    54,  -422,   730,
     222,    55,   368,   369,   702,   910,   705,   426,    26,   276,
     711,   911,   319,   205,   427,   452,     4,     5,     6,     7,
     149,   465,   465,    54,  -254,  -311,   789,    55,   210,   644,
     124,   279,  -420,   699,    10,   377,  -358,   458,   223,  -420,
       1,   580,   224,   334,   334,  -358,   694,   841,  -358,  -253,
     124,    84,    85,   216,   457,   124,    46,   582,  -420,   453,
     132,    49,   133,   869,   168,  -420,   333,   333,   277,   870,
     167,     4,     5,     6,     7,   225,    54,   726,    54,   592,
      55,   745,    55,   226,   452,     4,     5,     6,     7,    10,
     149,   441,   264,   603,   753,   580,   755,   604,   893,   756,
     687,   294,   163,    10,   376,   652,   377,   332,   470,   653,
     536,   760,   906,  -420,   909,   840,   536,   229,   725,   168,
    -420,   763,   293,   726,   788,   457,   759,   854,   453,   856,
     368,   369,   812,   168,    49,  -253,   668,   265,   265,   266,
     266,   726,   394,   786,   395,    54,   149,  -311,   800,    55,
     726,   802,   726,   658,    54,   726,  -264,   659,    55,  -312,
     520,   333,   377,   931,   725,   295,    46,   832,   581,   581,
     171,   171,   290,   173,   174,   175,   176,   177,   838,   297,
     905,   365,   725,   607,   581,   819,   439,   422,   952,   580,
     580,   725,   851,   725,    49,   340,   725,   171,   366,   536,
     536,   367,   332,   760,   370,    49,   445,   340,   836,   822,
     823,   189,   804,   763,   371,   826,   805,   383,   759,   827,
     871,   279,   384,   334,   870,   853,   798,   385,   907,   590,
     422,   930,   908,   573,   573,     3,     4,     5,     6,     7,
     923,   391,   846,   393,   924,   846,   872,   145,    46,   573,
     392,   457,   413,   580,    10,   408,   580,   415,   145,   881,
     251,   252,   423,    12,   253,   422,     3,     4,     5,     6,
       7,   443,   474,   879,    57,    58,   197,   457,   904,   300,
     301,   302,   726,   444,    17,    10,   813,   814,   333,   457,
     475,   846,   927,   486,    12,   483,   929,    57,    58,   811,
      26,   333,   487,   254,   255,   256,   257,   580,   173,   174,
     175,   176,   177,   580,   488,    17,   180,   181,   182,   183,
     184,   185,   495,   725,   496,   508,   514,   536,   698,   332,
     145,    26,   515,   519,   319,   581,    73,   187,   517,   465,
     529,    54,   332,   846,   937,    55,   189,   517,   458,   722,
      49,   145,   145,   558,   559,   560,   933,   531,   457,   933,
     334,   334,   279,    13,   190,   452,     4,     5,     6,     7,
     548,   334,   549,   553,   457,   563,  -420,   333,   566,   333,
     192,   933,   156,  -420,    10,   567,   569,   585,  -175,   581,
     586,   161,   162,   587,   166,   722,   880,  -281,  -281,   588,
     573,  -281,   933,   589,   203,     4,     5,     6,     7,   453,
    -281,   593,   594,   722,   168,   608,   605,   334,   332,   458,
     332,   609,   722,    10,   722,   631,   611,   722,   452,     4,
       5,     6,     7,   612,   617,   334,   615,   171,   799,   620,
    -281,  -281,  -281,  -281,   334,   621,   334,    10,   624,   334,
     629,   630,   638,   168,   573,   334,   643,   242,   640,   935,
      49,   646,   641,   650,   162,   647,   166,   243,   654,   656,
     657,   319,   453,   663,   664,   665,   410,   168,   667,   660,
     669,   674,   319,   581,   581,   244,   675,   678,   145,    82,
     679,   689,   341,   688,   245,   445,   714,   246,   145,   715,
     342,   343,   344,   345,   346,   347,   348,   349,   351,   352,
     354,   355,   356,   357,   358,   360,   733,   364,   751,   734,
     852,   452,     4,     5,     6,     7,   736,   752,   319,   754,
     780,   764,   145,   772,   803,   781,   847,   783,   797,   847,
      10,   790,    49,   793,   801,   458,   319,   581,   573,   573,
     581,   806,   947,   807,   722,   319,   808,   319,   145,   816,
     319,   818,   820,   830,   145,   453,   319,   833,   839,   837,
     168,   458,   842,   843,   242,   848,   334,   849,   867,   868,
     875,   877,   334,   458,   243,   847,   882,   886,    50,   888,
      50,   492,    41,  -265,    41,   334,   889,   917,   919,   920,
     922,   581,   921,   636,    50,   936,    82,   581,    41,   938,
     941,   245,   573,   521,   246,   573,    50,   939,   948,   950,
      41,   103,   390,   954,   956,   360,   469,   469,   958,   825,
     555,   106,   162,   750,   107,   874,   469,   847,   953,   681,
      50,   421,   686,   469,    41,   784,     4,     5,     6,     7,
     934,   890,   458,   934,   363,   622,    50,   387,    50,   943,
     169,   959,   169,   946,    10,   945,   573,   862,   458,   374,
     485,   334,   573,   334,     0,   934,   713,   499,     0,    50,
     502,   598,     0,   169,     0,     0,   504,   319,     0,     0,
       0,   146,   155,   319,   168,     0,   934,     0,   577,   577,
       0,     0,   146,   164,     0,   239,   319,   844,     4,     5,
       6,     7,     0,     0,   577,   573,     0,     0,   573,   169,
     169,   169,     0,   282,     0,     0,    10,   275,    50,     0,
      50,     0,   169,     0,    41,     0,     0,     0,     0,     0,
     573,     0,    50,     0,     0,     0,   169,     0,     0,   321,
       0,   469,   469,     0,     0,     0,   168,     0,     0,     0,
       0,   573,   628,   145,     0,     0,     0,   469,     0,     0,
       0,     0,     0,     0,   146,   286,     0,     0,   289,     0,
       0,     0,   319,     0,   319,     0,     1,     2,     0,     0,
       0,     0,     0,     0,   331,   146,   146,     3,     4,     5,
       6,     7,     8,     0,     0,   166,     0,     9,     0,     0,
       0,    50,     0,     0,     0,    41,    10,   239,   239,     0,
     723,     0,     0,    11,     0,    12,     0,     0,   533,     0,
     635,   419,   420,   145,     0,     0,    13,    14,     0,     0,
       0,     0,    15,     0,    16,     0,    17,     0,    18,    19,
      20,    21,     0,    22,    23,     0,  -282,  -282,    24,    25,
    -282,     0,    26,     0,     0,   577,   723,     0,     0,  -282,
    -281,  -281,     0,     0,  -281,   282,     0,  -312,     0,   275,
       0,    50,     0,  -281,   723,   169,   785,     0,     0,   145,
       0,   321,   321,   723,     0,   723,  -421,   162,   723,  -282,
    -282,  -282,  -282,  -421,     0,    50,   144,     0,     0,    41,
     442,     0,     0,  -281,  -281,  -281,  -281,   144,   469,   577,
      57,    58,   270,     4,     5,     6,     7,    60,   271,   272,
       0,     0,   146,     0,     0,     0,   467,   467,     0,   707,
     709,    10,   146,     0,   469,     0,   467,     0,     0,   511,
     273,     0,     0,   467,   446,     0,   469,     0,     0,   156,
       0,   166,     0,     0,     0,     0,   525,     0,     0,     0,
       0,   274,   469,     0,     0,     0,   146,   498,    50,     0,
     544,     0,    41,     0,     0,     0,     0,  -283,  -283,   144,
       0,  -283,     0,   288,   557,     0,   239,   239,   239,   239,
    -283,   565,   146,     0,     0,     0,   516,     0,   146,     0,
     144,   144,     0,   577,   577,     0,     0,     0,   169,   169,
       0,     0,     0,   162,     0,   723,     0,  -423,   576,   576,
    -283,  -283,  -283,  -283,  -423,     0,     0,     0,    50,     0,
       0,    50,    41,     0,   576,   169,   469,     0,     0,    50,
       0,     0,     0,    41,    57,    58,   522,     4,     5,     6,
       7,     0,     0,     0,     0,   282,   469,   469,     0,   275,
       0,   321,     0,     0,     0,     0,     0,   577,     0,     0,
     577,   595,   596,   597,     0,     2,     0,     0,   601,   300,
     301,   302,     0,     0,     0,     3,     4,     5,     6,     7,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,   331,     0,     0,     0,
       0,   623,     0,    12,     0,     0,     0,   544,     0,     0,
     469,   577,   469,   469,     0,    14,     0,   577,   164,   447,
       0,     0,     0,     0,    17,     0,     0,   144,     0,    21,
       0,   639,     0,   670,   642,     0,     0,   144,     0,     0,
      26,   481,     0,     0,   173,   174,   175,   176,   177,     0,
     178,   179,   180,   181,   182,   183,   184,   185,     0,     0,
     577,   186,     0,   577,   469,   337,   692,     0,     0,     0,
     469,   144,    50,   187,    50,   576,   169,     0,    41,     0,
     188,     0,   189,     0,     0,   577,   282,   146,   321,   321,
     275,     0,     0,     0,     0,     0,     0,   144,     0,   321,
     190,     0,     0,   144,     0,     0,   577,     0,     0,     0,
       0,     0,     0,   469,     0,     0,   469,     0,     0,     0,
       0,     0,   697,   544,  -280,  -280,     0,     0,  -280,   576,
       0,     0,     0,   331,   467,     0,     0,  -280,   469,     0,
       0,     0,     0,    50,   724,   321,   467,   169,     0,   155,
       0,   779,     0,     0,     0,     0,     0,   146,     0,   469,
       0,    50,     0,   321,  -422,   169,     0,  -280,  -280,  -280,
    -280,  -422,   321,     0,   321,     0,     0,   321,     0,     0,
       0,     1,     2,   321,    50,     0,     0,     0,    41,     0,
     724,     0,     3,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,   724,     0,
     815,    10,     0,   146,     0,     0,     0,   724,    11,   724,
      12,     0,   724,   576,   576,     0,     0,     0,   331,     0,
       0,    13,    14,     0,   828,     0,   467,    15,     0,    16,
       0,    17,     0,    18,    19,    20,    21,     0,    22,    23,
       0,     0,     0,    24,    25,     0,     0,    26,     0,     0,
      50,     0,     0,    50,   169,     0,    50,   169,     0,    50,
      41,     0,     0,   169,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,     0,
     576,     0,     0,     0,     0,    50,   779,     0,     0,   169,
       0,     0,   144,   779,   321,     0,     0,    50,     0,    50,
     321,   169,     0,   169,     0,     0,     0,     0,     0,     0,
       0,     0,   467,   321,     0,     0,   896,   898,     0,     0,
       0,     0,   900,   902,     0,     0,     0,     0,     0,     0,
     915,   576,     0,     0,     0,     0,     0,   576,     0,   724,
     447,     0,     0,     0,     0,   331,     0,     0,     0,   720,
       0,    50,     0,     0,     0,   169,  -279,  -279,   331,     0,
    -279,    54,   144,  -311,     0,    55,    50,     0,     0,  -279,
     169,     0,     0,     0,     0,     0,   828,     0,   779,     0,
     576,     0,    50,   576,     0,     0,   169,     0,     0,   321,
       0,   321,     0,     0,   915,   720,  -420,     0,     0,  -279,
    -279,  -279,  -279,  -420,     0,   576,     0,     0,     0,     0,
    -279,  -279,     0,   720,  -279,    54,     0,     0,   144,    55,
       0,     0,   720,  -279,   720,     0,   576,   720,   944,     0,
       0,     1,     2,     0,   331,     0,   331,     0,     0,     0,
       0,   481,     3,     4,     5,     6,     7,     0,     0,     0,
    -420,     0,     9,  -279,  -279,  -279,  -279,  -420,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,   101,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,   102,    19,    20,    21,     0,    22,    23,
       0,     0,     0,    24,     0,     0,     2,    26,   299,     0,
     300,   301,   302,     0,    57,    58,   303,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,   304,     0,   305,     0,   306,   307,    66,     0,
     308,     0,     0,    67,   720,    13,    14,   309,   310,   311,
      68,    15,     0,   312,     0,   313,     0,   314,     0,     0,
      21,   315,     0,     0,     0,   316,     0,     0,     2,    70,
     299,    26,   300,   301,   302,     0,    57,    58,   303,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,     0,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,   304,     0,   305,     0,   306,   619,
      66,     0,   308,     0,     0,    67,     0,    13,    14,   309,
     310,   311,    68,    15,     0,   312,     0,   313,     0,   314,
       0,     0,    21,   315,     0,     0,     0,   316,     0,     0,
       2,    70,   299,    26,   300,   301,   302,     0,    57,    58,
     303,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,     0,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,   304,     0,   305,     0,
     306,   712,    66,     0,   308,     0,     0,    67,     0,    13,
      14,   309,   310,   311,    68,    15,     0,   312,     0,   313,
       0,   314,     0,     0,    21,   315,     0,     0,     0,   316,
       0,     0,   716,    70,   299,    26,   300,   301,   302,     0,
      57,    58,   717,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,     0,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,   304,     0,
     305,     0,   306,   718,   138,     0,   308,     0,     0,    67,
       0,    13,    14,   719,   310,   311,    68,    15,     0,   312,
       0,   313,     0,   314,     0,     0,    21,   315,     0,     0,
       0,   316,     0,     0,   716,    70,   299,    26,   300,   301,
     302,     0,    57,    58,   717,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,     0,     0,    64,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
     304,     0,   305,     0,   306,   765,   138,     0,   308,     0,
       0,    67,     0,    13,    14,   719,   310,   311,    68,    15,
       0,   312,     0,   313,     0,   314,     0,     0,    21,   315,
       0,     0,     0,   316,     0,     0,   716,    70,   299,    26,
     300,   301,   302,     0,    57,    58,   717,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,   304,     0,   305,     0,   306,   782,   138,     0,
     308,     0,     0,    67,     0,    13,    14,   719,   310,   311,
      68,    15,     0,   312,     0,   313,     0,   314,     0,     0,
      21,   315,     0,     0,     0,   316,     0,     0,   716,    70,
     299,    26,   300,   301,   302,     0,    57,    58,   717,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,     0,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,   304,     0,   305,     0,   306,   791,
     138,     0,   308,     0,     0,    67,     0,    13,    14,   719,
     310,   311,    68,    15,     0,   312,     0,   313,     0,   314,
       0,     0,    21,   315,     0,     0,     0,   316,     0,     0,
     716,    70,   299,    26,   300,   301,   302,     0,    57,    58,
     717,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,     0,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,   304,     0,   305,     0,
     306,   794,   138,     0,   308,     0,     0,    67,     0,    13,
      14,   719,   310,   311,    68,    15,     0,   312,     0,   313,
       0,   314,     0,     0,    21,   315,     0,     0,     0,   316,
       0,     0,     2,    70,   299,    26,   300,   301,   302,     0,
      57,    58,   303,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,     0,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,   304,     0,
     305,     0,   306,   796,    66,     0,   308,     0,     0,    67,
       0,    13,    14,   309,   310,   311,    68,    15,     0,   312,
       0,   313,     0,   314,     0,     0,    21,   315,     0,     0,
       0,   316,     0,     0,   716,    70,   299,    26,   300,   301,
     302,     0,    57,    58,   717,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,     0,     0,    64,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
     304,     0,   305,     0,   306,   887,   138,     0,   308,     0,
       0,    67,     0,    13,    14,   719,   310,   311,    68,    15,
       0,   312,     0,   313,     0,   314,     0,     0,    21,   315,
       0,     0,     0,   316,     0,     0,     2,    70,   299,    26,
     300,   301,   302,     0,    57,    58,   303,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,   304,     0,   305,     0,   306,   891,    66,     0,
     308,     0,     0,    67,     0,    13,    14,   309,   310,   311,
      68,    15,     0,   312,     0,   313,     0,   314,     0,     0,
      21,   315,     0,     0,     0,   316,     0,     0,     2,    70,
     299,    26,   300,   301,   302,     0,    57,    58,   303,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,     0,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,   304,     0,   305,     0,   306,   903,
      66,     0,   308,     0,     0,    67,     0,    13,    14,   309,
     310,   311,    68,    15,     0,   312,     0,   313,     0,   314,
       0,     0,    21,   315,     0,     0,     0,   316,     0,     0,
       2,    70,   299,    26,   300,   301,   302,     0,    57,    58,
     303,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,     0,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,   304,     0,   305,     0,
     306,   949,    66,     0,   308,     0,     0,    67,     0,    13,
      14,   309,   310,   311,    68,    15,     0,   312,     0,   313,
       0,   314,     0,     0,    21,   315,     0,     0,     0,   316,
       0,     0,     2,    70,   299,    26,   300,   301,   302,     0,
      57,    58,   303,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,     0,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,   304,     0,
     305,     0,   306,   951,    66,     0,   308,     0,     0,    67,
       0,    13,    14,   309,   310,   311,    68,    15,     0,   312,
       0,   313,     0,   314,     0,     0,    21,   315,     0,     0,
       0,   316,     0,     0,   716,    70,   299,    26,   300,   301,
     302,     0,    57,    58,   717,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,     0,     0,    64,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
     304,     0,   305,     0,   306,     0,   138,     0,   308,     0,
       0,    67,     0,    13,    14,   719,   310,   311,    68,    15,
       0,   312,     0,   313,     0,   314,     0,     0,    21,   315,
       0,     0,   461,   316,     0,     0,     0,    70,     0,    26,
      57,    58,   303,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,     0,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     305,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,   313,     0,   462,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,    70,     0,    26,    57,    58,
     136,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,     0,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    65,   283,
       0,     0,   138,     0,     0,     0,     0,   139,     0,     0,
       0,     0,     0,     0,   140,     0,     0,     0,     0,    69,
     141,     0,     0,     0,     0,     0,     0,     0,     0,   135,
       0,     0,     0,    70,   142,   143,    57,    58,   136,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,     0,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    65,   497,     0,     0,
     138,     0,     0,     0,     0,   139,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,     0,    69,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   135,     0,     0,
       0,    70,   142,   143,    57,    58,   136,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    65,   671,     0,     0,   138,     0,
       0,     0,     0,   139,     0,     0,     0,     0,     0,     0,
     140,     0,     0,     0,     0,    69,   141,     0,     0,     0,
       0,     0,     0,     0,     0,   135,     0,     0,     0,    70,
     142,   143,    57,    58,   136,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,     0,     0,    64,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    65,   787,     0,     0,   138,     0,     0,     0,
       0,   139,     0,     0,     0,     0,     0,     0,   140,     0,
       0,     0,     0,    69,   141,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,     0,    70,   142,   143,
      57,    58,   136,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,     0,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     137,     0,     0,     0,   138,     0,     0,     0,     0,   139,
       0,     0,     0,     0,     0,     0,   140,     0,     0,     0,
       0,    69,   141,     0,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,    70,   142,   143,    57,    58,
     136,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,     0,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,   138,     0,     0,     0,     0,   139,     0,     0,
       0,     0,     0,     0,   140,     0,     0,     0,     0,    69,
     141,     0,     0,     0,     0,     0,     0,     0,     0,   477,
       0,     0,     0,    70,   142,   143,    57,    58,   136,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,     0,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
     138,     0,     0,     0,     0,   478,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,     0,    69,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   287,     0,     0,
       0,    70,   142,   143,    57,    58,    59,     4,     5,     6,
       7,    60,    61,    62,     0,    63,   165,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,   618,
      68,     0,     0,     0,     0,    69,    57,    58,    59,     4,
       5,     6,     7,    60,    61,    62,     0,    63,   165,    70,
       0,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,   299,     0,   300,   301,
     302,    70,    57,    58,   136,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,     0,     0,    64,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,   570,     0,   571,     0,   138,     0,     0,     0,
       0,    67,     0,     0,     0,   857,   858,   859,    68,     0,
       0,     0,     0,    69,     0,   462,     0,     0,     0,     0,
       0,     0,   299,   316,   300,   301,   302,    70,    57,    58,
     136,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,     0,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,   570,     0,
     571,     0,   138,     0,     0,     0,     0,    67,     0,     0,
       0,   863,   864,   865,    68,     0,     0,     0,     0,    69,
       0,   462,     0,     0,     0,     0,     0,     0,   299,   316,
     300,   301,   302,    70,    57,    58,   136,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,   570,     0,   571,     0,   138,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,     0,   462,     0,     0,
       0,     0,     0,     0,   299,   316,   300,   301,   302,    70,
      57,    58,   932,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,     0,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     570,     0,   571,     0,   138,     0,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,    69,     0,   462,     0,     0,     0,     0,     0,     0,
       0,   316,     0,     0,     0,    70,    57,    58,    59,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,     0,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,   861,
      66,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    69,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,   727,    57,    58,    59,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,     0,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,   727,    57,    58,    59,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,     0,     0,    64,   173,   174,
     175,   176,   177,    10,   178,   179,   180,   181,   182,   183,
     184,   185,    65,     0,     0,   186,   138,     0,   480,     0,
       0,    67,     0,     0,     0,     0,     0,   187,    68,     0,
       0,     0,     0,    69,   188,   462,   189,    57,    58,    59,
       4,     5,     6,     7,    60,    61,    62,    70,    63,     9,
       0,     0,    64,     0,   190,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,   599,
       0,    66,     0,     0,     0,     0,    67,   600,     0,     0,
       0,     0,     0,    68,     0,     0,     0,     0,    69,    57,
      58,    59,     4,     5,     6,     7,    60,    61,    62,     0,
      63,     0,    70,     0,    64,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,   359,    65,
       0,     0,     0,    66,   460,     0,     0,     0,    67,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      69,    57,    58,    59,     4,     5,     6,     7,    60,    61,
      62,     0,    63,     9,    70,     0,    64,   173,   174,   175,
     176,   177,    10,   178,   179,   180,   181,   182,   183,   184,
     185,    65,     0,     0,   186,    66,     0,     0,     0,     0,
      67,     0,     0,     0,     0,     0,   187,    68,     0,     0,
       0,     0,    69,   298,   462,   189,    57,    58,    59,     4,
       5,     6,     7,    60,    61,    62,    70,    63,     9,     0,
       0,    64,     0,   190,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,   154,     0,     0,     0,     0,    69,    57,    58,
      59,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,    70,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,    69,
      57,    58,    59,     4,     5,     6,     7,    60,    61,    62,
       0,    63,   165,    70,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,    69,    57,    58,    59,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,    70,     0,    64,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,   138,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,    68,     0,
       0,     0,     0,    69,    57,    58,    59,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     0,    70,     0,    64,
       0,     0,     0,   350,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,    57,    58,    59,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     0,    70,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,   359,    65,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    69,    57,    58,
      59,     4,     5,     6,     7,    60,    61,    62,     0,    63,
     503,    70,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,    66,     0,     0,     0,     0,    67,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,    69,
      57,    58,   633,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,    70,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,    66,     0,     0,     0,     0,   634,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,    69,    57,    58,    59,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,    70,     0,    64,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,   696,     0,     0,     0,    66,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,    68,     0,
       0,     0,     0,    69,    57,    58,    59,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     0,    70,     0,    64,
     173,   174,   175,   176,   177,    10,   178,   179,   180,   181,
     182,   183,   184,   613,    65,     0,     0,   186,    66,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,   187,
      68,     0,     0,     0,     0,    69,   188,   462,   189,    57,
      58,   731,     4,     5,     6,     7,    60,    61,    62,    70,
      63,     9,     0,     0,    64,     0,   190,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    65,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
       0,     0,     0,     0,     0,   154,     0,     0,     0,     0,
      69,    57,    58,   732,     4,     5,     6,     7,    60,    61,
      62,     0,    63,   165,    70,     0,    64,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,    69,    57,    58,    59,     4,     5,     6,     7,
      60,    61,    62,     0,    63,     0,    70,     0,    64,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,     0,     0,     0,     0,     0,    68,
       0,     0,     0,     0,    69,    57,    58,    59,     4,     5,
       6,     7,    60,    61,    62,     0,    63,     0,    70,     0,
      64,     0,     0,     0,     0,     0,   353,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,    66,
       0,     0,     0,     0,    67,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,     0,    69,    57,    58,   500,
       4,     5,     6,     7,    60,    61,    62,     0,    63,     0,
      70,     0,    64,   173,   174,   175,   176,   177,    10,   178,
     179,   180,   181,   182,   183,   184,     0,    65,     0,     0,
     186,   501,     0,     0,     0,     0,    67,     0,     0,     0,
       0,     0,   187,    68,     0,     0,     0,     0,    69,   188,
       0,   189,    57,    58,   270,     4,     5,     6,     7,    60,
     271,   272,    70,     0,     0,     0,     0,     0,     0,   190,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274
};

static const yytype_int16 yycheck[] =
{
       0,    56,     2,   126,    63,   269,    28,     0,    16,   135,
     604,   134,   244,    11,   287,   395,    16,     0,    16,    43,
      18,    65,   133,    10,   158,   159,   205,     0,    28,    53,
     299,   300,    51,    16,    93,    28,   381,   653,   383,   299,
     300,     0,   675,   299,   752,    28,   541,   231,   232,   309,
       3,   830,    52,   309,    54,    28,   316,    16,     6,    14,
     316,   127,   128,   129,    16,    65,    18,   259,    68,    28,
      70,     5,    14,     5,    14,    14,   135,   269,   128,   129,
      14,   571,   795,    14,     5,     3,    14,    85,    14,    33,
      24,    91,    33,   137,    43,    14,    44,   116,   117,   210,
      49,    42,     3,   101,   102,    14,    46,   131,    63,   599,
     818,    42,   820,     5,    44,    46,     3,    51,    46,   609,
      46,   611,    75,   425,    58,    51,    68,    46,   841,    63,
       5,   875,    64,    77,    14,   135,    62,   137,   440,    14,
     140,    62,   142,   922,   267,    79,   205,    65,    79,    24,
     102,    79,    53,    79,   154,   266,     6,   157,   158,   159,
      61,   287,   657,    43,    65,    66,    46,    36,   801,   877,
      62,    51,    36,   917,     5,   919,    51,     5,    65,    66,
     893,    45,    62,    14,    15,    16,    17,    18,    63,     5,
     422,    27,    14,    14,    44,    14,   909,   941,   157,    79,
     379,   295,    33,    46,    79,     3,   839,    84,    77,    36,
      46,    42,    14,    77,    33,    84,    93,    44,   931,   217,
      84,   229,   241,   223,     6,    46,    54,     6,   287,   413,
     223,   365,    63,   827,    77,    51,   229,   371,    31,   952,
     223,    62,   119,   120,    63,   339,   438,    45,    79,    42,
     223,   306,     5,    46,   870,    53,    49,   380,    49,    48,
      14,   305,    44,    61,   223,    44,   290,    65,    66,    60,
      24,    24,    14,    49,     2,    45,    14,   509,    14,   659,
     391,   392,   772,    53,    77,    41,    42,   287,    77,   591,
      44,    84,    14,   293,     0,   295,     2,    14,    51,   299,
     300,   646,    78,    33,    42,   305,   304,    42,    46,    63,
      16,    46,    42,    48,   908,    51,    46,   317,   377,   378,
     379,    77,    28,    61,    52,     3,    77,    14,   205,    46,
     924,    14,    33,    84,   317,   527,     3,    33,    31,   339,
     299,   300,    77,   645,   221,   618,    52,    77,   617,    84,
      46,   477,   612,   613,   231,   232,    49,   617,   317,    42,
     426,   427,    68,    46,    70,   365,   353,    45,   390,   629,
     389,   371,    14,   629,    24,    53,   426,   427,    45,    51,
      42,    77,    77,    61,    46,    91,    53,    65,    66,    84,
     390,   399,    22,    23,    61,   403,    14,   390,    65,    66,
     393,    51,   395,    48,    46,   895,    78,   390,   600,   899,
     403,   534,   535,     0,   142,    60,    50,   390,   477,   474,
      52,   127,   128,   129,   424,   425,    31,     3,    46,   135,
      60,   390,   487,    51,   140,    36,   142,   739,   740,    15,
     440,   465,    36,     5,    49,    77,   470,    48,   154,    50,
     450,   157,    84,   453,    48,    45,   648,   649,    48,   719,
      50,   461,    24,   719,    77,    27,    14,    15,    16,    17,
      18,    84,    42,    14,    44,    45,    46,   477,    45,   479,
      42,    12,    13,    24,     5,    33,    53,   610,   486,    51,
      14,   614,   618,    14,    15,    16,    17,    18,    84,    47,
     377,   803,   379,    31,   806,    46,   640,    77,     5,    31,
      51,   703,    33,    54,    84,    63,   571,   223,   710,    44,
     479,    42,     3,    36,    46,    50,   570,    49,    43,    33,
     549,    44,    45,   410,   411,   412,   413,    41,    42,    49,
      44,    77,    63,    41,   599,   805,    50,    42,    84,   805,
      48,    46,    47,    48,   609,   857,   611,    77,    79,   618,
     615,   863,   157,    46,    84,    14,    15,    16,    17,    18,
     570,   299,   300,    42,    44,    44,   699,    46,    50,    43,
      50,   287,    77,   607,    33,    49,    36,   293,    44,    84,
       3,   591,    48,   299,   300,    45,    45,   789,    48,    44,
      50,    14,    15,    77,   604,    50,   606,   909,    77,    58,
      48,   317,    50,    43,    63,    84,   616,   617,   618,    49,
      14,    15,    16,    17,    18,    14,    42,   627,    42,   931,
      46,   650,    46,    14,    14,    15,    16,    17,    18,    33,
     640,   905,    42,    45,   663,   645,   665,    49,   840,   668,
     952,    43,   696,    33,    47,    45,    49,   616,   617,    49,
     653,   669,   854,    77,   856,   788,   659,    44,   627,    63,
      84,   669,    44,   673,   698,   675,   669,   800,    58,   802,
      47,    48,   741,    63,   390,    45,   563,    48,    48,    50,
      50,   691,    42,   693,    44,    42,   696,    44,   722,    46,
     700,   725,   702,    45,    42,   705,    44,    49,    46,    44,
      47,   711,    49,   905,   673,    49,   716,   772,   424,   425,
     426,   427,   450,    22,    23,    24,    25,    26,   783,    47,
     853,    42,   691,   461,   440,   754,    48,    49,   930,   739,
     740,   700,   797,   702,   450,    49,   705,   453,    14,   742,
     743,    14,   711,   761,    14,   461,    48,    49,   777,   757,
     758,    60,    45,   761,    42,    45,    49,    49,   761,    49,
      45,   477,    45,   479,    49,   799,     5,    14,    45,    48,
      49,   904,    49,   424,   425,    14,    15,    16,    17,    18,
      45,    50,   792,    44,    49,   795,   815,    54,   798,   440,
      50,   801,    50,   803,    33,    77,   806,    54,    65,   828,
      37,    38,    51,    42,    41,    49,    14,    15,    16,    17,
      18,    47,    44,   821,    12,    13,    14,   827,   852,     8,
       9,    10,   832,    49,    63,    33,   742,   743,   838,   839,
      14,   841,   897,    40,    42,    69,   901,    12,    13,    14,
      79,   851,    44,    80,    81,    82,    83,   857,    22,    23,
      24,    25,    26,   863,    50,    63,    30,    31,    32,    33,
      34,    35,    43,   832,    47,     5,    48,   870,   606,   838,
     137,    79,    31,    14,   479,   591,     9,    51,    48,   617,
      14,    42,   851,   893,   913,    46,    60,    48,   604,   627,
     606,   158,   159,   410,   411,   412,   906,    48,   908,   909,
     616,   617,   618,    53,    78,    14,    15,    16,    17,    18,
      48,   627,    14,     3,   924,    10,    77,   927,    43,   929,
      46,   931,    55,    84,    33,    68,     5,    63,    50,   645,
      43,    64,    65,    49,    67,   673,    45,    37,    38,    63,
     591,    41,   952,    50,    14,    15,    16,    17,    18,    58,
      50,    48,    43,   691,    63,    44,    50,   673,   927,   675,
     929,    44,   700,    33,   702,    47,    44,   705,    14,    15,
      16,    17,    18,    35,    11,   691,    44,   693,   716,    48,
      80,    81,    82,    83,   700,    48,   702,    33,    48,   705,
      44,    48,    43,    63,   645,   711,    43,    14,    42,    45,
     716,    49,    47,    14,   137,    48,   139,    24,    43,    43,
      49,   616,    58,    14,     3,    14,    49,    63,    43,    61,
      44,    48,   627,   739,   740,    42,    44,    48,   295,    46,
      52,    47,   165,    48,    51,    48,    48,    54,   305,    45,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    43,   190,    14,    47,
     798,    14,    15,    16,    17,    18,    47,    42,   673,    14,
      48,    45,   339,    44,    74,    45,   792,    44,    44,   795,
      33,    45,   798,    45,    44,   801,   691,   803,   739,   740,
     806,    74,    45,    43,   832,   700,    48,   702,   365,    50,
     705,    42,    42,    72,   371,    58,   711,    14,    44,    77,
      63,   827,     7,     7,    14,     7,   832,     7,    48,    48,
      43,    42,   838,   839,    24,   841,    43,    45,     0,     5,
       2,   317,     0,    44,     2,   851,     5,    43,    43,    49,
      49,   857,    50,    43,    16,    43,    46,   863,    16,    77,
      43,    51,   803,   377,    54,   806,    28,    48,    45,    45,
      28,    16,   223,    48,    48,   298,   299,   300,    48,   761,
     403,    16,   305,   659,    16,   816,   309,   893,   938,   587,
      52,   247,   589,   316,    52,    14,    15,    16,    17,    18,
     906,   837,   908,   909,   189,   484,    68,   216,    70,   920,
      68,   957,    70,   922,    33,   921,   857,   805,   924,   202,
     311,   927,   863,   929,    -1,   931,   617,   350,    -1,    91,
     353,   450,    -1,    91,    -1,    -1,   359,   832,    -1,    -1,
      -1,    54,    55,   838,    63,    -1,   952,    -1,   424,   425,
      -1,    -1,    65,    66,    -1,   119,   851,    14,    15,    16,
      17,    18,    -1,    -1,   440,   906,    -1,    -1,   909,   127,
     128,   129,    -1,   135,    -1,    -1,    33,   135,   140,    -1,
     142,    -1,   140,    -1,   142,    -1,    -1,    -1,    -1,    -1,
     931,    -1,   154,    -1,    -1,    -1,   154,    -1,    -1,   157,
      -1,   424,   425,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,   952,   488,   570,    -1,    -1,    -1,   440,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,    -1,   141,    -1,
      -1,    -1,   927,    -1,   929,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,   157,   158,   159,    14,    15,    16,
      17,    18,    19,    -1,    -1,   478,    -1,    24,    -1,    -1,
      -1,   223,    -1,    -1,    -1,   223,    33,   231,   232,    -1,
     627,    -1,    -1,    40,    -1,    42,    -1,    -1,    45,    -1,
     503,   245,   246,   640,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    59,    -1,    61,    -1,    63,    -1,    65,    66,
      67,    68,    -1,    70,    71,    -1,    37,    38,    75,    76,
      41,    -1,    79,    -1,    -1,   591,   673,    -1,    -1,    50,
      37,    38,    -1,    -1,    41,   287,    -1,    44,    -1,   287,
      -1,   293,    -1,    50,   691,   293,   693,    -1,    -1,   696,
      -1,   299,   300,   700,    -1,   702,    77,   570,   705,    80,
      81,    82,    83,    84,    -1,   317,    54,    -1,    -1,   317,
     273,    -1,    -1,    80,    81,    82,    83,    65,   591,   645,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,   295,    -1,    -1,    -1,   299,   300,    -1,   612,
     613,    33,   305,    -1,   617,    -1,   309,    -1,    -1,   363,
      42,    -1,    -1,   316,    46,    -1,   629,    -1,    -1,   632,
      -1,   634,    -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,
      -1,    63,   645,    -1,    -1,    -1,   339,   340,   390,    -1,
     394,    -1,   390,    -1,    -1,    -1,    -1,    37,    38,   137,
      -1,    41,    -1,   141,   408,    -1,   410,   411,   412,   413,
      50,   415,   365,    -1,    -1,    -1,   369,    -1,   371,    -1,
     158,   159,    -1,   739,   740,    -1,    -1,    -1,   426,   427,
      -1,    -1,    -1,   696,    -1,   832,    -1,    77,   424,   425,
      80,    81,    82,    83,    84,    -1,    -1,    -1,   450,    -1,
      -1,   453,   450,    -1,   440,   453,   719,    -1,    -1,   461,
      -1,    -1,    -1,   461,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,   477,   739,   740,    -1,   477,
      -1,   479,    -1,    -1,    -1,    -1,    -1,   803,    -1,    -1,
     806,   444,   445,   446,    -1,     4,    -1,    -1,   451,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,   479,    -1,    -1,    -1,
      -1,   484,    -1,    42,    -1,    -1,    -1,   541,    -1,    -1,
     803,   857,   805,   806,    -1,    54,    -1,   863,   501,   287,
      -1,    -1,    -1,    -1,    63,    -1,    -1,   295,    -1,    68,
      -1,   514,    -1,   567,   517,    -1,    -1,   305,    -1,    -1,
      79,   309,    -1,    -1,    22,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
     906,    39,    -1,   909,   857,    43,   600,    -1,    -1,    -1,
     863,   339,   604,    51,   606,   591,   604,    -1,   606,    -1,
      58,    -1,    60,    -1,    -1,   931,   618,   570,   616,   617,
     618,    -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,   627,
      78,    -1,    -1,   371,    -1,    -1,   952,    -1,    -1,    -1,
      -1,    -1,    -1,   906,    -1,    -1,   909,    -1,    -1,    -1,
      -1,    -1,   605,   657,    37,    38,    -1,    -1,    41,   645,
      -1,    -1,    -1,   616,   617,    -1,    -1,    50,   931,    -1,
      -1,    -1,    -1,   675,   627,   673,   629,   675,    -1,   632,
      -1,   685,    -1,    -1,    -1,    -1,    -1,   640,    -1,   952,
      -1,   693,    -1,   691,    77,   693,    -1,    80,    81,    82,
      83,    84,   700,    -1,   702,    -1,    -1,   705,    -1,    -1,
      -1,     3,     4,   711,   716,    -1,    -1,    -1,   716,    -1,
     673,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,   691,    -1,
     744,    33,    -1,   696,    -1,    -1,    -1,   700,    40,   702,
      42,    -1,   705,   739,   740,    -1,    -1,    -1,   711,    -1,
      -1,    53,    54,    -1,   768,    -1,   719,    59,    -1,    61,
      -1,    63,    -1,    65,    66,    67,    68,    -1,    70,    71,
      -1,    -1,    -1,    75,    76,    -1,    -1,    79,    -1,    -1,
     792,    -1,    -1,   795,   792,    -1,   798,   795,    -1,   801,
     798,    -1,    -1,   801,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   803,    -1,    -1,
     806,    -1,    -1,    -1,    -1,   827,   830,    -1,    -1,   827,
      -1,    -1,   570,   837,   832,    -1,    -1,   839,    -1,   841,
     838,   839,    -1,   841,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   805,   851,    -1,    -1,   842,   843,    -1,    -1,
      -1,    -1,   848,   849,    -1,    -1,    -1,    -1,    -1,    -1,
     874,   857,    -1,    -1,    -1,    -1,    -1,   863,    -1,   832,
     618,    -1,    -1,    -1,    -1,   838,    -1,    -1,    -1,   627,
      -1,   893,    -1,    -1,    -1,   893,    37,    38,   851,    -1,
      41,    42,   640,    44,    -1,    46,   908,    -1,    -1,    50,
     908,    -1,    -1,    -1,    -1,    -1,   920,    -1,   922,    -1,
     906,    -1,   924,   909,    -1,    -1,   924,    -1,    -1,   927,
      -1,   929,    -1,    -1,   938,   673,    77,    -1,    -1,    80,
      81,    82,    83,    84,    -1,   931,    -1,    -1,    -1,    -1,
      37,    38,    -1,   691,    41,    42,    -1,    -1,   696,    46,
      -1,    -1,   700,    50,   702,    -1,   952,   705,   921,    -1,
      -1,     3,     4,    -1,   927,    -1,   929,    -1,    -1,    -1,
      -1,   719,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      77,    -1,    24,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    66,    67,    68,    -1,    70,    71,
      -1,    -1,    -1,    75,    -1,    -1,     4,    79,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    51,   832,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    73,    -1,    -1,     4,    77,
       6,    79,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    73,    -1,    -1,
       4,    77,     6,    79,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      44,    45,    46,    -1,    48,    -1,    -1,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    73,
      -1,    -1,     4,    77,     6,    79,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      -1,    63,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    73,    -1,    -1,     4,    77,     6,    79,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    73,    -1,    -1,     4,    77,     6,    79,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    73,    -1,    -1,     4,    77,
       6,    79,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    73,    -1,    -1,
       4,    77,     6,    79,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      44,    45,    46,    -1,    48,    -1,    -1,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    73,
      -1,    -1,     4,    77,     6,    79,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      -1,    63,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    73,    -1,    -1,     4,    77,     6,    79,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    -1,    68,    69,
      -1,    -1,    -1,    73,    -1,    -1,     4,    77,     6,    79,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,
      68,    69,    -1,    -1,    -1,    73,    -1,    -1,     4,    77,
       6,    79,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    -1,    63,    -1,    65,
      -1,    -1,    68,    69,    -1,    -1,    -1,    73,    -1,    -1,
       4,    77,     6,    79,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      44,    45,    46,    -1,    48,    -1,    -1,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,    73,
      -1,    -1,     4,    77,     6,    79,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      -1,    63,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,
      -1,    73,    -1,    -1,     4,    77,     6,    79,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,    -1,
      -1,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    -1,    63,    -1,    65,    -1,    -1,    68,    69,
      -1,    -1,     4,    73,    -1,    -1,    -1,    77,    -1,    79,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    77,    -1,    79,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    77,    78,    79,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    77,    78,    79,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    77,
      78,    79,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    77,    78,    79,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    77,    78,    79,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    77,    78,    79,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    77,    78,    79,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,     5,
      58,    -1,    -1,    -1,    -1,    63,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    77,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,
      10,    77,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    73,     8,     9,    10,    77,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,     6,    73,
       8,     9,    10,    77,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    46,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,     6,    73,     8,     9,    10,    77,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    22,    23,
      24,    25,    26,    33,    28,    29,    30,    31,    32,    33,
      34,    35,    42,    -1,    -1,    39,    46,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    51,    58,    -1,
      -1,    -1,    -1,    63,    58,    65,    60,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    77,    23,    24,
      -1,    -1,    27,    -1,    78,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    -1,    77,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      63,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    77,    -1,    27,    22,    23,    24,
      25,    26,    33,    28,    29,    30,    31,    32,    33,    34,
      35,    42,    -1,    -1,    39,    46,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    51,    58,    -1,    -1,
      -1,    -1,    63,    58,    65,    60,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    77,    23,    24,    -1,
      -1,    27,    -1,    78,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    77,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    77,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    77,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    -1,    77,    -1,    27,
      -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    -1,    77,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    77,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    77,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    77,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    63,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    -1,    77,    -1,    27,
      22,    23,    24,    25,    26,    33,    28,    29,    30,    31,
      32,    33,    34,    35,    42,    -1,    -1,    39,    46,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    51,
      58,    -1,    -1,    -1,    -1,    63,    58,    65,    60,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    77,
      23,    24,    -1,    -1,    27,    -1,    78,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      63,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    77,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    63,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    -1,    77,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    63,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    -1,    77,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    63,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    -1,
      77,    -1,    27,    22,    23,    24,    25,    26,    33,    28,
      29,    30,    31,    32,    33,    34,    -1,    42,    -1,    -1,
      39,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    51,    58,    -1,    -1,    -1,    -1,    63,    58,
      -1,    60,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    77,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    14,    15,    16,    17,    18,    19,    24,
      33,    40,    42,    53,    54,    59,    61,    63,    65,    66,
      67,    68,    70,    71,    75,    76,    79,    86,    87,    88,
      89,    90,    94,    95,    96,   101,   104,   105,   117,   130,
     135,   149,   169,   170,   171,   195,   200,   202,   203,   205,
     214,    14,     5,   170,    42,    46,    44,    12,    13,    14,
      19,    20,    21,    23,    27,    42,    46,    51,    58,    63,
      77,   147,   149,   194,   196,   198,   199,   200,   204,   205,
     214,    14,    46,   146,    14,    15,   135,     5,    51,   172,
     173,   174,    27,    46,    14,    14,    24,    44,    63,   131,
     132,    40,    65,    94,    95,   101,   105,   117,   135,   169,
     101,   135,    14,    14,     5,    64,    14,    14,    14,    33,
     123,   124,     0,    88,    50,   181,   181,    77,    84,    84,
     123,   170,    48,    50,   181,     5,    14,    42,    46,    51,
      58,    64,    78,    79,   148,   177,   192,   194,   195,   200,
     206,   207,   208,   209,    58,   192,   194,   159,    42,    46,
     199,   194,   194,   207,   192,    24,   194,    14,    63,   149,
     200,   205,   200,    22,    23,    24,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    39,    51,    58,    60,
      78,    31,    46,    49,    14,    51,    31,    14,    97,   135,
       5,    43,    49,    14,   200,    46,    91,    92,    97,   199,
      50,    14,    63,   133,    48,    60,    77,    15,   135,   101,
     135,    41,    48,    44,    48,    14,    14,   123,   123,    44,
      14,    51,    62,    79,    97,   125,   127,   128,   129,   145,
     146,    97,    14,    24,    42,    51,    54,    97,   145,   182,
     183,    37,    38,    41,    80,    81,    82,    83,   167,   167,
     201,   202,   201,   201,    42,    48,    50,   181,   183,   167,
      14,    20,    21,    42,    63,   149,   199,   200,   204,   205,
     212,   213,   214,    43,   150,   151,   192,     5,   148,   192,
     170,   210,   211,    44,    43,    49,    47,    47,    58,     6,
       8,     9,    10,    14,    40,    42,    44,    45,    48,    55,
      56,    57,    61,    63,    65,    69,    73,    90,   121,   122,
     130,   149,   160,   161,   165,   169,   184,   185,   186,   187,
     189,   192,   195,   200,   205,   206,   206,    43,    43,    49,
      49,   194,   194,   194,   194,   194,   194,   194,   194,   194,
      31,   194,   194,    33,   194,   194,   194,   194,   194,    41,
     194,    24,    51,   142,   194,    42,    14,    14,    47,    48,
      14,    42,    48,    77,   172,    91,    47,    49,    41,    42,
     183,    49,    60,    49,    45,    14,   134,   131,   135,    97,
      87,    50,    50,    44,    42,    44,   106,     3,    45,    61,
      65,    90,    95,   102,   103,   128,    79,   128,    77,    31,
      49,    33,    42,    50,   123,    54,   182,    14,    62,   145,
     145,   124,    49,    51,   175,   175,    77,    84,     5,    14,
      58,    79,   136,   137,   138,   142,   143,   183,   167,    48,
     175,   209,   192,    47,    49,    48,    46,   148,   212,   181,
      49,    78,    14,    58,   178,   179,   180,   200,   205,   208,
      47,     4,    65,   122,   166,   170,   191,   192,   193,   194,
     195,   166,   190,   191,    44,    14,   135,     5,    51,   159,
      48,   148,   191,    69,   188,   188,    40,    44,    50,   164,
     191,   169,   189,    36,    48,    43,    47,    43,   192,   194,
      14,    46,   194,    24,   194,     5,    54,   144,     5,    42,
      79,   145,   197,   206,    48,    31,   192,    48,   206,    14,
      47,    92,    14,    93,   199,   214,    91,   167,   133,    14,
     133,    48,   123,    45,   183,   183,    90,   111,   118,   119,
      42,    61,   107,   108,   145,   109,   110,   111,    48,    14,
       3,    65,    95,     3,    45,   103,    14,   145,   125,   125,
     125,   126,   128,    10,    98,   145,    43,    68,   182,     5,
      42,    44,   148,   161,   176,   177,   184,   189,   192,   193,
     200,   205,   176,   201,   201,    63,    43,    49,    63,    50,
      48,   175,   176,    48,    43,   192,   192,   192,   211,    44,
      52,   192,   200,    45,    49,    50,     5,   170,    44,    44,
     181,    44,    35,    35,   181,    44,   159,    11,     5,    45,
      48,    48,   150,   192,    48,   135,   158,   159,   189,    44,
      48,    47,    46,    14,    51,   194,    43,   182,    43,   192,
      42,    47,   192,    43,    43,   175,    49,    48,   167,   167,
      14,   120,    45,    49,    43,   108,    43,    49,    45,    49,
      61,   116,   123,    14,     3,    14,    31,    43,    97,    44,
     145,    43,   158,   159,    48,    44,    36,    36,    48,    52,
     152,   138,     5,    24,    51,   115,   139,   176,    48,    47,
     158,   159,   145,   175,    45,   179,    42,   192,   170,   181,
     159,   158,   159,   167,   158,   159,   193,   194,   193,   194,
     167,   159,    45,   190,    48,    45,     4,    14,    45,    55,
     148,   166,   170,   177,   192,   195,   200,    79,   162,   163,
     191,    14,    14,    43,    47,   206,    47,   176,   133,   175,
     175,    41,    42,    44,    50,   123,    45,   119,   108,    45,
     110,    14,    42,   123,    14,   123,   123,    61,    65,    90,
      95,    99,   100,   135,    45,    45,   178,    27,    42,   139,
     153,   155,    44,     5,    62,     5,    62,   140,   141,   145,
      48,    45,    45,    44,    14,   177,   200,    43,   181,   167,
      45,    45,   175,    45,    45,   175,    45,    44,     5,   170,
     181,    44,   181,    74,    45,    49,    74,    43,    48,   176,
     176,    14,   199,   118,   118,   145,    50,   136,    42,   123,
      42,    65,   135,   135,    45,   100,    45,    49,   145,   154,
      72,   158,   159,    14,    14,    68,   123,    77,   159,    44,
     167,   175,     7,     7,    14,   168,   200,   205,     7,     7,
     168,   159,   170,   181,   167,   178,   167,    55,    56,    57,
     176,    45,   163,    55,    56,    57,   176,    48,    48,    43,
      49,    45,   123,   112,   115,    43,   136,    42,   136,   135,
      45,   123,    43,   141,   156,   157,    45,    45,     5,     5,
     140,    45,   178,   175,   168,    44,   184,    44,   184,    44,
     184,    44,   184,    45,   181,   167,   175,    45,    49,   175,
     176,   176,    42,   113,   114,   145,   152,    43,   136,    43,
      49,    50,    49,    45,    49,   168,   158,   159,   158,   159,
     167,   175,    14,   200,   205,    45,    43,   123,    77,    48,
     152,    43,   152,   154,   192,   205,   157,    45,    45,    45,
      45,    45,   175,   113,    48,   152,    48,    52,    48,   155
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    90,    90,    91,    91,    92,    92,
      92,    92,    93,    93,    93,    94,    94,    95,    95,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   100,   100,
     100,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   103,   104,   105,   105,   105,   106,   106,   107,
     107,   107,   107,   108,   108,   109,   109,   110,   111,   111,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   120,   120,   120,   120,   120,   121,
     122,   123,   123,   124,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   133,   133,
     133,   133,   133,   134,   135,   135,   136,   136,   136,   136,
     137,   137,   138,   138,   138,   138,   139,   140,   140,   141,
     142,   142,   142,   142,   143,   143,   144,   144,   144,   145,
     145,   146,   146,   146,   146,   147,   148,   148,   149,   149,
     149,   150,   150,   151,   151,   152,   152,   152,   152,   153,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   161,   161,   162,   162,   163,
     163,   163,   163,   163,   163,   163,   163,   164,   165,   165,
     165,   166,   166,   166,   166,   166,   166,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   171,   172,   172,   173,
     173,   174,   174,   174,   174,   175,   175,   175,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   177,   177,   178,   178,   179,   179,   179,   180,   180,
     180,   180,   181,   181,   181,   182,   182,   183,   183,   183,
     183,   183,   183,   184,   184,   185,   185,   185,   185,   185,
     185,   186,   186,   186,   186,   186,   186,   187,   188,   188,
     189,   189,   189,   190,   190,   191,   191,   192,   192,   193,
     193,   193,   193,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   195,
     196,   196,   197,   197,   197,   197,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   199,   199,   200,   200,   200,   201,   201,   201,
     202,   202,   202,   202,   202,   203,   203,   203,   204,   204,
     205,   206,   206,   206,   206,   207,   207,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   209,
     209,   209,   209,   209,   209,   210,   210,   211,   212,   212,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     214,   214,   214,   214
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     4,     3,     1,     1,     1,     2,     1,     2,
       1,     2,     1,     2,     3,     2,     1,     2,     1,     1,
       2,     1,     1,     4,     4,     5,     1,     3,     1,     1,
       4,     3,     1,     1,     1,     3,     5,     3,     6,     8,
       1,     3,     3,     0,     1,     2,     2,     1,     3,     2,
       1,     1,     5,     4,     1,     2,     8,     1,     9,    10,
       9,     1,     2,     4,     6,     7,     5,     0,     3,     0,
       1,     2,     2,     3,     1,     1,     3,     5,     0,     1,
       3,     3,     1,     1,     2,     1,     2,     1,     1,     2,
       3,     3,     3,     4,     4,     0,     1,     0,     6,     7,
       1,     3,     2,     2,     4,     4,     4,     3,     3,     4,
       4,     1,     0,     3,     3,     4,     4,     1,     1,     0,
       1,     0,     1,     3,     1,     2,     3,     1,     2,     2,
       3,     5,     3,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     5,     1,    10,    10,     1,     2,     1,     0,
       1,     3,     3,     2,     2,     1,     3,     3,     1,     1,
       0,     1,     2,     2,     1,     1,     1,     1,     0,     1,
       1,     3,     5,     6,     6,     5,     3,     5,     4,     4,
       5,     1,     0,     1,     3,     2,     2,     2,     0,     3,
       4,     2,     1,     3,     1,     3,     3,     5,     2,     2,
       2,     2,     5,     6,     2,     0,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     1,     3,     1,     1,     1,
       4,     3,     1,     3,     2,     5,     6,     1,     3,     3,
       3,     4,     4,     3,     3,     3,     3,     1,     2,     3,
       3,     6,     7,     3,     2,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     8,     9,
       8,     6,     5,     6,     6,     6,     4,     3,     9,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       2,     1,     2,     1,     0,     1,     2,     0,     1,     1,
       1,     3,     3,     4,     5,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     3,     1,     3,     4,     1,     1,
       1,     2,     2,     4,     0,     3,     1,     1,     2,     4,
       2,     3,     2,     1,     1,     5,     9,     7,     5,     9,
       7,     5,     9,     7,     5,     9,     7,     3,     0,     1,
       5,     4,     7,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       3,     3,     4,     5,     3,     2,     1,     4,     1,     2,
       2,     3,     1,     1,     3,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       2,     2,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     6,     6,     8,     4,     4,
       4,     1,     2,     2,     0,     1,     3,     1,     1,     2,
       1,     1,     2,     3,     3,     2,     4,     5,     1,     4,
       6,     6,     9,    10,     8,     1,     3,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
      
#line 2844 "parser.c" /* yacc.c:1646  */
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
#line 973 "parser.y" /* yacc.c:1906  */



void yyerror(const char* err) {
    printf("Parser line %d: %s - '%s'\n", yyline, err, yytext);
}
