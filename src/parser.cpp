/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include "common.h"
    #include "symtab.h"
    #include <iostream>
    #include <sstream>
    #include <vector>
    extern Ast *ast;
    int yylex();
    int yyerror( char const * );
    type *global_type;

#line 83 "parser.cpp"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_CONSTSTR = 5,                   /* CONSTSTR  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_VOID = 10,                      /* VOID  */
  YYSYMBOL_LPAREN = 11,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 12,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 13,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 14,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 15,                 /* SEMICOLON  */
  YYSYMBOL_LBRACKET = 16,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 17,                  /* RBRACKET  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_ADD = 19,                       /* ADD  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_EQUAL = 21,                     /* EQUAL  */
  YYSYMBOL_NOT = 22,                       /* NOT  */
  YYSYMBOL_MINUS = 23,                     /* MINUS  */
  YYSYMBOL_MUL = 24,                       /* MUL  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_MOD = 26,                       /* MOD  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_NOTEQUAL = 29,                  /* NOTEQUAL  */
  YYSYMBOL_LESS = 30,                      /* LESS  */
  YYSYMBOL_GREATER = 31,                   /* GREATER  */
  YYSYMBOL_LESSEQUAL = 32,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 33,              /* GREATEREQUAL  */
  YYSYMBOL_CONST = 34,                     /* CONST  */
  YYSYMBOL_RETURN = 35,                    /* RETURN  */
  YYSYMBOL_CONTINUE = 36,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 37,                     /* BREAK  */
  YYSYMBOL_THEN = 38,                      /* THEN  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_program = 41,                   /* program  */
  YYSYMBOL_Stmts = 42,                     /* Stmts  */
  YYSYMBOL_Stmt = 43,                      /* Stmt  */
  YYSYMBOL_AssignStmt = 44,                /* AssignStmt  */
  YYSYMBOL_ExprStmt = 45,                  /* ExprStmt  */
  YYSYMBOL_BlankStmt = 46,                 /* BlankStmt  */
  YYSYMBOL_BlockStmt = 47,                 /* BlockStmt  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_IfStmt = 49,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 50,                 /* WhileStmt  */
  YYSYMBOL_BreakStmt = 51,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 52,              /* ContinueStmt  */
  YYSYMBOL_ReturnStmt = 53,                /* ReturnStmt  */
  YYSYMBOL_Exp = 54,                       /* Exp  */
  YYSYMBOL_Cond = 55,                      /* Cond  */
  YYSYMBOL_LVal = 56,                      /* LVal  */
  YYSYMBOL_PrimaryExp = 57,                /* PrimaryExp  */
  YYSYMBOL_UnaryExp = 58,                  /* UnaryExp  */
  YYSYMBOL_MulExp = 59,                    /* MulExp  */
  YYSYMBOL_AddExp = 60,                    /* AddExp  */
  YYSYMBOL_RelExp = 61,                    /* RelExp  */
  YYSYMBOL_EqExp = 62,                     /* EqExp  */
  YYSYMBOL_LAndExp = 63,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 64,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 65,                  /* ConstExp  */
  YYSYMBOL_FuncRParams = 66,               /* FuncRParams  */
  YYSYMBOL_Type = 67,                      /* Type  */
  YYSYMBOL_Decl = 68,                      /* Decl  */
  YYSYMBOL_ConstDecl = 69,                 /* ConstDecl  */
  YYSYMBOL_70_2 = 70,                      /* $@2  */
  YYSYMBOL_ConstDefList = 71,              /* ConstDefList  */
  YYSYMBOL_ConstDef = 72,                  /* ConstDef  */
  YYSYMBOL_ConstInitVal = 73,              /* ConstInitVal  */
  YYSYMBOL_ConstInitValList = 74,          /* ConstInitValList  */
  YYSYMBOL_ArrayList = 75,                 /* ArrayList  */
  YYSYMBOL_VarDecl = 76,                   /* VarDecl  */
  YYSYMBOL_VarDefList = 77,                /* VarDefList  */
  YYSYMBOL_VarDef = 78,                    /* VarDef  */
  YYSYMBOL_InitVal = 79,                   /* InitVal  */
  YYSYMBOL_InitValList = 80,               /* InitValList  */
  YYSYMBOL_FuncDef = 81,                   /* FuncDef  */
  YYSYMBOL_82_3 = 82,                      /* $@3  */
  YYSYMBOL_OptFuncParams = 83,             /* OptFuncParams  */
  YYSYMBOL_FuncFParams = 84,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 85,                /* FuncFParam  */
  YYSYMBOL_FArrayList = 86                 /* FArrayList  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    34,    35,    36,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    53,    58,    63,
      68,    68,    72,    78,    81,    86,    91,    96,   101,   104,
     110,   114,   118,   123,   132,   133,   134,   135,   136,   152,
     177,   179,   181,   185,   191,   193,   198,   203,   210,   212,
     217,   224,   226,   231,   236,   241,   248,   250,   255,   262,
     264,   271,   273,   280,   286,   288,   294,   297,   303,   305,
     309,   309,   315,   317,   325,   345,   384,   386,   391,   398,
     404,   413,   415,   422,   428,   433,   439,   448,   471,   486,
     522,   524,   529,   536,   542,   552,   552,   589,   590,   594,
     602,   606,   616,   643,   648
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INTEGER",
  "CONSTSTR", "IF", "ELSE", "WHILE", "INT", "VOID", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "SEMICOLON", "LBRACKET", "RBRACKET", "COMMA", "ADD",
  "ASSIGN", "EQUAL", "NOT", "MINUS", "MUL", "DIV", "MOD", "OR", "AND",
  "NOTEQUAL", "LESS", "GREATER", "LESSEQUAL", "GREATEREQUAL", "CONST",
  "RETURN", "CONTINUE", "BREAK", "THEN", "';'", "$accept", "program",
  "Stmts", "Stmt", "AssignStmt", "ExprStmt", "BlankStmt", "BlockStmt",
  "$@1", "IfStmt", "WhileStmt", "BreakStmt", "ContinueStmt", "ReturnStmt",
  "Exp", "Cond", "LVal", "PrimaryExp", "UnaryExp", "MulExp", "AddExp",
  "RelExp", "EqExp", "LAndExp", "LOrExp", "ConstExp", "FuncRParams",
  "Type", "Decl", "ConstDecl", "$@2", "ConstDefList", "ConstDef",
  "ConstInitVal", "ConstInitValList", "ArrayList", "VarDecl", "VarDefList",
  "VarDef", "InitVal", "InitValList", "FuncDef", "$@3", "OptFuncParams",
  "FuncFParams", "FuncFParam", "FArrayList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     196,    16,  -139,  -139,    21,    34,  -139,  -139,   264,    82,
    -139,   264,   264,   264,    38,    20,    94,   102,   119,   120,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
     107,    24,  -139,  -139,   122,    35,   124,  -139,  -139,  -139,
    -139,   217,   264,   264,   126,   116,  -139,   196,  -139,  -139,
    -139,  -139,  -139,   121,  -139,  -139,  -139,    95,  -139,  -139,
     264,   264,   264,   264,   264,   264,   264,    30,    86,  -139,
    -139,  -139,     4,   128,    35,    75,   -17,   113,   117,   137,
    -139,   161,   149,  -139,  -139,   141,   144,  -139,  -139,  -139,
     122,   122,   264,   238,    56,   150,  -139,   157,  -139,   264,
     196,   264,   264,   264,   264,   264,   264,   264,   264,   196,
    -139,    57,    98,  -139,  -139,  -139,    35,   146,    15,  -139,
    -139,   264,   238,    38,    58,  -139,  -139,   166,    35,    35,
      35,    35,    75,    75,   -17,   113,  -139,   243,    66,  -139,
     149,  -139,  -139,  -139,    74,   160,  -139,   175,   167,   163,
    -139,   196,    76,  -139,  -139,   243,  -139,  -139,   238,  -139,
     169,   173,    38,  -139,  -139,  -139,    79,  -139,  -139,   165,
     171,  -139,  -139,  -139,   243,  -139,   264,  -139,   172,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    32,    36,    37,     0,     0,    66,    67,     0,    20,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    35,    40,    44,    48,    30,     0,    15,    68,    69,
      16,     0,     0,     0,     0,    35,    22,     0,    41,    42,
      43,    70,    28,     0,    27,    26,     1,     0,     4,    18,
       0,     0,     0,     0,     0,     0,     0,    86,     0,    85,
      39,    64,     0,     0,    51,    56,    59,    61,    31,     0,
      34,     0,     0,    29,     5,     0,     0,    45,    46,    47,
      49,    50,     0,     0,    87,     0,    83,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    72,    33,    17,    63,     0,     0,    90,
      88,     0,     0,    98,    86,    84,    65,    23,    52,    53,
      54,    55,    57,    58,    60,    62,    25,     0,     0,    71,
       0,    81,    91,    93,     0,     0,    89,     0,     0,    97,
     100,     0,     0,    76,    74,     0,    73,    92,     0,    82,
     101,     0,     0,    24,    77,    79,     0,    75,    94,     0,
     102,    96,    99,    78,     0,   103,     0,    80,     0,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,   143,    -6,  -139,  -139,  -139,    27,  -139,  -139,
    -139,  -139,  -139,  -139,    -8,   148,     2,  -139,    -3,    -9,
     -37,   -43,    85,   100,  -139,   -91,  -139,   -11,  -139,  -139,
    -139,  -139,    53,  -138,  -139,    83,  -139,  -139,   106,  -107,
    -139,  -139,  -139,  -139,  -139,    48,  -139
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    18,    19,    20,    21,    22,    23,    24,    47,    25,
      26,    27,    28,    29,    30,    73,    45,    32,    33,    34,
      35,    75,    76,    77,    78,   153,    72,    36,    37,    38,
      82,   112,   113,   154,   166,    94,    39,    68,    69,   120,
     144,    40,    95,   148,   149,   150,   170
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   117,    31,    51,   105,    74,    74,    53,    48,    49,
      50,   143,   106,    58,   165,   146,    98,   167,     1,     2,
       3,    31,    99,     1,     2,     3,     8,    41,   118,   142,
     145,     8,    42,    71,    11,    52,   177,    12,    13,    11,
      60,   -95,    12,    13,    61,    43,    92,     6,     7,    31,
      93,   168,    85,    86,    65,   116,    90,    91,    66,    87,
      88,    89,   132,   133,   128,   129,   130,   131,    74,    74,
      74,    74,   121,    92,    92,    58,   122,   137,    93,     1,
       2,     3,   121,    31,   116,   119,   155,     8,   157,   152,
     164,   126,   158,   173,   127,    11,    46,   174,    12,    13,
     116,    96,    31,   136,    97,   101,   102,   103,   104,    54,
     119,    31,   147,   139,   119,   116,   140,    55,   116,    56,
      -2,    57,    59,     1,     2,     3,     4,    67,     5,     6,
       7,     8,    60,     9,    84,    10,    83,   116,    80,    11,
     100,   107,    12,    13,   108,   163,    62,    63,    64,   109,
     119,   147,   111,    31,    14,    15,    16,    17,   114,   115,
     124,   123,    57,   141,     1,     2,     3,     4,   178,     5,
       6,     7,     8,   151,     9,   110,    10,   159,   160,   161,
      11,   162,   175,    12,    13,   169,     9,   176,   171,   179,
      81,    79,   134,   156,   138,    14,    15,    16,    17,     1,
       2,     3,     4,   125,     5,     6,     7,     8,   135,     9,
     172,    10,     0,     0,     0,    11,     0,     0,    12,    13,
       1,     2,     3,     0,     0,     0,     0,     0,     8,    70,
      14,    15,    16,    17,     0,     0,    11,     0,     0,    12,
      13,     1,     2,     3,     0,     0,     1,     2,     3,     8,
       0,   118,     0,     0,     8,     0,   152,    11,     0,     0,
      12,    13,    11,     0,     0,    12,    13,     1,     2,     3,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,    12,    13
};

static const yytype_int16 yycheck[] =
{
       8,    92,     0,    14,    21,    42,    43,    15,    11,    12,
      13,   118,    29,    19,   152,   122,    12,   155,     3,     4,
       5,    19,    18,     3,     4,     5,    11,    11,    13,    14,
     121,    11,    11,    41,    19,    15,   174,    22,    23,    19,
      16,    11,    22,    23,    20,    11,    16,     9,    10,    47,
      20,   158,    60,    61,    19,    92,    65,    66,    23,    62,
      63,    64,   105,   106,   101,   102,   103,   104,   105,   106,
     107,   108,    16,    16,    16,    81,    20,    20,    20,     3,
       4,     5,    16,    81,   121,    93,    20,    11,    14,    13,
      14,    99,    18,    14,   100,    19,    14,    18,    22,    23,
     137,    15,   100,   109,    18,    30,    31,    32,    33,    15,
     118,   109,   123,    15,   122,   152,    18,    15,   155,     0,
       0,     1,    15,     3,     4,     5,     6,     3,     8,     9,
      10,    11,    16,    13,    39,    15,    15,   174,    12,    19,
      12,    28,    22,    23,    27,   151,    24,    25,    26,    12,
     158,   162,     3,   151,    34,    35,    36,    37,    17,    15,
       3,    11,     1,    17,     3,     4,     5,     6,   176,     8,
       9,    10,    11,     7,    13,    14,    15,    17,     3,    12,
      19,    18,    17,    22,    23,    16,    13,    16,   161,    17,
      47,    43,   107,   140,   111,    34,    35,    36,    37,     3,
       4,     5,     6,    97,     8,     9,    10,    11,   108,    13,
     162,    15,    -1,    -1,    -1,    19,    -1,    -1,    22,    23,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      34,    35,    36,    37,    -1,    -1,    19,    -1,    -1,    22,
      23,     3,     4,     5,    -1,    -1,     3,     4,     5,    11,
      -1,    13,    -1,    -1,    11,    -1,    13,    19,    -1,    -1,
      22,    23,    19,    -1,    -1,    22,    23,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    22,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    11,    13,
      15,    19,    22,    23,    34,    35,    36,    37,    41,    42,
      43,    44,    45,    46,    47,    49,    50,    51,    52,    53,
      54,    56,    57,    58,    59,    60,    67,    68,    69,    76,
      81,    11,    11,    11,    54,    56,    14,    48,    58,    58,
      58,    67,    15,    54,    15,    15,     0,     1,    43,    15,
      16,    20,    24,    25,    26,    19,    23,     3,    77,    78,
      12,    54,    66,    55,    60,    61,    62,    63,    64,    55,
      12,    42,    70,    15,    39,    54,    54,    58,    58,    58,
      59,    59,    16,    20,    75,    82,    15,    18,    12,    18,
      12,    30,    31,    32,    33,    21,    29,    28,    27,    12,
      14,     3,    71,    72,    17,    15,    60,    65,    13,    54,
      79,    16,    20,    11,     3,    78,    54,    43,    60,    60,
      60,    60,    61,    61,    62,    63,    43,    20,    75,    15,
      18,    17,    14,    79,    80,    65,    79,    67,    83,    84,
      85,     7,    13,    65,    73,    20,    72,    14,    18,    17,
       3,    12,    18,    43,    14,    73,    74,    73,    79,    16,
      86,    47,    85,    14,    18,    17,    16,    73,    54,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    42,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    44,    45,    46,
      48,    47,    47,    49,    49,    50,    51,    52,    53,    53,
      54,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    59,    59,    59,    59,    60,    60,
      60,    61,    61,    61,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    65,    66,    66,    67,    67,    68,    68,
      70,    69,    71,    71,    72,    72,    73,    73,    73,    74,
      74,    75,    75,    76,    77,    77,    78,    78,    78,    78,
      79,    79,    79,    80,    80,    82,    81,    83,    83,    84,
      84,    85,    85,    86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     1,
       0,     4,     2,     5,     7,     5,     2,     2,     2,     3,
       1,     1,     1,     4,     3,     1,     1,     1,     4,     3,
       1,     2,     2,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     1,     3,     1,     1,     1,     1,
       0,     5,     1,     3,     3,     4,     1,     2,     3,     1,
       3,     3,     4,     3,     3,     1,     1,     2,     3,     4,
       1,     2,     3,     1,     3,     0,     7,     1,     0,     3,
       1,     2,     3,     2,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* program: Stmts  */
