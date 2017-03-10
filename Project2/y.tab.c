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
#line 1 "toy.y" /* yacc.c:339  */

void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>

#line 72 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _boolean = 258,
    _break = 259,
    _class = 260,
    _double = 261,
    _else = 262,
    _extends = 263,
    _for = 264,
    _if = 265,
    _implements = 266,
    _interface = 267,
    _int = 268,
    _newarray = 269,
    _println = 270,
    _readln = 271,
    _return = 272,
    _string = 273,
    _void = 274,
    _while = 275,
    _plus = 276,
    _minus = 277,
    _multiplication = 278,
    _division = 279,
    _mod = 280,
    _less = 281,
    _lessequal = 282,
    _greater = 283,
    _greaterequal = 284,
    _equal = 285,
    _notequal = 286,
    _and = 287,
    _or = 288,
    _not = 289,
    _assignop = 290,
    _semicolon = 291,
    _comma = 292,
    _period = 293,
    _leftparen = 294,
    _rightparen = 295,
    _leftbracket = 296,
    _rightbracket = 297,
    _leftbrace = 298,
    _rightbrace = 299,
    _intconstant = 300,
    _doubleconstant = 301,
    _stringconstant = 302,
    _booleanconstant = 303,
    _id = 304,
    THEN = 305
  };
#endif
/* Tokens.  */
#define _boolean 258
#define _break 259
#define _class 260
#define _double 261
#define _else 262
#define _extends 263
#define _for 264
#define _if 265
#define _implements 266
#define _interface 267
#define _int 268
#define _newarray 269
#define _println 270
#define _readln 271
#define _return 272
#define _string 273
#define _void 274
#define _while 275
#define _plus 276
#define _minus 277
#define _multiplication 278
#define _division 279
#define _mod 280
#define _less 281
#define _lessequal 282
#define _greater 283
#define _greaterequal 284
#define _equal 285
#define _notequal 286
#define _and 287
#define _or 288
#define _not 289
#define _assignop 290
#define _semicolon 291
#define _comma 292
#define _period 293
#define _leftparen 294
#define _rightparen 295
#define _leftbracket 296
#define _rightbracket 297
#define _leftbrace 298
#define _rightbrace 299
#define _intconstant 300
#define _doubleconstant 301
#define _stringconstant 302
#define _booleanconstant 303
#define _id 304
#define THEN 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   788

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    69,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_boolean", "_break", "_class",
  "_double", "_else", "_extends", "_for", "_if", "_implements",
  "_interface", "_int", "_newarray", "_println", "_readln", "_return",
  "_string", "_void", "_while", "_plus", "_minus", "_multiplication",
  "_division", "_mod", "_less", "_lessequal", "_greater", "_greaterequal",
  "_equal", "_notequal", "_and", "_or", "_not", "_assignop", "_semicolon",
  "_comma", "_period", "_leftparen", "_rightparen", "_leftbracket",
  "_rightbracket", "_leftbrace", "_rightbrace", "_intconstant",
  "_doubleconstant", "_stringconstant", "_booleanconstant", "_id", "THEN",
  "$accept", "Program", "Decl", "VariableDecl", "Variable", "Type",
  "Type2", "FunctionDecl", "Formals", "Variables", "ClassDecl", "Ids",
  "Fields0", "Fields", "Field", "InterfaceDecl", "Prototypes", "Prototype",
  "StmtBlock", "VariableDecls", "Stmts", "Stmt", "IfStmt", "WhileStmt",
  "ForStmt", "BreakStmt", "ReturnStmt", "PrintStmt", "Exprs", "Expr",
  "Lvalue", "Lvalue2", "Call", "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -167

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-167)))

