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
#line 1 "c.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#include "table.h"
#include "grammerTree.h"
#include "y.tab.h"

#ifdef __cplusplus
extern "C" 

{
#endif
    extern FILE* yyin;
    void yyerror(const char *s);
    extern int yylex(void);
    extern char* yytext;

#ifdef __cplusplus
};
#endif

grammerTree* root;
grammerTree* curNode;
grammerTree* tempPointer;
grammerTree* stack[128];
int stackContentSize = 0;

void extendTree(int isTerminal, const char* word, const char* grammer);
void backToParent();
void extendOptTree(const char* opt);
void extendTerminal(const char* word, const char* grammer);
void broToParent(int num);
void connectParentChild();

void saveNode();
void loadNode();


#line 106 "y.tab.c" /* yacc.c:339  */

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
    CONSTANT = 258,
    STRING_C = 259,
    PRINT = 260,
    INPUT = 261,
    IDENTIFIER = 262,
    LP = 263,
    RP = 264,
    LSB = 265,
    RSB = 266,
    LBP = 267,
    RBP = 268,
    POINTER = 269,
    ADDRESS = 270,
    NOT = 271,
    POW = 272,
    TIMES = 273,
    DIVIDE = 274,
    MOD = 275,
    PLUS = 276,
    MINUS = 277,
    GT = 278,
    LT = 279,
    GE = 280,
    LE = 281,
    EQ = 282,
    NE = 283,
    AND = 284,
    OR = 285,
    ASSIGN = 286,
    INT = 287,
    VOID = 288,
    COMMA = 289,
    SEMICOLON = 290,
    IF = 291,
    ELSE = 292,
    WHILE = 293,
    DO = 294,
    FOR = 295,
    CONTINUE = 296,
    BREAK = 297,
    RETURN = 298,
    STRUCT = 299,
    NONE_ELSE = 300
  };
#endif
/* Tokens.  */
#define CONSTANT 258
#define STRING_C 259
#define PRINT 260
#define INPUT 261
#define IDENTIFIER 262
#define LP 263
#define RP 264
#define LSB 265
#define RSB 266
#define LBP 267
#define RBP 268
#define POINTER 269
#define ADDRESS 270
#define NOT 271
#define POW 272
#define TIMES 273
#define DIVIDE 274
#define MOD 275
#define PLUS 276
#define MINUS 277
#define GT 278
#define LT 279
#define GE 280
#define LE 281
#define EQ 282
#define NE 283
#define AND 284
#define OR 285
#define ASSIGN 286
#define INT 287
#define VOID 288
#define COMMA 289
#define SEMICOLON 290
#define IF 291
#define ELSE 292
#define WHILE 293
#define DO 294
#define FOR 295
#define CONTINUE 296
#define BREAK 297
#define RETURN 298
#define STRUCT 299
#define NONE_ELSE 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 43 "c.y" /* yacc.c:355  */

    char* str;

#line 237 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 254 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   227
=======
#define YYLAST   228
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
<<<<<<< HEAD
#define YYNSTATES  264
=======
#define YYNSTATES  265
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   112,   114,   112,   117,   121,   125,   127,
     125,   130,   134,   138,   140,   138,   143,   147,   151,   153,
     151,   156,   160,   164,   164,   169,   169,   174,   178,   182,
     182,   187,   187,   192,   192,   197,   197,   202,   206,   206,
     210,   212,   210,   215,   217,   215,   220,   224,   224,   228,
     230,   228,   233,   235,   233,   238,   240,   238,   243,   247,
     247,   251,   253,   251,   256,   260,   262,   260,   268,   268,
     271,   275,   275,   280,   280,   286,   292,   292,   297,   301,
     304,   307,   307,   316,   321,   324,   326,   316,   332,   335,
     337,   332,   373,   374,   375,   379,   380,   384,   385,   389,
     393,   396,   399,   402,   389,   412,   412,   420,   421,   425,
     425,   428,   432,   435,   439,   441,   439,   449,   450,   451,
     452,   453,   454,   455,   455,   456,   456,   459,   459,   462,
     462,   467,   468,   470,   472,   468,   476,   478,   476,   486,
     487,   493,   493,   501,   502,   506,   508,   506,   515,   520,
     520,   528,   530,   528,   537,   537,   542,   546,   550,   551,
     555,   555,   564,   564,   569,   573,   573,   581,   581,   590,
     591,   595,   596,   600,   602,   604,   600,   611,   611,   614
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANT", "STRING_C", "PRINT", "INPUT",
  "IDENTIFIER", "LP", "RP", "LSB", "RSB", "LBP", "RBP", "POINTER",
  "ADDRESS", "NOT", "POW", "TIMES", "DIVIDE", "MOD", "PLUS", "MINUS", "GT",
  "LT", "GE", "LE", "EQ", "NE", "AND", "OR", "ASSIGN", "INT", "VOID",
  "COMMA", "SEMICOLON", "IF", "ELSE", "WHILE", "DO", "FOR", "CONTINUE",
  "BREAK", "RETURN", "STRUCT", "NONE_ELSE", "$accept", "expression",
  "comma_expression", "$@1", "$@2", "single_expression",
  "assign_expression", "$@3", "$@4", "orh_expression", "or_expression",
  "$@5", "$@6", "andh_expression", "and_expression", "$@7", "$@8",
  "eneh_expression", "ene_expression", "$@9", "$@10", "lgh_expression",
  "lg_expression", "$@11", "$@12", "$@13", "$@14", "pmh_expression",
  "$@15", "pm_expression", "$@16", "$@17", "$@18", "$@19",
  "mtdh_expression", "$@20", "mtd_expression", "$@21", "$@22", "$@23",
  "$@24", "$@25", "$@26", "powh_expression", "$@27", "pow_expression",
  "$@28", "$@29", "noth_expression", "$@30", "$@31", "not_expression",
  "$@32", "pid_expression", "$@33", "$@34", "pointer_expression", "$@35",
  "type_defination", "$@36", "do_expression", "$@37", "$@38", "$@39",
  "$@40", "while_expression", "$@41", "$@42", "$@43",
  "for_init_expression", "for_condition_expression",
  "for_action_expression", "for_expression", "$@44", "$@45", "$@46",
  "$@47", "$@48", "array_decorator", "$@49", "high_ay_decorator",
  "high_nter_decorator", "$@50", "address_decorator",
  "decorated_identifier", "$@51", "$@52", "statement", "$@53", "$@54",
  "$@55", "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "print_content",
  "statement_block", "$@62", "statement_body", "declaration", "$@63",
  "$@64", "declaration_body", "$@65", "function_declaration", "$@66",
  "$@67", "function_defination", "$@68", "argument_declaration_list",
  "argument_declaration_list_tail", "argument_declaration_unit", "$@69",
  "argument_declaration_init", "$@70", "init_identifier", "$@71",
  "function_argument", "$@72", "function_argument_list",
  "function_argument_tail", "condition_expression", "$@73", "$@74", "$@75",
  "condition_tail", "$@76", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
# endif