#line 29 "parser.y"
            {
        ast->NewRoot(NODE_PROG,-1,yyvsp[0]->sym_ptr, yyvsp[0]);
    }
#line 1575 "parser.cpp"
    break;

  case 3: /* Stmts: Stmt  */
#line 34 "parser.y"
           {yyval=yyvsp[0];}
#line 1581 "parser.cpp"
    break;

  case 4: /* Stmts: Stmts Stmt  */
#line 35 "parser.y"
                {yyval=yyvsp[-1];yyval->addSibling(yyvsp[0]);}
#line 1587 "parser.cpp"
    break;

  case 5: /* Stmts: Stmts error ';'  */
#line 36 "parser.y"
                      { yyerrok; }
#line 1593 "parser.cpp"
    break;

  case 6: /* Stmt: AssignStmt  */
#line 39 "parser.y"
                 {yyval=yyvsp[0];}
#line 1599 "parser.cpp"
    break;

  case 7: /* Stmt: ExprStmt  */
#line 40 "parser.y"
               {yyval=yyvsp[0];}
#line 1605 "parser.cpp"
    break;

  case 8: /* Stmt: BlankStmt  */
#line 41 "parser.y"
                {yyval=yyvsp[0];}
#line 1611 "parser.cpp"
    break;

  case 9: /* Stmt: BlockStmt  */
