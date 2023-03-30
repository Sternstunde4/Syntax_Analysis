/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "pj2.y"

#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include<stddef.h>
#include "tree.h"
using namespace std;
extern int yylineno;
extern char* yytext; 
int yylex();

void yyerror (const char *err){
	fprintf(stderr,"\nError: %s at line %d\n",err,yylineno);
	fprintf(stderr, "does not accept '%s'\n",yytext);
	return ;
}

#line 88 "pj2.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PJ2_TAB_H_INCLUDED
# define YY_YY_PJ2_TAB_H_INCLUDED
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
    AND = 258,
    ARRAY = 259,
    BEGIN_1 = 260,
    BY = 261,
    DIV = 262,
    DO = 263,
    ELSE = 264,
    ELSIF = 265,
    END = 266,
    EXIT = 267,
    FOR = 268,
    IF = 269,
    IN = 270,
    IS = 271,
    LOOP = 272,
    MOD = 273,
    NOT = 274,
    OF = 275,
    OR = 276,
    OUT = 277,
    PROCEDURE = 278,
    PROGRAM = 279,
    READ = 280,
    RECORD = 281,
    RETURN = 282,
    THEN = 283,
    TO = 284,
    TYPE = 285,
    VAR = 286,
    WHILE = 287,
    WRITE = 288,
    ID = 289,
    REAL = 290,
    STRING = 291,
    INTEGER = 292,
    COLON = 293,
    SEMICOLON = 294,
    COMMA = 295,
    DOT = 296,
    LB = 297,
    RB = 298,
    LSB = 299,
    RSB = 300,
    LCB = 301,
    RCB = 302,
    LAB = 303,
    RAB = 304,
    ASSIGN = 305,
    ADD = 306,
    SUB = 307,
    MULT = 308,
    DIVD = 309,
    LT = 310,
    LE = 311,
    GT = 312,
    GE = 313,
    EQ = 314,
    NEQ = 315,
    BADCHAR = 316,
    UNTERSTR = 317,
    UNTERCOM = 318,
    ORINT = 319,
    OLSTR = 320,
    TABSSTR = 321,
    TABSTR = 322,
    ORREAL = 323,
    OLID = 324,
    ASSIGNOP = 325
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef struct Node * YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PJ2_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  302

#define YYUNDEFTOK  2
#define YYMAXUTOK   325


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    45,    47,    49,    51,    54,    56,    59,
      61,    63,    65,    67,    69,    72,    74,    77,    79,    81,
      83,    86,    88,    91,    94,    96,    99,   101,   104,   106,
     108,   111,   113,   116,   119,   121,   123,   125,   127,   130,
     132,   135,   137,   140,   142,   145,   147,   149,   151,   153,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   175,
     177,   179,   181,   183,   185,   187,   189,   191,   193,   195,
     197,   199,   201,   204,   206,   209,   211,   214,   216,   219,
     221,   223,   226,   228,   231,   233,   236,   238,   240,   242,
     244,   246,   248,   250,   252,   254,   256,   258,   260,   262,
     264,   266,   268,   270,   272,   274,   276,   278,   280,   282,
     285,   287,   289,   292,   294,   296,   299,   301,   304,   306,
     309,   311,   314,   316,   319,   321,   324,   326
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "BEGIN_1", "BY", "DIV",
  "DO", "ELSE", "ELSIF", "END", "EXIT", "FOR", "IF", "IN", "IS", "LOOP",
  "MOD", "NOT", "OF", "OR", "OUT", "PROCEDURE", "PROGRAM", "READ",
  "RECORD", "RETURN", "THEN", "TO", "TYPE", "VAR", "WHILE", "WRITE", "ID",
  "REAL", "STRING", "INTEGER", "COLON", "SEMICOLON", "COMMA", "DOT", "LB",
  "RB", "LSB", "RSB", "LCB", "RCB", "LAB", "RAB", "ASSIGN", "ADD", "SUB",
  "MULT", "DIVD", "LT", "LE", "GT", "GE", "EQ", "NEQ", "BADCHAR",
  "UNTERSTR", "UNTERCOM", "ORINT", "OLSTR", "TABSSTR", "TABSTR", "ORREAL",
  "OLID", "ASSIGNOP", "$accept", "program", "body", "declarations",
  "declaration", "var_decls", "var_decl", "type_decls", "type_decl",
  "procedure_decls", "procedure_decl", "type", "components", "component",
  "formal_params", "semi_fp_sections", "fp_section", "comma_IDs",
  "comma_l_values", "statement", "statements",
  "ELSIF_expression_THEN_statements", "ELSIF_expression_THEN_statement",
  "write_params", "comma_write_exprs", "write_expr", "expression",
  "l_value", "actual_params", "comma_expressions", "comp_values",
  "semi_ID_assign_expressions", "array_values", "comma_array_values",
  "array_value", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

