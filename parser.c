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
#define YYLAST   5121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  467
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  946

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
     189,   190,   191,   195,   196,   200,   201,   205,   209,   213,
     214,   219,   220,   224,   225,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   243,   244,   249,   250,
     254,   255,   259,   263,   264,   265,   266,   267,   268,   273,
     277,   282,   283,   287,   291,   292,   293,   294,   298,   299,
     304,   305,   309,   310,   314,   315,   316,   317,   318,   319,
     324,   325,   329,   330,   334,   338,   339,   340,   341,   345,
     346,   347,   348,   349,   354,   355,   359,   360,   361,   362,
     366,   367,   371,   372,   373,   374,   378,   382,   383,   387,
     391,   392,   393,   394,   398,   399,   404,   405,   406,   410,
     411,   415,   416,   417,   418,   422,   426,   427,   431,   432,
     433,   437,   438,   442,   443,   447,   448,   449,   450,   454,
     458,   459,   463,   464,   468,   469,   473,   474,   479,   480,
     481,   482,   483,   484,   488,   489,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   517,   518,   523,   524,   528,
     532,   533,   534,   535,   536,   537,   538,   539,   545,   546,
     547,   551,   552,   553,   554,   555,   556,   560,   561,   562,
     563,   564,   565,   566,   570,   571,   572,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,   587,   592,
     593,   594,   595,   596,   597,   598,   602,   606,   607,   611,
     612,   616,   617,   618,   619,   623,   624,   625,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   645,   646,   651,   652,   656,   657,   658,   662,   663,
     664,   665,   670,   671,   672,   676,   677,   682,   683,   684,
     685,   686,   687,   692,   693,   694,   696,   697,   699,   700,
     701,   705,   709,   710,   714,   715,   716,   720,   721,   725,
     726,   731,   732,   737,   738,   739,   741,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   781,   785,   786,   790,   791,   792,   793,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   840,   841,   845,   846,
     847,   851,   852,   853,   857,   858,   859,   860,   861,   865,
     866,   867,   871,   872,   876,   881,   882,   883,   884,   889,
     890,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   911,   912,   913,   914,   915,   916,   920,
     921,   925,   930,   931,   936,   937,   938,   939,   940,   941,
     942,   943,   944,   945,   949,   950,   951,   952
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
  "types_sequences", "struct_fields", "struct_field",
  "type_or_generic_for_struct", "maybe_attribute", "struct_type_ident",
  "struct_type_ident_token", "maybe_mut_for_struct", "maybe_pub", "enum",
  "enum_fields", "enum_field", "enum_field_token",
  "unsafe_statements_block", "unsafe_return_block", "maybe_generic",
  "generic", "generic_seq", "generic_seq_or_empty", "maybe_ident",
  "generic_types_sequence", "generic_symbol", "use_sequence", "use_left",
  "use_right", "use_left_token", "use_args", "function", "maybe_params",
  "params", "param", "func_param_type_or_generic", "fn_params_type_ident",
  "fn_params_type_ident_token", "maybe_mut_for_fn_params", "pattern",
  "maybe_mut_or_const", "raw_type", "array_or_slice_type", "array_slice",
  "array_rvalue", "array_indexing", "maybe_exprs", "exprs",
  "maybe_return_type", "tuple_return_types", "types_sequence_return_tuple",
  "func_return_type", "where_types_sequence", "where_types_sequence_ident",
  "return_expression", "statements", "statement", "match_statement",
  "match_inside_statements", "match_ident", "match_inside_statement",
  "return_token_expr", "assignment_without_semicolon",
  "assignment_operator", "assignment_without_semicolon_rvalue",
  "assignment", "lvalue", "tuple_lvalue", "tuple_lvalue_ident_seq",
  "tuple_lvalue_ident", "maybe_tuple_lvalue_ident_prefix",
  "maybe_rvalue_prefix", "rvalue", "lvalue_outside_brackets",
  "inside_brackets_types_rvalue", "inside_brackets_types_rvalue_ident",
  "inside_brackets_types_rvalue_ident_left", "maybe_assignment_type",
  "assignment_type_seq", "assignment_type", "if_statement",
  "metk_statement", "maybe_metk", "cycle_statement", "condition",
  "expr_or_unsafe_expr", "expr", "unsafe_expr", "expr_binary_operation",
  "pointer", "borrow", "type_for_as_seq", "expr_token", "number",
  "method_or_field", "method_or_field_2", "method_or_field_token",
  "generic_function_call", "macro_call", "function_call", "maybe_args",
  "args", "arg", "closure", "closure_seq", "closure_seq_token",
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
     286,    61,    40,    41,   123,   125,    91,    93,    59,    44,
      58,    38,   287,    35,   288,   289,   290,   291,   292,   293,
     294,   295,    39,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   124,    95,
     311,   312,   313,   314,    46
};
# endif

#define YYPACT_NINF -775

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-775)))