#define YYTABLE_NINF -20

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      81,   -34,   -35,   -34,   -27,   -34,   -34,    -6,   -34,    26,
      81,  -167,    -4,    -1,  -167,  -167,  -167,    43,  -167,    95,
    -167,    47,  -167,  -167,    14,  -167,  -167,  -167,  -167,    56,
     -34,    48,    49,   141,  -167,   168,   139,   188,  -167,     2,
      64,    61,  -167,  -167,  -167,    65,     6,    59,  -167,    66,
      75,   190,    67,    87,    78,   100,  -167,    67,   103,    49,
    -167,    49,  -167,  -167,  -167,   107,   110,  -167,  -167,   119,
    -167,    99,  -167,    67,  -167,    67,    61,  -167,    99,    99,
     114,   112,   117,   122,   124,   137,   363,   143,   495,   495,
    -167,   495,  -167,  -167,  -167,  -167,   -18,    99,  -167,   209,
     255,  -167,  -167,  -167,  -167,  -167,  -167,  -167,   663,   145,
    -167,  -167,  -167,  -167,  -167,  -167,   155,   157,  -167,   384,
     495,   138,   495,   158,  -167,   -11,   679,   495,    54,  -167,
     546,   150,   400,   421,  -167,  -167,  -167,   301,  -167,  -167,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,  -167,   495,   164,   174,   495,   695,   566,
     167,   171,   646,  -167,   495,  -167,   586,  -167,   131,  -167,
     175,   524,  -167,    54,    54,  -167,  -167,  -167,   211,   211,
     211,   211,   303,   303,   257,   756,   743,  -167,  -167,   711,
     495,   347,    99,   178,   495,   347,   173,   437,  -167,  -167,
     -23,   458,   727,   213,   176,  -167,  -167,  -167,   -23,  -167,
     181,  -167,   347,   606,   474,   347,  -167,  -167,  -167,   347,
     347,   626,  -167,  -167,  -167,   347,  -167
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    17,     0,    16,     0,    15,    18,     0,    19,     0,
       2,     4,     0,     0,     5,     6,     7,     0,    12,     0,
      11,     0,    10,    13,     0,    14,     1,     3,     8,     9,
      20,     0,     0,     0,    29,     0,     0,     0,    21,     0,
      33,     0,    35,    39,    40,     0,    37,     0,    42,     0,
       0,    43,     0,    28,     0,     0,    26,     0,     0,     0,
      30,     0,    31,    36,    38,     0,     0,    41,    44,     0,
      25,     0,     9,     0,    24,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,   108,   109,   111,   110,    98,    50,    62,     0,
       0,    52,    56,    57,    58,    59,    60,    61,     0,    77,
      78,    76,    27,    23,    22,    32,     0,     0,    70,     0,
       0,     0,     0,     0,    71,    98,     0,     0,    96,    95,
       0,     0,     0,     0,    99,    51,    47,     0,    48,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    79,     0,    72,     0,    97,   101,   106,
       0,     0,    49,    90,    91,    92,    93,    94,    86,    87,
      88,    89,    84,    85,    83,    82,    81,    46,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   104,
     100,     0,     0,    63,     0,    73,    75,    65,   101,   107,
       0,   102,     0,     0,     0,     0,    80,   105,    66,     0,
       0,     0,    64,    68,    67,     0,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,   217,  -167,   -17,     4,     0,   172,   -29,    10,   159,
    -167,    11,    15,   192,  -167,  -167,   189,  -167,   132,   144,
     147,   -99,  -167,  -167,  -167,  -167,  -167,  -167,  -121,   -83,
    -167,  -166,  -167,  -167
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    54,    25,    14,    55,    56,
      15,    41,    34,    45,    46,    16,    50,    51,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   161,   108,
     109,   134,   110,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,   139,   198,   126,    44,   128,   129,    17,   130,     1,
      13,   170,     3,    59,    19,   196,    43,    44,   164,     5,
     131,   132,    21,   133,     6,     7,    26,   131,   132,    43,
     164,   -19,    28,    13,   211,    49,   158,   159,   139,   162,
      53,    53,   198,    24,   166,    33,    13,    58,    29,   162,
     171,    49,    97,    36,    60,     8,    62,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      76,   186,    77,   206,   189,    53,   210,   142,   143,   144,
      97,   171,    53,    53,     1,    30,     2,     3,   116,   117,
      35,   115,   203,     4,     5,    37,   207,    39,    40,     6,
       7,    61,     1,    31,    33,     3,    32,   202,    65,    63,
      69,   162,     5,   218,   162,    66,   222,     6,   213,    67,
     223,   224,     1,    80,    71,     3,   226,    72,    81,    82,
       8,   221,     5,    83,    84,    85,    86,     6,    33,    87,
      73,    88,     1,    75,     1,     3,    78,     3,     8,    79,
     118,   119,     5,    89,     5,    90,   120,     6,    91,     6,
       7,   121,    69,   122,    92,    93,    94,    95,    96,   196,
     197,     1,   164,    18,     3,    20,   123,    22,    23,    52,
     154,     5,   127,   160,    70,    42,     6,    47,     8,    74,
       8,     1,   204,     1,     3,   155,     3,   156,   163,   168,
     187,     5,    38,     5,   192,   113,     6,   114,     6,    47,
     188,   193,    48,    80,   205,   199,   216,     8,    81,    82,
     215,   217,   208,    83,    84,    85,    86,    27,    57,    87,
     112,    88,   140,   141,   142,   143,   144,     8,    64,     8,
      68,   135,     0,    89,     0,    90,   137,     0,    91,     0,
       0,     0,    69,   136,    92,    93,    94,    95,   125,    80,
       0,     0,     0,     0,    81,    82,     0,     0,     0,    83,
      84,    85,    86,     0,     0,    87,     0,    88,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    89,
       0,    90,     0,     0,    91,     0,     0,     0,    69,   138,
      92,    93,    94,    95,   125,    80,     0,     0,     0,     0,
      81,    82,     0,     0,     0,    83,    84,    85,    86,     0,
       0,    87,     0,    88,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,    89,     0,    90,     0,     0,
      91,     0,     0,     0,    69,   172,    92,    93,    94,    95,
     125,    80,     0,     0,     0,     0,    81,    82,     0,     0,
       0,    83,    84,    85,    86,     0,     0,    87,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    85,
       0,    89,     0,    90,     0,    88,    91,     0,     0,     0,
      69,     0,    92,    93,    94,    95,   125,    89,    83,   124,
      85,     0,    91,     0,     0,     0,    88,     0,    92,    93,
      94,    95,   125,     0,    83,     0,    85,     0,    89,     0,
     157,     0,    88,    91,     0,     0,     0,     0,     0,    92,
      93,    94,    95,   125,    89,    83,     0,    85,     0,    91,
     169,     0,     0,    88,     0,    92,    93,    94,    95,   125,
       0,    83,     0,    85,     0,    89,     0,     0,     0,    88,
      91,     0,     0,    30,     0,     0,    92,    93,    94,    95,
     125,    89,    83,     0,    85,     0,    91,   209,     0,     0,
      88,     0,    92,    93,    94,    95,   125,     0,    83,     0,
      85,     0,    89,     0,     0,     0,    88,    91,   212,     0,
       0,     0,     0,    92,    93,    94,    95,   125,    89,    83,
       0,    85,     0,    91,   220,     0,     0,    88,     0,    92,
      93,    94,    95,   125,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,   125,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,     0,     0,
       0,     0,     0,     0,     0,     0,   200,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,     0,     0,   167,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,     0,     0,   191,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,     0,     0,   195,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,     0,     0,   219,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,     0,     0,   225,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,   194,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,     0,   153,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,     0,     0,   165,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
       0,   190,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,     0,   201,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     0,     0,   214,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151
};