#define YYPACT_NINF (-171)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,     4,    46,    59,  -171,   846,    41,    64,    65,    89,
      62,  -171,  -171,   107,    84,   760,   870,     1,   481,   760,
      87,   124,  -171,   894,    -8,   125,    41,  -171,   148,    64,
    -171,   -26,    65,  -171,  -171,   918,  -171,  -171,   118,   760,
      79,  -171,  -171,   760,   760,   760,   330,    -4,   130,   942,
     137,  -171,   352,   410,   403,   133,   101,   134,  -171,  -171,
     141,   760,   760,    37,    -9,  -171,    13,  -171,    13,   143,
     760,   -12,  -171,  -171,   966,   760,  -171,   144,   760,  -171,
    -171,  -171,   429,     3,     3,   760,   760,   760,   760,   796,
     760,   760,   760,   760,   760,   760,   760,   760,   760,   760,
    -171,   142,  -171,    90,  -171,   990,  -171,  -171,    30,   716,
    -171,  -171,   158,  -171,  -171,   453,   496,    43,  -171,   -20,
      59,    13,   160,   150,  -171,   147,   132,  -171,   518,    13,
     151,   760,  -171,   561,   138,   577,    47,  -171,   342,  -171,
       9,   733,  1014,   760,   154,   822,   140,  -171,     3,     3,
    -171,  -171,    -3,    -3,    -3,    -3,    -3,    -3,  -171,   137,
     156,    76,   157,  1038,   407,  -171,    99,   760,  -171,   105,
    -171,  -171,    13,   122,   153,  -171,    83,   164,   174,    13,
     161,    -2,  -171,  -171,   760,  -171,   170,  -171,   604,   760,
     760,   760,   760,  -171,    48,   165,  1062,   620,  -171,  1086,
     182,   146,  1110,   183,  -171,    -4,  -171,   137,   184,  -171,
     186,  -171,   407,  -171,   716,   760,  -171,  -171,    13,  -171,
     153,  -171,  -171,    59,  -171,    13,  -171,  -171,   647,   760,
    -171,   263,   287,   716,  -171,   760,  -171,  -171,   187,   266,
     188,  1134,  -171,  1158,   189,   191,  1182,  -171,    -4,  -171,
    -171,  -171,   716,  -171,  -171,   193,   196,  -171,   690,   760,
    1206,   203,  -171,    29,  -171,  -171,   266,  -171,   200,   201,
    1230,  -171,  -171,   204,  -171,  -171,  -171,   706,   207,  1254,
     192,   213,  -171,  -171,  -171,   210,  -171,  1278,  -171,   214,
     760,   202,  -171,   215,  1302,  -171,   716,   760,  -171,   217,
     716,  -171
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    13,    11,     9,     0,
       0,     7,     3,     0,     0,     0,     0,     0,     0,     0,
       0,   110,    73,     0,     0,     0,    14,    24,     0,    12,
      21,     0,    10,    15,     2,     0,     8,    70,     0,     0,
     110,    86,    87,     0,     0,     0,     0,    88,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     4,    74,
       0,     0,     0,     0,     0,    25,     0,    22,     0,     0,
       0,     0,    16,     5,     0,     0,   104,     0,     0,   107,
     108,   109,     0,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,     0,   110,     0,    71,     0,    84,    81,     0,    85,
      49,   115,     0,    46,   112,     0,     0,     0,    36,     0,
       0,     0,     0,     0,    28,     0,     0,    41,     0,     0,
       0,     0,     6,     0,     0,   126,     0,    89,    97,    94,
      95,    96,     0,     0,     0,     0,     0,    75,    90,    91,
      92,    93,    99,   102,    98,   101,   100,   103,    65,     0,
       0,     0,     0,     0,     0,    79,     0,     0,   113,     0,
     111,    45,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,    31,    23,     0,    17,     0,    42,     0,     0,
       0,     0,     0,   122,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,    76,    43,    47,     0,     0,    62,
       0,    82,     0,    80,   116,     0,   114,    39,     0,    37,
       0,    35,    26,     0,    29,     0,    30,    32,     0,     0,
      19,     0,     0,   127,   124,     0,   123,    51,     0,    77,
       0,     0,    53,     0,     0,     0,     0,    56,    44,    48,
      63,    83,   117,    40,    38,     0,     0,    18,     0,     0,
       0,     0,   118,     0,   125,    52,    78,    54,     0,     0,
       0,    59,    57,     0,    27,    33,    20,     0,     0,     0,
       0,     0,   119,    55,    60,     0,    58,     0,    66,     0,
       0,     0,    61,     0,     0,    67,   120,     0,    68,     0,
     121,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -118,  -171,   248,  -171,   227,  -171,   231,  -171,
     236,   -55,  -171,    82,  -171,  -171,  -166,   159,  -171,   -22,
     -10,   119,  -143,  -171,  -171,  -159,    16,    -5,   228,  -171,
    -171,  -171,  -171,  -171,  -170
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    32,    33,    29,    30,    26,
      27,   125,   181,   182,    64,   176,   119,    71,   161,    22,
      23,   146,   147,    55,   166,   108,   109,    47,    57,   169,
      80,   263,    81,   194,   136
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    59,   177,   204,    86,   211,    49,   120,   219,   226,
      86,    24,    68,   126,    69,    87,    86,   122,    24,   174,
       3,    87,   234,   175,    70,    74,   129,    59,   130,   121,
      24,    46,   180,    60,    52,    53,    61,    60,   131,   123,
      61,     1,    62,    50,    24,   103,     4,   124,    90,    91,
      92,    93,    59,   251,   254,    76,    92,    93,   204,    82,
      83,    84,    92,    93,     5,   264,   178,    35,   281,    24,
     164,   117,   112,   165,   186,    25,   282,   115,   116,   145,
     118,   172,     6,    69,    24,     6,   128,   192,   235,     7,
       8,   133,     7,     8,   135,   163,   193,   236,    28,    31,
      24,   138,   139,   140,   141,   255,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   207,   217,    38,   208,
      39,    56,   220,    59,   224,    77,   221,    78,    34,    54,
     159,    60,   196,   160,    61,    40,    41,    24,    42,   212,
      24,    59,   213,    43,   111,   215,    37,   188,   216,   202,
     143,   203,    44,    45,   205,   243,   143,   244,    24,   197,
     218,    85,   130,   253,    66,    86,    56,    63,    75,   100,
     256,   102,   110,   113,    59,   114,    87,   127,   134,    88,
     179,   158,   184,   214,   180,   187,   183,   117,   190,   241,
     223,    24,   246,   198,    24,   206,   209,    24,   167,   225,
     228,   168,   248,   222,   237,   231,   232,   233,   135,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    59,
     229,   242,   247,   249,    59,   250,   265,   267,   271,   266,
     272,   252,   274,   270,    24,   275,    24,   280,    24,   283,
     284,    24,   290,   286,    59,   258,   288,   291,    59,   292,
     279,   135,   297,   295,   298,    24,   301,    59,    36,    72,
      67,    24,    65,   227,   201,    24,    85,     0,    79,   259,
      86,   260,    59,     0,    24,   277,   173,   294,    13,    14,
      15,    87,    24,    16,    88,     0,     0,     0,     0,    24,
      85,    17,     0,    18,    86,     0,     0,     0,    19,    20,
      21,     0,     0,     0,     0,    87,   296,     0,    88,     0,
       0,     0,     0,   300,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     0,     0,   261,     0,     0,     0,
       0,     0,     0,    85,   262,     0,     0,    86,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    87,    86,
       0,    88,     0,     0,     0,    85,     0,     0,    89,    86,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   104,     0,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    85,     0,     0,     0,    86,   105,     0,
       0,     0,    39,     0,     0,     0,    39,     0,    87,     0,
       0,    88,    85,     0,     0,     0,    86,    40,    41,   106,
      42,    40,    41,   106,    42,    43,   107,    87,     0,    43,
      88,     0,     0,     0,    44,    45,    85,     0,    44,    45,
      86,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    87,   137,     0,    88,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   170,    85,
      39,     0,     0,    86,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    87,    40,    41,    88,    42,     0,
      51,    85,     0,    43,     0,    86,     0,     0,     0,     0,
       0,     0,    44,    45,     0,   171,    87,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   185,     0,     0,
       0,     0,     0,     0,    85,     0,     0,     0,    86,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    87,
      85,     0,    88,     0,    86,     0,     0,     0,     0,     0,
     189,     0,     0,     0,     0,    87,     0,   191,    88,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,    86,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    87,    85,     0,    88,     0,    86,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    87,     0,
       0,    88,     0,   230,     0,     0,     0,     0,   239,     0,
      85,     0,     0,     0,    86,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    87,     0,     0,    88,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,     0,   257,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,    86,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    87,    85,
       0,    88,     0,    86,   287,     0,     0,     0,     0,    85,
       0,     0,     0,    86,    87,     0,     0,    88,     0,   276,
       0,     0,     0,     0,    87,     0,    85,    88,     0,     0,
      86,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    87,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,     0,    39,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    40,    41,     0,    42,     0,     0,
       0,     0,    43,     0,     0,   142,   143,   144,    13,    14,
      15,    44,    45,    16,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    18,     0,     0,     0,     0,    19,    20,
      21,   199,   143,   200,    13,    14,    15,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,    17,     0,    18,
       0,     0,     0,     0,    19,    20,    21,    12,    13,    14,
      15,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    18,     0,     0,     0,     0,    19,    20,
      21,    48,    13,    14,    15,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    18,     0,     0,
       0,     0,    19,    20,    21,    58,    13,    14,    15,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,    17,
       0,    18,     0,     0,     0,     0,    19,    20,    21,    73,
      13,    14,    15,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,    17,     0,    18,     0,     0,     0,     0,
      19,    20,    21,   101,    13,    14,    15,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,    17,     0,    18,
       0,     0,     0,     0,    19,    20,    21,   132,    13,    14,
      15,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    18,     0,     0,     0,     0,    19,    20,
      21,   162,    13,    14,    15,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    18,     0,     0,
       0,     0,    19,    20,    21,   195,    13,    14,    15,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,    17,
       0,    18,     0,     0,     0,     0,    19,    20,    21,   210,
      13,    14,    15,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,    17,     0,    18,     0,     0,     0,     0,
      19,    20,    21,   238,    13,    14,    15,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,    17,     0,    18,
       0,     0,     0,     0,    19,    20,    21,   240,    13,    14,
      15,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    18,     0,     0,     0,     0,    19,    20,
      21,   245,    13,    14,    15,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    18,     0,     0,
       0,     0,    19,    20,    21,   268,    13,    14,    15,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,    17,
       0,    18,     0,     0,     0,     0,    19,    20,    21,   269,
      13,    14,    15,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,    17,     0,    18,     0,     0,     0,     0,
      19,    20,    21,   273,    13,    14,    15,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,    17,     0,    18,
       0,     0,     0,     0,    19,    20,    21,   278,    13,    14,
      15,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    18,     0,     0,     0,     0,    19,    20,
      21,   285,    13,    14,    15,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    18,     0,     0,
       0,     0,    19,    20,    21,   289,    13,    14,    15,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,    17,
       0,    18,     0,     0,     0,     0,    19,    20,    21,   293,
      13,    14,    15,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,    17,     0,    18,     0,     0,     0,     0,
      19,    20,    21,   299,    13,    14,    15,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,    17,     0,    18,
       0,     0,     0,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       5,    23,   120,   146,     7,   164,    16,    16,   174,    11,
       7,    16,    38,    68,    40,    18,     7,     4,    23,    39,
      16,    18,   192,    43,    50,    35,    38,    49,    40,    38,
      35,    15,    34,    41,    18,    19,    44,    41,    50,    26,
      44,    24,    50,    42,    49,    50,     0,    34,    51,    52,
      53,    54,    74,   212,   220,    39,    53,    54,   201,    43,
      44,    45,    53,    54,     5,   235,   121,     5,    39,    74,
      40,    34,    56,    43,   129,    34,    47,    61,    62,    89,
      43,    38,    23,    40,    89,    23,    70,    40,    40,    30,
      31,    75,    30,    31,    78,   105,    49,    49,    34,    34,
     105,    85,    86,    87,    88,   223,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    40,   172,    34,    43,
      19,    42,    39,   145,   179,    46,    43,    48,    39,    42,
      40,    41,   142,    43,    44,    34,    35,   142,    37,    40,
     145,   163,    43,    42,    43,    40,    39,   131,    43,     9,
      10,    11,    51,    52,   159,     9,    10,    11,   163,   143,
      38,     3,    40,   218,    16,     7,    42,    42,    50,    39,
     225,    34,    39,    39,   196,    34,    18,    34,    34,    21,
      20,    39,    50,   167,    34,    34,    39,    34,    50,   199,
      16,   196,   202,    39,   199,    39,    39,   202,    40,    38,
     184,    43,   207,    39,    39,   189,   190,   191,   192,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   241,
      50,    39,    39,    39,   246,    39,    39,    39,    39,   239,
      39,   215,    39,   243,   239,    39,   241,    34,   243,    39,
      39,   246,    50,    39,   266,   229,    39,    34,   270,    39,
     260,   235,    50,    39,    39,   260,    39,   279,    10,    32,
      29,   266,    26,   181,   145,   270,     3,    -1,    40,     6,
       7,     8,   294,    -1,   279,   259,   117,   287,    12,    13,
      14,    18,   287,    17,    21,    -1,    -1,    -1,    -1,   294,
       3,    25,    -1,    27,     7,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    18,   290,    -1,    21,    -1,
      -1,    -1,    -1,   297,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    47,    -1,    -1,     7,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    18,     7,
      -1,    21,    -1,    -1,    -1,     3,    -1,    -1,    28,     7,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    39,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     3,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    19,    -1,    18,    -1,
      -1,    21,     3,    -1,    -1,    -1,     7,    34,    35,    36,
      37,    34,    35,    36,    37,    42,    43,    18,    -1,    42,
      21,    -1,    -1,    -1,    51,    52,     3,    -1,    51,    52,
       7,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    18,    43,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,     3,
      19,    -1,    -1,     7,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    18,    34,    35,    21,    37,    -1,
      39,     3,    -1,    42,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    39,    18,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    39,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    18,
       3,    -1,    21,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,     7,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    18,     3,    -1,    21,    -1,     7,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    18,    -1,
      -1,    21,    -1,    39,    -1,    -1,    -1,    -1,    28,    -1,
       3,    -1,    -1,    -1,     7,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    18,    -1,    -1,    21,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,     7,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    18,     3,
      -1,    21,    -1,     7,     8,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,     7,    18,    -1,    -1,    21,    -1,    39,
      -1,    -1,    -1,    -1,    18,    -1,     3,    21,    -1,    -1,
       7,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    18,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    34,    35,    -1,    37,    -1,    -1,
      -1,    -1,    42,    -1,    -1,     9,    10,    11,    12,    13,
      14,    51,    52,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,     9,    10,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,    11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,    11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,    11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,    11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    11,    12,    13,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    24,    72,    16,     0,     5,    23,    30,    31,    73,
      74,    75,    11,    12,    13,    14,    17,    25,    27,    32,
      33,    34,    90,    91,    98,    34,    80,    81,    34,    78,
      79,    34,    76,    77,    39,     5,    75,    39,    34,    19,
      34,    35,    37,    42,    51,    52,    97,    98,    11,    91,
      42,    39,    97,    97,    42,    94,    42,    99,    11,    90,
      41,    44,    50,    42,    85,    81,    16,    79,    38,    40,
      50,    88,    77,    11,    91,    50,    97,    46,    48,    99,
     101,   103,    97,    97,    97,     3,     7,    18,    21,    28,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      39,    11,    34,    98,    39,     8,    36,    43,    96,    97,
      39,    43,    97,    39,    34,    97,    97,    34,    43,    87,
      16,    38,     4,    26,    34,    82,    82,    34,    97,    38,
      40,    50,    11,    97,    34,    97,   105,    43,    97,    97,
      97,    97,     9,    10,    11,    91,    92,    93,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    39,    40,
      43,    89,    11,    91,    40,    43,    95,    40,    43,   100,
      45,    39,    38,    88,    39,    43,    86,    73,    82,    20,
      34,    83,    84,    39,    50,    39,    82,    34,    97,    29,
      50,    20,    40,    49,   104,    11,    91,    97,    39,     9,
      11,    92,     9,    11,    93,    98,    39,    40,    43,    39,
      11,    96,    40,    43,    97,    40,    43,    82,    38,    87,
      39,    43,    39,    16,    82,    38,    11,    84,    97,    50,
      39,    97,    97,    97,   105,    40,    49,    39,    11,    28,
      11,    91,    39,     9,    11,    11,    91,    39,    98,    39,
      39,    96,    97,    82,    87,    73,    82,    39,    97,     6,
       8,    39,    47,   102,   105,    39,    91,    39,    11,    11,
      91,    39,    39,    11,    39,    39,    39,    97,    11,    91,
      34,    39,    47,    39,    39,    11,    39,     8,    39,    11,
      50,    34,    39,    11,    91,    39,    97,    50,    39,    11,
      97,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    78,    78,    79,    80,    80,    81,    81,    82,    82,
      82,    83,    83,    84,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    92,    92,    93,    93,    94,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      98,    98,    98,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     4,     6,     5,
       7,     1,     2,     4,     1,     2,     5,     7,     1,     3,
       3,     1,     2,     4,     3,     4,     2,     2,     3,     3,
       4,     2,     3,     2,     3,     4,     3,     5,     6,     3,
       5,     6,     7,     6,     7,     8,     6,     7,     8,     7,
       8,     9,     5,     6,     3,     4,     9,    10,    11,    12,
       2,     3,     2,     1,     2,     1,     2,     3,     4,     3,
       4,     2,     2,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       1,     4,     3,     3,     4,     2,     2,     3,     5,     6,
       4,     5,     3,     4,     2,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 43 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "program", NULL,0,0,1,cldArray);treePrint(yyval);}