<<<<<<< HEAD
#define YYPACT_NINF (-209)
=======
#define YYPACT_NINF -198
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-198)))

<<<<<<< HEAD
#define YYTABLE_NINF (-171)
=======
#define YYTABLE_NINF -171
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
      19,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,   -27,    -6,    -9,     0,    10,   -15,    58,  -209,  -209,
    -209,    37,  -209,  -209,  -209,     5,    30,    56,  -209,   -18,
    -209,    64,    77,    87,    90,    30,   100,    29,    76,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,    14,    57,   108,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,    91,  -209,  -209,  -209,    97,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,    37,    26,
      61,   126,   116,   131,   127,   122,  -209,  -209,  -209,   -12,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,   125,  -209,  -209,   132,  -209,  -209,  -209,   106,
     133,  -209,  -209,   134,  -209,  -209,   116,   135,   137,   139,
    -209,   107,  -209,    -6,    -9,     0,    10,  -209,  -209,  -209,
    -209,  -209,  -209,   136,  -209,  -209,   116,  -209,   113,   116,
    -209,  -209,   118,  -209,   117,   144,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,    14,    14,    57,    57,    57,   108,
     146,  -209,   145,  -209,   147,  -209,  -209,  -209,   149,  -209,
    -209,   120,  -209,  -209,    74,    30,  -209,   121,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,   147,  -209,   128,
     -18,   150,  -209,  -209,   147,   123,  -209,   152,  -209,   129,
     136,  -209,  -209,   149,  -209,   116,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,   154,  -209,   118,   138,    74,   140,
     157,  -209,  -209,  -209,  -209,    30,  -209,  -209,  -209,   158,
    -209,  -209,    30,  -209
=======
      18,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,   -28,    -5,   -10,   -15,     9,   -16,    59,  -198,  -198,
    -198,    19,  -198,  -198,  -198,     4,    29,    49,    20,   -19,
    -198,    65,    78,    88,    91,    29,   101,    77,    95,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,    71,    45,   114,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,    94,  -198,  -198,  -198,    98,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,    19,
      25,    62,   127,   117,   132,   128,   123,  -198,  -198,  -198,
     -13,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,   126,  -198,  -198,   133,  -198,  -198,  -198,
     107,   134,  -198,  -198,   135,  -198,  -198,   117,   137,   138,
     140,  -198,   108,  -198,    -5,   -10,   -15,     9,  -198,  -198,
    -198,  -198,  -198,  -198,   136,  -198,  -198,   117,  -198,   116,
     117,  -198,  -198,   118,  -198,   119,   145,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,    71,    71,    45,    45,    45,
     114,   146,  -198,   147,  -198,   148,  -198,  -198,  -198,   150,
    -198,  -198,   120,  -198,  -198,    75,    29,  -198,   122,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   148,  -198,
     129,   -19,   151,  -198,  -198,   148,   124,  -198,   153,  -198,
     130,   136,  -198,  -198,   150,  -198,   117,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,   155,  -198,   118,   139,    75,
     141,   158,  -198,  -198,  -198,  -198,    29,  -198,  -198,  -198,
     159,  -198,  -198,    29,  -198
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      65,   132,   136,   131,   173,    88,    83,    99,   127,   125,
     129,     0,     6,    11,    16,    21,    27,    37,    38,    47,
<<<<<<< HEAD
      59,    70,   119,   120,   118,    65,     0,     0,   122,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,    65,
     117,     3,     2,     8,     7,    13,    12,    18,    17,    23,
      25,    22,    29,    33,    31,    35,    28,    46,    58,    64,
      68,    66,   143,   141,   124,     1,    79,    80,    81,   146,
     133,   114,   174,    89,     0,   100,   128,   126,     0,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    40,
      43,    39,    52,    55,    49,    48,    61,    60,    70,     0,
      65,     0,   111,    65,     0,   113,    65,    65,    84,    65,
     130,     4,     9,    14,    19,    24,    26,    30,    34,    32,
      36,    65,    65,    65,    65,    65,    65,    69,    75,    73,
      71,    67,     0,    82,   109,     0,   147,   148,   149,   159,
     160,   140,   139,     0,   137,   112,   111,     0,     0,     0,
      93,     0,    92,     6,    11,    16,    21,    41,    44,    53,
      56,    50,    62,    78,    65,   142,   111,   165,     0,   111,
     157,   151,   164,   134,     0,     0,   175,    90,    85,   101,
       5,    10,    15,    20,    46,    46,    58,    58,    58,    64,
       0,    74,     0,   110,   108,   150,   158,   160,   167,   162,
     161,     0,   138,   115,    65,     0,    65,    65,    42,    45,
      54,    57,    51,    63,    76,    72,   105,   108,   166,   172,
       0,     0,    65,   135,   108,   179,    91,     0,    95,     0,
      78,    65,   107,   167,   169,   111,   152,   163,   116,   177,
     176,    86,   102,    77,     0,   171,   164,   154,    65,     0,
      65,   106,   168,   156,   153,     0,   178,    87,    97,     0,
     155,   103,     0,   104
=======
      59,    70,   119,   120,   118,    65,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,    65,
     117,     3,     2,     8,     7,    13,    12,    18,    17,    23,
      25,    22,    29,    33,    31,    35,    28,    46,    58,    64,
      68,    66,   143,   141,   124,     1,   122,    79,    80,    81,
     146,   133,   114,   174,    89,     0,   100,   128,   126,     0,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      40,    43,    39,    52,    55,    49,    48,    61,    60,    70,
       0,    65,     0,   111,    65,     0,   113,    65,    65,    84,
      65,   130,     4,     9,    14,    19,    24,    26,    30,    34,
      32,    36,    65,    65,    65,    65,    65,    65,    69,    75,
      73,    71,    67,     0,    82,   109,     0,   147,   148,   149,
     159,   160,   140,   139,     0,   137,   112,   111,     0,     0,
       0,    93,     0,    92,     6,    11,    16,    21,    41,    44,
      53,    56,    50,    62,    78,    65,   142,   111,   165,     0,
     111,   157,   151,   164,   134,     0,     0,   175,    90,    85,
     101,     5,    10,    15,    20,    46,    46,    58,    58,    58,
      64,     0,    74,     0,   110,   108,   150,   158,   160,   167,
     162,   161,     0,   138,   115,    65,     0,    65,    65,    42,
      45,    54,    57,    51,    63,    76,    72,   105,   108,   166,
     172,     0,     0,    65,   135,   108,   179,    91,     0,    95,
       0,    78,    65,   107,   167,   169,   111,   152,   163,   116,
     177,   176,    86,   102,    77,     0,   171,   164,   154,    65,
       0,    65,   106,   168,   156,   153,     0,   178,    87,    97,
       0,   155,   103,     0,   104
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -209,   -38,    18,  -209,  -209,   -77,    20,  -209,  -209,    83,
      17,  -209,  -209,    95,    21,  -209,  -209,    96,  -209,  -209,
    -209,     8,  -209,  -209,  -209,  -209,  -209,     2,  -209,   -57,
    -209,  -209,  -209,  -209,     9,  -209,   -67,  -209,  -209,  -209,
    -209,  -209,  -209,    -1,  -209,   -10,  -209,  -209,    54,  -209,
    -209,    84,  -209,  -209,  -209,  -209,   -49,  -209,   -37,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -208,  -139,  -209,  -209,  -209,  -209,  -209,  -198,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,   -35,  -209,
     -22,    75,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,    16,  -209,  -209,  -209,   -60,  -209,  -165,  -209,  -209,
    -209,   -46,  -209,  -209,  -209,  -209,  -209,  -209,  -209