#line 42 "parser.y"
                {yyval=yyvsp[0];}
#line 1617 "parser.cpp"
    break;

  case 10: /* Stmt: IfStmt  */
#line 43 "parser.y"
             {yyval=yyvsp[0];}
#line 1623 "parser.cpp"
    break;

  case 11: /* Stmt: WhileStmt  */
#line 44 "parser.y"
                {yyval=yyvsp[0];}
#line 1629 "parser.cpp"
    break;

  case 12: /* Stmt: BreakStmt  */
#line 45 "parser.y"
                {yyval=yyvsp[0];}
#line 1635 "parser.cpp"
    break;

  case 13: /* Stmt: ContinueStmt  */
#line 46 "parser.y"
                   {yyval=yyvsp[0];}
#line 1641 "parser.cpp"
    break;

  case 14: /* Stmt: ReturnStmt  */
#line 47 "parser.y"
                 {yyval=yyvsp[0];}
#line 1647 "parser.cpp"
    break;

  case 15: /* Stmt: Decl  */
#line 48 "parser.y"
           {yyval=yyvsp[0];}
#line 1653 "parser.cpp"
    break;

  case 16: /* Stmt: FuncDef  */
#line 49 "parser.y"
              {yyval=yyvsp[0];}
#line 1659 "parser.cpp"
    break;

  case 17: /* AssignStmt: LVal ASSIGN Exp SEMICOLON  */