static const yytype_int16 yycheck[] =
{
       0,   100,   168,    86,    33,    88,    89,    41,    91,     3,
      10,   132,     6,    11,    49,    38,    33,    46,    41,    13,
      38,    39,    49,    41,    18,    19,     0,    38,    39,    46,
      41,    49,    36,    33,   200,    35,   119,   120,   137,   122,
      36,    37,   208,    49,   127,    43,    46,    37,    49,   132,
     133,    51,    69,    39,    39,    49,    41,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      59,   154,    61,   194,   157,    71,   197,    23,    24,    25,
      97,   164,    78,    79,     3,    42,     5,     6,    78,    79,
      43,    76,   191,    12,    13,    39,   195,    49,    49,    18,
      19,    37,     3,     8,    43,     6,    11,   190,    49,    44,
      43,   194,    13,   212,   197,    49,   215,    18,   201,    44,
     219,   220,     3,     4,    37,     6,   225,    49,     9,    10,
      49,   214,    13,    14,    15,    16,    17,    18,    43,    20,
      40,    22,     3,    40,     3,     6,    39,     6,    49,    39,
      36,    39,    13,    34,    13,    36,    39,    18,    39,    18,
      19,    39,    43,    39,    45,    46,    47,    48,    49,    38,
      39,     3,    41,     1,     6,     3,    39,     5,     6,    40,
      35,    13,    39,    45,    52,    44,    18,    19,    49,    57,
      49,     3,   192,     3,     6,    40,     6,    40,    40,    49,
      36,    13,    30,    13,    37,    73,    18,    75,    18,    19,
      36,    40,    44,     4,    36,    40,    40,    49,     9,    10,
       7,    40,    49,    14,    15,    16,    17,    10,    40,    20,
      71,    22,    21,    22,    23,    24,    25,    49,    46,    49,
      51,    97,    -1,    34,    -1,    36,    99,    -1,    39,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,     4,
      -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    -1,    -1,    20,    -1,    22,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    34,
      -1,    36,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,     4,    -1,    -1,    -1,    -1,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    -1,
      -1,    20,    -1,    22,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    34,    -1,    36,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,     4,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    -1,    -1,    20,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    16,
      -1,    34,    -1,    36,    -1,    22,    39,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    34,    14,    36,
      16,    -1,    39,    -1,    -1,    -1,    22,    -1,    45,    46,
      47,    48,    49,    -1,    14,    -1,    16,    -1,    34,    -1,
      36,    -1,    22,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    34,    14,    -1,    16,    -1,    39,
      40,    -1,    -1,    22,    -1,    45,    46,    47,    48,    49,
      -1,    14,    -1,    16,    -1,    34,    -1,    -1,    -1,    22,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,    47,    48,
      49,    34,    14,    -1,    16,    -1,    39,    40,    -1,    -1,
      22,    -1,    45,    46,    47,    48,    49,    -1,    14,    -1,
      16,    -1,    34,    -1,    -1,    -1,    22,    39,    40,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    34,    14,
      -1,    16,    -1,    39,    40,    -1,    -1,    22,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    37,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,    12,    13,    18,    19,    49,    52,
      53,    54,    55,    56,    58,    61,    66,    41,    57,    49,
      57,    49,    57,    57,    49,    57,     0,    52,    36,    49,
      42,     8,    11,    43,    63,    43,    39,    39,    57,    49,
      49,    62,    44,    54,    58,    64,    65,    19,    44,    56,
      67,    68,    40,    55,    56,    59,    60,    40,    59,    11,
      63,    37,    63,    44,    64,    49,    49,    44,    67,    43,
      69,    37,    49,    40,    69,    40,    62,    62,    39,    39,
       4,     9,    10,    14,    15,    16,    17,    20,    22,    34,
      36,    39,    45,    46,    47,    48,    49,    54,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    80,    81,
      83,    84,    60,    69,    69,    63,    59,    59,    36,    39,
      39,    39,    39,    39,    36,    49,    80,    39,    80,    80,
      80,    38,    39,    41,    82,    70,    44,    71,    44,    72,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    36,    35,    40,    40,    36,    80,    80,
      45,    79,    80,    40,    41,    36,    80,    40,    49,    40,
      79,    80,    44,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    36,    36,    80,
      36,    40,    37,    40,    37,    40,    38,    39,    82,    40,
      42,    36,    80,    72,    56,    36,    79,    72,    49,    40,
      79,    82,    40,    80,    36,     7,    40,    40,    72,    40,
      40,    80,    72,    72,    72,    40,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    53,    53,    54,    55,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    58,    58,    58,    58,    59,    60,    60,    61,
      61,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    75,    75,    75,    75,
      76,    77,    77,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    84,
      84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       2,     3,     6,     6,     5,     5,     1,     3,     1,     3,
       5,     5,     7,     1,     3,     2,     3,     1,     2,     1,
       1,     5,     4,     1,     2,     6,     6,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     5,     7,     5,     7,     8,     8,     9,
       2,     2,     3,     5,     1,     3,     1,     1,     1,     3,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     2,
       3,     2,     4,     3,     4,     6,     3,     5,     1,     1,
       1,     1
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
        case 2:
#line 69 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 1]");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 70 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 2]");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 3]");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 72 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 4]");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 73 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 5]");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 6]");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 75 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 7]");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 8]");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 9]");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 10]");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 79 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 11]");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 80 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 12]");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 14]");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 9]");}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 10]");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 84 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 11]");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 85 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 12]");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 86 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 14]");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 87 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 13]");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 88 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 13`]");}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 15]");}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 16]");}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 15]");}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 16]");}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 17]");}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 20]");}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 95 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 21]");}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 96 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 22]");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 97 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 23]");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 98 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 24]");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 99 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 25]");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 26]");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 101 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 27]");}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 102 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 28]");}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 103 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 29]");}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 104 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 30]");}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 105 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 31]");}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 106 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 32]");}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 33]");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 34]");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 35]");}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 110 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 36]");}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 111 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 37]");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 112 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 38]");}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 113 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 39]");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 114 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 40]");}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 115 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 41]");}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 116 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 42]");}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 117 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 43]");}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 118 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 44]");}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 119 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 45]");}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 120 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 46]");}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 121 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 47]");}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 122 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 48]");}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 123 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 49]");}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 124 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 50]");}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 125 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 51]");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 126 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 52]");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 127 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 53]");}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 128 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 54]");}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 129 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 55]");}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 130 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 56]");}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 131 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 57]");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 132 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 58]");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 133 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 59]");}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 134 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 60]");}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 135 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 61]");}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 136 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 62]");}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 137 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 63]");}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 138 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 64]");}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 139 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 65]");}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 140 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 66]");}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 141 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 67]");}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 142 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 68]");}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 143 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 69]");}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 144 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 70]");}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 145 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 71]");}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 146 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 73]");}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 147 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 74]");}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 148 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 75]");}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 149 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 76]");}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 150 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 77]");}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 151 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 78]");}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 152 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 79]");}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 153 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 80]");}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 154 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 81]");}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 155 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 82]");}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 156 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 83]");}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 157 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 84]");}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 158 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 85]");}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 159 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 86]");}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 160 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 87]");}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 161 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 88]");}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 162 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 89]");}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 163 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 90]");}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 164 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 91]");}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 165 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 92]");}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 166 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 92`]")}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 167 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 93]");}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 168 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 94]");}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 169 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 93`]");}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 170 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 94`]");}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 171 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 95]");}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 172 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 96]");}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 173 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 97]");}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 174 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 98]");}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 175 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 99]");}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 176 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 100]");}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 177 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 101]");}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 178 "toy.y" /* yacc.c:1646  */
    {printf("[reduce 102]");}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2230 "y.tab.c" /* yacc.c:1646  */
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
#line 179 "toy.y" /* yacc.c:1906  */
                     
int main (void) {
	yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 