=======
    -198,   -38,    10,  -198,  -198,   -78,    17,  -198,  -198,    92,
      21,  -198,  -198,    93,    22,  -198,  -198,    97,  -198,  -198,
    -198,    39,  -198,  -198,  -198,  -198,  -198,     2,  -198,   -60,
    -198,  -198,  -198,  -198,     6,  -198,  -111,  -198,  -198,  -198,
    -198,  -198,  -198,    -4,  -198,   -12,  -198,  -198,    54,  -198,
    -198,    83,  -198,  -198,  -198,  -198,   -48,  -198,   -37,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -191,  -141,  -198,  -198,  -198,  -198,  -198,  -197,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   -35,  -198,
     -22,    76,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,    15,  -198,  -198,  -198,   -59,  -198,  -165,  -198,  -198,
    -198,   -47,  -198,  -198,  -198,  -198,  -198,  -198,  -198
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,    11,    42,    79,   153,    12,    44,    80,   154,    13,
      46,    81,   155,    14,    48,    82,   156,    15,    51,    83,
      84,    16,    56,    85,    87,    86,    88,    17,    57,    91,
     121,   184,   122,   185,    18,    58,    95,   125,   188,   123,
     186,   124,   187,    19,    59,    97,   126,   189,    20,    21,
      99,    61,    98,   131,   164,   163,   191,   230,    69,   101,
      22,    35,   149,   206,   249,    23,    34,   107,   205,   151,
     229,   259,    24,    36,   109,   207,   250,   262,   217,   231,
     218,   135,   166,   146,   104,   105,   224,    25,    26,    38,
      37,    39,    31,   103,   201,    32,   174,   143,    64,   100,
      27,    28,    29,   102,   136,   168,   137,   198,   247,   254,
     255,   138,   170,   139,   172,   200,   222,   140,   194,   219,
     220,   221,   234,    30,    33,   106,   204,   240,   248
=======
      -1,    11,    42,    80,   154,    12,    44,    81,   155,    13,
      46,    82,   156,    14,    48,    83,   157,    15,    51,    84,
      85,    16,    56,    86,    88,    87,    89,    17,    57,    92,
     122,   185,   123,   186,    18,    58,    96,   126,   189,   124,
     187,   125,   188,    19,    59,    98,   127,   190,    20,    21,
     100,    61,    99,   132,   165,   164,   192,   231,    70,   102,
      22,    35,   150,   207,   250,    23,    34,   108,   206,   152,
     230,   260,    24,    36,   110,   208,   251,   263,   218,   232,
     219,   136,   167,   147,   105,   106,   225,    25,    26,    38,
      37,    39,    31,   104,   202,    32,   175,   144,    64,   101,
      27,    28,    29,   103,   137,   169,   138,   199,   248,   255,
     256,   139,   171,   140,   173,   201,   223,   141,   195,   220,
     221,   222,   235,    30,    33,   107,   205,   241,   249
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      74,    78,   111,    62,   197,  -144,   225,   175,    40,   232,
       1,     2,    49,    50,    66,    67,   238,  -123,  -144,  -144,
    -145,  -145,    43,   -94,     1,     2,    68,   193,    41,   128,
      45,  -123,  -145,   129,   130,    89,    90,  -145,  -145,    47,
       3,     4,    63,     5,     6,     7,     8,     9,    10,  -145,
     256,  -145,  -145,    60,     3,     4,    65,     5,     6,     7,
       8,     9,    10,  -145,    76,   142,     1,     2,   147,   148,
     246,   150,    70,  -123,  -144,    92,    93,    94,   132,     1,
       2,    52,    53,    54,    55,    71,  -123,   117,   118,   119,
     120,   115,   116,  -145,  -145,    72,     3,     4,    73,     5,
       6,     7,     8,     9,    10,  -145,  -145,  -145,    75,     3,
       4,    77,     5,     6,     7,     8,     9,    10,  -145,   210,
     211,   212,   159,   160,   161,    96,   192,   208,   209,   108,
     157,   158,   110,   133,   134,   141,   144,   145,   165,   167,
     169,   171,   179,   173,   176,   237,   177,   178,   195,   199,
     190,   203,   202,   214,   215,   223,   -96,   216,  -170,   236,
     239,   241,   233,   112,   242,   251,   -98,   261,   227,   228,
     226,   180,   182,   253,   181,   257,   113,   183,   114,   213,
     162,   243,   127,   235,   152,   196,   252,   245,     0,     0,
       0,     0,     0,   244,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,     0,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,     0,     0,   263
=======
      75,    79,   112,    62,  -144,   198,   176,    40,   226,     1,
       2,    49,    50,    67,    68,    45,  -123,  -144,  -144,  -145,
    -145,    43,   -94,     1,     2,    69,   194,   233,   129,    41,
    -123,  -145,   130,   131,   239,    60,  -145,  -145,    47,     3,
       4,    63,     5,     6,     7,     8,     9,    10,  -145,    65,
    -145,  -145,   257,     3,     4,    66,     5,     6,     7,     8,
       9,    10,  -145,    93,    94,    95,   143,     1,     2,   148,
     149,   247,   151,    71,  -123,  -144,   211,   212,   213,   133,
       1,     2,    52,    53,    54,    55,    72,  -123,   118,   119,
     120,   121,    90,    91,  -145,  -145,    73,     3,     4,    74,
       5,     6,     7,     8,     9,    10,  -145,  -145,  -145,    76,
       3,     4,    77,     5,     6,     7,     8,     9,    10,  -145,
     160,   161,   162,   116,   117,   209,   210,   193,   158,   159,
      78,    97,   109,   111,   134,   135,   142,   145,   146,   166,
     168,   170,   172,   180,   174,   238,   177,   178,   179,   200,
     191,   196,   204,   215,   203,   224,   216,   -96,   217,  -170,
     237,   240,   242,   234,   181,   243,   252,   -98,   262,   228,
     229,   227,   182,   113,   254,   114,   258,   183,   214,   184,
     115,   163,   128,   244,   236,   197,   153,   246,   253,     0,
       0,     0,     0,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   259,     0,     0,     0,     0,     0,     0,
       0,   261,     0,     0,     0,     0,     0,     0,   264
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
      35,    39,    79,    25,   169,     0,   204,   146,    35,   217,
       5,     6,    27,    28,    32,    33,   224,    12,    13,     0,
      32,    33,    31,    35,     5,     6,    44,   166,    34,     3,
      30,    12,    44,     7,     8,    21,    22,    32,    33,    29,
      35,    36,    12,    38,    39,    40,    41,    42,    43,    44,
     248,    32,    33,    16,    35,    36,     0,    38,    39,    40,
      41,    42,    43,    44,    35,   103,     5,     6,   106,   107,
     235,   109,     8,    12,    13,    18,    19,    20,   100,     5,
       6,    23,    24,    25,    26,     8,    12,    85,    86,    87,
      88,    83,    84,    32,    33,     8,    35,    36,     8,    38,
      39,    40,    41,    42,    43,    44,    32,    33,     8,    35,
      36,    35,    38,    39,    40,    41,    42,    43,    44,   186,
     187,   188,   123,   124,   125,    17,   164,   184,   185,    38,
     121,   122,    35,     7,    18,     4,     9,    15,    13,     7,
      34,     8,    35,     9,     9,   222,     9,     8,    35,    31,
      14,     7,    35,     7,     9,    35,    35,    10,     9,     9,
      37,     9,    34,    80,    35,    11,     9,     9,   206,   207,
     205,   153,   155,    35,   154,    35,    81,   156,    82,   189,
     126,   230,    98,   220,   109,   169,   246,   233,    -1,    -1,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,   262