#line 53 "parser.y"
                              {
        yyval = ast->NewRoot(NODE_STMT,STMT_ASSIGN, yyvsp[-3]->sym_ptr, yyvsp[-3], yyvsp[-1]);
    }
#line 1667 "parser.cpp"
    break;

  case 18: /* ExprStmt: Exp SEMICOLON  */
#line 58 "parser.y"
                    {
        yyval = ast->NewRoot(NODE_STMT,STMT_EXPR, yyvsp[-1]->sym_ptr, yyvsp[-1]);
    }
#line 1675 "parser.cpp"
    break;

  case 19: /* BlankStmt: SEMICOLON  */
#line 63 "parser.y"
                {
        yyval = ast->NewRoot(NODE_STMT,STMT_BLANK);
    }
#line 1683 "parser.cpp"
    break;

  case 20: /* $@1: %empty  */
#line 68 "parser.y"
             {symbol_table::enter_scope();}
#line 1689 "parser.cpp"
    break;

  case 21: /* BlockStmt: LBRACE $@1 Stmts RBRACE  */
#line 68 "parser.y"
                                                         {
        yyval = ast->NewRoot(NODE_STMT,STMT_COMPOUND,NULL,yyvsp[-1]);
        symbol_table::leave_scope();
    }
#line 1698 "parser.cpp"
    break;

  case 22: /* BlockStmt: LBRACE RBRACE  */
#line 73 "parser.y"
    {
        yyval = ast->NewRoot(NODE_STMT,STMT_COMPOUND);
    }
#line 1706 "parser.cpp"
    break;

  case 23: /* IfStmt: IF LPAREN Cond RPAREN Stmt  */
#line 78 "parser.y"
                                            {
        yyval = ast->NewRoot(NODE_STMT,STMT_IF,yyvsp[-2]->sym_ptr,yyvsp[-2],yyvsp[0]);
    }
#line 1714 "parser.cpp"
    break;

  case 24: /* IfStmt: IF LPAREN Cond RPAREN Stmt ELSE Stmt  */
#line 81 "parser.y"
                                           {
        yyval = ast->NewRoot(NODE_STMT,STMT_IF,yyvsp[-4]->sym_ptr,yyvsp[-4],yyvsp[-2],yyvsp[0]);
    }
#line 1722 "parser.cpp"
    break;

  case 25: /* WhileStmt: WHILE LPAREN Cond RPAREN Stmt  */
#line 86 "parser.y"
                                    {
        yyval = ast->NewRoot(NODE_STMT,STMT_WHILE,yyvsp[-2]->sym_ptr,yyvsp[-2],yyvsp[0]);
    }
#line 1730 "parser.cpp"
    break;

  case 26: /* BreakStmt: BREAK SEMICOLON  */
#line 91 "parser.y"
                      {
        yyval = ast->NewRoot(NODE_STMT,STMT_BREAK);
    }
#line 1738 "parser.cpp"
    break;

  case 27: /* ContinueStmt: CONTINUE SEMICOLON  */
#line 96 "parser.y"
                         {
        yyval = ast->NewRoot(NODE_STMT,STMT_CONTINUE);
    }
#line 1746 "parser.cpp"
    break;

  case 28: /* ReturnStmt: RETURN SEMICOLON  */
#line 101 "parser.y"
                       {
        yyval = ast->NewRoot(NODE_STMT,STMT_RETURN);
    }
#line 1754 "parser.cpp"
    break;

  case 29: /* ReturnStmt: RETURN Exp SEMICOLON  */
#line 104 "parser.y"
                          {
        yyval = ast->NewRoot(NODE_STMT,STMT_RETURN,yyvsp[-1]->sym_ptr, yyvsp[-1]);
    }
#line 1762 "parser.cpp"
    break;

  case 30: /* Exp: AddExp  */
#line 110 "parser.y"
           {yyval = yyvsp[0];}
#line 1768 "parser.cpp"
    break;

  case 31: /* Cond: LOrExp  */
#line 114 "parser.y"
           {yyval = yyvsp[0];}
#line 1774 "parser.cpp"
    break;

  case 32: /* LVal: ID  */
#line 118 "parser.y"
       {
        symbol_entry *t;
        t = identifiers->lookup(yyvsp[0]->sym_ptr->name);
        yyval = ast->NewRoot(NODE_EXPR, -1, t);
        }
