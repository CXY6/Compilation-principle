/* A Bison parser, made by GNU Bison 3.7.3.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/main.y"

    #define YYDEBUG 1
    #include "common.h"
    #include "symboltable.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    extern idlist IDlist;
    extern int layer;
    extern int num_of_layer[100];
    int yylex();
    int yyerror( char const * );

#line 85 "src/main.tab.cpp"

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

#include "main.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_CHAR = 3,                     /* T_CHAR  */
  YYSYMBOL_T_INT = 4,                      /* T_INT  */
  YYSYMBOL_T_STRING = 5,                   /* T_STRING  */
  YYSYMBOL_T_BOOL = 6,                     /* T_BOOL  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_FOR = 8,                        /* FOR  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_MAIN = 10,                      /* MAIN  */
  YYSYMBOL_SCANF = 11,                     /* SCANF  */
  YYSYMBOL_PRINTF = 12,                    /* PRINTF  */
  YYSYMBOL_COMMA = 13,                     /* COMMA  */
  YYSYMBOL_LEFT = 14,                      /* LEFT  */
  YYSYMBOL_RIGHT = 15,                     /* RIGHT  */
  YYSYMBOL_LEFT2 = 16,                     /* LEFT2  */
  YYSYMBOL_RIGHT2 = 17,                    /* RIGHT2  */
  YYSYMBOL_SEMICOLON = 18,                 /* SEMICOLON  */
  YYSYMBOL_REFERENCE = 19,                 /* REFERENCE  */
  YYSYMBOL_ASSIGNEQUAL = 20,               /* ASSIGNEQUAL  */
  YYSYMBOL_ADDEQUAL = 21,                  /* ADDEQUAL  */
  YYSYMBOL_SUBEQUAL = 22,                  /* SUBEQUAL  */
  YYSYMBOL_MULEQUAL = 23,                  /* MULEQUAL  */
  YYSYMBOL_DIVEQUAL = 24,                  /* DIVEQUAL  */
  YYSYMBOL_OR = 25,                        /* OR  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_NOT = 27,                       /* NOT  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 29,                  /* NOTEQUAL  */
  YYSYMBOL_GREAT = 30,                     /* GREAT  */
  YYSYMBOL_LESS = 31,                      /* LESS  */
  YYSYMBOL_GREATEQUAL = 32,                /* GREATEQUAL  */
  YYSYMBOL_LESSEQUAL = 33,                 /* LESSEQUAL  */
  YYSYMBOL_ADD = 34,                       /* ADD  */
  YYSYMBOL_SUB = 35,                       /* SUB  */
  YYSYMBOL_MUL = 36,                       /* MUL  */
  YYSYMBOL_DIV = 37,                       /* DIV  */
  YYSYMBOL_MOD = 38,                       /* MOD  */
  YYSYMBOL_IDENTIFIER = 39,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 40,                   /* INTEGER  */
  YYSYMBOL_CHAR = 41,                      /* CHAR  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_STRING = 43,                    /* STRING  */
  YYSYMBOL_UMINUS = 44,                    /* UMINUS  */
  YYSYMBOL_UADD = 45,                      /* UADD  */
  YYSYMBOL_SELFADD_R = 46,                 /* SELFADD_R  */
  YYSYMBOL_SELFSUB_R = 47,                 /* SELFSUB_R  */
  YYSYMBOL_SELFADD = 48,                   /* SELFADD  */
  YYSYMBOL_SELFSUB = 49,                   /* SELFSUB  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_statements = 52,                /* statements  */
  YYSYMBOL_statement = 53,                 /* statement  */
  YYSYMBOL_decl_stmt = 54,                 /* decl_stmt  */
  YYSYMBOL_assign_stmt = 55,               /* assign_stmt  */
  YYSYMBOL_iter_stmt = 56,                 /* iter_stmt  */
  YYSYMBOL_if_stmt = 57,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 58,                  /* for_stmt  */
  YYSYMBOL_scanf_stmt = 59,                /* scanf_stmt  */
  YYSYMBOL_printf_stmt = 60,               /* printf_stmt  */
  YYSYMBOL_idlist = 61,                    /* idlist  */
  YYSYMBOL_assign_expr = 62,               /* assign_expr  */
  YYSYMBOL_bool_stmt = 63,                 /* bool_stmt  */
  YYSYMBOL_or_expr = 64,                   /* or_expr  */
  YYSYMBOL_and_expr = 65,                  /* and_expr  */
  YYSYMBOL_equal_expr = 66,                /* equal_expr  */
  YYSYMBOL_relation_expr = 67,             /* relation_expr  */
  YYSYMBOL_add_expr = 68,                  /* add_expr  */
  YYSYMBOL_mul_expr = 69,                  /* mul_expr  */
  YYSYMBOL_unary_expr = 70,                /* unary_expr  */
  YYSYMBOL_postfix_expr = 71,              /* postfix_expr  */
  YYSYMBOL_expr = 72,                      /* expr  */
  YYSYMBOL_T = 73                          /* T  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_uint8 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    43,    43,    51,    61,    64,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    83,    94,   115,   124,   135,
     146,   156,   166,   174,   183,   192,   201,   209,   217,   228,
     236,   246,   254,   264,   268,   273,   276,   284,   292,   300,
     308,   316,   324,   328,   333,   341,   347,   355,   361,   369,
     377,   383,   391,   399,   407,   415,   421,   429,   437,   444,
     452,   460,   468,   474,   481,   488,   495,   502,   509,   515,
     522,   529,   535,   538,   541,   544,   547,   550,   555,   556,
     557,   558
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_CHAR", "T_INT",
  "T_STRING", "T_BOOL", "WHILE", "FOR", "IF", "MAIN", "SCANF", "PRINTF",
  "COMMA", "LEFT", "RIGHT", "LEFT2", "RIGHT2", "SEMICOLON", "REFERENCE",
  "ASSIGNEQUAL", "ADDEQUAL", "SUBEQUAL", "MULEQUAL", "DIVEQUAL", "OR",
  "AND", "NOT", "EQUAL", "NOTEQUAL", "GREAT", "LESS", "GREATEQUAL",
  "LESSEQUAL", "ADD", "SUB", "MUL", "DIV", "MOD", "IDENTIFIER", "INTEGER",
  "CHAR", "BOOL", "STRING", "UMINUS", "UADD", "SELFADD_R", "SELFSUB_R",
  "SELFADD", "SELFSUB", "$accept", "program", "statements", "statement",
  "decl_stmt", "assign_stmt", "iter_stmt", "if_stmt", "for_stmt",
  "scanf_stmt", "printf_stmt", "idlist", "assign_expr", "bool_stmt",
  "or_expr", "and_expr", "equal_expr", "relation_expr", "add_expr",
  "mul_expr", "unary_expr", "postfix_expr", "expr", "T", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
#endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     188,  -117,  -117,  -117,  -117,    10,    50,    10,    55,    70,
     314,   188,  -117,   314,   314,   314,  -117,  -117,  -117,  -117,
    -117,   314,   314,    57,   188,  -117,    80,    82,  -117,  -117,
    -117,    84,    87,  -117,    53,    54,    62,    56,    58,     6,
    -117,    46,  -117,    -3,   314,   188,   206,   188,    63,    64,
      -1,   141,    -4,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,  -117,  -117,    94,    72,    93,   101,    -7,  -117,
     224,    98,    99,  -117,     7,    43,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,    54,    62,    56,    56,    58,    58,    58,
      58,     6,     6,  -117,  -117,  -117,   105,  -117,   314,    -2,
    -117,    11,    22,   314,   242,     0,  -117,     0,  -117,   188,
      58,    85,  -117,   188,   108,   260,    23,   278,    37,  -117,
      48,    66,   188,  -117,   111,   188,   188,   112,   314,   188,
     113,   296,  -117,  -117,  -117,  -117,  -117,   188,   114,  -117,
     188,   188,   115,  -117,   188,  -117,  -117,   188,  -117,  -117
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    79,    78,    81,    80,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,    73,    74,    75,    77,
      76,     0,     0,     0,     3,     4,     0,     0,    11,    12,
      13,     0,     0,    17,    42,    45,    47,    50,    55,    58,
      62,    68,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    64,    63,    66,    67,     1,     5,
       7,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,     0,     0,    35,    16,     0,    18,
       0,     0,     0,    19,     0,     0,    72,    14,    37,    38,
      39,    40,    41,    44,    46,    48,    49,    51,    52,    53,
      54,    56,    57,    59,    60,    61,     0,    36,     0,     0,
      43,     0,     0,     0,     0,     0,    30,     0,    32,     0,
      15,     0,    33,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     2,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    31,    22,    28,    27,     0,     0,    26,
       0,     0,     0,    23,     0,    24,    25,     0,    20,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,   -10,   -24,    86,  -117,  -117,  -117,  -117,  -117,
    -117,  -116,   -36,   124,   -41,    65,    68,    25,    -8,    26,
      -9,  -117,  -117,   135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    87,    33,    45,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    51,    50,    88,    53,    54,    55,    84,   120,   140,
      92,   141,    56,    57,    96,    85,    85,   131,    69,    85,
     125,    89,   126,    93,    44,    10,   133,    59,    98,    99,
     100,   101,   102,    77,    78,    86,    86,   132,    13,   139,
     135,   148,    79,    80,    81,    14,    15,    69,    69,   122,
      16,    17,    18,    19,    20,   151,   127,    58,   128,    21,
      22,   119,    69,   152,    46,   107,   108,   109,   110,    48,
     113,   114,   115,    64,    65,    66,    67,    68,    69,   119,
      70,   153,   136,   138,    49,   134,    73,    74,    75,    76,
      71,    72,    77,    78,    82,    83,   105,   106,    60,   147,
      61,   150,    62,   111,   112,    63,    94,    95,   116,   144,
     130,   117,   158,   118,   119,   162,   123,   124,    59,   142,
     129,   155,   156,   145,   143,   159,   154,   157,   160,   164,
     167,    47,    91,   163,   103,    43,   165,   166,   104,     0,
     168,     0,     0,   169,     1,     2,     3,     4,     5,     6,
       7,     0,     8,     9,     0,    10,     0,    11,    97,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
      16,    17,    18,    19,    20,     0,     0,     0,     0,    21,
      22,     1,     2,     3,     4,     5,     6,     7,     0,     8,
       9,     0,    10,     0,    11,     0,    12,     0,     0,     1,
       2,     3,     4,     0,     0,    13,     0,     0,     0,     0,
      10,     0,    14,    15,    90,     0,     0,    16,    17,    18,
      19,    20,     0,    13,     0,     0,    21,    22,    10,     0,
      14,    15,   121,     0,     0,    16,    17,    18,    19,    20,
       0,    13,     0,     0,    21,    22,    10,     0,    14,    15,
     137,     0,     0,    16,    17,    18,    19,    20,     0,    13,
       0,     0,    21,    22,    10,   146,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,     0,    13,     0,     0,
      21,    22,    10,   149,    14,    15,     0,     0,     0,    16,
      17,    18,    19,    20,     0,    13,     0,     0,    21,    22,
      10,   161,    14,    15,     0,     0,     0,    16,    17,    18,
      19,    20,     0,    13,     0,     0,    21,    22,    10,     0,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
       0,    13,     0,     0,    21,    22,     0,     0,    14,    15,
       0,     0,     0,    16,    17,    18,    19,    20,     0,     0,
       0,     0,    21,    22
};

static const yytype_int16 yycheck[] =
{
      24,    11,    10,    44,    13,    14,    15,    10,    15,   125,
      46,   127,    21,    22,    15,    19,    19,    19,    25,    19,
      13,    45,    15,    47,    14,    14,    15,    51,    64,    65,
      66,    67,    68,    34,    35,    39,    39,    39,    27,    39,
      18,    18,    36,    37,    38,    34,    35,    25,    25,    90,
      39,    40,    41,    42,    43,    18,    13,     0,    15,    48,
      49,    13,    25,    15,    14,    73,    74,    75,    76,    14,
      79,    80,    81,    20,    21,    22,    23,    24,    25,    13,
      26,    15,   123,   124,    14,   121,    30,    31,    32,    33,
      28,    29,    34,    35,    48,    49,    71,    72,    18,   135,
      18,   137,    18,    77,    78,    18,    43,    43,    14,   133,
     118,    39,   148,    20,    13,   151,    18,    18,   142,   129,
      15,   145,   146,    15,    39,   149,    15,    15,    15,    15,
      15,     7,    46,   157,    69,     0,   160,   161,    70,    -1,
     164,    -1,    -1,   167,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    14,    -1,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    14,    -1,    16,    -1,    18,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      14,    -1,    34,    35,    18,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    27,    -1,    -1,    48,    49,    14,    -1,
      34,    35,    18,    -1,    -1,    39,    40,    41,    42,    43,
      -1,    27,    -1,    -1,    48,    49,    14,    -1,    34,    35,
      18,    -1,    -1,    39,    40,    41,    42,    43,    -1,    27,
      -1,    -1,    48,    49,    14,    15,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    -1,    27,    -1,    -1,
      48,    49,    14,    15,    34,    35,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    27,    -1,    -1,    48,    49,
      14,    15,    34,    35,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    27,    -1,    -1,    48,    49,    14,    -1,
      34,    35,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      -1,    27,    -1,    -1,    48,    49,    -1,    -1,    34,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    11,    12,
      14,    16,    18,    27,    34,    35,    39,    40,    41,    42,
      43,    48,    49,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    62,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    14,    63,    14,    63,    14,    14,
      68,    52,    73,    70,    70,    70,    70,    70,     0,    53,
      18,    18,    18,    18,    20,    21,    22,    23,    24,    25,
      26,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    48,    49,    10,    19,    39,    61,    64,    53,
      18,    54,    62,    53,    43,    43,    15,    17,    62,    62,
      62,    62,    62,    65,    66,    67,    67,    68,    68,    68,
      68,    69,    69,    70,    70,    70,    14,    39,    20,    13,
      15,    18,    64,    18,    18,    13,    15,    13,    15,    15,
      68,    19,    39,    15,    62,    18,    64,    18,    64,    39,
      61,    61,    52,    39,    53,    15,    15,    62,    18,    15,
      62,    18,    15,    15,    15,    53,    53,    15,    62,    53,
      15,    15,    62,    53,    15,    53,    53,    15,    53,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    56,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    61,    61,    61,    61,    62,    62,    62,
      62,    62,    62,    63,    64,    64,    65,    65,    66,    66,
      66,    67,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    72,    72,    72,    72,    73,    73,
      73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     1,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     3,     4,     2,     1,     3,     3,
       9,     9,     7,     8,     8,     8,     7,     7,     7,     6,
       4,     6,     4,     3,     4,     1,     2,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     1,     2,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_STACK_PRINT (yyss, yyssp);

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: T MAIN LEFT RIGHT statements  */
#line 44 "src/main.y"
    {
        root = new TreeNode(0,NODE_PROG);
        root->addChild(yyvsp[-4]);
        root->addChild(yyvsp[-3]);
        root->addChild(yyvsp[0]);
        yyval=root;
    }