=======
      35,    39,    80,    25,     0,   170,   147,    35,   205,     5,
       6,    27,    28,    32,    33,    30,    12,    13,     0,    32,
      33,    31,    35,     5,     6,    44,   167,   218,     3,    34,
      12,    44,     7,     8,   225,    16,    32,    33,    29,    35,
      36,    12,    38,    39,    40,    41,    42,    43,    44,     0,
      32,    33,   249,    35,    36,    35,    38,    39,    40,    41,
      42,    43,    44,    18,    19,    20,   104,     5,     6,   107,
     108,   236,   110,     8,    12,    13,   187,   188,   189,   101,
       5,     6,    23,    24,    25,    26,     8,    12,    86,    87,
      88,    89,    21,    22,    32,    33,     8,    35,    36,     8,
      38,    39,    40,    41,    42,    43,    44,    32,    33,     8,
      35,    36,    35,    38,    39,    40,    41,    42,    43,    44,
     124,   125,   126,    84,    85,   185,   186,   165,   122,   123,
      35,    17,    38,    35,     7,    18,     4,     9,    15,    13,
       7,    34,     8,    35,     9,   223,     9,     9,     8,    31,
      14,    35,     7,     7,    35,    35,     9,    35,    10,     9,
       9,    37,     9,    34,   154,    35,    11,     9,     9,   207,
     208,   206,   155,    81,    35,    82,    35,   156,   190,   157,
      83,   127,    99,   231,   221,   170,   110,   234,   247,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,   263
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,    35,    36,    38,    39,    40,    41,    42,
      43,    47,    51,    55,    59,    63,    67,    73,    80,    89,
      94,    95,   106,   111,   118,   133,   134,   146,   147,   148,
     169,   138,   141,   170,   112,   107,   119,   136,   135,   137,
      35,    34,    48,    31,    52,    30,    56,    29,    60,    27,
      28,    64,    23,    24,    25,    26,    68,    74,    81,    90,
<<<<<<< HEAD
      16,    97,   146,    12,   144,     0,    32,    33,    44,   104,
       8,     8,     8,     8,   144,     8,    35,    35,    47,    49,
      53,    57,    61,    65,    66,    69,    71,    70,    72,    21,
      22,    75,    18,    19,    20,    82,    17,    91,    98,    96,
     145,   105,   149,   139,   130,   131,   171,   113,    38,   120,
      35,    51,    55,    59,    63,    67,    67,    73,    73,    73,
      73,    76,    78,    85,    87,    83,    92,    97,     3,     7,
       8,    99,   146,     7,    18,   127,   150,   152,   157,   159,
     163,     4,    47,   143,     9,    15,   129,    47,    47,   108,
      47,   115,   147,    50,    54,    58,    62,    80,    80,    89,
      89,    89,    94,   101,   100,    13,   128,     7,   151,    34,
     158,     8,   160,     9,   142,   127,     9,     9,     8,    35,
      48,    52,    56,    60,    77,    79,    86,    88,    84,    93,
      14,   102,    47,   127,   164,    35,   157,   163,   153,    31,
     161,   140,    35,     7,   172,   114,   109,   121,    75,    75,
      82,    82,    82,    91,     7,     9,    10,   124,   126,   165,
     166,   167,   162,    35,   132,   133,   144,    47,    47,   116,
     103,   125,   126,    34,   168,   104,     9,    51,   126,    37,
     173,     9,    35,   102,    47,   167,   163,   154,   174,   110,
     122,    11,   161,    35,   155,   156,   133,    35,    47,   117,
     144,     9,   123,   144
=======
      16,    97,   146,    12,   144,     0,    35,    32,    33,    44,
     104,     8,     8,     8,     8,   144,     8,    35,    35,    47,
      49,    53,    57,    61,    65,    66,    69,    71,    70,    72,
      21,    22,    75,    18,    19,    20,    82,    17,    91,    98,
      96,   145,   105,   149,   139,   130,   131,   171,   113,    38,
     120,    35,    51,    55,    59,    63,    67,    67,    73,    73,
      73,    73,    76,    78,    85,    87,    83,    92,    97,     3,
       7,     8,    99,   146,     7,    18,   127,   150,   152,   157,
     159,   163,     4,    47,   143,     9,    15,   129,    47,    47,
     108,    47,   115,   147,    50,    54,    58,    62,    80,    80,
      89,    89,    89,    94,   101,   100,    13,   128,     7,   151,
      34,   158,     8,   160,     9,   142,   127,     9,     9,     8,
      35,    48,    52,    56,    60,    77,    79,    86,    88,    84,
      93,    14,   102,    47,   127,   164,    35,   157,   163,   153,
      31,   161,   140,    35,     7,   172,   114,   109,   121,    75,
      75,    82,    82,    82,    91,     7,     9,    10,   124,   126,
     165,   166,   167,   162,    35,   132,   133,   144,    47,    47,
     116,   103,   125,   126,    34,   168,   104,     9,    51,   126,
      37,   173,     9,    35,   102,    47,   167,   163,   154,   174,
     110,   122,    11,   161,    35,   155,   156,   133,    35,    47,
     117,   144,     9,   123,   144
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    49,    50,    48,    48,    51,    53,    54,
      52,    52,    55,    57,    58,    56,    56,    59,    61,    62,
      60,    60,    63,    65,    64,    66,    64,    64,    67,    69,
      68,    70,    68,    71,    68,    72,    68,    68,    74,    73,
      76,    77,    75,    78,    79,    75,    75,    81,    80,    83,
      84,    82,    85,    86,    82,    87,    88,    82,    82,    90,
      89,    92,    93,    91,    91,    95,    96,    94,    98,    97,
      97,   100,    99,   101,    99,    99,   103,   102,   102,   104,
     104,   105,   104,   107,   108,   109,   110,   106,   112,   113,
     114,   111,   115,   115,   115,   116,   116,   117,   117,   119,
     120,   121,   122,   123,   118,   125,   124,   126,   126,   128,
     127,   127,   129,   129,   131,   132,   130,   133,   133,   133,
     133,   133,   133,   134,   133,   135,   133,   136,   133,   137,
     133,   133,   138,   139,   140,   133,   141,   142,   133,   143,
     143,   145,   144,   146,   146,   148,   149,   147,   150,   151,
     150,   153,   154,   152,   156,   155,   155,   157,   158,   158,
     160,   159,   162,   161,   161,   164,   163,   166,   165,   167,
     167,   168,   168,   170,   171,   172,   169,   174,   173,   173
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     5,     0,     2,     0,     0,
       5,     0,     2,     0,     0,     5,     0,     2,     0,     0,
       5,     0,     2,     0,     3,     0,     3,     0,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     0,     3,
       0,     0,     5,     0,     0,     5,     0,     0,     3,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     0,
       3,     0,     0,     5,     0,     0,     0,     4,     0,     3,
       0,     0,     4,     0,     3,     1,     0,     4,     0,     1,
       1,     0,     3,     0,     0,     0,     0,    11,     0,     0,
       0,     8,     1,     1,     0,     1,     0,     1,     0,     0,
       0,     0,     0,     0,    14,     0,     4,     2,     0,     0,
       3,     0,     1,     0,     0,     0,     6,     2,     1,     1,
