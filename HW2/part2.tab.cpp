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
#line 2 "part2.ypp" /* yacc.c:339  */

	#include <stdio.h>
	using namespace std;
	#include "part2_helpers.h"

	int yylex();
	void yyerror(const char*);
	ParserNode *parseTree;
	extern int yylineno;
    extern const char* yytext;

#line 78 "part2.tab.cpp" /* yacc.c:339  */

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
   by #include "part2.tab.hpp".  */
#ifndef YY_YY_PART2_TAB_HPP_INCLUDED
# define YY_YY_PART2_TAB_HPP_INCLUDED
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
    INT = 258,
    FLOAT = 259,
    VOID = 260,
    WRITE = 261,
    READ = 262,
    OPTIONAL = 263,
    WHILE = 264,
    DO = 265,
    IF = 266,
    RETURN = 267,
    ID = 268,
    INTEGERNUM = 269,
    REALNUM = 270,
    STR = 271,
    ASSIGN = 272,
    OR = 273,
    AND = 274,
    RELOP = 275,
    ADDOP = 276,
    MULOP = 277,
    NOT = 278,
    THEN = 279,
    ELSE = 280
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

#endif /* !YY_YY_PART2_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 155 "part2.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

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
      33,    34,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    23,    22,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    20,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,    18,     2,     2,     2,     2,
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
      15,    16,    24,    25,    26,    27,    28,    29,    30,    31,
      32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    35,    36,    37,    40,    41,    42,    43,
      46,    47,    50,    51,    54,    55,    56,    57,    60,    61,
      64,    65,    68,    69,    72,    75,    76,    79,    80,    81,
      84,    85,    88,    89,    90,    91,    92,    93,    94,    95,
      98,    99,   102,   103,   106,   109,   112,   115,   116,   117,
     120,   121,   122,   123,   124,   127,   128,   129,   130,   131,
     132,   133,   136,   137,   140,   143,   144,   147,   148
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "VOID", "WRITE", "READ",
  "OPTIONAL", "WHILE", "DO", "IF", "RETURN", "ID", "INTEGERNUM", "REALNUM",
  "STR", "'{'", "'}'", "'['", "']'", "','", "';'", "':'", "ASSIGN", "OR",
  "AND", "RELOP", "ADDOP", "MULOP", "NOT", "THEN", "ELSE", "'('", "')'",
  "$accept", "PROGRAM", "FDEFS", "FUNC_DEC_API", "FUNC_DEC_ARGLIST_OPT",
  "DCL_OPT", "FUNC_DEF_API", "FUNC_DEF_ARGLIST_OPT", "DCL_OPT_VAL",
  "FUNC_ARGLIST", "BLK", "DCL", "TYPE", "STLIST", "STMT", "return",
  "write", "read", "ASSN", "LVAL", "CNTRL", "BEXP", "EXP", "NUM", "CALL",
  "CALL_ARGS", "CALL_ARGLIST", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   123,   125,    91,
      93,    44,    59,    58,   272,   273,   274,   275,   276,   277,
     278,   279,   280,    40,    41
};
# endif

#define YYPACT_NINF -79

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-79)))