#line 1908 "pj2.tab.c"
    break;

  case 3:
#line 46 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=NULL;yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "body", NULL,0,0,0,cldArray);}
#line 1914 "pj2.tab.c"
    break;

  case 4:
#line 48 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "body", NULL,0,0,1,cldArray);}
#line 1920 "pj2.tab.c"
    break;

  case 5:
#line 50 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "body", NULL,0,0,1,cldArray);}
#line 1926 "pj2.tab.c"
    break;

  case 6:
#line 52 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "body", NULL,0,0,2,cldArray);}
#line 1932 "pj2.tab.c"
    break;

  case 7:
#line 55 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "declarations", NULL,0,0,1,cldArray);}
#line 1938 "pj2.tab.c"
    break;

  case 8:
#line 57 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-1]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-1]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "declarations", NULL,0,0,temp+1,cldArray);}
#line 1944 "pj2.tab.c"
    break;

  case 9:
#line 60 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=NULL;yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "declaration", NULL,0,0,0,cldArray);}
#line 1950 "pj2.tab.c"
    break;

  case 10:
#line 62 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "declaration", NULL,0,0,1,cldArray);}
#line 1956 "pj2.tab.c"
    break;

  case 11:
#line 64 "pj2.y"
        {struct Node *cldArray[20];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "declaration", NULL,0,0,0,cldArray);}