<<<<<<< HEAD
       1,     1,     1,     0,     2,     0,     3,     0,     3,     0,
=======
       1,     1,     2,     0,     2,     0,     3,     0,     3,     0,
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
       4,     1,     0,     0,     0,     8,     0,     0,     7,     1,
       1,     0,     4,     2,     0,     0,     0,     4,     1,     0,
       3,     0,     0,     7,     0,     2,     1,     2,     2,     0,
       0,     3,     0,     3,     0,     0,     4,     0,     4,     2,
       0,     2,     0,     0,     0,     0,     9,     0,     3,     0
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
        case 3:
#line 112 "c.y" /* yacc.c:1646  */
    {
        extendOptTree(",");
    }
<<<<<<< HEAD
#line 1656 "y.tab.c"
=======
#line 1557 "y.tab.c" /* yacc.c:1646  */
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
    break;

  case 4:
#line 114 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
<<<<<<< HEAD
#line 1664 "y.tab.c"
    break;

  case 8:
#line 125 "c.y"
             { 
        extendOptTree("=");
    }
#line 1672 "y.tab.c"
    break;

  case 9:
#line 127 "c.y"
                     { 
        backToParent();
    }
#line 1680 "y.tab.c"
    break;

  case 13:
#line 138 "c.y"
         { 
        extendOptTree("||");
    }
#line 1688 "y.tab.c"
    break;

  case 14:
#line 140 "c.y"
                      {
        backToParent();
    }
#line 1696 "y.tab.c"
    break;

  case 18:
#line 151 "c.y"
          {  
        extendOptTree("&&");
    }
#line 1704 "y.tab.c"
    break;

  case 19:
#line 153 "c.y"
                      {
        backToParent();
    }
#line 1712 "y.tab.c"
    break;

  case 23:
#line 164 "c.y"
         {  
        extendOptTree("==");
    }
#line 1720 "y.tab.c"
    break;

  case 24:
#line 166 "c.y"
                     {
        backToParent();
    }
#line 1728 "y.tab.c"
    break;

  case 25:
#line 169 "c.y"
         {  
        extendOptTree("!=");
    }
#line 1736 "y.tab.c"
    break;

  case 26:
#line 171 "c.y"
                     {
        backToParent();
    }
#line 1744 "y.tab.c"
    break;

  case 29:
#line 182 "c.y"
         {  
        extendOptTree(">");
    }
#line 1752 "y.tab.c"
    break;

  case 30:
#line 184 "c.y"
                     {
        backToParent();
    }
#line 1760 "y.tab.c"
    break;

  case 31:
#line 187 "c.y"
         {  
        extendOptTree(">=");
    }
#line 1768 "y.tab.c"
    break;

  case 32:
#line 189 "c.y"
                     {
        backToParent();
    }
#line 1776 "y.tab.c"
    break;

  case 33:
#line 192 "c.y"
         {  
        extendOptTree("<");
    }
#line 1784 "y.tab.c"
    break;

  case 34:
#line 194 "c.y"
                     {
        backToParent();
    }
#line 1792 "y.tab.c"
    break;

  case 35:
#line 197 "c.y"
         {  
        extendOptTree("<=");
    }
#line 1800 "y.tab.c"
    break;

  case 36:
#line 199 "c.y"
                     {
        backToParent();
    }
#line 1808 "y.tab.c"
    break;

  case 38:
#line 206 "c.y"
                      {printf("pmh\n");}
#line 1814 "y.tab.c"
    break;

  case 40:
#line 210 "c.y"
           { 
        extendOptTree("+");
    }
#line 1822 "y.tab.c"
    break;

  case 41:
#line 212 "c.y"
                      {
        backToParent();
    }
#line 1830 "y.tab.c"
    break;

  case 43:
#line 215 "c.y"
            { 
        extendOptTree("-");
    }
#line 1838 "y.tab.c"
    break;

  case 44:
#line 217 "c.y"
                      {
        backToParent();
    }
#line 1846 "y.tab.c"
    break;

  case 47:
#line 224 "c.y"
                      {printf("mtdh\n");}
#line 1852 "y.tab.c"
    break;

  case 49:
#line 228 "c.y"
          { 
        extendOptTree("%");
    }
#line 1860 "y.tab.c"
    break;

  case 50:
#line 230 "c.y"
                      {
        backToParent();
    }
#line 1868 "y.tab.c"
    break;

  case 52:
#line 233 "c.y"
            { 
        extendOptTree("*");
    }
#line 1876 "y.tab.c"
    break;

  case 53:
#line 235 "c.y"
                      {
        backToParent();
    }
#line 1884 "y.tab.c"
    break;

  case 55:
#line 238 "c.y"
             { 
        extendOptTree("/");
    }
#line 1892 "y.tab.c"
    break;

  case 56:
#line 240 "c.y"
                      {
        backToParent();
    }
#line 1900 "y.tab.c"
    break;

  case 59:
#line 247 "c.y"
                      {printf("powh\n");}
#line 1906 "y.tab.c"
    break;

  case 61:
#line 251 "c.y"
          { 
        extendOptTree("^");
    }
#line 1914 "y.tab.c"
    break;

  case 62:
#line 253 "c.y"
                      {
        backToParent();
    }
#line 1922 "y.tab.c"
    break;

  case 65:
#line 260 "c.y"
      {
        saveNode();
    }
#line 1930 "y.tab.c"
    break;

  case 66:
#line 262 "c.y"
                     {printf("noth\n");}
#line 1936 "y.tab.c"
    break;

  case 67:
#line 262 "c.y"
                                                        {
        loadNode();
    }
#line 1944 "y.tab.c"
    break;

  case 68:
#line 268 "c.y"
          { 
        extendTree(NON_TERMINAL, "!", "expression");
    }
#line 1952 "y.tab.c"
    break;

  case 71:
#line 275 "c.y"
         { 
        extendTree(NON_TERMINAL, "()", "expression");
    }
#line 1960 "y.tab.c"
    break;

  case 72:
#line 277 "c.y"
                    { 
        backToParent();
    }
#line 1968 "y.tab.c"
    break;

  case 73:
#line 280 "c.y"
                 {
        //saveNode();
        extendTree(TERMINAL, (yyvsp[0].str), "identifier");
    }
#line 1977 "y.tab.c"
    break;

  case 74:
#line 283 "c.y"
                         {
        //loadNode();
    }
#line 1985 "y.tab.c"
    break;

  case 75:
#line 286 "c.y"
               { 
        extendTree(TERMINAL, (yyvsp[0].str), "const");
    }
#line 1993 "y.tab.c"
    break;

  case 76:
#line 292 "c.y"
                         {
=======
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 125 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("=");
    }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 127 "c.y" /* yacc.c:1646  */
    { 
        backToParent();
    }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 138 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("||");
    }
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 140 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 151 "c.y" /* yacc.c:1646  */
    {  
        extendOptTree("&&");
    }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 153 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 164 "c.y" /* yacc.c:1646  */
    {  
        extendOptTree("==");
    }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 166 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 169 "c.y" /* yacc.c:1646  */
    {  
        extendOptTree("!=");
    }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 171 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 182 "c.y" /* yacc.c:1646  */
    {  
        extendOptTree(">");
    }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 184 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 187 "c.y" /* yacc.c:1646  */
    {  
        extendOptTree(">=");
    }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 189 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 192 "c.y" /* yacc.c:1646  */
    {  
        extendOptTree("<");
    }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 194 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 197 "c.y" /* yacc.c:1646  */
    {  
        extendOptTree("<=");
    }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 199 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 206 "c.y" /* yacc.c:1646  */
    {printf("pmh\n");}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 210 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("+");
    }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 212 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 215 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("-");
    }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 217 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 224 "c.y" /* yacc.c:1646  */
    {printf("mtdh\n");}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 228 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("%");
    }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 230 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 233 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("*");
    }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 235 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 238 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("/");
    }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 240 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 247 "c.y" /* yacc.c:1646  */
    {printf("powh\n");}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 251 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("^");
    }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 253 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 260 "c.y" /* yacc.c:1646  */
    {
        saveNode();
    }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 262 "c.y" /* yacc.c:1646  */
    {printf("noth\n");}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 262 "c.y" /* yacc.c:1646  */
    {
        loadNode();
    }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 268 "c.y" /* yacc.c:1646  */
    { 
        extendTree(NON_TERMINAL, "!", "expression");
    }
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 275 "c.y" /* yacc.c:1646  */
    { 
        extendTree(NON_TERMINAL, "()", "expression");
    }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 277 "c.y" /* yacc.c:1646  */
    { 
        backToParent();
    }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 280 "c.y" /* yacc.c:1646  */
    {
        //saveNode();
        extendTree(TERMINAL, (yyvsp[0].str), "identifier");
    }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 283 "c.y" /* yacc.c:1646  */
    {
        //loadNode();
    }
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 286 "c.y" /* yacc.c:1646  */
    { 
        extendTree(TERMINAL, (yyvsp[0].str), "const");
    }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 292 "c.y" /* yacc.c:1646  */
    {
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
        extendOptTree("->");
        extendTerminal("IDENTIFIER", (yyvsp[0].str));
        backToParent();
    }
<<<<<<< HEAD
#line 2003 "y.tab.c"
    break;

  case 79:
#line 301 "c.y"
          { 
        extendTerminal("int", "type");
    }
#line 2011 "y.tab.c"
    break;

  case 80:
#line 304 "c.y"
           { 
        extendTerminal("void", "type");
    }
#line 2019 "y.tab.c"
    break;

  case 81:
#line 307 "c.y"
             {
        extendTree(NON_TERMINAL, "struct", "type");
    }
#line 2027 "y.tab.c"
    break;

  case 82:
#line 309 "c.y"
                 {  
        extendTerminal((yyvsp[0].str), "identifier");
        backToParent();
    }
#line 2036 "y.tab.c"
    break;

  case 83:
#line 316 "c.y"
         { 
=======
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 301 "c.y" /* yacc.c:1646  */
    { 
        extendTerminal("int", "type");
    }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 304 "c.y" /* yacc.c:1646  */
    { 
        extendTerminal("void", "type");
    }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 307 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "struct", "type");
    }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 309 "c.y" /* yacc.c:1646  */
    {  
        extendTerminal((yyvsp[0].str), "identifier");
        backToParent();
    }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 316 "c.y" /* yacc.c:1646  */
    { 
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
        /*establish local scope*/ ;
        saveNode();
        extendTree(NON_TERMINAL, "", "do while loop");
        extendTree(NON_TERMINAL, "do", "loop body");
    }
<<<<<<< HEAD
#line 2047 "y.tab.c"
    break;

  case 84:
#line 321 "c.y"
                            {
        backToParent();
        extendTree(NON_TERMINAL, "while", "loop condition");
    }
#line 2056 "y.tab.c"
    break;

  case 85:
#line 324 "c.y"
         {  
        extendTree(NON_TERMINAL, "()", "expression");
    }
#line 2064 "y.tab.c"
    break;

  case 86:
#line 326 "c.y"
                    { 
        loadNode();
    }
#line 2072 "y.tab.c"
    break;

  case 88:
#line 332 "c.y"
            {  
        saveNode();
        extendTree(NON_TERMINAL, "while", "while loop");
    }
#line 2081 "y.tab.c"
    break;

  case 89:
#line 335 "c.y"
         { 
        extendTree(NON_TERMINAL, "()", "expression"); 
    }
#line 2089 "y.tab.c"
    break;

  case 90:
#line 337 "c.y"
                    { 
=======
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 321 "c.y" /* yacc.c:1646  */
    {
        backToParent();
        extendTree(NON_TERMINAL, "while", "loop condition");
    }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 324 "c.y" /* yacc.c:1646  */
    {  
        extendTree(NON_TERMINAL, "()", "expression");
    }
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 326 "c.y" /* yacc.c:1646  */
    { 
        loadNode();
    }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 332 "c.y" /* yacc.c:1646  */
    {  
        saveNode();
        extendTree(NON_TERMINAL, "while", "while loop");
    }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 335 "c.y" /* yacc.c:1646  */
    { 
        extendTree(NON_TERMINAL, "()", "expression"); 
    }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 337 "c.y" /* yacc.c:1646  */
    { 
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
        backToParent(); 
        /*establish local scope*/ ;
        extendTree(NON_TERMINAL, "", "loop body");
    }
<<<<<<< HEAD
#line 2099 "y.tab.c"
    break;

  case 91:
#line 341 "c.y"
                      {
        loadNode();
    }
#line 2107 "y.tab.c"
    break;

  case 99:
#line 389 "c.y"
          { 
=======
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 341 "c.y" /* yacc.c:1646  */
    {
        loadNode();
    }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 389 "c.y" /* yacc.c:1646  */
    { 
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
        /*establish local scope*/ ;
        saveNode();
        extendTree(NON_TERMINAL, "for", "for loop");
    }
<<<<<<< HEAD
#line 2117 "y.tab.c"
    break;

  case 100:
#line 393 "c.y"
         {  
        extendTree(NON_TERMINAL, "()", "for expression");
        extendTree(NON_TERMINAL, "", "for init expression");
    }
#line 2126 "y.tab.c"
    break;

  case 101:
#line 396 "c.y"
                                    {
        backToParent();
        extendTree(NON_TERMINAL, "", "for condition");
    }
#line 2135 "y.tab.c"
    break;

  case 102:
#line 399 "c.y"
                                         {
        backToParent();
        extendTree(NON_TERMINAL, "", "for action");
    }
#line 2144 "y.tab.c"
    break;

  case 103:
#line 402 "c.y"
                               {  
=======
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 393 "c.y" /* yacc.c:1646  */
    {  
        extendTree(NON_TERMINAL, "()", "for expression");
        extendTree(NON_TERMINAL, "", "for init expression");
    }
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 396 "c.y" /* yacc.c:1646  */
    {
        backToParent();
        extendTree(NON_TERMINAL, "", "for condition");
    }
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 399 "c.y" /* yacc.c:1646  */
    {
        backToParent();
        extendTree(NON_TERMINAL, "", "for action");
    }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 402 "c.y" /* yacc.c:1646  */
    {  
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
        backToParent();
        backToParent();
        extendTree(NON_TERMINAL, "", "loop body");
    }
<<<<<<< HEAD
#line 2154 "y.tab.c"
    break;

  case 104:
#line 406 "c.y"
                      {
        loadNode();
    }
#line 2162 "y.tab.c"
    break;

  case 105:
#line 412 "c.y"
          { 
        extendOptTree("[]"); 
    }
#line 2170 "y.tab.c"
    break;

  case 106:
#line 414 "c.y"
                     {
        backToParent();
    }
#line 2178 "y.tab.c"
    break;

  case 109:
#line 425 "c.y"
            {
        extendTree(NON_TERMINAL, "*", "pointer");
    }
#line 2186 "y.tab.c"
    break;

  case 112:
#line 432 "c.y"
              {
        extendTree(NON_TERMINAL, "&", "address");
    }
#line 2194 "y.tab.c"
    break;

  case 114:
#line 439 "c.y"
      {
        saveNode();
    }
#line 2202 "y.tab.c"
    break;

  case 115:
#line 441 "c.y"
                                                       {
        extendTerminal((yyvsp[0].str), "identifier");
    }
#line 2210 "y.tab.c"
    break;

  case 116:
#line 443 "c.y"
                        {
        loadNode();
    }
#line 2218 "y.tab.c"
    break;

  case 123:
#line 455 "c.y"
      { /*establish local scope*/ ; }
#line 2224 "y.tab.c"
    break;

  case 125:
#line 456 "c.y"
            {
        extendTerminal("break", "break");
    }
#line 2232 "y.tab.c"
    break;

  case 127:
#line 459 "c.y"
               {
        extendTerminal("continue", "continue");
    }
#line 2240 "y.tab.c"
    break;

  case 129:
#line 462 "c.y"
             {
        extendTree(NON_TERMINAL, "return", "return");
    }
#line 2248 "y.tab.c"
    break;

  case 130:
#line 464 "c.y"
                           {
        backToParent();
    }
#line 2256 "y.tab.c"
    break;

  case 132:
#line 468 "c.y"
            {
        extendTree(NON_TERMINAL, "print", "print");
    }
#line 2264 "y.tab.c"
    break;

  case 133:
#line 470 "c.y"
         {
        extendTree(NON_TERMINAL, "", "print_content");
    }
#line 2272 "y.tab.c"
    break;

  case 134:
#line 472 "c.y"
                       {
        backToParent();
        backToParent();
    }
#line 2281 "y.tab.c"
    break;

  case 136:
#line 476 "c.y"
            {
        extendTree(NON_TERMINAL, "input", "input");
    }
#line 2289 "y.tab.c"
    break;

  case 137:
#line 478 "c.y"
                                 {
        backToParent();
    }
#line 2297 "y.tab.c"
    break;

  case 140:
#line 487 "c.y"
               {
        extendTerminal((yyvsp[0].str), "string");
    }
#line 2305 "y.tab.c"
    break;

  case 141:
#line 493 "c.y"
          {
        extendTree(NON_TERMINAL, "{}", "statement body");
    }
#line 2313 "y.tab.c"
    break;

  case 142:
#line 495 "c.y"
                         {
        backToParent();
    }
#line 2321 "y.tab.c"
    break;

  case 144:
#line 502 "c.y"
      { printf("statement body over!\n"); YYACCEPT; }
#line 2327 "y.tab.c"
    break;

  case 145:
#line 506 "c.y"
      {
        extendTree(NON_TERMINAL, "", "declaration");
    }
#line 2335 "y.tab.c"
    break;

  case 146:
#line 508 "c.y"
                      {
        extendTree(NON_TERMINAL, "", "declaration body");
        saveNode();
    }
#line 2344 "y.tab.c"
    break;

  case 148:
#line 515 "c.y"
                           {
=======
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 406 "c.y" /* yacc.c:1646  */
    {
        loadNode();
    }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 412 "c.y" /* yacc.c:1646  */
    { 
        extendOptTree("[]"); 
    }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 414 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 425 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "*", "pointer");
    }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 432 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "&", "address");
    }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 439 "c.y" /* yacc.c:1646  */
    {
        saveNode();
    }
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 441 "c.y" /* yacc.c:1646  */
    {
        extendTerminal((yyvsp[0].str), "identifier");
    }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 443 "c.y" /* yacc.c:1646  */
    {
        loadNode();
    }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 455 "c.y" /* yacc.c:1646  */
    { /*establish local scope*/ ; }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 456 "c.y" /* yacc.c:1646  */
    {
        extendTerminal("break", "break");
    }
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 459 "c.y" /* yacc.c:1646  */
    {
        extendTerminal("continue", "continue");
    }
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 462 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "return", "return");
    }
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 464 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 468 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "print", "print");
    }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 470 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "", "print_content");
    }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 472 "c.y" /* yacc.c:1646  */
    {
        backToParent();
        backToParent();
    }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 476 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "input", "input");
    }
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 478 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 487 "c.y" /* yacc.c:1646  */
    {
        extendTerminal((yyvsp[0].str), "string");
    }
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 493 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "{}", "statement body");
    }
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 495 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 502 "c.y" /* yacc.c:1646  */
    { printf("statement body over!\n"); }
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 506 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "", "declaration");
    }
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 508 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "", "declaration body");
        saveNode();
    }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 515 "c.y" /* yacc.c:1646  */
    {
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
        extendTree(NON_TERMINAL, "", "function declaration");
        broToParent(-1);
        //connectParentChild();
    }