#define YYTABLE_NINF -418

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2066,    95,   956,   389,  -775,  -775,  -775,  -775,    51,  4869,
     203,   497,    37,   394,   139,   181,  1551,   412,    56,   179,
     278,    75,   302,   347,   369,   366,  -775,   442,  2066,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,   460,  -775,   427,  -775,   427,  -775,   518,  -775,   522,
     423,   366,   933,   221,  3358,  4294,  -775,  -775,  -775,   389,
     260,  -775,  -775,   724,  4869,  3426,  4346,  4398,   706,   412,
     706,  -775,   460,  4245,  -775,  -775,  -775,  -775,  -775,   522,
     423,   453,   151,   456,   527,   594,  -775,  -775,   643,   566,
     626,  1215,   619,   789,   669,  -775,  -775,    73,  -775,    38,
     648,   359,    56,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,   430,   512,   687,   746,   366,   366,   701,    67,
     527,  -775,  -775,  -775,   652,   949,   949,   148,   148,   148,
     732,   537,  -775,   652,   949,  5058,   451,  1896,  4346,  3562,
     706,  4450,   933,  -775,  -775,   742,  -775,  4245,  -775,   744,
     748,   745,  -775,  -775,   535,   750,  4716,  2147,  3358,  3358,
    -775,  2070,  4086,   547,   762,  4869,   255,   611,  -775,  -775,
    -775,  -775,  -775,  4869,  4869,  4869,  4869,  4869,  4869,  4869,
    4869,  1829,  4869,  4921,  4869,  4869,  4869,  4869,  4502,   406,
    4869,   773,   785,   806,   705,   808,   781,  -775,    45,  -775,
    -775,  -775,    37,   389,  -775,   789,   716,  -775,   349,  -775,
     586,    43,   779,   792,  -775,   828,   181,   594,  -775,  -775,
    -775,   527,  -775,  2066,  -775,   793,   794,   802,   616,   147,
     403,   299,   130,  -775,   775,   434,   214,   804,  -775,  -775,
    -775,   187,    71,   803,   586,   172,   333,   187,  -775,  -775,
     810,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   809,   809,
    -775,   558,  -775,  -775,   119,  -775,   652,   949,   731,   413,
     389,  -775,  -775,  4346,   412,   460,  -775,  -775,  -775,   522,
    -775,  -775,   423,  -775,   814,   813,   757,  1690,  -775,  -775,
     427,   323,  -775,  1308,  -775,  3426,  -775,  -775,  4187,  1731,
    1731,   820,   852,  1596,   594,  3494,  -775,  -775,  -775,  4080,
     798,   798,   830,   493,   827,   823,  4239,  1422,  -775,  -775,
    -775,  1844,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   410,
     368,  1302,  3170,   833,   834,  -775,  -775,  3154,  4346,    85,
    -775,  -775,    85,    85,    85,  2070,  2070,   255,  4869,   255,
     255,  4973,   255,   255,   255,  2070,   255,  4554,  2070,    84,
     872,   161,   255,  3358,   836,   851,  -775,  4346,   837,  3358,
    -775,   873,  -775,   719,  -775,   789,   699,   789,   949,    73,
     875,    73,  -775,  -775,   843,  -775,  -775,   187,  1996,   586,
     586,   840,   272,   840,   849,   885,  -775,   124,   897,  -775,
    -775,   223,  -775,  -775,  -775,  -775,   343,  -775,    67,    67,
      68,   299,   894,   333,   863,   861,   841,  -775,  -775,  -775,
     586,   906,  3812,  3812,   148,   148,   853,  -775,  -775,   862,
     876,   869,  -775,   857,   871,   760,   809,  -775,  3812,   892,
     898,  -775,  4346,  4346,  4346,  -775,  -775,  -775,   933,  4135,
     389,   706,   683,  -775,   893,  -775,   522,  -775,  -775,  1121,
     901,  -775,  -775,   427,   911,  -775,  -775,   907,  4979,   574,
     913,  -775,   947,  -775,  5058,  3614,  2221,  -775,   912,   915,
    -775,  4346,   917,   594,  -775,   817,   925,  -775,  -775,  -775,
     929,  -775,  -775,  -775,  -775,   934,   255,   383,  4606,   255,
    4869,  2070,  -775,  -775,  -775,  -775,   565,  -775,  -775,  -775,
     937,  4346,   940,   936,  4346,   942,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,   590,   809,  -775,   945,  -775,  -775,   943,
    -775,   949,   949,  -775,   983,   697,  -775,   958,   333,   960,
    -775,   962,   698,  -775,   944,  -775,   366,   993,  1005,  -775,
     995,  -775,  -775,   122,  -775,   964,   439,   964,   971,  -775,
     527,   973,  -775,  -775,   333,  -775,  -775,  3222,  -775,  -775,
    -775,   967,   974,  -775,  -775,  -775,   907,   419,   188,   972,
    -775,  -775,  -775,   969,   101,  -775,   277,  -775,  3812,   975,
    -775,  -775,  -775,   977,   979,  -775,  -775,   313,  -775,  -775,
    -775,  1297,  4658,   933,   624,  -775,   949,  -775,  4710,  4710,
     949,  -775,  2293,  1731,  1690,  -775,  -775,  -775,   988,  -775,
    -775,  -775,   980,  2365,  -775,  4012,  -775,  -775,  4765,   360,
    4817,    85,  -775,   996,  -775,   991,  3358,  -775,   998,  -775,
    -775,  3812,    73,  -775,   809,   809,   605,  -775,  -775,   502,
    -775,  -775,  -775,   333,  -775,   513,  -775,  1026,  1000,   366,
    1029,   366,  -775,  -775,   187,   185,  -775,  -775,  1008,  2437,
    -775,  1308,  -775,  -775,  -775,   243,  1006,  -775,  -775,    61,
      64,   333,  -775,  1009,  -775,  -775,  1011,  2509,  1016,  1225,
    -775,  -775,  3290,  -775,   628,   949,  3085,   809,  1017,  2581,
    -775,  5030,  -775,   255,   809,  2653,  -775,  1022,  -775,  -775,
    1143,  3142,  -775,  4080,  -775,  -775,   427,  1025,   410,   477,
     482,  1001,   710,  -775,  1007,   538,   579,  -775,  -775,  1027,
    -775,  1037,  -775,  3812,  3812,   822,   840,   840,   333,  -775,
    -775,  -775,  -775,  -775,  -775,  1024,   119,  1045,   366,  1046,
    -775,    76,   594,  -775,  -775,   332,  -775,  -775,  -775,  -775,
     726,  -775,   333,  1018,  -775,  -775,  -775,  -775,  1075,  -775,
      83,   366,  1014,  -775,  -775,  -775,  -775,  -775,   496,  1048,
    -775,  -775,   949,   809,  1380,  1086,  1088,  1380,  -775,  -775,
     933,   638,   949,  1308,   949,  3680,  -775,  3944,  3746,  -775,
    -775,  1050,  1051,  -775,  -775,   642,   728,   366,   277,  1053,
     119,  1060,   119,   594,  -775,  -775,  -775,  -775,  -775,  1330,
     366,  1065,   333,  1064,  2725,  1110,  1115,  -775,  -775,   333,
    2797,  1308,   809,  1380,   651,  -775,  -775,  1073,   150,   213,
    -775,  2869,   659,   949,   809,   740,   809,  3812,  -775,  -775,
    -775,  -775,  -775,  3812,  -775,  -775,  -775,  -775,  -775,  -775,
     840,  -775,  -775,  -775,   401,   969,  1078,   119,  1080,  -775,
    -775,  1076,  -775,  1077,  1082,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,   751,  1380,  -775,  -775,  -775,  -775,  -775,  -775,
     949,   413,  3878,  -775,  1918,  3878,  -775,  -775,  1089,   366,
    1052,  -775,  1093,   969,  1099,   969,   333,  4346,   333,  -775,
    1972,  -775,  1098,  2941,  1100,  3013,   809,  3878,   408,   472,
     296,  -775,  -775,  -775,   401,  -775,  1096,   969,  1102,  -775,
    -775,   206,  -775,  -775,  -775,  -775,  -775,  -775,  3878,  -775,
    -775,  1103,  -775,   277,  -775,  -775
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,   279,   464,   465,   466,   467,     0,     0,
       0,     0,   294,     0,     0,     0,     0,   282,     0,     0,
       0,     0,     0,     0,     0,   122,   285,     0,     2,     4,
      32,    14,    29,    28,    26,    22,    31,    18,    16,    15,
       6,   283,    20,   324,   284,   324,   281,     0,   418,   280,
       0,   122,     0,   324,   428,     0,   215,   406,   407,   392,
       0,   395,   396,     0,     0,     0,     0,     0,     0,   393,
       0,   400,   399,   383,   380,   382,   390,   401,   398,   397,
     394,     0,     0,     0,     0,     0,    11,   291,   293,     0,
     287,     0,     0,     0,     0,   145,   148,     0,   146,     0,
     143,     0,     0,    30,    27,    23,    19,    17,     7,    21,
      25,     9,     0,     0,     0,     0,   122,   122,     0,   131,
       0,   121,     1,     5,     0,     0,     0,     0,     0,     0,
       0,   324,   277,     0,     0,     0,   392,     0,   192,     0,
     432,     0,     0,   434,   435,     0,   431,   351,   352,   401,
       0,   425,   429,   442,     0,     0,   351,     0,   428,   428,
     391,   379,   351,     0,     0,     0,   384,   414,   415,   417,
     404,   416,   405,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   170,
       0,     0,     0,     0,     0,     0,     0,    50,     0,    13,
     292,   286,   294,   289,   290,     0,     0,    36,    38,    39,
       0,   150,   152,     0,   140,     0,     0,     0,    10,    24,
       8,     0,    47,     0,    45,     0,     0,     0,    77,     0,
     179,     0,     0,   137,     0,     0,     0,   134,   127,   132,
     180,   122,   179,     0,     0,     0,     0,     0,   327,   322,
     326,   259,   258,   257,   260,   261,   262,   263,   297,   297,
     408,   411,   409,   410,   159,   276,     0,     0,   326,   297,
     457,   461,   462,     0,   455,   456,   454,   463,   459,   458,
     439,   452,   460,   427,     0,   191,   193,     0,   436,   433,
     324,     0,   449,     0,   424,   426,   189,   188,     0,     0,
       0,     0,     0,   392,     0,     0,   215,    33,   229,     0,
     342,   342,     0,   393,     0,     0,     0,     0,   218,   217,
     228,   399,   214,   227,   225,   220,   222,   232,   223,     0,
     324,   401,   397,     0,     0,   378,   402,     0,     0,   385,
     361,   362,   363,   364,   365,   357,   358,   359,     0,   366,
     367,     0,   368,   369,   360,   374,   371,     0,   375,   178,
     171,     0,   370,   428,     0,     0,   181,     0,     0,   428,
      73,     0,   288,     0,    34,     0,     0,     0,     0,     0,
       0,     0,   147,   144,     0,   142,    12,   122,     0,     0,
       0,    89,    79,    89,     0,     0,    63,     0,     0,    67,
      71,     0,    64,   135,   139,   138,     0,   123,   131,   131,
     131,     0,    53,     0,     0,   179,     0,   328,   330,   332,
       0,   295,     0,     0,     0,     0,     0,   174,   158,   165,
       0,   156,   160,     0,     0,   326,   297,   272,     0,     0,
       0,   186,     0,     0,   192,   437,   438,   451,     0,     0,
     319,     0,     0,   313,   315,   318,   320,   430,   190,     0,
       0,   356,   348,   324,     0,   347,   349,   350,   351,   324,
       0,   215,     0,   234,     0,   293,     0,   248,     0,     0,
     343,   192,     0,     0,   215,     0,     0,   239,   221,   224,
       0,   216,   422,   423,   403,     0,   373,   392,     0,   372,
       0,   376,   176,   177,   173,   172,     0,   387,   386,   381,
       0,     0,     0,     0,     0,     0,    51,    35,    37,    42,
      41,    44,    43,     0,   297,   149,     0,   151,   141,     0,
      46,     0,     0,    90,     0,     0,   110,     0,     0,     0,
      80,    84,     0,    85,   107,    76,   122,     0,     0,    72,
       0,    62,    65,   179,   133,   124,     0,   128,     0,   136,
       0,     0,   331,   323,     0,   325,   296,     0,   215,   300,
     305,     0,     0,   308,   310,   298,   299,   401,   397,     0,
     412,   413,   164,   198,   157,   163,   105,   273,     0,     0,
     271,   453,   194,     0,   193,   450,   215,   297,   443,   321,
     440,     0,     0,     0,   324,   215,     0,   215,     0,     0,
       0,   215,     0,     0,     0,   226,   250,   249,     0,   193,
     231,   233,     0,     0,   341,     0,   219,   185,     0,   392,
       0,   377,   389,     0,   420,     0,   428,   182,     0,   419,
      40,     0,     0,    48,   297,   297,   122,   112,   108,    89,
      82,    81,    78,     0,    74,    89,   106,     0,     0,   122,
       0,   122,   125,   126,   122,     0,   329,   309,     0,     0,
     275,     0,   306,   307,   274,   105,     0,   161,    95,    98,
      97,     0,   162,     0,   267,   187,     0,     0,     0,     0,
     441,   314,     0,   316,   324,     0,     0,   297,     0,     0,
     353,   354,   355,   360,   297,     0,   345,     0,   230,   120,
       0,   392,   119,   209,   210,   211,   324,     0,   208,   324,
     401,     0,     0,   237,     0,   392,   392,   388,   184,     0,
     183,     0,   153,     0,     0,     0,    89,    89,     0,   113,
     109,   111,    83,    75,    86,     0,   159,     0,   122,     0,
      52,     0,     0,    60,    61,     0,    54,    57,   301,   302,
       0,   197,     0,   202,   196,   195,   215,    99,     0,    96,
       0,   122,   168,   169,   270,   445,   444,   215,   414,     0,
     312,   317,     0,   297,     0,   338,   333,     0,   344,   215,
       0,   324,     0,     0,     0,     0,   235,     0,     0,   421,
     268,     0,     0,   117,   118,     0,     0,   122,   105,     0,
     159,     0,   159,     0,    56,    59,    49,    55,   303,     0,
     122,     0,     0,     0,     0,   102,   100,   101,   166,     0,
       0,     0,   297,     0,   414,   256,   266,   416,     0,     0,
     255,     0,   324,     0,   297,     0,   297,     0,   245,   247,
     241,   236,   238,     0,   244,   246,   240,   269,   278,   116,
      89,   115,   114,    87,     0,   198,     0,   159,     0,    58,
     304,   201,   199,     0,   203,   204,   155,   154,   104,   103,
     167,   448,     0,     0,   251,   215,   340,   215,   335,   346,
       0,   297,     0,   212,     0,     0,   243,   242,     0,   122,
      92,    93,     0,   198,     0,   198,     0,     0,     0,   446,
       0,   252,     0,     0,     0,     0,   297,     0,   392,   401,
     397,   213,    94,    88,     0,    66,     0,   198,     0,   200,
     206,   397,   205,   447,   339,   337,   336,   334,     0,    91,
      68,     0,    70,   105,    69,   207
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -775,  -775,   923,   -23,  -775,    12,  -167,   778,  -775,  1139,
     -15,  -775,     1,  -775,  -775,   407,    58,  -775,   755,  -775,
    1149,  -775,  -775,  -475,  -775,   511,  -775,  -364,   244,  -775,
     361,  -775,  1154,    81,  -615,  -775,  -775,   414,   488,   926,
     441,  -775,  -775,  -159,  -775,    36,   961,  -775,  -775,  -332,
      -1,  -700,  -775,   591,   588,   350,  -774,   989,  -775,  -775,
     959,     9,  -775,   914,   976,   700,  -775,  -674,  -775,   280,
     240,  -775,   281,  -491,  -256,  -775,   604,  -775,  -775,   391,
    -775,  -255,  -112,  -734,     7,    31,  -775,   990,  -775,  -775,
     570,  -414,   209,  -630,  -558,  -775,   -35,  -233,   -82,   372,
    -775,   882,  -151,  -263,  -296,  1355,  -238,   749,    39,  -775,
    -775,  -775,   -33,     0,  -103,   -71,  -775,  -108,   169,  -127,
     -62,  -205,  -265,  -775,   747,  -266,  -775,  1112
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,   317,   206,   207,   520,    32,
      33,    34,   247,   561,   755,   756,    35,   401,   402,    36,
      37,   394,   539,   540,   542,   543,   863,   534,   899,   900,
     681,   657,    38,   535,   536,   647,   318,   461,   120,   121,
     235,   558,   236,   237,   238,   320,    99,   384,   100,   213,
      40,   430,   431,   432,   763,   771,   772,   433,   434,   504,
     248,   240,    71,   569,    72,   284,   285,   676,   764,   821,
     765,   874,   875,   622,   157,   322,   570,   722,   486,   723,
     324,   715,   258,   835,   325,    43,    44,    89,    90,    91,
     422,   571,   572,   452,   453,   454,   126,   249,   250,   573,
     327,   481,   574,   464,   465,   575,   576,   147,   148,    74,
     509,    75,    76,    77,   260,    47,    48,    78,    79,   150,
     151,   152,   153,   291,   292,   280,   281,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   104,    46,   163,   439,   123,   328,    42,   125,   579,
      86,   414,    31,   479,   259,   108,    46,   111,   134,    83,
     487,   446,   269,   109,   589,   262,   263,   278,    46,   544,
     160,   333,   334,    53,   741,    42,    39,   470,   373,    45,
      31,   760,    87,   691,   462,   462,   809,   525,   873,   527,
     476,   268,    46,   840,   149,    45,   261,   261,   261,     1,
     209,   467,   467,   651,    39,   149,   767,    45,   170,   769,
     172,   467,   403,   405,   105,   163,   110,   668,   467,     1,
     114,   230,   230,   131,   199,   198,   214,   211,    88,   502,
     457,   204,   379,   370,   208,    56,   267,   826,   215,   884,
     218,   220,   276,   380,   -50,   686,   426,   173,   174,    51,
     866,  -129,   868,    82,    82,   427,   698,   192,   231,   231,
     234,   241,   371,   768,   426,   359,   770,   547,   378,   232,
     232,    24,   457,   427,   873,   277,   212,   149,   503,   115,
     170,   813,    46,   359,   242,   189,   233,   233,   -50,   911,
     395,   827,   360,    94,   170,   436,   299,   331,   149,   149,
     219,   840,   167,   845,  -170,   194,   489,   904,   192,    49,
     360,    49,   209,   290,   683,   415,    82,   428,   742,   278,
     429,    10,  -170,   884,   435,    49,   415,   565,     1,   548,
      19,   902,   396,   112,   885,    95,   330,    49,   429,   -51,
      13,   882,   195,   506,   911,    96,   208,    82,   397,   404,
     523,   168,   398,    19,   400,   612,   386,    81,    82,   299,
     119,    49,   387,    46,   673,    97,   395,   731,   623,   926,
      42,   928,   234,   234,   416,    31,   510,   171,    13,   171,
     507,   399,   515,   163,    98,   741,   751,   409,   678,    82,
     752,    19,   559,   941,   276,   447,   410,   887,   943,    39,
     171,   691,    45,   145,   371,  -416,   524,   679,   551,   132,
     761,   133,  -416,   633,   145,   823,    13,   173,   174,   175,
     176,   177,   678,  -416,   397,   762,   415,   277,   398,    19,
    -416,   544,   113,   455,   680,   149,   171,   171,   171,   331,
     331,   679,   158,   473,   279,   149,   159,   531,   532,   171,
     732,    49,   669,   242,   537,   189,   116,    46,    82,   801,
     802,   580,   581,   171,   488,   328,   332,   415,   680,   724,
     463,   463,   673,   538,   624,     1,   691,   149,   469,   469,
     687,  -265,   209,   521,   209,    82,   145,   415,   446,   696,
     707,   699,   691,   261,   261,   705,    45,   553,   462,    82,
      83,   117,     1,   149,   421,   123,   278,   145,   145,   149,
     700,   702,   448,  -416,   217,   467,   208,   816,   208,    82,
    -416,   850,   549,   118,   856,    13,   400,   467,    46,    82,
     376,   377,    49,   751,   912,    42,   914,   752,    19,   119,
      31,   449,    54,   533,  -352,   533,    55,   366,   367,   234,
     234,   234,   234,   399,   191,   415,  -352,   479,   124,   644,
     645,    92,   577,   577,    39,    54,   371,    45,   606,   628,
     359,    54,   193,   896,   610,    55,  -130,  -414,   577,   897,
      93,   276,   122,   898,  -414,  -130,   490,    82,    46,   192,
      54,   599,  -311,  -264,    55,   672,   279,   360,   491,    46,
    -414,   328,   456,  -312,   421,   407,  -414,  -414,   332,   332,
     662,   221,   328,  -414,   277,   467,   331,   124,   222,   290,
     -50,   579,   621,   408,   191,  -414,    49,   196,   408,  -415,
     604,   142,  -414,    54,   697,  -311,  -415,    55,   704,   192,
       1,   724,   193,   589,   145,   163,   278,   129,   672,   729,
     824,    84,    85,  -352,   145,   330,  -312,  -266,   328,  -281,
    -281,   830,  -352,  -281,   683,  -352,  -312,   124,  -414,   326,
    -282,  -282,  -281,   841,  -282,  -414,   328,  -417,    54,   130,
    -311,   197,    55,  -282,  -417,   328,   145,   740,   328,   167,
       4,     5,     6,     7,   328,    13,   223,    49,   743,   467,
     224,   664,  -281,  -281,  -281,  -281,    13,   149,    10,   695,
    -415,   319,   145,  -282,  -282,  -282,  -282,  -415,   145,   242,
      54,   276,   296,   783,    55,   265,   511,   266,   577,   243,
     336,   578,   578,   171,   171,   127,   337,     1,   168,  -416,
     242,   455,   128,    46,   227,   228,  -416,   578,   632,   201,
     243,    82,   331,   331,   277,  -414,   245,    49,  -352,   246,
     171,    54,  -414,   720,   124,    55,   439,   514,    49,   913,
     163,   915,    82,   640,   694,   424,   149,   245,   119,   375,
     246,   577,   425,   279,   463,   332,   735,   736,   200,   737,
     754,   330,   469,    54,   716,   738,  -414,    55,   392,   782,
     393,   533,   719,  -414,   757,   205,   242,   533,  -254,   720,
     832,   455,  -253,   328,   124,   202,   243,   753,   124,   328,
     844,   792,   846,  -254,   794,   859,   132,   720,   133,   780,
     328,   860,   149,    54,   244,  -264,   720,    55,    82,   720,
     716,   225,   804,   245,  -253,   331,   246,   265,   719,   266,
      46,    57,    58,   519,     4,     5,     6,     7,   716,   210,
     167,     4,     5,     6,     7,   216,   719,   716,   600,   412,
     716,   891,   601,   577,   577,   719,    57,    58,   719,    10,
     754,   791,   648,   654,   330,   229,   649,   655,   533,   533,
     814,   815,   366,   367,   757,   796,   843,   578,    73,   797,
     226,   323,   328,   374,   328,   375,   517,   753,   375,   168,
     456,   818,    49,   861,   264,   819,   145,   860,   916,   437,
     420,   332,   332,   279,   836,   893,   293,   836,  -312,   894,
      46,   294,   332,   455,   295,   577,   909,   297,   577,   364,
     910,    57,    58,   197,   156,   443,   338,   890,   587,   420,
     578,   338,   869,   161,   162,   363,   166,   805,   806,   455,
     365,   842,   368,   369,   720,   300,   301,   302,   381,   423,
     331,   455,   717,   836,    57,    58,   803,   382,   332,   438,
     456,   331,   383,   389,   390,   145,   391,   577,   326,   555,
     556,   557,   406,   577,   411,   716,   332,   413,   171,   420,
     421,   441,   442,   719,   471,   332,   472,   480,   332,   330,
     483,   484,   533,   485,   332,   529,   492,   505,   717,    49,
     330,   493,   512,   836,   511,   514,   162,   516,   166,   526,
     319,   528,   919,    13,   455,   919,   717,   545,   779,   546,
     550,   145,   578,   578,   560,   717,   563,   192,   717,   564,
     455,   566,  -175,   720,   339,   720,   582,   919,   584,   583,
     585,   586,   340,   341,   342,   343,   344,   345,   346,   347,
     349,   350,   352,   353,   354,   355,   356,   358,   919,   362,
     590,   591,   608,   602,   716,   605,   716,     3,     4,     5,
       6,     7,   719,   837,   719,   607,   837,   611,   613,    49,
     616,    52,   456,   617,   578,   620,    10,   578,   144,   625,
       3,     4,     5,     6,     7,    12,    41,   626,    41,   144,
     634,   627,   636,   637,   326,   639,   251,   252,   456,    10,
     253,   643,    41,   332,   642,   326,    17,   646,    12,   332,
     456,   650,   837,   652,    41,   656,   588,   659,   660,   661,
     332,   653,    26,   408,   663,   670,   578,   665,   671,    17,
     674,   675,   578,   684,   685,   709,   319,   443,    41,   254,
     255,   256,   257,   717,   658,    26,   708,   319,   728,   727,
     745,   326,   746,   748,   169,   730,   169,   358,   468,   468,
     766,   144,   837,   758,   162,   288,   775,   774,   468,   326,
     777,   920,   785,   456,   920,   468,   789,   169,   326,   793,
     799,   326,   144,   144,   808,   795,   931,   326,   239,   456,
     323,   798,   332,   319,   332,   800,   920,   810,   812,   825,
     822,   829,   831,   838,   641,   839,   865,   496,   857,   858,
     499,   319,   867,   169,   169,   169,   501,   920,   872,   876,
     319,   275,    50,   319,    50,   878,   169,  -265,    41,   319,
     879,   903,   717,   905,   717,   906,   603,   907,    50,   924,
     169,   908,   922,   321,   739,     3,     4,     5,     6,     7,
      50,   925,   927,   934,   940,   936,   388,   747,   790,   749,
     942,   944,   750,   518,    10,   103,   552,     3,     4,     5,
       6,     7,   817,    12,    50,   106,   744,   689,   939,   864,
     107,   468,   468,   419,   682,   677,    10,   385,   361,   880,
      50,   618,    50,   945,    17,    12,   929,   468,   852,   932,
     239,   239,   372,   482,     0,   595,   326,     0,     0,    41,
      26,   445,   326,    50,   417,   418,    17,     0,     0,   144,
     886,   888,     0,   326,   733,   734,   323,     0,     0,   144,
       0,     0,    26,   478,   166,     0,     0,   323,     0,   203,
       4,     5,     6,     7,     0,     0,   811,     0,   319,   778,
       4,     5,     6,     7,   319,     0,     0,   282,    10,   631,
       0,   144,    50,     0,    50,   319,     0,     0,    10,   828,
       0,     0,     0,   275,     0,     0,    50,   784,     0,   169,
       0,     0,     0,   323,   787,   321,   321,   144,   168,     0,
       0,     0,     0,   144,     0,   326,     0,   326,   168,     0,
       0,   323,     0,    41,     0,   862,     0,     0,     0,     0,
     323,     0,     0,   323,     0,     0,     0,     0,   871,   323,
       0,   450,     4,     5,     6,     7,   162,     0,     0,     0,
     508,     0,   450,     4,     5,     6,     7,   319,     0,   319,
      10,     0,     0,     0,     0,    50,     0,   468,     0,  -281,
    -281,    10,   690,  -281,   450,     4,     5,     6,     7,     0,
       0,   541,  -281,   833,     0,   451,     0,   701,   703,     0,
     168,     0,   468,    10,    41,   554,   451,   239,   239,   239,
     239,   168,   562,     0,   468,   870,     0,   156,     0,   166,
       0,     0,  -281,  -281,  -281,  -281,     0,   923,   451,     0,
     468,     0,     0,   168,   834,     4,     5,     6,     7,   282,
     169,   169,   883,     0,     0,    50,     0,     0,     0,   146,
     155,     0,     0,    10,   892,     0,   895,     0,     0,     0,
     146,   164,     0,     0,    41,     0,     2,   169,   323,    50,
     300,   301,   302,     0,   323,    41,     3,     4,     5,     6,
       7,   162,     0,   168,     0,   323,     9,     0,     0,     0,
     275,     0,   321,     0,     0,    10,     0,     0,     0,     0,
       0,   917,   468,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,   144,   468,   468,     0,    17,   938,     0,   522,     0,
      21,     0,   146,   286,     0,     0,   289,   541,     0,     0,
      50,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   329,   146,   146,     0,     0,   323,     0,   323,
       0,     0,     0,   666,     0,     0,     0,     0,   445,     0,
       0,     0,     0,     0,     0,     0,     0,   714,     0,     0,
       0,     0,     0,     0,   468,     0,   468,   468,     0,     0,
     144,     0,     0,     0,     1,     2,   688,     0,     0,     0,
      50,     0,     0,    50,     0,     3,     4,     5,     6,     7,
       0,    50,     0,     0,     0,     9,     0,   169,     0,    41,
       0,     0,     0,   714,    10,     0,   282,     0,   321,   321,
     275,   101,     0,    12,     0,     0,   468,     0,     0,   321,
       0,   714,   468,     0,     0,    14,   144,     0,     0,     0,
     714,     0,   541,   714,    17,     0,   102,    19,    20,    21,
       0,    22,    23,     0,     0,     0,    24,   478,   440,     0,
      26,     0,     0,  -279,  -279,     0,     0,  -279,    54,     0,
     773,   468,    55,     0,   468,   321,  -279,   169,     0,     0,
     146,     0,     0,     0,   466,   466,     0,     0,     0,     0,
     146,     0,     0,   321,   466,   169,   468,     0,     0,     0,
       0,   466,   321,  -414,     0,   321,  -279,  -279,  -279,  -279,
    -414,   321,     0,     0,     0,     0,    41,   468,     0,     0,
       0,     0,   146,   495,     0,     0,     0,   807,     0,     0,
       0,     0,    57,    58,   270,     4,     5,     6,     7,    60,
     271,   272,     0,    50,     0,    50,     0,     0,   146,     0,
       0,   820,   513,    10,   146,     0,   282,     0,     0,     0,
       0,     0,   273,     0,     0,   459,   444,     0,   714,     0,
       0,     0,     0,    57,    58,   303,     4,     5,     6,     7,
      60,    61,    62,   274,    63,     9,     0,     0,    64,     0,
     169,     0,     0,   169,    10,     0,    41,     0,     0,   169,
       0,     0,     0,   305,     0,     0,     0,    66,     0,     0,
       0,   773,    67,    50,     0,     0,     0,     0,   773,    68,
       0,     0,     0,     0,   313,   169,   460,   592,   593,   594,
     321,    50,     0,     0,   598,     0,   321,   169,    70,   169,
      26,     0,     0,     0,     0,     0,     0,   321,     0,     0,
       0,     0,    50,   901,     0,     0,     0,   714,     0,   714,
       0,   329,     0,     0,     0,     0,   619,     0,     0,     0,
       0,    57,    58,    59,     4,     5,     6,     7,    60,    61,
      62,     0,    63,   164,     0,     0,    64,     0,     0,   169,
     348,     0,    10,     0,     0,   820,   635,   773,     0,   638,
     169,    65,     0,     0,     0,    66,     0,     0,     0,     0,
      67,  -283,  -283,   901,     0,  -283,   169,    68,     0,   321,
       0,   321,    69,     0,  -283,     0,    50,     0,     0,    50,
       0,   135,    50,     0,     0,    50,    70,     0,    57,    58,
     136,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,  -417,   146,    64,  -283,  -283,  -283,  -283,  -417,    10,
       0,    50,   450,     4,     5,     6,     7,     0,    65,   283,
       0,     0,   138,    50,     0,    50,     0,   139,     0,     0,
       0,    10,     0,     0,   140,     0,     0,   693,     0,    69,
     141,     0,     0,   921,     0,     0,     0,   329,   466,     0,
       0,     0,     0,    70,   142,   143,   451,     0,   718,     0,
     466,   168,     0,   155,     0,     0,   450,     4,     5,     6,
       7,   146,     0,     0,     0,    50,     0,     0,     0,     1,
       2,     0,     0,     0,     0,    10,    50,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     0,   933,     0,     0,
       9,     0,    50,     0,   718,     0,     0,     0,     0,    10,
     451,     0,     0,     0,     0,   168,    11,     0,    12,     0,
       0,   530,   718,     0,     0,     0,     0,   146,     0,    13,
      14,   718,     0,     0,   718,    15,     0,    16,     0,    17,
     329,    18,    19,    20,    21,     0,    22,    23,   466,     1,
       2,    24,    25,     0,     0,    26,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,   173,   174,   175,   176,   177,     0,     0,    10,
     180,   181,   182,   183,   184,   185,    11,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,   187,     0,     0,     0,    15,     0,    16,     0,    17,
     189,    18,    19,    20,    21,     0,    22,    23,     0,     0,
       0,    24,    25,     0,     0,    26,     0,     0,   190,     0,
       0,     2,   466,   299,     0,   300,   301,   302,     0,    57,
      58,   303,     4,     5,     6,     7,    60,    61,    62,     0,
      63,     9,     0,     0,    64,     0,     0,     0,     0,   718,
      10,     0,     0,     0,     0,   329,     0,   304,     0,   305,
       0,   306,   307,    66,     0,   308,   329,     0,    67,     0,
      13,    14,   309,   310,   311,    68,    15,     0,   312,     0,
     313,     0,   314,     0,     0,    21,   315,     0,     0,     0,
     316,     0,     0,     0,    70,     2,    26,   299,     0,   300,
     301,   302,     0,    57,    58,   303,     4,     5,     6,     7,
      60,    61,    62,     0,    63,     9,     0,     0,    64,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,   304,   930,   305,     0,   306,   615,    66,   718,   308,
     718,     0,    67,     0,    13,    14,   309,   310,   311,    68,
      15,     0,   312,     0,   313,     0,   314,     0,     0,    21,
     315,     0,     0,     0,   316,     0,     0,     2,    70,   299,
      26,   300,   301,   302,     0,    57,    58,   303,     4,     5,
       6,     7,    60,    61,    62,     0,    63,     9,     0,     0,
      64,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,   304,     0,   305,     0,   306,   706,    66,
       0,   308,     0,     0,    67,     0,    13,    14,   309,   310,
     311,    68,    15,     0,   312,     0,   313,     0,   314,     0,
       0,    21,   315,     0,     0,     0,   316,     0,     0,   710,
      70,   299,    26,   300,   301,   302,     0,    57,    58,   711,
       4,     5,     6,     7,    60,    61,    62,     0,    63,     9,
       0,     0,    64,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,   304,     0,   305,     0,   306,
     712,   138,     0,   308,     0,     0,    67,     0,    13,    14,
     713,   310,   311,    68,    15,     0,   312,     0,   313,     0,
     314,     0,     0,    21,   315,     0,     0,     0,   316,     0,
       0,   710,    70,   299,    26,   300,   301,   302,     0,    57,
      58,   711,     4,     5,     6,     7,    60,    61,    62,     0,
      63,     9,     0,     0,    64,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,   304,     0,   305,
       0,   306,   759,   138,     0,   308,     0,     0,    67,     0,
      13,    14,   713,   310,   311,    68,    15,     0,   312,     0,
     313,     0,   314,     0,     0,    21,   315,     0,     0,     0,
     316,     0,     0,   710,    70,   299,    26,   300,   301,   302,
       0,    57,    58,   711,     4,     5,     6,     7,    60,    61,
      62,     0,    63,     9,     0,     0,    64,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,   304,
       0,   305,     0,   306,   776,   138,     0,   308,     0,     0,
      67,     0,    13,    14,   713,   310,   311,    68,    15,     0,
     312,     0,   313,     0,   314,     0,     0,    21,   315,     0,
       0,     0,   316,     0,     0,   710,    70,   299,    26,   300,
     301,   302,     0,    57,    58,   711,     4,     5,     6,     7,
      60,    61,    62,     0,    63,     9,     0,     0,    64,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,   304,     0,   305,     0,   306,   786,   138,     0,   308,
       0,     0,    67,     0,    13,    14,   713,   310,   311,    68,
      15,     0,   312,     0,   313,     0,   314,     0,     0,    21,
     315,     0,     0,     0,   316,     0,     0,     2,    70,   299,
      26,   300,   301,   302,     0,    57,    58,   303,     4,     5,
       6,     7,    60,    61,    62,     0,    63,     9,     0,     0,
      64,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,   304,     0,   305,     0,   306,   788,    66,
       0,   308,     0,     0,    67,     0,    13,    14,   309,   310,
     311,    68,    15,     0,   312,     0,   313,     0,   314,     0,
       0,    21,   315,     0,     0,     0,   316,     0,     0,   710,
      70,   299,    26,   300,   301,   302,     0,    57,    58,   711,
       4,     5,     6,     7,    60,    61,    62,     0,    63,     9,
       0,     0,    64,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,   304,     0,   305,     0,   306,
     877,   138,     0,   308,     0,     0,    67,     0,    13,    14,
     713,   310,   311,    68,    15,     0,   312,     0,   313,     0,
     314,     0,     0,    21,   315,     0,     0,     0,   316,     0,
       0,     2,    70,   299,    26,   300,   301,   302,     0,    57,
      58,   303,     4,     5,     6,     7,    60,    61,    62,     0,
      63,     9,     0,     0,    64,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,   304,     0,   305,
       0,   306,   881,    66,     0,   308,     0,     0,    67,     0,
      13,    14,   309,   310,   311,    68,    15,     0,   312,     0,
     313,     0,   314,     0,     0,    21,   315,     0,     0,     0,
     316,     0,     0,     2,    70,   299,    26,   300,   301,   302,
       0,    57,    58,   303,     4,     5,     6,     7,    60,    61,
      62,     0,    63,     9,     0,     0,    64,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,   304,
       0,   305,     0,   306,   889,    66,     0,   308,     0,     0,
      67,     0,    13,    14,   309,   310,   311,    68,    15,     0,
     312,     0,   313,     0,   314,     0,     0,    21,   315,     0,
       0,     0,   316,     0,     0,   710,    70,   299,    26,   300,
     301,   302,     0,    57,    58,   711,     4,     5,     6,     7,
      60,    61,    62,     0,    63,     9,     0,     0,    64,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,   304,     0,   305,     0,   306,   935,   138,     0,   308,
       0,     0,    67,     0,    13,    14,   713,   310,   311,    68,
      15,     0,   312,     0,   313,     0,   314,     0,     0,    21,
     315,     0,     0,     0,   316,     0,     0,   710,    70,   299,
      26,   300,   301,   302,     0,    57,    58,   711,     4,     5,
       6,     7,    60,    61,    62,     0,    63,     9,     0,     0,
      64,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,   304,     0,   305,     0,   306,   937,   138,
       0,   308,     0,     0,    67,     0,    13,    14,   713,   310,
     311,    68,    15,     0,   312,     0,   313,     0,   314,     0,
       0,    21,   315,     0,     0,     0,   316,     0,     0,   710,
      70,   299,    26,   300,   301,   302,     0,    57,    58,   711,
       4,     5,     6,     7,    60,    61,    62,     0,    63,     9,
       0,     0,    64,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,   304,     0,   305,     0,   306,
       0,   138,     0,   308,     0,     0,    67,     0,    13,    14,
     713,   310,   311,    68,    15,     0,   312,     0,   313,     0,
     314,     0,     0,    21,   315,     0,     0,     0,   316,   135,
       0,     0,    70,     0,    26,     0,    57,    58,   136,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,  -279,
    -279,    64,     0,  -279,    54,     0,  -311,    10,    55,     0,
       0,     0,  -279,     0,     0,     0,    65,   494,     0,     0,
     138,     0,     0,     0,     0,   139,     0,  -280,  -280,     0,
       0,  -280,   140,     0,     0,     0,     0,    69,   141,  -414,
    -280,     0,  -279,  -279,  -279,  -279,  -414,   135,     0,     0,
       0,    70,   142,   143,    57,    58,   136,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,  -416,     0,    64,
    -280,  -280,  -280,  -280,  -416,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    65,   667,     0,     0,   138,     0,
       0,     0,     0,   139,     0,     0,     0,     0,     0,     0,
     140,     0,     0,     0,     0,    69,   141,     0,     0,     0,
       0,     0,     0,     0,     0,   135,     0,     0,     0,    70,
     142,   143,    57,    58,   136,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,     0,     0,    64,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    65,   781,     0,     0,   138,     0,     0,     0,
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
     141,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,    70,   142,   143,    57,    58,   136,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,     0,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
     138,     0,     0,     0,     0,   475,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,     0,    69,   141,     0,
       0,     0,     0,     0,     0,     0,     0,   287,     0,     0,
       0,    70,   142,   143,    57,    58,    59,     4,     5,     6,
       7,    60,    61,    62,     0,    63,   165,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,   614,
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
       0,     0,   567,     0,   568,     0,   138,     0,     0,     0,
       0,    67,     0,     0,     0,   847,   848,   849,    68,     0,
       0,     0,     0,    69,     0,   460,     0,     0,     0,     0,
       0,     0,   299,   316,   300,   301,   302,    70,    57,    58,
     136,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,     0,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,   567,     0,
     568,     0,   138,     0,     0,     0,     0,    67,     0,     0,
       0,   853,   854,   855,    68,     0,     0,     0,     0,    69,
       0,   460,     0,     0,     0,     0,     0,     0,   299,   316,
     300,   301,   302,    70,    57,    58,   136,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,   567,     0,   568,     0,   138,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,     0,   460,     0,     0,
       0,     0,     0,     0,   299,   316,   300,   301,   302,    70,
      57,    58,   918,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,     0,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     567,     0,   568,     0,   138,     0,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,    69,     0,   460,     0,     0,     0,     0,     0,     0,
       0,   316,     0,     0,     0,    70,    57,    58,    59,     4,
       5,     6,     7,    60,    61,    62,     0,    63,     9,     0,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,   851,
      66,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    69,     0,   460,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,   721,    57,    58,    59,     4,     5,     6,
       7,    60,    61,    62,     0,    63,     9,     0,     0,    64,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,     0,   460,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,   721,    57,    58,    59,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     9,     0,     0,    64,   173,   174,
     175,   176,   177,    10,   178,   179,   180,   181,   182,   183,
     184,   185,    65,     0,     0,   186,   138,     0,   477,   335,
       0,    67,     0,     0,     0,     0,     0,   187,    68,     0,
       0,     0,     0,    69,   188,   460,   189,    57,    58,    59,
       4,     5,     6,     7,    60,    61,    62,    70,    63,     9,
       0,     0,    64,     0,   190,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,   596,
       0,    66,     0,     0,     0,     0,    67,   597,     0,     0,
       0,     0,     0,    68,     0,     0,     0,     0,    69,    57,
      58,    59,     4,     5,     6,     7,    60,    61,    62,     0,
      63,     0,    70,     0,    64,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,   357,    65,
       0,     0,     0,    66,   458,     0,     0,     0,    67,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      69,    57,    58,    59,     4,     5,     6,     7,    60,    61,
      62,     0,    63,     9,    70,     0,    64,   173,   174,   175,
     176,   177,    10,   178,   179,   180,   181,   182,   183,   184,
     185,    65,     0,     0,   186,    66,     0,     0,     0,     0,
      67,     0,     0,     0,     0,     0,   187,    68,     0,     0,
       0,     0,    69,   188,   460,   189,    57,    58,    59,     4,
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
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,   357,    65,     0,     0,     0,    66,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,    57,    58,    59,     4,
       5,     6,     7,    60,    61,    62,     0,    63,   500,    70,
       0,    64,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
      66,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    69,    57,    58,
     629,     4,     5,     6,     7,    60,    61,    62,     0,    63,
       9,    70,     0,    64,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,     0,    66,     0,     0,     0,     0,   630,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,    69,
      57,    58,    59,     4,     5,     6,     7,    60,    61,    62,
       0,    63,     9,    70,     0,    64,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     692,     0,     0,     0,    66,     0,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,    69,    57,    58,    59,     4,     5,     6,     7,    60,
      61,    62,     0,    63,     0,    70,     0,    64,   173,   174,
     175,   176,   177,    10,   178,   179,   180,   181,   182,   183,
     184,   185,    65,     0,     0,   186,    66,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,   187,    68,     0,
       0,     0,     0,    69,   298,   460,   189,    57,    58,   725,
       4,     5,     6,     7,    60,    61,    62,    70,    63,     9,
       0,     0,    64,     0,   190,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,     0,
       0,    66,     0,     0,     0,     0,    67,     0,     0,     0,
       0,     0,     0,   154,     0,     0,     0,     0,    69,    57,
      58,   726,     4,     5,     6,     7,    60,    61,    62,     0,
      63,   165,    70,     0,    64,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    65,
       0,     0,     0,    66,     0,     0,     0,     0,    67,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      69,    57,    58,    59,     4,     5,     6,     7,    60,    61,
      62,     0,    63,     0,    70,     0,    64,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,     0,     0,    66,     0,     0,     0,     0,
      67,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,    69,    57,    58,    59,     4,     5,     6,     7,
      60,    61,    62,     0,    63,     0,    70,     0,    64,     0,
       0,     0,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,    66,     0,     0,
       0,     0,    67,     0,     0,     0,     0,     0,     0,    68,
       0,     0,     0,     0,    69,    57,    58,   497,     4,     5,
       6,     7,    60,    61,    62,     0,    63,     0,    70,     0,
      64,   173,   174,   175,   176,   177,    10,   178,   179,   180,
     181,   182,   183,   184,   609,    65,     0,     0,   186,   498,
       0,     0,     0,     0,    67,     0,     0,     0,     0,     0,
     187,    68,     0,     0,     0,     0,    69,   188,     0,   189,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     0,   173,   174,   175,   176,   177,   190,   178,   179,
     180,   181,   182,   183,   184,     0,     0,     0,     0,   186,
      57,    58,   270,     4,     5,     6,     7,    60,   271,   272,
       0,   187,     0,     0,     0,     0,     0,     0,   188,     0,
     189,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     273,     0,     0,     0,     0,     0,     0,     0,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   274
};