#line 1962 "pj2.tab.c"
    break;

  case 12:
#line 66 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "declaration", NULL,0,0,1,cldArray);}
#line 1968 "pj2.tab.c"
    break;

  case 13:
#line 68 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=NULL;yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "declaration", NULL,0,0,0,cldArray);}
#line 1974 "pj2.tab.c"
    break;

  case 14:
#line 70 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "declaration", NULL,0,0,1,cldArray);}
#line 1980 "pj2.tab.c"
    break;

  case 15:
#line 73 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "var_decls", NULL,0,0,1,cldArray);}
#line 1986 "pj2.tab.c"
    break;

  case 16:
#line 75 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-1]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-1]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row+1, yyvsp[0]->col+1, "var_decls", NULL,0,0,temp+1,cldArray);}
#line 1992 "pj2.tab.c"
    break;

  case 17:
#line 78 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "var_decl", NULL,0,0,2,cldArray);}
#line 1998 "pj2.tab.c"
    break;

  case 18:
#line 80 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-5];cldArray[1]=yyvsp[-3];cldArray[2]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "var_decl", NULL,0,0,3,cldArray);}
#line 2004 "pj2.tab.c"
    break;

  case 19:
#line 82 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-4];cldArray[1]=yyvsp[-3];cldArray[2]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "var_decl", NULL,0,0,3,cldArray);}
#line 2010 "pj2.tab.c"
    break;

  case 20:
#line 84 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-6];cldArray[1]=yyvsp[-5];cldArray[2]=yyvsp[-3];cldArray[3]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "var_decl", NULL,0,0,4,cldArray);}
#line 2016 "pj2.tab.c"
    break;

  case 21:
#line 87 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "type_decls", NULL,0,0,1,cldArray);}
#line 2022 "pj2.tab.c"
    break;

  case 22:
#line 89 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-1]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-1]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "type_decls", NULL,0,0,temp+1,cldArray);}
#line 2028 "pj2.tab.c"
    break;

  case 23:
#line 92 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "type_decl", NULL,0,0,2,cldArray);}
#line 2034 "pj2.tab.c"
    break;

  case 24:
#line 95 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "procedure_decls", NULL,0,0,1,cldArray);}
#line 2040 "pj2.tab.c"
    break;

  case 25:
#line 97 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-1]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-1]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "procedure_decls", NULL,0,0,temp+1,cldArray);}
#line 2046 "pj2.tab.c"
    break;

  case 26:
#line 100 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-4];cldArray[1]=yyvsp[-3];cldArray[2]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "procedure_decl", NULL,0,0,3,cldArray);}
#line 2052 "pj2.tab.c"
    break;

  case 27:
#line 102 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-6];cldArray[1]=yyvsp[-5];cldArray[2]=yyvsp[-3];cldArray[3]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "procedure_decl", NULL,0,0,4,cldArray);}
#line 2058 "pj2.tab.c"
    break;

  case 28:
#line 105 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "type", NULL,0,0,1,cldArray);}
#line 2064 "pj2.tab.c"
    break;

  case 29:
#line 107 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "type", NULL,0,0,1,cldArray);}
#line 2070 "pj2.tab.c"
    break;

  case 30:
#line 109 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "type", NULL,0,0,1,cldArray);}
#line 2076 "pj2.tab.c"
    break;

  case 31:
#line 112 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "components", NULL,0,0,1,cldArray);}
#line 2082 "pj2.tab.c"
    break;

  case 32:
#line 114 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-1]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-1]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "components", NULL,0,0,temp+1,cldArray);}
#line 2088 "pj2.tab.c"
    break;

  case 33:
#line 117 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "component", NULL,0,0,2,cldArray);}
#line 2094 "pj2.tab.c"
    break;

  case 34:
#line 120 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "formal_params", NULL,0,0,1,cldArray);}
#line 2100 "pj2.tab.c"
    break;

  case 35:
#line 122 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "formal_params", NULL,0,0,2,cldArray);}
#line 2106 "pj2.tab.c"
    break;

  case 36:
#line 123 "pj2.y"
          {struct Node *cldArray[20];cldArray[0]=NULL;yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "formal_params", NULL,0,0,0,cldArray);}
#line 2112 "pj2.tab.c"
    break;

  case 37:
#line 126 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "semi_fp_sections", NULL,0,0,1,cldArray);}
#line 2118 "pj2.tab.c"
    break;

  case 38:
#line 128 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-2]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-2]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "semi_fp_sections", NULL,0,0,temp+1,cldArray);}
#line 2124 "pj2.tab.c"
    break;

  case 39:
#line 131 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "fp_section", NULL,0,0,2,cldArray);}
#line 2130 "pj2.tab.c"
    break;

  case 40:
#line 133 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-2];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "fp_section", NULL,0,0,3,cldArray);}
#line 2136 "pj2.tab.c"
    break;

  case 41:
#line 136 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_IDs", NULL,0,0,1,cldArray);}
#line 2142 "pj2.tab.c"
    break;

  case 42:
#line 138 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-2]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-2]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_IDs", NULL,0,0,temp+1,cldArray);}
#line 2148 "pj2.tab.c"
    break;

  case 43:
#line 141 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_l_values", NULL,0,0,1,cldArray);}
#line 2154 "pj2.tab.c"
    break;

  case 44:
#line 143 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-2]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-2]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_l_values", NULL,0,0,temp+1,cldArray);}
#line 2160 "pj2.tab.c"
    break;

  case 45:
#line 146 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2166 "pj2.tab.c"
    break;

  case 46:
#line 148 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2172 "pj2.tab.c"
    break;

  case 47:
#line 150 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,1,cldArray);}
#line 2178 "pj2.tab.c"
    break;

  case 48:
#line 152 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2184 "pj2.tab.c"
    break;

  case 49:
#line 154 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,1,cldArray);}
#line 2190 "pj2.tab.c"
    break;

  case 50:
#line 158 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,1,cldArray);}
#line 2196 "pj2.tab.c"
    break;

  case 51:
#line 160 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-4];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,1,cldArray);}
#line 2202 "pj2.tab.c"
    break;

  case 52:
#line 162 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-5];cldArray[1]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2208 "pj2.tab.c"
    break;

  case 53:
#line 164 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-4];cldArray[1]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2214 "pj2.tab.c"
    break;

  case 54:
#line 166 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-5];cldArray[1]=yyvsp[-3];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2220 "pj2.tab.c"
    break;

  case 55:
#line 168 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-6];cldArray[1]=yyvsp[-4];cldArray[2]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,3,cldArray);}
#line 2226 "pj2.tab.c"
    break;

  case 56:
#line 170 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-4];cldArray[1]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2232 "pj2.tab.c"
    break;

  case 57:
#line 172 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-5];cldArray[1]=yyvsp[-3];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2238 "pj2.tab.c"
    break;

  case 58:
#line 174 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-6];cldArray[1]=yyvsp[-4];cldArray[2]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,3,cldArray);}
#line 2244 "pj2.tab.c"
    break;

  case 59:
#line 176 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-5];cldArray[1]=yyvsp[-3];cldArray[2]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,3,cldArray);}
#line 2250 "pj2.tab.c"
    break;

  case 60:
#line 178 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-6];cldArray[1]=yyvsp[-4];cldArray[2]=yyvsp[-3];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,3,cldArray);}
#line 2256 "pj2.tab.c"
    break;

  case 61:
#line 180 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-7];cldArray[1]=yyvsp[-5];cldArray[2]=yyvsp[-4];cldArray[3]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,4,cldArray);}
#line 2262 "pj2.tab.c"
    break;

  case 62:
#line 182 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,1,cldArray);}
#line 2268 "pj2.tab.c"
    break;

  case 63:
#line 184 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-4];cldArray[1]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,2,cldArray);}
#line 2274 "pj2.tab.c"
    break;

  case 64:
#line 186 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=NULL;yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,0,cldArray);}
#line 2280 "pj2.tab.c"
    break;

  case 65:
#line 188 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,1,cldArray);}
#line 2286 "pj2.tab.c"
    break;

  case 66:
#line 190 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-7];cldArray[1]=yyvsp[-5];cldArray[2]=yyvsp[-3];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,3,cldArray);}
#line 2292 "pj2.tab.c"
    break;

  case 67:
#line 192 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-8];cldArray[1]=yyvsp[-6];cldArray[2]=yyvsp[-4];cldArray[3]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,4,cldArray);}
#line 2298 "pj2.tab.c"
    break;

  case 68:
#line 194 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-9];cldArray[1]=yyvsp[-7];cldArray[2]=yyvsp[-5];cldArray[3]=yyvsp[-3];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,4,cldArray);}
#line 2304 "pj2.tab.c"
    break;

  case 69:
#line 196 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-10];cldArray[1]=yyvsp[-8];cldArray[2]=yyvsp[-6];cldArray[3]=yyvsp[-4];cldArray[4]=yyvsp[-2];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,5,cldArray);}
#line 2310 "pj2.tab.c"
    break;

  case 70:
#line 198 "pj2.y"
        {yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,0,NULL);}
#line 2316 "pj2.tab.c"
    break;

  case 71:
#line 200 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,1,cldArray);}
#line 2322 "pj2.tab.c"
    break;

  case 72:
#line 202 "pj2.y"
        {yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statement", NULL,0,0,0,NULL);}
#line 2328 "pj2.tab.c"
    break;

  case 73:
#line 205 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statements", NULL,0,0,1,cldArray);}
#line 2334 "pj2.tab.c"
    break;

  case 74:
#line 207 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-1]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-1]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "statements", NULL,0,0,temp+1,cldArray);}
#line 2340 "pj2.tab.c"
    break;

  case 75:
#line 210 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "ELSIF_expression_THEN_statements", NULL,0,0,1,cldArray);}
#line 2346 "pj2.tab.c"
    break;

  case 76:
#line 212 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-1]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-1]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "ELSIF_expression_THEN_statements", NULL,0,0,temp+1,cldArray);}
#line 2352 "pj2.tab.c"
    break;

  case 77:
#line 215 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "ELSIF_expression_THEN_statement", NULL,0,0,1,cldArray);}
#line 2358 "pj2.tab.c"
    break;

  case 78:
#line 217 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "ELSIF_expression_THEN_statement", NULL,0,0,2,cldArray);}
#line 2364 "pj2.tab.c"
    break;

  case 79:
#line 220 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "write_params", NULL,0,0,1,cldArray);}
#line 2370 "pj2.tab.c"
    break;

  case 80:
#line 222 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "write_params", NULL,0,0,2,cldArray);}
#line 2376 "pj2.tab.c"
    break;

  case 81:
#line 224 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=NULL;yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "write_params", NULL,0,0,0,cldArray);}
#line 2382 "pj2.tab.c"
    break;

  case 82:
#line 227 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_write_exprs", NULL,0,0,1,cldArray);}
#line 2388 "pj2.tab.c"
    break;

  case 83:
#line 229 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-2]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-2]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_write_exprs", NULL,0,0,temp+1,cldArray);}
#line 2394 "pj2.tab.c"
    break;

  case 84:
#line 232 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "write_expr", NULL, 0, 0, 1, cldArray);}
#line 2400 "pj2.tab.c"
    break;

  case 85:
#line 234 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "write_expr", NULL, 0, 0, 1, cldArray);}
#line 2406 "pj2.tab.c"
    break;

  case 86:
#line 237 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 1, cldArray);}
#line 2412 "pj2.tab.c"
    break;

  case 87:
#line 239 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 1, cldArray);}
#line 2418 "pj2.tab.c"
    break;

  case 88:
#line 241 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 1, cldArray);}
#line 2424 "pj2.tab.c"
    break;

  case 89:
#line 243 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 1, cldArray);}
#line 2430 "pj2.tab.c"
    break;

  case 90:
#line 245 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2436 "pj2.tab.c"
    break;

  case 91:
#line 247 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2442 "pj2.tab.c"
    break;

  case 92:
#line 249 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2448 "pj2.tab.c"
    break;

  case 93:
#line 251 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2454 "pj2.tab.c"
    break;

  case 94:
#line 253 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2460 "pj2.tab.c"
    break;

  case 95:
#line 255 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2466 "pj2.tab.c"
    break;

  case 96:
#line 257 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2472 "pj2.tab.c"
    break;

  case 97:
#line 259 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2478 "pj2.tab.c"
    break;

  case 98:
#line 261 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2484 "pj2.tab.c"
    break;

  case 99:
#line 263 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2490 "pj2.tab.c"
    break;

  case 100:
#line 265 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2496 "pj2.tab.c"
    break;

  case 101:
#line 267 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2502 "pj2.tab.c"
    break;

  case 102:
#line 269 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2508 "pj2.tab.c"
    break;

  case 103:
#line 271 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 3, cldArray);}
#line 2514 "pj2.tab.c"
    break;

  case 104:
#line 273 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 2, cldArray);}
#line 2520 "pj2.tab.c"
    break;

  case 105:
#line 275 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 2, cldArray);}
#line 2526 "pj2.tab.c"
    break;

  case 106:
#line 277 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 2, cldArray);}
#line 2532 "pj2.tab.c"
    break;

  case 107:
#line 279 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 2, cldArray);}
#line 2538 "pj2.tab.c"
    break;

  case 108:
#line 281 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 2, cldArray);}
#line 2544 "pj2.tab.c"
    break;

  case 109:
#line 283 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "expression", NULL, 0, 0, 2, cldArray);}
#line 2550 "pj2.tab.c"
    break;

  case 110:
#line 286 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "l_value", NULL, 0, 0, 1, cldArray);}
#line 2556 "pj2.tab.c"
    break;

  case 111:
#line 288 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "l_value", NULL, 0, 0, 2, cldArray);}
#line 2562 "pj2.tab.c"
    break;

  case 112:
#line 290 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "l_value", NULL, 0, 0, 2, cldArray);}
#line 2568 "pj2.tab.c"
    break;

  case 113:
#line 293 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "actual_params", NULL, 0, 0, 1, cldArray);}
#line 2574 "pj2.tab.c"
    break;

  case 114:
#line 295 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "actual_params", NULL, 0, 0, 2, cldArray);}
#line 2580 "pj2.tab.c"
    break;

  case 115:
#line 297 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=NULL;yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "actual_params", NULL,0,0,0,cldArray);}
#line 2586 "pj2.tab.c"
    break;

  case 116:
#line 300 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_expressions", NULL, 0, 0, 1, cldArray);}
#line 2592 "pj2.tab.c"
    break;

  case 117:
#line 302 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-2]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-2]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_expressions", NULL,0,0,temp+1,cldArray);}
#line 2598 "pj2.tab.c"
    break;

  case 118:
#line 305 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-3];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comp_values", NULL, 0, 0, 2, cldArray);}
#line 2604 "pj2.tab.c"
    break;

  case 119:
#line 307 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-4];cldArray[1]=yyvsp[-2];cldArray[2]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comp_values", NULL, 0, 0, 3, cldArray);}
#line 2610 "pj2.tab.c"
    break;

  case 120:
#line 310 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "semi_ID_assign_expressions", NULL, 0, 0, 2, cldArray);}
#line 2616 "pj2.tab.c"
    break;

  case 121:
#line 312 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-4];cldArray[1]=yyvsp[-2];cldArray[2]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "semi_ID_assign_expressions", NULL, 0, 0, 3, cldArray);}
#line 2622 "pj2.tab.c"
    break;

  case 122:
#line 315 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "array_values", NULL, 0, 0, 1, cldArray);}
#line 2628 "pj2.tab.c"
    break;

  case 123:
#line 317 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[-1];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "array_values", NULL, 0, 0, 2, cldArray);}
#line 2634 "pj2.tab.c"
    break;

  case 124:
#line 320 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_array_values", NULL, 0, 0, 1, cldArray);}
#line 2640 "pj2.tab.c"
    break;

  case 125:
#line 322 "pj2.y"
        {struct Node *cldArray[20];int temp=yyvsp[-2]->ncld;for(int i=0;i<temp;i++){cldArray[i]=yyvsp[-2]->cldArray[i];}cldArray[temp]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "comma_array_values", NULL,0,0,temp+1,cldArray);}
#line 2646 "pj2.tab.c"
    break;

  case 126:
#line 325 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "array_value", NULL, 0, 0, 1, cldArray);}
#line 2652 "pj2.tab.c"
    break;

  case 127:
#line 327 "pj2.y"
        {struct Node *cldArray[20];cldArray[0]=yyvsp[-2];cldArray[1]=yyvsp[0];yyval=createNode(yyvsp[0]->row, yyvsp[0]->col, "array_value", NULL, 0, 0, 2, cldArray);}
#line 2658 "pj2.tab.c"
    break;


#line 2662 "pj2.tab.c"

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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
#line 330 "pj2.y"