<<<<<<< HEAD
#line 2354 "y.tab.c"
    break;

  case 149:
#line 520 "c.y"
                                {
=======
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 520 "c.y" /* yacc.c:1646  */
    {
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
        extendTree(NON_TERMINAL, "", "argument declaration list");
        broToParent(-1);
        //connectParentChild();
    }
<<<<<<< HEAD
#line 2364 "y.tab.c"
    break;

  case 151:
#line 528 "c.y"
                         {
        extendTree(NON_TERMINAL, "()", "function argument list");
    }
#line 2372 "y.tab.c"
    break;

  case 152:
#line 530 "c.y"
                                {
        backToParent();
        // establish local scope
    }
#line 2381 "y.tab.c"
    break;

  case 154:
#line 537 "c.y"
      {
        extendTree(NON_TERMINAL, "", "function defination");
    }
#line 2389 "y.tab.c"
    break;

  case 155:
#line 539 "c.y"
                      {
        backToParent();
    }
#line 2397 "y.tab.c"
    break;

  case 160:
#line 555 "c.y"
                      {
        extendTree(NON_TERMINAL, "", "argument declaration unit");
        broToParent(1);
    }
#line 2406 "y.tab.c"
    break;

  case 161:
#line 558 "c.y"
                                {
        backToParent();
    }
#line 2414 "y.tab.c"
    break;

  case 162:
#line 564 "c.y"
             {
        extendOptTree("=");
    }
#line 2422 "y.tab.c"
    break;

  case 163:
#line 566 "c.y"
                        {
        backToParent();
    }
#line 2430 "y.tab.c"
    break;

  case 165:
#line 573 "c.y"
                                     {
        extendTerminal((yyvsp[0].str), "identifier");
    }
#line 2438 "y.tab.c"
    break;

  case 166:
#line 575 "c.y"
                        {
        loadNode();
    }
#line 2446 "y.tab.c"
    break;

  case 167:
#line 581 "c.y"
      {
        extendTree(NON_TERMINAL, "", "function argument unit");
        saveNode();
    }
#line 2455 "y.tab.c"
    break;

  case 168:
#line 584 "c.y"
                                                                {
        backToParent();
    }
#line 2463 "y.tab.c"
    break;

  case 173:
#line 600 "c.y"
         { 
        extendTree(NON_TERMINAL, "if", "if expression");
    }
#line 2471 "y.tab.c"
    break;

  case 174:
#line 602 "c.y"
         {
        extendTree(NON_TERMINAL, "()", "if condition");
    }
#line 2479 "y.tab.c"
    break;

  case 175:
#line 604 "c.y"
                    {
        backToParent();
        extendTree(NON_TERMINAL, "", "if statement");
    }
#line 2488 "y.tab.c"
    break;

  case 177:
#line 611 "c.y"
           {
        extendTree(NON_TERMINAL, "else", "else statement");
    }
#line 2496 "y.tab.c"
    break;

  case 179:
#line 614 "c.y"
      {}
#line 2502 "y.tab.c"
    break;


#line 2506 "y.tab.c"

=======
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 528 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "()", "function argument list");
    }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 530 "c.y" /* yacc.c:1646  */
    {
        backToParent();
        // establish local scope
    }
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 537 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "", "function defination");
    }
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 539 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 555 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "", "argument declaration unit");
        broToParent(1);
    }
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 558 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 564 "c.y" /* yacc.c:1646  */
    {
        extendOptTree("=");
    }
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 566 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 573 "c.y" /* yacc.c:1646  */
    {
        extendTerminal((yyvsp[0].str), "identifier");
    }
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 575 "c.y" /* yacc.c:1646  */
    {
        loadNode();
    }
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 581 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "", "function argument unit");
        saveNode();
    }
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 584 "c.y" /* yacc.c:1646  */
    {
        backToParent();
    }
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 600 "c.y" /* yacc.c:1646  */
    { 
        extendTree(NON_TERMINAL, "if", "if expression");
    }
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 602 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "()", "if condition");
    }
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 604 "c.y" /* yacc.c:1646  */
    {
        backToParent();
        extendTree(NON_TERMINAL, "", "if statement");
    }
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 611 "c.y" /* yacc.c:1646  */
    {
        extendTree(NON_TERMINAL, "else", "else statement");
    }
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 614 "c.y" /* yacc.c:1646  */
    {}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2407 "y.tab.c" /* yacc.c:1646  */
>>>>>>> 715104f1876eb7a42357974f318fcc0190fcdb41
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
#line 617 "c.y" /* yacc.c:1906  */



   
void extendTree(int isTerminal, const char* word, const char* grammer) {
    tempPointer = createGrammerNode(isTerminal, word, grammer); 
    push_child(curNode, tempPointer); 
    if (isTerminal == NON_TERMINAL) curNode = tempPointer;
}

void backToParent() {
    if (curNode->parent == NULL) return;
    curNode = curNode->parent;
}

void saveNode() {
    stack[stackContentSize++] = curNode;
}

void loadNode() {
    if (stackContentSize <= 0) return;
    curNode = stack[--stackContentSize];
}

void extendOptTree(const char* opt) {
    extendTree(NON_TERMINAL, opt, "expression");
    adjustOptNode(curNode);
}

void extendTerminal(const char* word, const char* grammer) {
    extendTree(TERMINAL, word, grammer);
}

void broToParent(int num) {
    grammerTree* parent = curNode->parent;
    int selfPos;
    int i;
    selfPos = findSelfPos(curNode);
    if (num == -1) i = 0;
    else i =  selfPos - num;
    /* printGrammerNode(parent);
    printGrammerNode(curNode); */
    for (int n = i; n < selfPos; n++) {
        /* printGrammerNode(parent->child[n]); */
        push_child(curNode, parent->child[n]);
    }
    parent->child[i++] = curNode;
    parent->size = i;
}

void connectParentChild() {
    grammerTree* parent = curNode->parent;
    grammerTree** child = curNode->child;
    for (int i = 0; i < curNode->size; i++) {
        push_child(parent, child[i]);
    }
    freeGrammerNode(curNode);
    curNode = parent;
}

int main(int arg, char* argv[]) {
    if (2 > arg) {
        exit(-1);
    }
    yyin = fopen(argv[1], "r");
    root = createGrammerNode(NON_TERMINAL, "", "start");
    curNode = root;
    tempPointer = NULL;
    generateLEX();
    appendLEX("Type           Name           Attribute \n");
    launchTable();
    int err = yyparse();
    closeLEX();
    generateYACC();
    printGrammerTree(root);
    closeYACC();
    stopTable();
    freeGrammerTree(root);
    fclose(yyin);
    printf("%d\n", err);
    return 0; 
}   

void yyerror(const char* charactor) {
    
}
