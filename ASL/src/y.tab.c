
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string>
#include <vector>

#include "Thing.h"
#include "Atom.h"
#include "Undef.h"
#include "Atoms/QName.h"
#include "Atoms/Integer.h"
#include "Atoms/Double.h"
#include "Atoms/String.h"
#include "Atoms/Boolean.h"
#include "Attributon.h"
#include "Node.h"
#include "Interpreter.h"


typedef std::string string;
typedef std::vector<Node*> vNode;


Attributon* create_local_context() {
    Attributon* lc1 = new Attributon();
    Attributon* variables = new Attributon();
    Attributon* value = new Attributon();
    QName* VALUE= QName::getInstance("value");
    QName* VARIABLES = QName::getInstance("variables");
    lc1->setAttr(VALUE, value);
    lc1->setAttr(VARIABLES, variables);
    return lc1;
}


int yylex(void);
void yyerror(char *s);


/* Line 189 of yacc.c  */
#line 114 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     DOUBLE = 259,
     ASL_STRING = 260,
     QNAME = 261,
     VARIABLE = 262,
     ATTRIBUTON_VARIABLE = 263,
     BOOLEAN = 264,
     UNDEF = 265,
     WHILE = 266,
     EOL = 267,
     END_OF_FILE = 268,
     NOT = 269,
     EQ = 270,
     NEQ = 271,
     GT = 272,
     GTE = 273,
     LT = 274,
     LTE = 275,
     AND = 276,
     OR = 277,
     MINUS = 278,
     PLUS = 279,
     DIVISION = 280,
     MULT = 281,
     EQUAL = 282,
     LBRACE = 283,
     RBRACE = 284,
     SEMICOLON = 285,
     DOT = 286,
     COMMA = 287,
     DOTDOT = 288,
     LBRACE_PER = 289,
     RBRACE_PER = 290,
     LCURLY_PER = 291,
     RCURLY_PER = 292,
     LSQUAREBRACE = 293,
     RSQUAREBRACE = 294,
     TWOSQUAREBRACES = 295,
     LCURLYBRACE = 296,
     RCURLYBRACE = 297,
     BACKQUOTE = 298,
     DEFUN = 299,
     IF = 300,
     THEN = 301,
     ELSE = 302,
     UNMINUS = 303,
     SQUARE = 304
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define DOUBLE 259
#define ASL_STRING 260
#define QNAME 261
#define VARIABLE 262
#define ATTRIBUTON_VARIABLE 263
#define BOOLEAN 264
#define UNDEF 265
#define WHILE 266
#define EOL 267
#define END_OF_FILE 268
#define NOT 269
#define EQ 270
#define NEQ 271
#define GT 272
#define GTE 273
#define LT 274
#define LTE 275
#define AND 276
#define OR 277
#define MINUS 278
#define PLUS 279
#define DIVISION 280
#define MULT 281
#define EQUAL 282
#define LBRACE 283
#define RBRACE 284
#define SEMICOLON 285
#define DOT 286
#define COMMA 287
#define DOTDOT 288
#define LBRACE_PER 289
#define RBRACE_PER 290
#define LCURLY_PER 291
#define RCURLY_PER 292
#define LSQUAREBRACE 293
#define RSQUAREBRACE 294
#define TWOSQUAREBRACES 295
#define LCURLYBRACE 296
#define RCURLYBRACE 297
#define BACKQUOTE 298
#define DEFUN 299
#define IF 300
#define THEN 301
#define ELSE 302
#define UNMINUS 303
#define SQUARE 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 42 "yacc.y"

    char*    sValue;
    Integer* iValue;
    Double*  dValue;
    Boolean* bValue;
    Thing*   tValue;
    String*  aslsValue;
    Undef*   uValue;
    QName*   qValue;
    Node*    nValue;



/* Line 214 of yacc.c  */
#line 262 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 274 "y.tab.c"
/* Unqualified %code blocks.  */