#line 1569 "src/main.tab.cpp"
    break;

  case 3: /* program: statements  */
#line 52 "src/main.y"
    {
        root = new TreeNode(0, NODE_PROG); 
        root->addChild(yyvsp[0]);
        yyval=root;
    }
#line 1579 "src/main.tab.cpp"
    break;

  case 4: /* statements: statement  */
#line 61 "src/main.y"
             {
        yyval=yyvsp[0];
    }
#line 1587 "src/main.tab.cpp"
    break;

  case 5: /* statements: statements statement  */
#line 64 "src/main.y"
                       {   
        yyval->addSibling(yyvsp[0]); 
        yyval=yyvsp[-1]; 
    }
#line 1596 "src/main.tab.cpp"
    break;

  case 6: /* statement: SEMICOLON  */
#line 71 "src/main.y"
             {yyval = new TreeNode(lineno, NODE_STMT); yyval->stype = STMT_SKIP;}
#line 1602 "src/main.tab.cpp"
    break;

  case 7: /* statement: decl_stmt SEMICOLON  */
#line 72 "src/main.y"
                      {yyval = yyvsp[-1];}
#line 1608 "src/main.tab.cpp"
    break;

  case 8: /* statement: assign_stmt SEMICOLON  */
#line 73 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1614 "src/main.tab.cpp"
    break;

  case 9: /* statement: scanf_stmt SEMICOLON  */