static const yytype_int16 yycheck[] =
{
       0,    16,     2,    65,   269,    28,   157,     0,    43,   423,
      11,   244,     0,   309,   126,    16,    16,    18,    53,    10,
     316,   287,   134,    16,   438,   128,   129,   135,    28,   393,
      63,   158,   159,     2,   649,    28,     0,   300,   205,     0,
      28,   671,     5,   601,   299,   300,   746,   379,   822,   381,
     306,   133,    52,   787,    54,    16,   127,   128,   129,     3,
      93,   299,   300,   538,    28,    65,     5,    28,    68,     5,
      70,   309,   231,   232,    16,   137,    18,   568,   316,     3,
       5,    14,    14,    52,    85,    84,    48,    14,    51,     5,
     295,    91,    49,    48,    93,    44,   131,    14,    60,   833,
     101,   102,   135,    60,    33,   596,     5,    22,    23,    14,
     810,    43,   812,    46,    46,    14,   607,    46,    51,    51,
     119,   120,    77,    62,     5,    24,    62,     3,   210,    62,
      62,    75,   337,    14,   908,   135,    63,   137,    54,    64,
     140,    65,   142,    24,    14,    60,    79,    79,    77,   883,
       3,    68,    51,    14,   154,   267,     6,   157,   158,   159,
     102,   895,    14,   793,    63,    14,   317,   867,    46,     0,
      51,     2,   205,   142,   588,    14,    46,    58,   653,   287,
      79,    33,    63,   917,   266,    16,    14,   420,     3,    65,
      66,   865,    45,    14,    44,    14,   157,    28,    79,    77,
      53,   831,    51,    42,   938,    24,   205,    46,    61,    79,
     377,    63,    65,    66,   229,   471,   217,    14,    46,     6,
      33,    52,   221,   223,    36,    44,     3,   641,   484,   903,
     223,   905,   231,   232,    62,   223,   363,    68,    53,    70,
      79,   229,   369,   305,    63,   860,    61,    33,     5,    46,
      65,    66,   411,   927,   287,   290,    42,    44,    52,   223,
      91,   819,   223,    54,    77,    77,   378,    24,    45,    48,
      27,    50,    84,   506,    65,   766,    53,    22,    23,    24,
      25,    26,     5,    77,    61,    42,    14,   287,    65,    66,
      84,   655,    14,   293,    51,   295,   127,   128,   129,   299,
     300,    24,    42,   304,   135,   305,    46,   389,   390,   140,
     642,   142,   568,    14,    42,    60,    14,   317,    46,   733,
     734,   424,   425,   154,   317,   476,   157,    14,    51,   625,
     299,   300,    36,    61,   485,     3,   894,   337,   299,   300,
     596,    45,   375,   376,   377,    46,   137,    14,   614,   605,
     613,   607,   910,   424,   425,   611,   317,    14,   613,    46,
     351,    14,     3,   363,    51,   388,   474,   158,   159,   369,
     608,   609,    49,    77,    15,   613,   375,    45,   377,    46,
      84,   795,   397,    14,   798,    53,   401,   625,   388,    46,
      41,    42,   223,    61,   885,   388,   887,    65,    66,    33,
     388,    78,    42,   391,    36,   393,    46,    47,    48,   408,
     409,   410,   411,   401,    31,    14,    48,   713,    50,   531,
     532,    27,   422,   423,   388,    42,    77,   388,   463,    46,
      24,    42,    49,   847,   469,    46,    33,    77,   438,   853,
      46,   474,     0,    42,    84,    42,    36,    46,   448,    46,
      42,   451,    44,    45,    46,    36,   287,    51,    48,   459,
      77,   612,   293,    44,    51,    31,    77,    84,   299,   300,
      31,    41,   623,    84,   474,   713,   476,    50,    48,   448,
      77,   895,   483,    49,    31,    77,   317,    31,    49,    77,
     459,    78,    84,    42,   606,    44,    84,    46,   610,    46,
       3,   797,    49,   917,   295,   567,   614,    84,    36,   636,
     766,    14,    15,    36,   305,   476,    44,    45,   669,    37,
      38,   777,    45,    41,   938,    48,    44,    50,    77,   157,
      37,    38,    50,   789,    41,    84,   687,    77,    42,    51,
      44,    14,    46,    50,    84,   696,   337,    45,   699,    14,
      15,    16,    17,    18,   705,    53,    44,   388,    45,   797,
      48,   560,    80,    81,    82,    83,    53,   567,    33,   604,
      77,   157,   363,    80,    81,    82,    83,    84,   369,    14,
      42,   614,    47,   695,    46,    48,    48,    50,   588,    24,
      43,   422,   423,   424,   425,    77,    49,     3,    63,    77,
      14,   601,    84,   603,   116,   117,    84,   438,    43,    43,
      24,    46,   612,   613,   614,    77,    51,   448,    44,    54,
     451,    42,    84,   623,    50,    46,   891,    48,   459,   885,
     692,   887,    46,    43,   603,    77,   636,    51,    33,    49,
      54,   641,    84,   474,   613,   476,    41,    42,     5,    44,
     665,   612,   613,    42,   623,    50,    77,    46,    42,   694,
      44,   649,   623,    84,   665,    46,    14,   655,    44,   669,
     782,   671,    44,   824,    50,    49,    24,   665,    50,   830,
     792,   716,   794,    45,   719,    43,    48,   687,    50,   689,
     841,    49,   692,    42,    42,    44,   696,    46,    46,   699,
     669,    14,   735,    51,    45,   705,    54,    48,   669,    50,
     710,    12,    13,    14,    15,    16,    17,    18,   687,    50,
      14,    15,    16,    17,    18,    77,   687,   696,    45,   241,
     699,   843,    49,   733,   734,   696,    12,    13,   699,    33,
     755,   710,    45,    45,   705,    44,    49,    49,   736,   737,
     751,   752,    47,    48,   755,    45,   791,   588,     9,    49,
      14,   157,   913,    47,   915,    49,    47,   755,    49,    63,
     601,    45,   603,    45,    42,    49,   567,    49,   890,    48,
      49,   612,   613,   614,   784,    45,    44,   787,    44,    49,
     790,    43,   623,   793,    49,   795,    45,    47,   798,    14,
      49,    12,    13,    14,    55,    48,    49,   842,    48,    49,
     641,    49,   813,    64,    65,    42,    67,   736,   737,   819,
      14,   790,    14,    42,   824,     8,     9,    10,    49,   259,
     830,   831,   623,   833,    12,    13,    14,    45,   669,   269,
     671,   841,    14,    50,    50,   636,    44,   847,   476,   408,
     409,   410,    77,   853,    50,   824,   687,    54,   689,    49,
      51,    47,    49,   824,    44,   696,    14,    69,   699,   830,
      40,    44,   860,    50,   705,   387,    43,     5,   669,   710,
     841,    47,    31,   883,    48,    48,   137,    14,   139,    14,
     476,    48,   892,    53,   894,   895,   687,    48,   689,    14,
       3,   692,   733,   734,    10,   696,    43,    46,   699,    68,
     910,     5,    50,   913,   165,   915,    63,   917,    49,    43,
      63,    50,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   938,   190,
      48,    43,    35,    50,   913,    44,   915,    14,    15,    16,
      17,    18,   913,   784,   915,    44,   787,    44,    11,   790,
      48,     5,   793,    48,   795,    48,    33,   798,    54,    44,
      14,    15,    16,    17,    18,    42,     0,    48,     2,    65,
      43,    47,    42,    47,   612,    43,    37,    38,   819,    33,
      41,    48,    16,   824,    49,   623,    63,    14,    42,   830,
     831,    43,   833,    43,    28,    61,   436,    14,     3,    14,
     841,    49,    79,    49,    43,    48,   847,    44,    44,    63,
      48,    52,   853,    48,    47,    45,   612,    48,    52,    80,
      81,    82,    83,   824,   546,    79,    48,   623,    47,    43,
      14,   669,    42,    14,    68,    47,    70,   298,   299,   300,
      44,   137,   883,    45,   305,   141,    45,    48,   309,   687,
      44,   892,    45,   894,   895,   316,    44,    91,   696,    44,
      43,   699,   158,   159,    50,    74,   907,   705,   119,   910,
     476,    74,   913,   669,   915,    48,   917,    42,    42,    14,
      72,    77,    44,     7,   524,     7,    43,   348,    48,    48,
     351,   687,    42,   127,   128,   129,   357,   938,    43,    45,
     696,   135,     0,   699,     2,     5,   140,    44,   142,   705,
       5,    43,   913,    43,   915,    49,     5,    50,    16,    77,
     154,    49,    43,   157,   646,    14,    15,    16,    17,    18,
      28,    48,    43,    45,    48,    45,   223,   659,     5,   661,
      48,    48,   664,   375,    33,    16,   401,    14,    15,    16,
      17,    18,   755,    42,    52,    16,   655,   597,   924,   808,
      16,   422,   423,   247,   586,   584,    33,   216,   189,   829,
      68,   481,    70,   943,    63,    42,   906,   438,   797,   908,
     231,   232,   202,   311,    -1,   448,   824,    -1,    -1,   223,
      79,   287,   830,    91,   245,   246,    63,    -1,    -1,   295,
     838,   839,    -1,   841,   644,   645,   612,    -1,    -1,   305,
      -1,    -1,    79,   309,   475,    -1,    -1,   623,    -1,    14,
      15,    16,    17,    18,    -1,    -1,   748,    -1,   824,    14,
      15,    16,    17,    18,   830,    -1,    -1,   135,    33,   500,
      -1,   337,   140,    -1,   142,   841,    -1,    -1,    33,   771,
      -1,    -1,    -1,   287,    -1,    -1,   154,   697,    -1,   293,
      -1,    -1,    -1,   669,   704,   299,   300,   363,    63,    -1,
      -1,    -1,    -1,   369,    -1,   913,    -1,   915,    63,    -1,
      -1,   687,    -1,   317,    -1,   807,    -1,    -1,    -1,    -1,
     696,    -1,    -1,   699,    -1,    -1,    -1,    -1,   820,   705,
      -1,    14,    15,    16,    17,    18,   567,    -1,    -1,    -1,
     361,    -1,    14,    15,    16,    17,    18,   913,    -1,   915,
      33,    -1,    -1,    -1,    -1,   223,    -1,   588,    -1,    37,
      38,    33,    45,    41,    14,    15,    16,    17,    18,    -1,
      -1,   392,    50,   783,    -1,    58,    -1,   608,   609,    -1,
      63,    -1,   613,    33,   388,   406,    58,   408,   409,   410,
     411,    63,   413,    -1,   625,    45,    -1,   628,    -1,   630,
      -1,    -1,    80,    81,    82,    83,    -1,   899,    58,    -1,
     641,    -1,    -1,    63,    14,    15,    16,    17,    18,   287,
     424,   425,   832,    -1,    -1,   293,    -1,    -1,    -1,    54,
      55,    -1,    -1,    33,   844,    -1,   846,    -1,    -1,    -1,
      65,    66,    -1,    -1,   448,    -1,     4,   451,   824,   317,
       8,     9,    10,    -1,   830,   459,    14,    15,    16,    17,
      18,   692,    -1,    63,    -1,   841,    24,    -1,    -1,    -1,
     474,    -1,   476,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,   891,   713,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,   567,   733,   734,    -1,    63,   916,    -1,   376,    -1,
      68,    -1,   137,   138,    -1,    -1,   141,   538,    -1,    -1,
     388,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,   158,   159,    -1,    -1,   913,    -1,   915,
      -1,    -1,    -1,   564,    -1,    -1,    -1,    -1,   614,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   623,    -1,    -1,
      -1,    -1,    -1,    -1,   795,    -1,   797,   798,    -1,    -1,
     636,    -1,    -1,    -1,     3,     4,   597,    -1,    -1,    -1,
     448,    -1,    -1,   451,    -1,    14,    15,    16,    17,    18,
      -1,   459,    -1,    -1,    -1,    24,    -1,   601,    -1,   603,
      -1,    -1,    -1,   669,    33,    -1,   474,    -1,   612,   613,
     614,    40,    -1,    42,    -1,    -1,   847,    -1,    -1,   623,
      -1,   687,   853,    -1,    -1,    54,   692,    -1,    -1,    -1,
     696,    -1,   653,   699,    63,    -1,    65,    66,    67,    68,
      -1,    70,    71,    -1,    -1,    -1,    75,   713,   273,    -1,
      79,    -1,    -1,    37,    38,    -1,    -1,    41,    42,    -1,
     681,   892,    46,    -1,   895,   669,    50,   671,    -1,    -1,
     295,    -1,    -1,    -1,   299,   300,    -1,    -1,    -1,    -1,
     305,    -1,    -1,   687,   309,   689,   917,    -1,    -1,    -1,
      -1,   316,   696,    77,    -1,   699,    80,    81,    82,    83,
      84,   705,    -1,    -1,    -1,    -1,   710,   938,    -1,    -1,
      -1,    -1,   337,   338,    -1,    -1,    -1,   738,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,   601,    -1,   603,    -1,    -1,   363,    -1,
      -1,   762,   367,    33,   369,    -1,   614,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,     4,    46,    -1,   824,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    63,    23,    24,    -1,    -1,    27,    -1,
     784,    -1,    -1,   787,    33,    -1,   790,    -1,    -1,   793,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,
      -1,   822,    51,   671,    -1,    -1,    -1,    -1,   829,    58,
      -1,    -1,    -1,    -1,    63,   819,    65,   442,   443,   444,
     824,   689,    -1,    -1,   449,    -1,   830,   831,    77,   833,
      79,    -1,    -1,    -1,    -1,    -1,    -1,   841,    -1,    -1,
      -1,    -1,   710,   864,    -1,    -1,    -1,   913,    -1,   915,
      -1,   476,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,   498,    -1,    -1,    27,    -1,    -1,   883,
      31,    -1,    33,    -1,    -1,   906,   511,   908,    -1,   514,
     894,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    37,    38,   924,    -1,    41,   910,    58,    -1,   913,
      -1,   915,    63,    -1,    50,    -1,   784,    -1,    -1,   787,
      -1,     5,   790,    -1,    -1,   793,    77,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    77,   567,    27,    80,    81,    82,    83,    84,    33,
      -1,   819,    14,    15,    16,    17,    18,    -1,    42,    43,
      -1,    -1,    46,   831,    -1,   833,    -1,    51,    -1,    -1,
      -1,    33,    -1,    -1,    58,    -1,    -1,   602,    -1,    63,
      64,    -1,    -1,    45,    -1,    -1,    -1,   612,   613,    -1,
      -1,    -1,    -1,    77,    78,    79,    58,    -1,   623,    -1,
     625,    63,    -1,   628,    -1,    -1,    14,    15,    16,    17,
      18,   636,    -1,    -1,    -1,   883,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    33,   894,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    45,    -1,    -1,
      24,    -1,   910,    -1,   669,    -1,    -1,    -1,    -1,    33,
      58,    -1,    -1,    -1,    -1,    63,    40,    -1,    42,    -1,
      -1,    45,   687,    -1,    -1,    -1,    -1,   692,    -1,    53,
      54,   696,    -1,    -1,   699,    59,    -1,    61,    -1,    63,
     705,    65,    66,    67,    68,    -1,    70,    71,   713,     3,
       4,    75,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    -1,    22,    23,    24,    25,    26,    -1,    -1,    33,
      30,    31,    32,    33,    34,    35,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    51,    -1,    -1,    -1,    59,    -1,    61,    -1,    63,
      60,    65,    66,    67,    68,    -1,    70,    71,    -1,    -1,
      -1,    75,    76,    -1,    -1,    79,    -1,    -1,    78,    -1,
      -1,     4,   797,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,   824,
      33,    -1,    -1,    -1,    -1,   830,    -1,    40,    -1,    42,
      -1,    44,    45,    46,    -1,    48,   841,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    77,     4,    79,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,   907,    42,    -1,    44,    45,    46,   913,    48,
     915,    -1,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    73,    -1,    -1,     4,    77,     6,
      79,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    -1,    63,    -1,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    73,    -1,    -1,     4,
      77,     6,    79,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,
      45,    46,    -1,    48,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    73,    -1,
      -1,     4,    77,     6,    79,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    44,    45,    46,    -1,    48,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      73,    -1,    -1,     4,    77,     6,    79,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    44,    45,    46,    -1,    48,    -1,    -1,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    73,    -1,    -1,     4,    77,     6,    79,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    44,    45,    46,    -1,    48,
      -1,    -1,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    73,    -1,    -1,     4,    77,     6,
      79,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    -1,    63,    -1,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    73,    -1,    -1,     4,
      77,     6,    79,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,
      45,    46,    -1,    48,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    73,    -1,
      -1,     4,    77,     6,    79,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    44,    45,    46,    -1,    48,    -1,    -1,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      73,    -1,    -1,     4,    77,     6,    79,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    44,    45,    46,    -1,    48,    -1,    -1,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    -1,    68,    69,    -1,
      -1,    -1,    73,    -1,    -1,     4,    77,     6,    79,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    44,    45,    46,    -1,    48,
      -1,    -1,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,    68,
      69,    -1,    -1,    -1,    73,    -1,    -1,     4,    77,     6,
      79,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    -1,    63,    -1,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    73,    -1,    -1,     4,
      77,     6,    79,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    73,     5,
      -1,    -1,    77,    -1,    79,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    37,
      38,    27,    -1,    41,    42,    -1,    44,    33,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    51,    -1,    37,    38,    -1,
      -1,    41,    58,    -1,    -1,    -1,    -1,    63,    64,    77,
      50,    -1,    80,    81,    82,    83,    84,     5,    -1,    -1,
      -1,    77,    78,    79,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    77,    -1,    27,
      80,    81,    82,    83,    84,    33,    -1,    -1,    -1,    -1,
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
      34,    35,    42,    -1,    -1,    39,    46,    -1,    48,    43,
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
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    77,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
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
      20,    21,    -1,    23,    -1,    77,    -1,    27,    22,    23,
      24,    25,    26,    33,    28,    29,    30,    31,    32,    33,
      34,    35,    42,    -1,    -1,    39,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    51,    58,    -1,
      -1,    -1,    -1,    63,    58,    65,    60,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    77,    23,    24,
      -1,    -1,    27,    -1,    78,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    63,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    77,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      63,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    -1,    77,    -1,    27,    -1,    -1,    -1,
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
      27,    22,    23,    24,    25,    26,    33,    28,    29,    30,
      31,    32,    33,    34,    35,    42,    -1,    -1,    39,    46,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      51,    58,    -1,    -1,    -1,    -1,    63,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    22,    23,    24,    25,    26,    78,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    39,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      60,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    14,    15,    16,    17,    18,    19,    24,
      33,    40,    42,    53,    54,    59,    61,    63,    65,    66,
      67,    68,    70,    71,    75,    76,    79,    86,    87,    88,
      89,    90,    94,    95,    96,   101,   104,   105,   117,   130,
     135,   149,   169,   170,   171,   193,   198,   200,   201,   203,
     212,    14,     5,   170,    42,    46,    44,    12,    13,    14,
      19,    20,    21,    23,    27,    42,    46,    51,    58,    63,
      77,   147,   149,   192,   194,   196,   197,   198,   202,   203,
     212,    14,    46,   146,    14,    15,   135,     5,    51,   172,
     173,   174,    27,    46,    14,    14,    24,    44,    63,   131,
     133,    40,    65,    94,    95,   101,   105,   117,   135,   169,
     101,   135,    14,    14,     5,    64,    14,    14,    14,    33,
     123,   124,     0,    88,    50,   181,   181,    77,    84,    84,
     123,   170,    48,    50,   181,     5,    14,    42,    46,    51,
      58,    64,    78,    79,   148,   177,   190,   192,   193,   198,
     204,   205,   206,   207,    58,   190,   192,   159,    42,    46,
     197,   192,   192,   205,   190,    24,   192,    14,    63,   149,
     198,   203,   198,    22,    23,    24,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    39,    51,    58,    60,
      78,    31,    46,    49,    14,    51,    31,    14,    97,   135,
       5,    43,    49,    14,   198,    46,    91,    92,    97,   197,
      50,    14,    63,   134,    48,    60,    77,    15,   135,   101,
     135,    41,    48,    44,    48,    14,    14,   123,   123,    44,
      14,    51,    62,    79,    97,   125,   127,   128,   129,   145,
     146,    97,    14,    24,    42,    51,    54,    97,   145,   182,
     183,    37,    38,    41,    80,    81,    82,    83,   167,   167,
     199,   200,   199,   199,    42,    48,    50,   181,   183,   167,
      14,    20,    21,    42,    63,   149,   197,   198,   202,   203,
     210,   211,   212,    43,   150,   151,   190,     5,   148,   190,
     170,   208,   209,    44,    43,    49,    47,    47,    58,     6,
       8,     9,    10,    14,    40,    42,    44,    45,    48,    55,
      56,    57,    61,    63,    65,    69,    73,    90,   121,   122,
     130,   149,   160,   161,   165,   169,   184,   185,   187,   190,
     193,   198,   203,   204,   204,    43,    43,    49,    49,   192,
     192,   192,   192,   192,   192,   192,   192,   192,    31,   192,
     192,    33,   192,   192,   192,   192,   192,    41,   192,    24,
      51,   142,   192,    42,    14,    14,    47,    48,    14,    42,
      48,    77,   172,    91,    47,    49,    41,    42,   183,    49,
      60,    49,    45,    14,   132,   131,   135,    97,    87,    50,
      50,    44,    42,    44,   106,     3,    45,    61,    65,    90,
      95,   102,   103,   128,    79,   128,    77,    31,    49,    33,
      42,    50,   123,    54,   182,    14,    62,   145,   145,   124,
      49,    51,   175,   175,    77,    84,     5,    14,    58,    79,
     136,   137,   138,   142,   143,   183,   167,    48,   175,   207,
     190,    47,    49,    48,    46,   148,   210,   181,    49,    78,
      14,    58,   178,   179,   180,   198,   203,   206,    47,     4,
      65,   122,   166,   170,   188,   189,   190,   191,   192,   193,
     188,    44,    14,   135,     5,    51,   159,    48,   148,   189,
      69,   186,   186,    40,    44,    50,   163,   189,   169,   187,
      36,    48,    43,    47,    43,   190,   192,    14,    46,   192,
      24,   192,     5,    54,   144,     5,    42,    79,   145,   195,
     204,    48,    31,   190,    48,   204,    14,    47,    92,    14,
      93,   197,   212,    91,   167,   134,    14,   134,    48,   123,
      45,   183,   183,    90,   112,   118,   119,    42,    61,   107,
     108,   145,   109,   110,   112,    48,    14,     3,    65,    95,
       3,    45,   103,    14,   145,   125,   125,   125,   126,   128,
      10,    98,   145,    43,    68,   182,     5,    42,    44,   148,
     161,   176,   177,   184,   187,   190,   191,   198,   203,   176,
     199,   199,    63,    43,    49,    63,    50,    48,   175,   176,
      48,    43,   190,   190,   190,   209,    44,    52,   190,   198,
      45,    49,    50,     5,   170,    44,   181,    44,    35,    35,
     181,    44,   159,    11,     5,    45,    48,    48,   150,   190,
      48,   135,   158,   159,   187,    44,    48,    47,    46,    14,
      51,   192,    43,   182,    43,   190,    42,    47,   190,    43,
      43,   175,    49,    48,   167,   167,    14,   120,    45,    49,
      43,   108,    43,    49,    45,    49,    61,   116,   123,    14,
       3,    14,    31,    43,    97,    44,   145,    43,   158,   159,
      48,    44,    36,    36,    48,    52,   152,   138,     5,    24,
      51,   115,   139,   176,    48,    47,   158,   159,   145,   175,
      45,   179,    42,   190,   170,   181,   159,   167,   158,   159,
     191,   192,   191,   192,   167,   159,    45,   188,    48,    45,
       4,    14,    45,    55,   148,   166,   170,   177,   190,   193,
     198,    79,   162,   164,   189,    14,    14,    43,    47,   204,
      47,   176,   134,   175,   175,    41,    42,    44,    50,   123,
      45,   119,   108,    45,   110,    14,    42,   123,    14,   123,
     123,    61,    65,    90,    95,    99,   100,   135,    45,    45,
     178,    27,    42,   139,   153,   155,    44,     5,    62,     5,
      62,   140,   141,   145,    48,    45,    45,    44,    14,   177,
     198,    43,   181,   167,   175,    45,    45,   175,    45,    44,
       5,   170,   181,    44,   181,    74,    45,    49,    74,    43,
      48,   176,   176,    14,   197,   118,   118,   145,    50,   136,
      42,   123,    42,    65,   135,   135,    45,   100,    45,    49,
     145,   154,    72,   158,   159,    14,    14,    68,   123,    77,
     159,    44,   167,   175,    14,   168,   198,   203,     7,     7,
     168,   159,   170,   181,   167,   178,   167,    55,    56,    57,
     176,    45,   164,    55,    56,    57,   176,    48,    48,    43,
      49,    45,   123,   111,   115,    43,   136,    42,   136,   135,
      45,   123,    43,   141,   156,   157,    45,    45,     5,     5,
     140,    45,   178,   175,   168,    44,   184,    44,   184,    45,
     181,   167,   175,    45,    49,   175,   176,   176,    42,   113,
     114,   145,   152,    43,   136,    43,    49,    50,    49,    45,
      49,   168,   158,   159,   158,   159,   167,   175,    14,   198,
     203,    45,    43,   123,    77,    48,   152,    43,   152,   154,
     190,   203,   157,    45,    45,    45,    45,    45,   175,   113,
      48,   152,    48,    52,    48,   155
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
     107,   107,   107,   108,   108,   109,   109,   110,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   120,   120,   120,   120,   120,   121,
     122,   123,   123,   124,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   135,   135,   136,   136,   136,   136,
     137,   137,   138,   138,   138,   138,   139,   140,   140,   141,
     142,   142,   142,   142,   143,   143,   144,   144,   144,   145,
     145,   146,   146,   146,   146,   147,   148,   148,   149,   149,
     149,   150,   150,   151,   151,   152,   152,   152,   152,   153,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   161,   161,   162,   162,   163,
     164,   164,   164,   164,   164,   164,   164,   164,   165,   165,
     165,   166,   166,   166,   166,   166,   166,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   171,   172,   172,   173,
     173,   174,   174,   174,   174,   175,   175,   175,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   177,   177,   178,   178,   179,   179,   179,   180,   180,
     180,   180,   181,   181,   181,   182,   182,   183,   183,   183,
     183,   183,   183,   184,   184,   184,   184,   184,   184,   184,
     184,   185,   186,   186,   187,   187,   187,   188,   188,   189,
     189,   190,   190,   191,   191,   191,   191,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   194,   194,   195,   195,   195,   195,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   197,   197,   198,   198,
     198,   199,   199,   199,   200,   200,   200,   200,   200,   201,
     201,   201,   202,   202,   203,   204,   204,   204,   204,   205,
     205,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   207,   207,   207,   207,   208,
     208,   209,   210,   210,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   212,   212,   212,   212
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
       1,     2,     2,     3,     1,     1,     3,     5,     3,     0,
       1,     3,     1,     1,     2,     1,     2,     1,     1,     2,
       3,     3,     3,     4,     4,     0,     1,     0,     6,     7,
       1,     3,     2,     2,     4,     4,     4,     3,     3,     4,
       4,     1,     0,     3,     3,     4,     4,     1,     1,     0,
       1,     0,     1,     3,     1,     2,     3,     1,     2,     2,
       3,     5,     3,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     5,    10,    10,     1,     2,     1,     0,
       1,     3,     3,     2,     2,     1,     3,     3,     1,     1,
       0,     1,     2,     2,     1,     1,     1,     1,     0,     1,
       1,     3,     5,     6,     6,     5,     3,     5,     4,     4,
       5,     1,     0,     1,     3,     2,     2,     2,     0,     3,
       4,     2,     1,     3,     1,     3,     3,     5,     2,     2,
       2,     2,     5,     6,     2,     0,     2,     1,     1,     3,
       1,     2,     1,     1,     2,     1,     3,     1,     1,     1,
       4,     3,     1,     3,     2,     5,     6,     1,     3,     1,
       3,     3,     4,     4,     3,     3,     3,     3,     2,     3,
       3,     6,     7,     3,     2,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     8,     9,
       8,     6,     5,     6,     6,     6,     4,     3,     9,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       2,     1,     2,     1,     0,     1,     2,     0,     1,     1,
       1,     3,     3,     4,     5,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     3,     1,     3,     4,     1,     1,
       1,     2,     2,     4,     0,     3,     1,     1,     2,     4,
       2,     3,     2,     5,     9,     7,     9,     9,     5,     9,
       7,     3,     0,     1,     5,     4,     7,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     4,     3,     3,     4,     5,     3,     2,
       1,     4,     1,     2,     2,     3,     1,     1,     3,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     2,     2,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     6,
       6,     8,     4,     4,     4,     1,     2,     2,     0,     1,
       3,     1,     1,     2,     1,     1,     2,     3,     3,     2,
       4,     5,     1,     4,     6,     6,     9,    10,     8,     1,
       3,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
      
#line 2785 "parser.c" /* yacc.c:1646  */
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
#line 955 "parser.y" /* yacc.c:1906  */



void yyerror(const char* err) {
    printf("Parser line %d: %s - '%s'\n", yyline, err, yytext);
}