/* Line 265 of yacc.c  */
#line 55 "yacc.y"

    Attributon* lc1 = create_local_context();



/* Line 265 of yacc.c  */
#line 285 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   437

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  124

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     8,    11,    18,    24,    26,    28,
      35,    44,    49,    51,    55,    57,    59,    61,    63,    65,
      67,    69,    71,    73,    75,    77,    79,    81,    85,    88,
      91,    95,    99,   103,   107,   111,   115,   119,   123,   127,
     131,   135,   139,   143,   147,   153,   157,   163,   167,   173,
     178,   180,   184,   187,   191,   196,   198,   202,   204,   205,
     207,   211,   213,   214,   216,   220,   222
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    -1,    51,    52,    12,    -1,    58,    30,
      -1,    44,     6,    28,    68,    29,    64,    -1,    11,    28,
      58,    29,    64,    -1,    56,    -1,    57,    -1,    45,    28,
      58,    29,    46,    58,    -1,    45,    28,    58,    29,    46,
      58,    47,    58,    -1,     6,    28,    66,    29,    -1,    62,
      -1,    62,    27,    58,    -1,    59,    -1,    60,    -1,    54,
      -1,    53,    -1,    55,    -1,    64,    -1,     3,    -1,     4,
      -1,     9,    -1,     5,    -1,     6,    -1,    10,    -1,    70,
      -1,    70,    27,    58,    -1,    23,    58,    -1,    14,    58,
      -1,    58,    24,    58,    -1,    58,    23,    58,    -1,    58,
      25,    58,    -1,    58,    26,    58,    -1,    58,    15,    58,
      -1,    58,    16,    58,    -1,    58,    17,    58,    -1,    58,
      18,    58,    -1,    58,    19,    58,    -1,    58,    20,    58,
      -1,    58,    21,    58,    -1,    58,    22,    58,    -1,    28,
      58,    29,    -1,    36,    61,    37,    -1,     8,    27,    36,
      61,    37,    -1,    34,    67,    35,    -1,     8,    27,    34,
      67,    35,    -1,    58,    27,    58,    -1,    61,    32,    58,
      27,    58,    -1,    58,    38,    63,    39,    -1,    58,    -1,
      63,    40,    58,    -1,    41,    42,    -1,    41,    65,    42,
      -1,    41,    65,    30,    42,    -1,    58,    -1,    65,    30,
      58,    -1,    67,    -1,    -1,    58,    -1,    67,    32,    58,
      -1,    69,    -1,    -1,     7,    -1,    69,    32,     7,    -1,
       7,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   115,   120,   125,   130,   135,   136,   141,
     145,   149,   151,   152,   154,   155,   157,   158,   159,   160,
     162,   163,   164,   165,   166,   168,   170,   171,   173,   174,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   189,   194,   195,   200,   201,   206,   207,   212,
     217,   218,   223,   224,   225,   230,   231,   236,   237,   242,
     243,   248,   249,   254,   255,   260,   261
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "DOUBLE", "ASL_STRING",
  "QNAME", "VARIABLE", "ATTRIBUTON_VARIABLE", "BOOLEAN", "UNDEF", "WHILE",
  "EOL", "END_OF_FILE", "NOT", "EQ", "NEQ", "GT", "GTE", "LT", "LTE",
  "AND", "OR", "MINUS", "PLUS", "DIVISION", "MULT", "EQUAL", "LBRACE",
  "RBRACE", "SEMICOLON", "DOT", "COMMA", "DOTDOT", "LBRACE_PER",
  "RBRACE_PER", "LCURLY_PER", "RCURLY_PER", "LSQUAREBRACE", "RSQUAREBRACE",
  "TWOSQUAREBRACES", "LCURLYBRACE", "RCURLYBRACE", "BACKQUOTE", "DEFUN",
  "IF", "THEN", "ELSE", "UNMINUS", "SQUARE", "$accept", "program", "stmt",
  "defun", "while", "if", "ifx", "ife", "expr", "conz", "seq",
  "assignment_list", "get_attr", "expressions_square_braces",
  "expressions_block", "expressions_semicolon", "expr_list",
  "expressions_comma", "var_list", "variables", "var", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    53,    54,    55,    55,    56,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     2,     6,     5,     1,     1,     6,
       8,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     3,     5,     3,     5,     4,
       1,     3,     2,     3,     4,     1,     3,     1,     0,     1,
       3,     1,     0,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    20,    21,    23,    24,    65,    66,    22,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    16,    18,     7,     8,     0,    14,    15,    12,
      19,    26,    58,     0,     0,    29,    28,     0,    59,     0,
       0,     0,    52,    55,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,    57,     0,     0,     0,    42,
       0,    45,     0,     0,    43,     0,    53,    62,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    31,    30,    32,
      33,    50,     0,    13,    27,    11,     0,     0,     0,    60,
      47,     0,    54,    56,    63,     0,    61,     0,    49,     0,
      46,    44,     6,     0,     0,     0,     0,    51,    48,     5,
      64,     9,     0,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    20,    21,    22,    23,    24,    25,    38,    27,
      28,    41,    29,    92,    30,    44,    64,    39,   105,   106,
      31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -85