#define YYTABLE_NINF -47

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -79,     5,   163,   -79,   -79,   -79,   -79,   -79,    -6,     2,
     -79,   -79,    -1,    91,     0,    11,    22,     6,     6,     9,
     104,   -79,   -79,   -79,    74,   -79,     3,   -79,   -79,   -79,
     -79,   -79,    23,   -79,   117,   -79,   -79,   108,    16,    14,
     -79,    32,   -79,    35,   -79,    80,    77,    68,     6,    13,
       4,   142,    60,   -79,   119,   102,   163,    48,    37,   123,
     -79,    48,   -79,    48,    48,   113,   157,   149,   -79,   129,
      99,   131,   -79,   164,   133,    96,   125,   -79,   145,   -79,
      58,   106,   105,     6,     6,    48,   105,   -79,   135,   -79,
     -79,   153,   146,   162,    48,   -79,   121,   156,   -79,   151,
     -79,   163,   152,   155,   -79,   -79,   160,   -79,    38,    46,
     -79,   -79,   165,   166,   167,   -79,   -79,   168,   -79,   153,
     154,   -79,    48,   -79,   -79,   -79,   131,   182,   129,   183,
     170,   -79,   -79,   -79,   -79,   105,   153,   -79,   163,   -79,
     -79,   -79
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     2,     1,    27,    28,    29,     4,     0,     0,
      31,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    62,    63,    24,     0,    39,     0,    30,    38,    37,
      36,    33,     0,    35,     0,    60,    61,     0,    14,     0,
      11,     0,    19,     0,    23,     0,     0,    59,     0,     0,
       0,     0,     0,    41,     0,     0,     0,    66,     0,     0,
      32,     0,    34,     0,     0,     0,     0,     0,     6,     0,
       0,     0,    16,     0,    15,     0,     0,    46,     0,    52,
       0,     0,     0,     0,     0,     0,     0,    40,     0,    26,
      25,    68,     0,    65,     0,    57,     0,    55,    56,     0,
      13,     0,     0,     0,    10,     8,     0,    18,     0,     0,
      22,     7,     0,     0,     0,    54,    49,    50,    51,    53,
      48,    64,     0,    58,    45,    12,     0,     0,     0,     0,
       0,    17,    43,    42,    44,     0,    67,    21,     0,     9,
      47,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   -79,   -79,   120,   -63,   -79,   122,   -68,   -79,
     188,    -5,    -2,   -79,   -78,   -79,   -79,   -79,   -79,   158,
     -79,    -8,   -12,   130,   -79,   -79,   -79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     7,    39,    40,     8,    41,    42,    43,
      25,    26,    58,    13,    27,    28,    29,    30,    31,    32,
      33,    50,    51,    35,    36,    92,    93
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    34,   100,   107,   116,     3,   104,    54,   120,    44,
      52,    10,    59,    37,    82,    12,     4,     5,     6,    47,
      21,    22,    47,    21,    22,    60,    47,    21,    22,    83,
      84,    53,    14,    76,    38,    69,    48,    81,    68,    49,
      79,    80,    24,    48,    45,    91,    49,    61,    70,    96,
      89,    97,    98,    71,    90,    46,    73,   140,   137,    69,
      89,    47,    21,    22,    90,   100,    72,    71,   110,    74,
      34,    94,   130,   119,    34,   117,   118,     4,     5,     6,
     131,    24,   123,    83,    84,    83,    84,    47,    21,    22,
      77,    86,   115,    47,    21,    22,    75,    15,    16,   125,
      17,    57,    18,    19,    20,    21,    22,    24,    10,    23,
     136,    15,    16,    24,    17,    88,    18,    19,    20,    21,
      22,   105,    10,    34,    24,    55,    99,    56,   -46,    65,
     112,    66,    67,    85,    63,    64,   141,    57,    24,    62,
      95,    87,   103,   124,   106,    63,    64,    63,    64,    63,
      64,    63,    64,    63,    64,   111,    55,    95,    56,   113,
       4,     5,     6,    21,    22,   101,     4,     5,     6,    85,
      63,    64,    65,   126,    66,   127,   128,    37,   129,   114,
     121,    63,    64,   122,    67,    64,   135,   132,   133,   134,
     138,   101,   139,   108,    84,   109,    11,   102,     0,     0,
       0,     0,     0,     0,    78
};