#line 1784 "parser.cpp"
    break;

  case 33: /* LVal: LVal LBRACKET Exp RBRACKET  */
#line 123 "parser.y"
                                 {
        yyval = ast->NewRoot(NODE_EXPR,OP_ARRAY, NULL, yyvsp[-3], yyvsp[-1]);
        yyval->sym_ptr = symbol_table::gen_temp(typesys.int_type);
        yyval->sym_ptr->tp = yyvsp[-3]->sym_ptr->tp->operand;
        yyval->sym_ptr->array_value = yyvsp[-3]->sym_ptr->array_value;
    }
#line 1795 "parser.cpp"
    break;

  case 34: /* PrimaryExp: LPAREN Exp RPAREN  */
#line 132 "parser.y"
                      {yyval = yyvsp[-1];}
#line 1801 "parser.cpp"
    break;

  case 35: /* PrimaryExp: LVal  */
#line 133 "parser.y"
           {yyval = yyvsp[0];}
#line 1807 "parser.cpp"
    break;

  case 36: /* PrimaryExp: INTEGER  */
#line 134 "parser.y"
              {yyval = yyvsp[0];}
#line 1813 "parser.cpp"
    break;

  case 37: /* PrimaryExp: CONSTSTR  */
#line 135 "parser.y"
               {yyval = yyvsp[0];}
#line 1819 "parser.cpp"
    break;

  case 38: /* PrimaryExp: ID LPAREN FuncRParams RPAREN  */
#line 136 "parser.y"
                                   {
        symbol_entry *t;
        t = functions->lookup(yyvsp[-3]->sym_ptr->name);
        if(t == NULL)
        {
            t = functions->install(yyvsp[-3]->sym_ptr->name);
            t->undefined = true;
            t->tp = typesys.int_type;
            t->tp = typesys.func(t->tp, NULL);
        }
        yyval = ast->NewRoot(NODE_EXPR,OP_FUNC, NULL, yyvsp[-1]);
        yyval->sym_ptr = symbol_table::gen_temp(typesys.int_type);
        yyval->sym_ptr->tp = t->tp->operand;
        yyval->sym_ptr->undefined = t->undefined;
        yyval->sym_ptr->name = yyvsp[-3]->sym_ptr->name;
    }
#line 1840 "parser.cpp"
    break;

  case 39: /* PrimaryExp: ID LPAREN RPAREN  */
#line 152 "parser.y"
                       {
        symbol_entry *t;
        t = functions->lookup(yyvsp[-2]->sym_ptr->name);
        Node *c = NULL;
        if(t == NULL)
        {
            t = functions->install(yyvsp[-2]->sym_ptr->name);
            t->undefined = true;
            t->tp = typesys.int_type;
            t->tp = typesys.func(t->tp, NULL);
        }
        if(yyvsp[-2]->sym_ptr->name == "_sysy_starttime" || yyvsp[-2]->sym_ptr->name == "_sysy_stoptime")
        {
            c = ast->NewRoot(NODE_EXPR, -1);
            c->sym_ptr = constants->find_constant(0);
        }
        yyval = ast->NewRoot(NODE_EXPR,OP_FUNC, NULL, c);
        yyval->sym_ptr = symbol_table::gen_temp(typesys.int_type);
        yyval->sym_ptr->tp = t->tp->operand;
        yyval->sym_ptr->undefined = t->undefined;
        yyval->sym_ptr->name = yyvsp[-2]->sym_ptr->name;
    }
#line 1867 "parser.cpp"
    break;

  case 40: /* UnaryExp: PrimaryExp  */
#line 177 "parser.y"
               {yyval = yyvsp[0];}
#line 1873 "parser.cpp"
    break;

  case 41: /* UnaryExp: ADD UnaryExp  */
#line 179 "parser.y"
                {yyval = yyvsp[0];}
#line 1879 "parser.cpp"
    break;

  case 42: /* UnaryExp: NOT UnaryExp  */
#line 181 "parser.y"
                 {
        yyval = ast->NewRoot(NODE_EXPR,OP_NOT, NULL, yyvsp[0]);
    }
#line 1887 "parser.cpp"
    break;

  case 43: /* UnaryExp: MINUS UnaryExp  */
#line 185 "parser.y"
                  {
        yyval = ast->NewRoot(NODE_EXPR,OP_UMINUS, NULL, yyvsp[0]);
    }
#line 1895 "parser.cpp"
    break;

  case 44: /* MulExp: UnaryExp  */
#line 191 "parser.y"
             {yyval = yyvsp[0];}
#line 1901 "parser.cpp"
    break;

  case 45: /* MulExp: MulExp MUL UnaryExp  */
#line 194 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR,OP_MUL, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1909 "parser.cpp"
    break;

  case 46: /* MulExp: MulExp DIV UnaryExp  */
#line 199 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR,OP_DIV, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1917 "parser.cpp"
    break;

  case 47: /* MulExp: MulExp MOD UnaryExp  */
#line 204 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR,OP_MOD, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1925 "parser.cpp"
    break;

  case 48: /* AddExp: MulExp  */
#line 210 "parser.y"
           {yyval = yyvsp[0];}
#line 1931 "parser.cpp"
    break;

  case 49: /* AddExp: AddExp ADD MulExp  */
#line 213 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_ADD, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1939 "parser.cpp"
    break;

  case 50: /* AddExp: AddExp MINUS MulExp  */
#line 218 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_MINUS, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1947 "parser.cpp"
    break;

  case 51: /* RelExp: AddExp  */
#line 224 "parser.y"
           {yyval = yyvsp[0];}
#line 1953 "parser.cpp"
    break;

  case 52: /* RelExp: RelExp LESS AddExp  */
#line 227 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_L, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1961 "parser.cpp"
    break;

  case 53: /* RelExp: RelExp GREATER AddExp  */
#line 232 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_G, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1969 "parser.cpp"
    break;

  case 54: /* RelExp: RelExp LESSEQUAL AddExp  */