#line 74 "src/main.y"
                       {yyval = yyvsp[-1];}
#line 1620 "src/main.tab.cpp"
    break;

  case 10: /* statement: printf_stmt SEMICOLON  */
#line 75 "src/main.y"
                        {yyval = yyvsp[-1];}
#line 1626 "src/main.tab.cpp"
    break;

  case 11: /* statement: iter_stmt  */
#line 76 "src/main.y"
            {yyval = yyvsp[0];}
#line 1632 "src/main.tab.cpp"
    break;

  case 12: /* statement: if_stmt  */
#line 77 "src/main.y"
          {yyval = yyvsp[0];}
#line 1638 "src/main.tab.cpp"
    break;

  case 13: /* statement: for_stmt  */
#line 78 "src/main.y"
           {yyval = yyvsp[0];}
#line 1644 "src/main.tab.cpp"
    break;

  case 14: /* statement: LEFT2 statements RIGHT2  */
#line 79 "src/main.y"
                          {yyval = yyvsp[-1];}
#line 1650 "src/main.tab.cpp"
    break;

  case 15: /* decl_stmt: T IDENTIFIER ASSIGNEQUAL add_expr  */
#line 83 "src/main.y"
                                   {  // declare and init
        TreeNode* node = new TreeNode(yyvsp[-3]->lineno, NODE_STMT);
        node->stype = STMT_DECL;
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        idnode *x=IDlist.find_by_node(yyvsp[-2]);
        x->decl_or_refe=0;
        yyval = node;   
    }