static const yytype_int16 yypact[] =
{
     -85,    73,   -85,   -85,   -85,   -85,   -18,   -85,     7,   -85,
     -85,     9,   205,   205,   205,   205,   205,   119,    23,    10,
      29,   -85,   -85,   -85,   -85,   -85,     2,   -85,   -85,    19,
     -85,    32,   205,     8,   205,   399,    25,   269,   389,   -26,
     293,   -30,   -85,   389,     1,    36,   205,   -85,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     -85,   205,   205,   205,    38,    33,   205,   205,   317,   -85,
     205,   -85,   205,   205,   -85,   162,   -85,    61,   341,   399,
     399,    67,    67,    67,    67,   111,   111,    25,    25,    25,
      25,   389,   -35,   389,   389,   -85,     4,   -29,    34,   389,
     389,   365,   -85,   389,   -85,    41,    53,    40,   -85,   205,
     -85,   -85,   -85,   205,    34,    87,   205,   389,   389,   -85,
     -85,   236,   205,   389
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    -1,   -85,
     -85,    28,   -85,   -85,   -84,   -85,   -85,   -31,   -85,   -85,
     -85
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      26,    65,    73,    73,   108,   109,    70,    74,   111,    71,
      32,    35,    36,    37,   112,    40,    43,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    45,
     119,    75,    60,    68,    33,    96,    70,    34,    46,   110,
      61,    47,    66,    76,    67,    78,    62,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    63,
      91,    93,    94,    61,    77,    70,    40,    95,   104,    99,
     114,   100,   101,     2,   103,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   115,   116,    12,    54,    55,
      56,    57,    58,    59,   120,    97,    13,     0,     0,     0,
       0,    14,     0,     0,     0,    61,     0,    15,   117,    16,
       0,     0,   118,     0,    17,   121,     0,    18,    19,     0,
       0,   123,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,     0,    12,    56,    57,    58,    59,     0,     0,
       0,     0,    13,     0,     0,     0,     0,    14,     0,    61,
       0,     0,     0,    15,     0,    16,     0,     0,     0,     0,
      17,    42,     0,    18,    19,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
      14,     0,     0,     0,     0,     0,    15,     0,    16,     0,
       0,     0,     0,    17,   102,     0,    18,    19,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,    15,
       0,    16,     0,     0,     0,     0,    17,     0,     0,    18,
      19,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,   122,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    98,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61
};