#line 237 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_LE, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1977 "parser.cpp"
    break;

  case 55: /* RelExp: RelExp GREATEREQUAL AddExp  */
#line 242 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_GE, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1985 "parser.cpp"
    break;

  case 56: /* EqExp: RelExp  */
#line 248 "parser.y"
           {yyval=yyvsp[0];}
#line 1991 "parser.cpp"
    break;

  case 57: /* EqExp: EqExp EQUAL RelExp  */
#line 251 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_E, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 1999 "parser.cpp"
    break;

  case 58: /* EqExp: EqExp NOTEQUAL RelExp  */
#line 256 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_NE, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 2007 "parser.cpp"
    break;

  case 59: /* LAndExp: EqExp  */
#line 262 "parser.y"
          {yyval = yyvsp[0];}
#line 2013 "parser.cpp"
    break;

  case 60: /* LAndExp: LAndExp AND EqExp  */
#line 265 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_AND, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 2021 "parser.cpp"
    break;

  case 61: /* LOrExp: LAndExp  */
#line 271 "parser.y"
            {yyval = yyvsp[0];}
#line 2027 "parser.cpp"
    break;

  case 62: /* LOrExp: LOrExp OR LAndExp  */
#line 274 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, OP_OR, NULL, yyvsp[-2], yyvsp[0]);
    }
#line 2035 "parser.cpp"
    break;

  case 63: /* ConstExp: AddExp  */
#line 280 "parser.y"
           {
        yyval = yyvsp[0];
        }
#line 2043 "parser.cpp"
    break;

  case 64: /* FuncRParams: Exp  */
#line 286 "parser.y"
        {yyval = yyvsp[0];}
#line 2049 "parser.cpp"
    break;

  case 65: /* FuncRParams: FuncRParams COMMA Exp  */
#line 288 "parser.y"
                          {
        yyval = yyvsp[-2];
        yyval->addSibling(yyvsp[0]);
    }
#line 2058 "parser.cpp"
    break;

  case 66: /* Type: INT  */
#line 294 "parser.y"
          {
        global_type = typesys.int_type;
    }
#line 2066 "parser.cpp"
    break;

  case 67: /* Type: VOID  */
#line 297 "parser.y"
           {
        global_type = typesys.void_type;
    }
#line 2074 "parser.cpp"
    break;

  case 68: /* Decl: ConstDecl  */
#line 303 "parser.y"
              {yyval=yyvsp[0];}
#line 2080 "parser.cpp"
    break;

  case 69: /* Decl: VarDecl  */
#line 305 "parser.y"
            {yyval=yyvsp[0];}
#line 2086 "parser.cpp"
    break;

  case 70: /* $@2: %empty  */
#line 309 "parser.y"
               {global_type = typesys.qual(global_type);}
#line 2092 "parser.cpp"
    break;

  case 71: /* ConstDecl: CONST Type $@2 ConstDefList SEMICOLON  */
#line 309 "parser.y"
                                                                                 {
        yyval = yyvsp[-1];
    }
#line 2100 "parser.cpp"
    break;

  case 72: /* ConstDefList: ConstDef  */
#line 315 "parser.y"
            {yyval=yyvsp[0];}
#line 2106 "parser.cpp"
    break;

  case 73: /* ConstDefList: ConstDefList COMMA ConstDef  */
#line 318 "parser.y"
    {
        yyval=yyvsp[-2];
        yyval->addSibling(yyvsp[0]);
    }
#line 2115 "parser.cpp"
    break;

  case 74: /* ConstDef: ID ASSIGN ConstInitVal  */
#line 325 "parser.y"
                           {
        symbol_entry *se;
        if(symbol_table::level > identifiers->table_level)
            identifiers = identifiers->new_table(symbol_table::level);
        se = identifiers->install(yyvsp[-2]->sym_ptr->name);
        se->tp = global_type;
        se->constant = Ast::get_constExpVal(yyvsp[0]);
        if(se->scope > GLOBAL)
        {
            se->label = symbol_table::gen_label(1);
            ostringstream os;
            os << se->name << "." << se->label;
            symbol_entry *t = globals->install(os.str());
            t->tp = se->tp;
            t->constant = se->constant;
        }

        yyval = ast->NewRoot(NODE_DECL,-1, se);
    }
#line 2139 "parser.cpp"
    break;

  case 75: /* ConstDef: ID ArrayList ASSIGN ConstInitVal  */
#line 345 "parser.y"
                                     {
        symbol_entry *se;
        if(symbol_table::level > identifiers->table_level)
            identifiers = identifiers->new_table(symbol_table::level);
        se = identifiers->install(yyvsp[-3]->sym_ptr->name);
        se->tp = global_type;
        vector<int> s;
        Node *p = yyvsp[-2];
        while(p)
        {
            s.push_back(Ast::get_constExpVal(p));
            p = p->sibling;
        }
        while(!s.empty())
        {
            int dim = s.back();
            s.pop_back();
            se->tp = typesys.array(se->tp, dim);
        }
        se->array_value = new int[se->tp->size / se->tp->align];
        memset(se->array_value, 0, se->tp->size);
        yyvsp[0]->sym_ptr->tp = se->tp;
        yyvsp[0]->sym_ptr->array_value = se->array_value;
        Ast::set_initVal(yyvsp[0],0);
        if(se->scope > GLOBAL)
        {
            se->label = symbol_table::gen_label(1);
            ostringstream os;
            os << se->name << "." << se->label;
            symbol_entry *t = globals->install(os.str());
            t->tp = se->tp;
            t->array_value = se->array_value;
        }

        yyval = ast->NewRoot(NODE_DECL,-1, se);
    }
#line 2180 "parser.cpp"
    break;

  case 76: /* ConstInitVal: ConstExp  */
#line 384 "parser.y"
             {yyval=yyvsp[0];}
#line 2186 "parser.cpp"
    break;

  case 77: /* ConstInitVal: LBRACE RBRACE  */