#line 1666 "src/main.tab.cpp"
    break;

  case 16: /* decl_stmt: T idlist  */
#line 94 "src/main.y"
           {
        TreeNode* node = new TreeNode(yyvsp[-1]->lineno, NODE_STMT);
        node->stype = STMT_DECL;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        TreeNode* x=yyvsp[0];
        while(x!=nullptr){
            idnode* y=IDlist.find_by_node(x);
            if(y==nullptr){
                cout<<"don't find!\n";
            }
            else{
                y->decl_or_refe=0;
            }
            x=x->sibling;
        }
        yyval = node;   
    }
#line 1689 "src/main.tab.cpp"
    break;

  case 17: /* assign_stmt: assign_expr  */
#line 115 "src/main.y"
              {
        TreeNode* node=new TreeNode(yyvsp[0]->lineno,NODE_STMT);
        node->stype = STMT_ASSIGN;
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1700 "src/main.tab.cpp"
    break;

  case 18: /* iter_stmt: WHILE bool_stmt statement  */
#line 124 "src/main.y"
                           {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
        node->stype= STMT_WHILE;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1713 "src/main.tab.cpp"
    break;

  case 19: /* if_stmt: IF bool_stmt statement  */
#line 135 "src/main.y"
                          {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_STMT);
        node->stype=STMT_IF;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1726 "src/main.tab.cpp"
    break;

  case 20: /* for_stmt: FOR LEFT decl_stmt SEMICOLON or_expr SEMICOLON assign_expr RIGHT statement  */
#line 146 "src/main.y"
                                                                             { //111
        TreeNode* node=new TreeNode(yyvsp[-8]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-8]);
        node->addChild(yyvsp[-6]);
        node->addChild(yyvsp[-4]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1741 "src/main.tab.cpp"
    break;

  case 21: /* for_stmt: FOR LEFT assign_expr SEMICOLON or_expr SEMICOLON assign_expr RIGHT statement  */
#line 156 "src/main.y"
                                                                               { //111
        TreeNode* node=new TreeNode(yyvsp[-8]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-8]);
        node->addChild(yyvsp[-6]);
        node->addChild(yyvsp[-4]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1756 "src/main.tab.cpp"
    break;

  case 22: /* for_stmt: FOR LEFT SEMICOLON SEMICOLON RIGHT statement RIGHT  */
#line 166 "src/main.y"
                                                    { //000
        TreeNode* node=new TreeNode(yyvsp[-6]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-6]);
        node->addChild(yyvsp[-1]);
        yyval=node;

    }
#line 1769 "src/main.tab.cpp"
    break;

  case 23: /* for_stmt: FOR LEFT SEMICOLON or_expr SEMICOLON assign_expr RIGHT statement  */
#line 174 "src/main.y"
                                                                   { //011
        TreeNode* node=new TreeNode(yyvsp[-7]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-7]);
        node->addChild(yyvsp[-4]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1783 "src/main.tab.cpp"
    break;

  case 24: /* for_stmt: FOR LEFT assign_expr SEMICOLON SEMICOLON assign_expr RIGHT statement  */
#line 183 "src/main.y"
                                                                       { //101
        TreeNode* node=new TreeNode(yyvsp[-7]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-7]);
        node->addChild(yyvsp[-5]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1797 "src/main.tab.cpp"
    break;

  case 25: /* for_stmt: FOR LEFT assign_expr SEMICOLON or_expr SEMICOLON RIGHT statement  */
#line 192 "src/main.y"
                                                                   { //110
        TreeNode* node=new TreeNode(yyvsp[-7]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-7]);
        node->addChild(yyvsp[-5]);
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1811 "src/main.tab.cpp"
    break;

  case 26: /* for_stmt: FOR LEFT assign_expr SEMICOLON SEMICOLON RIGHT statement  */
#line 201 "src/main.y"
                                                           { //100
        TreeNode* node=new TreeNode(yyvsp[-6]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-6]);
        node->addChild(yyvsp[-4]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1824 "src/main.tab.cpp"
    break;

  case 27: /* for_stmt: FOR LEFT SEMICOLON or_expr SEMICOLON RIGHT statement  */
#line 209 "src/main.y"
                                                       { //010
        TreeNode* node=new TreeNode(yyvsp[-6]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-6]);
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1837 "src/main.tab.cpp"
    break;

  case 28: /* for_stmt: FOR LEFT SEMICOLON SEMICOLON assign_expr RIGHT statement  */
#line 217 "src/main.y"
                                                           { //001
        TreeNode* node=new TreeNode(yyvsp[-6]->lineno,NODE_STMT);
        node->stype=STMT_FOR;
        node->addChild(yyvsp[-6]);
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1850 "src/main.tab.cpp"
    break;

  case 29: /* scanf_stmt: SCANF LEFT STRING COMMA idlist RIGHT  */
#line 228 "src/main.y"
                                      {
        TreeNode* node=new TreeNode(yyvsp[-5]->lineno,NODE_STMT);
        node->stype=STMT_SCANF;
        node->addChild(yyvsp[-5]);
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-1]);
        yyval=node;
    }
#line 1863 "src/main.tab.cpp"
    break;

  case 30: /* scanf_stmt: SCANF LEFT STRING RIGHT  */
#line 236 "src/main.y"
                         {
        TreeNode* node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
        node->stype=STMT_SCANF;
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-1]);
        yyval=node;
    }
#line 1875 "src/main.tab.cpp"
    break;

  case 31: /* printf_stmt: PRINTF LEFT STRING COMMA idlist RIGHT  */
#line 246 "src/main.y"
                                       {
        TreeNode* node=new TreeNode(yyvsp[-5]->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild(yyvsp[-5]);
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-1]);
        yyval=node;
    }
#line 1888 "src/main.tab.cpp"
    break;

  case 32: /* printf_stmt: PRINTF LEFT STRING RIGHT  */
#line 254 "src/main.y"
                          {
        TreeNode* node=new TreeNode(yyvsp[-3]->lineno,NODE_STMT);
        node->stype=STMT_PRINTF;
        node->addChild(yyvsp[-3]);
        node->addChild(yyvsp[-1]);
        yyval=node;
    }
#line 1900 "src/main.tab.cpp"
    break;

  case 33: /* idlist: idlist COMMA IDENTIFIER  */
#line 264 "src/main.y"
                         {
        yyval=yyvsp[-2];
        yyval->addSibling(yyvsp[0]);
    }
#line 1909 "src/main.tab.cpp"
    break;

  case 34: /* idlist: idlist COMMA REFERENCE IDENTIFIER  */
#line 268 "src/main.y"
                                   {
        yyval=yyvsp[-3];
        yyval->addSibling(yyvsp[-1]);
        yyval->addSibling(yyvsp[0]);
    }
#line 1919 "src/main.tab.cpp"
    break;

  case 35: /* idlist: IDENTIFIER  */
#line 273 "src/main.y"
             {
        yyval=yyvsp[0];
    }
#line 1927 "src/main.tab.cpp"
    break;

  case 36: /* idlist: REFERENCE IDENTIFIER  */
#line 276 "src/main.y"
                      {
        yyval=yyvsp[-1];
        yyval->addSibling(yyvsp[0]);
    }
#line 1936 "src/main.tab.cpp"
    break;

  case 37: /* assign_expr: or_expr ASSIGNEQUAL assign_expr  */
#line 284 "src/main.y"
                                 {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1949 "src/main.tab.cpp"
    break;

  case 38: /* assign_expr: or_expr ADDEQUAL assign_expr  */
#line 292 "src/main.y"
                              {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1962 "src/main.tab.cpp"
    break;

  case 39: /* assign_expr: or_expr SUBEQUAL assign_expr  */
#line 300 "src/main.y"
                              {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1975 "src/main.tab.cpp"
    break;

  case 40: /* assign_expr: or_expr MULEQUAL assign_expr  */
#line 308 "src/main.y"
                              {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 1988 "src/main.tab.cpp"
    break;

  case 41: /* assign_expr: or_expr DIVEQUAL assign_expr  */
#line 316 "src/main.y"
                              {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_ASSIGN;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2001 "src/main.tab.cpp"
    break;

  case 42: /* assign_expr: or_expr  */
#line 324 "src/main.y"
          {yyval=yyvsp[0];}
#line 2007 "src/main.tab.cpp"
    break;

  case 43: /* bool_stmt: LEFT or_expr RIGHT  */
#line 328 "src/main.y"
                    {
        yyval=yyvsp[-1];
    }
#line 2015 "src/main.tab.cpp"
    break;

  case 44: /* or_expr: or_expr OR and_expr  */
#line 333 "src/main.y"
                     {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_OR;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2028 "src/main.tab.cpp"
    break;

  case 45: /* or_expr: and_expr  */
#line 341 "src/main.y"
          {
        yyval=yyvsp[0];
    }
#line 2036 "src/main.tab.cpp"
    break;

  case 46: /* and_expr: and_expr AND equal_expr  */
#line 347 "src/main.y"
                         {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_AND;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2049 "src/main.tab.cpp"
    break;

  case 47: /* and_expr: equal_expr  */
#line 355 "src/main.y"
            {
        yyval=yyvsp[0];
    }
#line 2057 "src/main.tab.cpp"
    break;

  case 48: /* equal_expr: equal_expr EQUAL relation_expr  */
#line 361 "src/main.y"
                                {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_EQUAL;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2070 "src/main.tab.cpp"
    break;

  case 49: /* equal_expr: equal_expr NOTEQUAL relation_expr  */
#line 369 "src/main.y"
                                   {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_EQUAL;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2083 "src/main.tab.cpp"
    break;

  case 50: /* equal_expr: relation_expr  */
#line 377 "src/main.y"
                {
        yyval=yyvsp[0];
    }
#line 2091 "src/main.tab.cpp"
    break;

  case 51: /* relation_expr: relation_expr GREAT add_expr  */
#line 383 "src/main.y"
                              {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_RELATION;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2104 "src/main.tab.cpp"
    break;

  case 52: /* relation_expr: relation_expr LESS add_expr  */
#line 391 "src/main.y"
                             {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_RELATION;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2117 "src/main.tab.cpp"
    break;

  case 53: /* relation_expr: relation_expr GREATEQUAL add_expr  */
#line 399 "src/main.y"
                                   {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_RELATION;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2130 "src/main.tab.cpp"
    break;

  case 54: /* relation_expr: relation_expr LESSEQUAL add_expr  */
#line 407 "src/main.y"
                                  {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_RELATION;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2143 "src/main.tab.cpp"
    break;

  case 55: /* relation_expr: add_expr  */
#line 415 "src/main.y"
          {
        yyval=yyvsp[0];
    }
#line 2151 "src/main.tab.cpp"
    break;

  case 56: /* add_expr: add_expr ADD mul_expr  */
#line 421 "src/main.y"
                       {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_ADD;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2164 "src/main.tab.cpp"
    break;

  case 57: /* add_expr: add_expr SUB mul_expr  */
#line 429 "src/main.y"
                       {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_ADD;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2177 "src/main.tab.cpp"
    break;

  case 58: /* add_expr: mul_expr  */
#line 437 "src/main.y"
          {
        yyval=yyvsp[0];
    }
#line 2185 "src/main.tab.cpp"
    break;

  case 59: /* mul_expr: mul_expr MUL unary_expr  */
#line 444 "src/main.y"
                         {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_MUL;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2198 "src/main.tab.cpp"
    break;

  case 60: /* mul_expr: mul_expr DIV unary_expr  */
#line 452 "src/main.y"
                         {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_MUL;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2211 "src/main.tab.cpp"
    break;

  case 61: /* mul_expr: mul_expr MOD unary_expr  */
#line 460 "src/main.y"
                         {
        TreeNode* node=new TreeNode(yyvsp[-2]->lineno,NODE_EXPR);
        node->etype=EXPR_MUL;
        node->addChild(yyvsp[-2]);
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2224 "src/main.tab.cpp"
    break;

  case 62: /* mul_expr: unary_expr  */
#line 468 "src/main.y"
            {
        yyval=yyvsp[0];
    }
#line 2232 "src/main.tab.cpp"
    break;

  case 63: /* unary_expr: SUB unary_expr  */
#line 474 "src/main.y"
                             {
        TreeNode* node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2244 "src/main.tab.cpp"
    break;

  case 64: /* unary_expr: ADD unary_expr  */
#line 481 "src/main.y"
                           {
        TreeNode* node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2256 "src/main.tab.cpp"
    break;

  case 65: /* unary_expr: NOT unary_expr  */
#line 488 "src/main.y"
                {
        TreeNode* node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2268 "src/main.tab.cpp"
    break;

  case 66: /* unary_expr: SELFADD unary_expr  */
#line 495 "src/main.y"
                                    {
        TreeNode* node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2280 "src/main.tab.cpp"
    break;

  case 67: /* unary_expr: SELFSUB unary_expr  */
#line 502 "src/main.y"
                                    {
        TreeNode* node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->etype=EXPR_UNARY;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2292 "src/main.tab.cpp"
    break;

  case 68: /* unary_expr: postfix_expr  */
#line 509 "src/main.y"
              {
        yyval=yyvsp[0];
    }
#line 2300 "src/main.tab.cpp"
    break;

  case 69: /* postfix_expr: postfix_expr SELFADD  */
#line 515 "src/main.y"
                      {
        TreeNode* node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->etype=EXPR_POSTFIX;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2312 "src/main.tab.cpp"
    break;

  case 70: /* postfix_expr: postfix_expr SELFSUB  */
#line 522 "src/main.y"
                      {
        TreeNode* node=new TreeNode(yyvsp[-1]->lineno,NODE_EXPR);
        node->etype=EXPR_POSTFIX;
        node->addChild(yyvsp[-1]);
        node->addChild(yyvsp[0]);
        yyval=node;
    }
#line 2324 "src/main.tab.cpp"
    break;

  case 71: /* postfix_expr: expr  */
#line 529 "src/main.y"
      {
        yyval=yyvsp[0];
    }
#line 2332 "src/main.tab.cpp"
    break;

  case 72: /* expr: LEFT add_expr RIGHT  */
#line 535 "src/main.y"
                     {
        yyval = yyvsp[-1];
    }
#line 2340 "src/main.tab.cpp"
    break;

  case 73: /* expr: IDENTIFIER  */
#line 538 "src/main.y"
             {
        yyval = yyvsp[0];
    }
#line 2348 "src/main.tab.cpp"
    break;

  case 74: /* expr: INTEGER  */
#line 541 "src/main.y"
          {
        yyval = yyvsp[0];
    }
#line 2356 "src/main.tab.cpp"
    break;

  case 75: /* expr: CHAR  */
#line 544 "src/main.y"
       {
        yyval = yyvsp[0];
    }
#line 2364 "src/main.tab.cpp"
    break;

  case 76: /* expr: STRING  */
#line 547 "src/main.y"
         {
        yyval = yyvsp[0];
    }
#line 2372 "src/main.tab.cpp"
    break;

  case 77: /* expr: BOOL  */
#line 550 "src/main.y"
       {
        yyval = yyvsp[0];
    }
#line 2380 "src/main.tab.cpp"
    break;

  case 78: /* T: T_INT  */
#line 555 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_INT;}
#line 2386 "src/main.tab.cpp"
    break;

  case 79: /* T: T_CHAR  */
#line 556 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_CHAR;}
#line 2392 "src/main.tab.cpp"
    break;

  case 80: /* T: T_BOOL  */
#line 557 "src/main.y"
         {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_BOOL;}
#line 2398 "src/main.tab.cpp"
    break;

  case 81: /* T: T_STRING  */
#line 558 "src/main.y"
           {yyval = new TreeNode(lineno, NODE_TYPE); yyval->type = TYPE_STRING;}
#line 2404 "src/main.tab.cpp"
    break;


#line 2408 "src/main.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 561 "src/main.y"


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