static const yytype_int16 yycheck[] =
{
       2,    13,    65,    71,    82,     0,    69,    19,    86,    14,
      18,    17,    24,    13,    10,    13,     3,     4,     5,    13,
      14,    15,    13,    14,    15,    22,    13,    14,    15,    25,
      26,    22,    33,    45,    34,    21,    30,    49,    22,    33,
      48,    49,    33,    30,    33,    57,    33,    24,    34,    61,
      55,    63,    64,    21,    56,    33,    21,   135,   126,    21,
      65,    13,    14,    15,    66,   128,    34,    21,    73,    34,
      82,    34,    34,    85,    86,    83,    84,     3,     4,     5,
      34,    33,    94,    25,    26,    25,    26,    13,    14,    15,
      13,    31,    34,    13,    14,    15,    16,     6,     7,   101,
       9,    33,    11,    12,    13,    14,    15,    33,    17,    18,
     122,     6,     7,    33,     9,    13,    11,    12,    13,    14,
      15,    22,    17,   135,    33,    21,    13,    23,    24,    21,
      34,    23,    24,    27,    28,    29,   138,    33,    33,    22,
      34,    22,    13,    22,    13,    28,    29,    28,    29,    28,
      29,    28,    29,    28,    29,    22,    21,    34,    23,    34,
       3,     4,     5,    14,    15,     8,     3,     4,     5,    27,
      28,    29,    21,    21,    23,    23,    21,    13,    23,    34,
      34,    28,    29,    21,    24,    29,    32,    22,    22,    22,
       8,     8,    22,    73,    26,    73,     8,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    37,     0,     3,     4,     5,    38,    41,    47,
      17,    45,    13,    48,    33,     6,     7,     9,    11,    12,
      13,    14,    15,    18,    33,    45,    46,    49,    50,    51,
      52,    53,    54,    55,    57,    58,    59,    13,    34,    39,
      40,    42,    43,    44,    46,    33,    33,    13,    30,    33,
      56,    57,    56,    22,    57,    21,    23,    33,    47,    57,
      22,    24,    22,    28,    29,    21,    23,    24,    22,    21,
      34,    21,    34,    21,    34,    16,    57,    13,    54,    56,
      56,    57,    10,    25,    26,    27,    31,    22,    13,    46,
      47,    57,    60,    61,    34,    34,    57,    57,    57,    13,
      40,     8,    58,    13,    40,    22,    13,    43,    39,    42,
      46,    22,    34,    34,    34,    34,    49,    56,    56,    57,
      49,    34,    21,    57,    22,    47,    21,    23,    21,    23,
      34,    34,    22,    22,    22,    32,    57,    43,     8,    22,
      49,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    37,    38,    38,    38,    38,
      39,    39,    40,    40,    41,    41,    41,    41,    42,    42,
      43,    43,    44,    44,    45,    46,    46,    47,    47,    47,
      48,    48,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    51,    51,    52,    53,    54,    55,    55,    55,
      56,    56,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    59,    60,    60,    61,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     0,     5,     6,     6,     8,
       3,     1,     4,     3,     4,     5,     5,     7,     3,     1,
       6,     5,     3,     1,     3,     3,     3,     1,     1,     1,
       2,     0,     2,     1,     2,     1,     1,     1,     1,     1,
       3,     2,     5,     5,     5,     4,     1,     6,     4,     4,
       3,     3,     2,     3,     3,     3,     3,     3,     4,     1,
       1,     1,     1,     1,     4,     1,     0,     3,     1
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
#line 32 "part2.ypp" /* yacc.c:1646  */
    { parseTree = makeNode("PROGRAM",NULL,(yyvsp[0])); }
#line 1337 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 35 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FDEFS",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1343 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 36 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FDEFS",NULL,concatList((yyvsp[-1]),(yyvsp[0]))); }
#line 1349 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FDEFS",NULL,makeNode("EPSILON",NULL,NULL)); }
#line 1355 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 40 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEC_API",NULL,concatList(concatList(concatList(concatList((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1361 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEC_API",NULL,concatList(concatList(concatList(concatList(concatList((yyvsp[-5]),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1367 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEC_API",NULL,concatList(concatList(concatList(concatList(concatList((yyvsp[-5]),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1373 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEC_API",NULL,concatList(concatList(concatList(concatList(concatList(concatList(concatList((yyvsp[-7]),(yyvsp[-6])),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1379 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 46 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEC_ARGLIST_OPT",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1385 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 47 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEC_ARGLIST_OPT",NULL,(yyvsp[0])); }
#line 1391 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 50 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("DCL_OPT",NULL,concatList(concatList(concatList((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0])));}
#line 1397 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 51 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("DCL_OPT",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1403 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 54 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEF_API",NULL,concatList(concatList(concatList((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0])));}
#line 1409 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 55 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEF_API",NULL,concatList(concatList(concatList(concatList((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1415 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 56 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEF_API",NULL,concatList(concatList(concatList(concatList((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1421 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 57 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEF_API",NULL,concatList(concatList(concatList(concatList(concatList(concatList((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1427 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 60 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEF_ARGLIST_OPT",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1433 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 61 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_DEF_ARGLIST_OPT",NULL,(yyvsp[0])); }
#line 1439 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 64 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("DCL_OPT_VAL",NULL,concatList(concatList(concatList(concatList(concatList((yyvsp[-5]),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1445 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 65 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("DCL_OPT_VAL",NULL,concatList(concatList(concatList(concatList((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1451 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 68 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_ARGLIST",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1457 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 69 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("FUNC_ARGLIST",NULL,(yyvsp[0])); }
#line 1463 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 72 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("BLK",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1469 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 75 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("DCL",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1475 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 76 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("DCL",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1481 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 79 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("TYPE",NULL,(yyvsp[0])); }
#line 1487 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 80 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("TYPE",NULL,(yyvsp[0])); }
#line 1493 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 81 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("TYPE",NULL,(yyvsp[0])); }
#line 1499 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 84 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STLIST",NULL,concatList((yyvsp[-1]),(yyvsp[0]))); }
#line 1505 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 85 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STLIST",NULL,makeNode("EPSILON",NULL,NULL)); }
#line 1511 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 88 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STMT",NULL,concatList((yyvsp[-1]),(yyvsp[0]))); }
#line 1517 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 89 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STMT",NULL,(yyvsp[0])); }
#line 1523 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 90 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STMT",NULL,concatList((yyvsp[-1]),(yyvsp[0]))); }
#line 1529 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 91 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STMT",NULL,(yyvsp[0])); }
#line 1535 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 92 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STMT",NULL,(yyvsp[0])); }
#line 1541 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 93 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STMT",NULL,(yyvsp[0])); }
#line 1547 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 94 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STMT",NULL,(yyvsp[0])); }
#line 1553 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 95 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("STMT",NULL,(yyvsp[0])); }
#line 1559 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 98 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("RETURN",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1565 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 99 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("RETURN",NULL,concatList((yyvsp[-1]),(yyvsp[0]))); }
#line 1571 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 102 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("WRITE",NULL,concatList(concatList(concatList(concatList((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1577 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 103 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("WRITE",NULL,concatList(concatList(concatList(concatList((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1583 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 106 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("READ",NULL,concatList(concatList(concatList(concatList((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1589 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 109 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("ASSN",NULL,concatList(concatList(concatList((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0])));}
#line 1595 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 112 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("LVAL",NULL,(yyvsp[0])); }
#line 1601 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 115 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("CNTRL",NULL,concatList(concatList(concatList(concatList(concatList((yyvsp[-5]),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]))); }
#line 1607 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 116 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("CNTRL",NULL,concatList(concatList(concatList((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0])));}
#line 1613 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 117 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("CNTRL",NULL,concatList(concatList(concatList((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0])));}
#line 1619 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 120 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("BEXP",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1625 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 121 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("BEXP",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1631 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 122 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("BEXP",NULL,concatList((yyvsp[-1]),(yyvsp[0]))); }
#line 1637 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 123 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("BEXP",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1643 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("BEXP",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1649 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 127 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("EXP",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1655 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 128 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("EXP",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1661 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 129 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("EXP",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1667 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 130 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("EXP",NULL,concatList(concatList(concatList((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0])));}
#line 1673 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 131 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("EXP",NULL,(yyvsp[0])); }
#line 1679 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 132 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("EXP",NULL,(yyvsp[0])); }
#line 1685 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 133 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("EXP",NULL,(yyvsp[0])); }
#line 1691 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 136 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("NUM",NULL,(yyvsp[0])); }
#line 1697 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 137 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("NUM",NULL,(yyvsp[0])); }
#line 1703 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 140 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("CALL",NULL,concatList(concatList(concatList((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0])));}
#line 1709 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 143 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("CALL_ARGS",NULL,(yyvsp[0])); }
#line 1715 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 144 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("CALL_ARGS",NULL,makeNode("EPSILON",NULL,NULL)); }
#line 1721 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 147 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("CALL_ARGLIST",NULL,concatList(concatList((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]))); }
#line 1727 "part2.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 148 "part2.ypp" /* yacc.c:1646  */
    { (yyval) = makeNode("CALL_ARGLIST",NULL,(yyvsp[0])); }
#line 1733 "part2.tab.cpp" /* yacc.c:1646  */
    break;


#line 1737 "part2.tab.cpp" /* yacc.c:1646  */
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
#line 151 "part2.ypp" /* yacc.c:1906  */


/* Bison Epilogue */

void yyerror(const char*){
	printf("Syntax error: '%s' in line number %d\n", yytext, yylineno);
	exit(2);
}