#line 386 "parser.y"
                  {
        yyval = ast->NewRoot(NODE_EXPR,OP_INITLIST);
        yyval->sym_ptr = new symbol_entry;
    }
#line 2195 "parser.cpp"
    break;

  case 78: /* ConstInitVal: LBRACE ConstInitValList RBRACE  */
#line 391 "parser.y"
                                   {
        yyval = ast->NewRoot(NODE_EXPR,OP_INITLIST, NULL, yyvsp[-1]);
        yyval->sym_ptr = new symbol_entry;
    }
#line 2204 "parser.cpp"
    break;

  case 79: /* ConstInitValList: ConstInitVal  */
#line 398 "parser.y"
                 {
        if(yyvsp[0]->kind_kind != OP_INITLIST)
            yyvsp[0] = ast->NewRoot(NODE_EXPR,-1, symbol_table::gen_temp(typesys.int_type), yyvsp[0]);
        yyval=yyvsp[0];
    }
#line 2214 "parser.cpp"
    break;

  case 80: /* ConstInitValList: ConstInitValList COMMA ConstInitVal  */
#line 404 "parser.y"
                                        {
        yyval = yyvsp[-2];
        if(yyvsp[0]->kind_kind != OP_INITLIST)
            yyvsp[0] = ast->NewRoot(NODE_EXPR,-1, symbol_table::gen_temp(typesys.int_type), yyvsp[0]);
        yyval->addSibling(yyvsp[0]);
    }
#line 2225 "parser.cpp"
    break;

  case 81: /* ArrayList: LBRACKET ConstExp RBRACKET  */
#line 413 "parser.y"
                               {yyval = yyvsp[-1];}
#line 2231 "parser.cpp"
    break;

  case 82: /* ArrayList: ArrayList LBRACKET ConstExp RBRACKET  */
#line 415 "parser.y"
                                         {
        yyval = yyvsp[-3];
        yyval->addSibling(yyvsp[-1]);
    }
#line 2240 "parser.cpp"
    break;

  case 83: /* VarDecl: Type VarDefList SEMICOLON  */
#line 422 "parser.y"
                              {
        yyval = yyvsp[-1];
    }
#line 2248 "parser.cpp"
    break;

  case 84: /* VarDefList: VarDefList COMMA VarDef  */
#line 428 "parser.y"
                            {
        yyval = yyvsp[-2];
        yyval->addSibling(yyvsp[0]);
    }
#line 2257 "parser.cpp"
    break;

  case 85: /* VarDefList: VarDef  */
#line 433 "parser.y"
          {
        yyval = yyvsp[0];
    }
#line 2265 "parser.cpp"
    break;

  case 86: /* VarDef: ID  */
#line 439 "parser.y"
       {
        symbol_entry *se;
        if(symbol_table::level > identifiers->table_level)
            identifiers = identifiers->new_table(symbol_table::level);
        se = identifiers->install(yyvsp[0]->sym_ptr->name);
        se->tp = global_type;
        yyval = ast->NewRoot(NODE_DECL,-1, se);
    }
#line 2278 "parser.cpp"
    break;

  case 87: /* VarDef: ID ArrayList  */
#line 448 "parser.y"
                 {
        symbol_entry *se;
        if(symbol_table::level > identifiers->table_level)
            identifiers = identifiers->new_table(symbol_table::level);
        se = identifiers->install(yyvsp[-1]->sym_ptr->name);
        se->tp = global_type;

        vector<int> s;
        Node *p = yyvsp[0];
        while(p)
        {
            s.push_back(Ast::get_constExpVal(p));
            p = p->sibling;
        }
        while(!s.empty())
        {
            int dim = s.back();
            s.pop_back();
            se->tp = typesys.array(se->tp, dim);
        }
        yyval = ast->NewRoot(NODE_DECL,-1, se);
    }
#line 2305 "parser.cpp"
    break;

  case 88: /* VarDef: ID ASSIGN InitVal  */
#line 471 "parser.y"
                      {
        symbol_entry *se;
        if(symbol_table::level > identifiers->table_level)
            identifiers = identifiers->new_table(symbol_table::level);
        se = identifiers->install(yyvsp[-2]->sym_ptr->name);
        se->tp = global_type;
        if(se->scope == GLOBAL)
        {
            se->constant = Ast::get_constExpVal(yyvsp[0]);
            yyval = ast->NewRoot(NODE_DECL,-1, se);
        }
        else 
            yyval = ast->NewRoot(NODE_DECL,-1, se, yyvsp[0]);
    }
#line 2324 "parser.cpp"
    break;

  case 89: /* VarDef: ID ArrayList ASSIGN InitVal  */
#line 486 "parser.y"
                                {
        symbol_entry *se;
        if(symbol_table::level > identifiers->table_level)
            identifiers = identifiers->new_table(symbol_table::level);
        se = identifiers->install(yyvsp[-3]->sym_ptr->name);
        se->tp = global_type;

        vector<int> s;
        Node *p = yyvsp[-2];
        while(p)
        {
            s.push_back(Ast::get_constExpVal(p));
            p = p->sibling;
        }
        while(!s.empty())
        {
            int dim = s.back();
            s.pop_back();
            se->tp = typesys.array(se->tp, dim);
        }
        yyvsp[0]->sym_ptr->tp = se->tp;
        if(se->scope == GLOBAL)
        {
            se->array_value = new int[se->tp->size / se->tp->align];
            memset(se->array_value, 0, se->tp->size);
            yyvsp[0]->sym_ptr->tp = se->tp;
            yyvsp[0]->sym_ptr->array_value = se->array_value;
            Ast::set_initVal(yyvsp[0],0);
            yyval = ast->NewRoot(NODE_DECL,-1, se);
        }
        else
            yyval = ast->NewRoot(NODE_DECL,-1, se, yyvsp[0]);
    }
#line 2362 "parser.cpp"
    break;

  case 90: /* InitVal: Exp  */