static const yytype_int8 yycheck[] =
{
       1,    32,    32,    32,    39,    40,    32,    37,    37,    35,
      28,    12,    13,    14,    98,    16,    17,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     6,
     114,    30,    30,    34,    27,    66,    32,    28,    28,    35,
      38,    12,    34,    42,    36,    46,    27,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    27,
      61,    62,    63,    38,    28,    32,    67,    29,     7,    70,
      29,    72,    73,     0,    75,    41,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    32,    46,    14,    21,    22,
      23,    24,    25,    26,     7,    67,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    38,    -1,    34,   109,    36,
      -1,    -1,   113,    -1,    41,   116,    -1,    44,    45,    -1,
      -1,   122,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    14,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    38,
      -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    -1,
      41,    42,    -1,    44,    45,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    -1,    41,    42,    -1,    44,    45,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      45,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    14,    23,    28,    34,    36,    41,    44,    45,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    62,
      64,    70,    28,    27,    28,    58,    58,    58,    58,    67,
      58,    61,    42,    58,    65,     6,    28,    12,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      30,    38,    27,    27,    66,    67,    34,    36,    58,    29,
      32,    35,    27,    32,    37,    30,    42,    28,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    63,    58,    58,    29,    67,    61,    29,    58,
      58,    58,    42,    58,     7,    68,    69,    29,    39,    40,
      35,    37,    64,    27,    29,    32,    46,    58,    58,    64,
       7,    58,    47,    58
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 115 "yacc.y"
    { ; }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 120 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (2)].nValue); Interpreter((yyval.nValue), lc1).run();}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 125 "yacc.y"
    { (yyval.nValue) = new Node("Defun", "", (yyvsp[(4) - (6)].nValue), (yyvsp[(6) - (6)].nValue)); printf("defun\n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 130 "yacc.y"
    { (yyval.nValue) = new Node("While", "", (yyvsp[(3) - (5)].nValue), (yyvsp[(5) - (5)].nValue)); printf("WHILE LOOP\n"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 135 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 136 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 141 "yacc.y"
    { Node* n = new Node("IfThen"); n->add_expr((yyvsp[(3) - (6)].nValue)); n->add_expr((yyvsp[(6) - (6)].nValue)); (yyval.nValue) = n; printf("if then\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 145 "yacc.y"
    { Node* n = new Node("IfThenElse"); n->add_expr((yyvsp[(3) - (8)].nValue)); n->add_expr((yyvsp[(6) - (8)].nValue)); n->add_expr((yyvsp[(8) - (8)].nValue)); (yyval.nValue) = n; printf("if then else\n"); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 149 "yacc.y"
    { (yyval.nValue) = new Node("FunctionCallByname", (yyvsp[(1) - (4)].qValue), (yyvsp[(3) - (4)].nValue));  printf("FunctionCallByname\n"); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 151 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("Get attr: aref"); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 152 "yacc.y"
    { (yyval.nValue) = new Node("AttributeAssignment", "", (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("Get attr: aset"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 154 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("conz expression"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 155 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("seq expression"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 157 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("while expression\n"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 158 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("defun expression\n"); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 159 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("if expression\n"); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 160 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("block expression\n"); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 162 "yacc.y"
    { string node_type("Atom"); (yyval.nValue) = new Node(node_type, (yyvsp[(1) - (1)].iValue)); /*printf("int constant Expression\n");*/ }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 163 "yacc.y"
    { string node_type("Atom"); (yyval.nValue) = new Node(node_type, (yyvsp[(1) - (1)].dValue)); /*printf("double constant Expression\n"); */ }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 164 "yacc.y"
    { string node_type("Atom"); (yyval.nValue) = new Node(node_type, (yyvsp[(1) - (1)].bValue)); /*printf("Boolean expression\n");*/ }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 165 "yacc.y"
    { string node_type("Atom"); (yyval.nValue) = new Node(node_type, (yyvsp[(1) - (1)].aslsValue)); /*printf("String constant expression\n");*/ }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 166 "yacc.y"
    { string node_type("Atom"); (yyval.nValue) = new Node(node_type, (yyvsp[(1) - (1)].qValue)); /*printf("String constant expression\n");*/ }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 168 "yacc.y"
    { string node_type("Undef"); (yyval.nValue) = new Node(node_type, (yyvsp[(1) - (1)].uValue)); printf("Undef expression\n"); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 170 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); /*printf("Var expression\n");*/ }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 171 "yacc.y"
    { (yyval.nValue) = new Node("VariableAssignment", "", (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); /*printf("Var assgnee expression\n");*/}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 173 "yacc.y"
    { string node_type("FunctionCall"); string function_name("unmin"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(2) - (2)].nValue), nullptr); printf("unminus extension\n"); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 174 "yacc.y"
    { string node_type("FunctionCall"); string function_name("not"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(2) - (2)].nValue), nullptr); printf("not extension\n"); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 176 "yacc.y"
    { string node_type("FunctionCall"); string function_name("add"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); /*printf("add extension\n");*/ }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 177 "yacc.y"
    { string node_type("FunctionCall"); string function_name("sub"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("sub extension\n"); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 178 "yacc.y"
    { string node_type("FunctionCall"); string function_name("div"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("div extension\n"); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 179 "yacc.y"
    { string node_type("FunctionCall"); string function_name("mul"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("mul extension\n"); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 180 "yacc.y"
    { string node_type("FunctionCall"); string function_name("eq"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("eq extension\n"); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 181 "yacc.y"
    { string node_type("FunctionCall"); string function_name("neq"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("neq extension\n"); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 182 "yacc.y"
    { string node_type("FunctionCall"); string function_name("gt"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("gt extension\n"); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 183 "yacc.y"
    { string node_type("FunctionCall"); string function_name("gte"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("gte extension\n"); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 184 "yacc.y"
    { string node_type("FunctionCall"); string function_name("lt"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("lt extension\n"); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 185 "yacc.y"
    { string node_type("FunctionCall"); string function_name("lte"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("lte extension\n"); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 186 "yacc.y"
    { string node_type("FunctionCall"); string function_name("and"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("and extension\n"); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 187 "yacc.y"
    { string node_type("FunctionCall"); string function_name("or"); (yyval.nValue) = new Node(node_type, function_name, (yyvsp[(1) - (3)].nValue), (yyvsp[(3) - (3)].nValue)); printf("or extension\n"); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 189 "yacc.y"
    { (yyval.nValue) = (yyvsp[(2) - (3)].nValue); printf("expr in brackets\n"); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 194 "yacc.y"
    { (yyval.nValue) = new Node("AttributonCreate", "", (yyvsp[(2) - (3)].nValue), nullptr); printf("conz"); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 195 "yacc.y"
    { Node* av = new Node("AttributonVariable", (yyvsp[(1) - (5)].qValue)); (yyval.nValue) = new Node("AttributonAssign", "", av, (yyvsp[(4) - (5)].nValue)); printf("conzExtra"); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 200 "yacc.y"
    { (yyval.nValue) = new Node("SeqCreate", "", (yyvsp[(2) - (3)].nValue), nullptr); printf("seqCreate"); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 201 "yacc.y"
    { Node* av = new Node("AttributonVariable", (yyvsp[(1) - (5)].qValue)); (yyval.nValue) = new Node("SeqAssign", "", av, (yyvsp[(4) - (5)].nValue)); printf("seqCreateExtra"); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 206 "yacc.y"
    { Node* lhs = new Node("Expression"); lhs->add_expr((yyvsp[(1) - (3)].nValue)); Node* rhs = new Node("Expression"); rhs->add_expr((yyvsp[(3) - (3)].nValue)); (yyval.nValue) = new Node("AssignmentList", "", lhs, rhs); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 207 "yacc.y"
    { (yyvsp[(1) - (5)].nValue)->add_assign((yyvsp[(3) - (5)].nValue), (yyvsp[(5) - (5)].nValue)); (yyval.nValue) = (yyvsp[(1) - (5)].nValue); printf("Assignment list"); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 212 "yacc.y"
    { (yyval.nValue) = new Node("GetAttr", "", (yyvsp[(1) - (4)].nValue), (yyvsp[(3) - (4)].nValue)); printf("Get attribute square braces"); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 217 "yacc.y"
    { Node* v = new Node("ExpressionsSquareList"); v->add_expr((yyvsp[(1) - (1)].nValue)); (yyval.nValue) = v; printf("Expressions square braces"); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 218 "yacc.y"
    { (yyvsp[(1) - (3)].nValue)->add_expr((yyvsp[(3) - (3)].nValue)); (yyval.nValue) = (yyvsp[(1) - (3)].nValue); printf("Expressions square braces"); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 223 "yacc.y"
    { (yyval.nValue) = new Node("ExpressionsBlock", "Empty", nullptr, nullptr); printf("progn {}\n"); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 224 "yacc.y"
    { (yyval.nValue) = new Node("ExpressionsBlock", "Base", (yyvsp[(2) - (3)].nValue), nullptr); printf("progn\n"); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 225 "yacc.y"
    { (yyval.nValue) = new Node("ExpressionsBlock", "SemicolonInTheEnd", (yyvsp[(2) - (4)].nValue), nullptr); printf("progn;\n"); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 230 "yacc.y"
    { Node* v = new Node("ExpressionsSemicolonList"); v->add_expr((yyvsp[(1) - (1)].nValue)); (yyval.nValue) = v; printf("semicolon separated expressions\n"); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 231 "yacc.y"
    { (yyvsp[(1) - (3)].nValue)->add_expr((yyvsp[(3) - (3)].nValue)); (yyval.nValue) = (yyvsp[(1) - (3)].nValue); printf("semicolon separated expressions\n"); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 236 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("list of comma separated expressions\n"); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 237 "yacc.y"
    { (yyval.nValue) = new Node("ExpressionsCommaList"); printf("empty expr list\n"); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 242 "yacc.y"
    { Node* v = new Node("ExpressionsCommaList"); v->add_expr((yyvsp[(1) - (1)].nValue)); (yyval.nValue) = v; printf("comma separated expressions\n"); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 243 "yacc.y"
    { (yyvsp[(1) - (3)].nValue)->add_expr((yyvsp[(3) - (3)].nValue)); (yyval.nValue) = (yyvsp[(1) - (3)].nValue); printf("comma separated expressions\n"); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 248 "yacc.y"
    { (yyval.nValue) = (yyvsp[(1) - (1)].nValue); printf("variable list\n"); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 249 "yacc.y"
    { (yyval.nValue) = new Node("VariablesList"); printf("emptry var lsit\n"); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 254 "yacc.y"
    { string node_type("Variable"); Node* n = new Node(node_type, (yyvsp[(1) - (1)].qValue)); Node* v = new Node("VariablesList"); v->add_var(n); (yyval.nValue) = v; printf("comma separated variables\n");}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 255 "yacc.y"
    { string node_type("Variable"); Node* n = new Node(node_type, (yyvsp[(3) - (3)].qValue)); (yyvsp[(1) - (3)].nValue)->add_var(n); (yyval.nValue) = (yyvsp[(1) - (3)].nValue); printf("comma separated variables\n"); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 260 "yacc.y"
    { string node_type("Variable"); (yyval.nValue) = new Node(node_type, (yyvsp[(1) - (1)].qValue)); /*printf("Variable\n");*/ }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 261 "yacc.y"
    { string node_type("AttributonVariable"); (yyval.nValue) = new Node(node_type, (yyvsp[(1) - (1)].qValue)); printf("attr variable\n"); }
    break;



/* Line 1455 of yacc.c  */
#line 2101 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 264 "yacc.y"



void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}


int main(void) {
    yyparse();
    return 0;
}