#line 522 "parser.y"
        {yyval=yyvsp[0];}
#line 2368 "parser.cpp"
    break;

  case 91: /* InitVal: LBRACE RBRACE  */
#line 524 "parser.y"
                  {
        yyval = ast->NewRoot(NODE_EXPR,OP_INITLIST);
        yyval->sym_ptr = new symbol_entry;
        }
#line 2377 "parser.cpp"
    break;

  case 92: /* InitVal: LBRACE InitValList RBRACE  */
#line 529 "parser.y"
                              {
        yyval = ast->NewRoot(NODE_EXPR,OP_INITLIST, NULL, yyvsp[-1]);
        yyval->sym_ptr = new symbol_entry;
    }
#line 2386 "parser.cpp"
    break;

  case 93: /* InitValList: InitVal  */
#line 536 "parser.y"
            {
        if(yyvsp[0]->kind_kind != OP_INITLIST)
            yyvsp[0] = ast->NewRoot(NODE_EXPR,-1, symbol_table::gen_temp(typesys.int_type), yyvsp[0]);
        yyval=yyvsp[0];
    }
#line 2396 "parser.cpp"
    break;

  case 94: /* InitValList: InitValList COMMA InitVal  */
#line 542 "parser.y"
                              {
        yyval = yyvsp[-2];
        if(yyvsp[0]->kind_kind != OP_INITLIST)
            yyvsp[0] = ast->NewRoot(NODE_EXPR,-1, symbol_table::gen_temp(typesys.int_type), yyvsp[0]);
        yyval=yyvsp[-2];
        yyval->addSibling(yyvsp[0]);
    }
#line 2408 "parser.cpp"
    break;

  case 95: /* $@3: %empty  */
#line 552 "parser.y"
            {
        symbol_entry *se;
        se = functions->install(yyvsp[0]->sym_ptr->name);
        se->tp = typesys.func(global_type,NULL);
        symbol_table::enter_scope();}
#line 2418 "parser.cpp"
    break;

  case 96: /* FuncDef: Type ID $@3 LPAREN OptFuncParams RPAREN BlockStmt  */
#line 559 "parser.y"
    {
        symbol_entry *t;
        t = functions->lookup(yyvsp[-5]->sym_ptr->name);
        t->undefined = false;
        int num_of_params = 0;
        Node *p = yyvsp[-2];
        while(p)
        {
            num_of_params++;
            p = p->sibling;
        }
        if(num_of_params > 0)
        {
            t->tp->func_params = new symbol_entry*[num_of_params + 1];
            p = yyvsp[-2];
            int i = 0;
            while(p)
            {
                t->tp->func_params[i] = p->sym_ptr;
                i++;
                p = p->sibling;
            }
            t->tp->func_params[num_of_params] = NULL;
        }
        yyval = ast->NewRoot(NODE_STMT, STMT_FUNC, t, yyvsp[-2], yyvsp[0]);
        symbol_table::leave_scope();
    }
#line 2450 "parser.cpp"
    break;

  case 97: /* OptFuncParams: FuncFParams  */
#line 589 "parser.y"
                {yyval=yyvsp[0];}
#line 2456 "parser.cpp"
    break;

  case 98: /* OptFuncParams: %empty  */
#line 590 "parser.y"
             {yyval = NULL;}
#line 2462 "parser.cpp"
    break;

  case 99: /* FuncFParams: FuncFParams COMMA FuncFParam  */
#line 594 "parser.y"
                                 {
        yyval = yyvsp[-2];
        Node *p = yyvsp[-2];
        while(p->sibling)
            p = p->sibling;
        p->sibling = yyvsp[0];
    }
#line 2474 "parser.cpp"
    break;

  case 100: /* FuncFParams: FuncFParam  */
#line 602 "parser.y"
               {yyval = yyvsp[0];}
#line 2480 "parser.cpp"
    break;

  case 101: /* FuncFParam: Type ID  */
#line 606 "parser.y"
            {
        symbol_entry *se;
        if(symbol_table::level > identifiers->table_level)
            identifiers = identifiers->new_table(symbol_table::level);
        se = identifiers->install(yyvsp[0]->sym_ptr->name);
        se->tp = global_type;

        yyval = ast->NewRoot(NODE_DECL,-1, se);
    }
#line 2494 "parser.cpp"
    break;

  case 102: /* FuncFParam: Type ID FArrayList  */
#line 616 "parser.y"
                       {
        symbol_entry *se;
        if(symbol_table::level > identifiers->table_level)
            identifiers = identifiers->new_table(symbol_table::level);
        se = identifiers->install(yyvsp[-1]->sym_ptr->name);
        se->tp = global_type;

        vector<int> s;
        Node *p = yyvsp[0]->sibling;
        while(p)
        {
            s.push_back(Ast::get_constExpVal(p));
            p = p->sibling;
        }
        while(!s.empty())
        {
            int dim = s.back();
            s.pop_back();
            se->tp = typesys.array(se->tp, dim);
        }
        se->tp = typesys.ptr(se->tp);

        yyval = ast->NewRoot(NODE_DECL,-1, se);
    }
#line 2523 "parser.cpp"
    break;

  case 103: /* FArrayList: LBRACKET RBRACKET  */
#line 644 "parser.y"
    {
        yyval = ast->NewRoot(NODE_EXPR, -1);
    }
#line 2531 "parser.cpp"
    break;

  case 104: /* FArrayList: FArrayList LBRACKET Exp RBRACKET  */
#line 648 "parser.y"
                                     {
        yyval = yyvsp[-3];
        yyval->addSibling(yyvsp[-1]);
    }
#line 2540 "parser.cpp"
    break;


#line 2544 "parser.cpp"

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
          YYNOMEM;
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 653 "parser.y"


extern int yylineno;
int yyerror(char const* message)
{
    std::cout<<"[ERROR AT LINE "<<yylineno<<": "<<message<<"]"<<std::endl;
    return -1;
}
