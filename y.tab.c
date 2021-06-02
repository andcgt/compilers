/* A Bison parser, made by GNU Bison 3.7.  */

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
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc.y"

#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include "parse.h"
using namespace std;

extern char *yytext;
extern FILE *yyin;
extern int column;
gramTree *root;
extern int yylineno;

int yylex(void);
void yyerror(const char*);


#line 90 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CONST = 258,                   /* CONST  */
    INT = 259,                     /* INT  */
    VOID = 260,                    /* VOID  */
    IF = 261,                      /* IF  */
    WHILE = 262,                   /* WHILE  */
    BREAK = 263,                   /* BREAK  */
    CONTINUE = 264,                /* CONTINUE  */
    RETURN = 265,                  /* RETURN  */
    ELSE = 266,                    /* ELSE  */
    LE = 267,                      /* LE  */
    GE = 268,                      /* GE  */
    EQ = 269,                      /* EQ  */
    NE = 270,                      /* NE  */
    OR = 271,                      /* OR  */
    AND = 272,                     /* AND  */
    INTNUM = 273,                  /* INTNUM  */
    VAR = 274,                     /* VAR  */
    LOWER_THAN_ELSE = 275          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CONST 258
#define INT 259
#define VOID 260
#define IF 261
#define WHILE 262
#define BREAK 263
#define CONTINUE 264
#define RETURN 265
#define ELSE 266
#define LE 267
#define GE 268
#define EQ 269
#define NE 270
#define OR 271
#define AND 272
#define INTNUM 273
#define VAR 274
#define LOWER_THAN_ELSE 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "yacc.y"

	struct gramTree* gramtree;

#line 186 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONST = 3,                      /* CONST  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_VOID = 5,                       /* VOID  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_BREAK = 8,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 9,                   /* CONTINUE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_12_ = 12,                       /* '('  */
  YYSYMBOL_13_ = 13,                       /* ')'  */
  YYSYMBOL_14_ = 14,                       /* '['  */
  YYSYMBOL_15_ = 15,                       /* ']'  */
  YYSYMBOL_16_ = 16,                       /* '{'  */
  YYSYMBOL_17_ = 17,                       /* '}'  */
  YYSYMBOL_18_ = 18,                       /* '='  */
  YYSYMBOL_19_ = 19,                       /* ','  */
  YYSYMBOL_20_ = 20,                       /* ';'  */
  YYSYMBOL_21_ = 21,                       /* '+'  */
  YYSYMBOL_22_ = 22,                       /* '-'  */
  YYSYMBOL_23_ = 23,                       /* '!'  */
  YYSYMBOL_24_ = 24,                       /* '*'  */
  YYSYMBOL_25_ = 25,                       /* '/'  */
  YYSYMBOL_26_ = 26,                       /* '%'  */
  YYSYMBOL_27_ = 27,                       /* '<'  */
  YYSYMBOL_28_ = 28,                       /* '>'  */
  YYSYMBOL_LE = 29,                        /* LE  */
  YYSYMBOL_GE = 30,                        /* GE  */
  YYSYMBOL_EQ = 31,                        /* EQ  */
  YYSYMBOL_NE = 32,                        /* NE  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_AND = 34,                       /* AND  */
  YYSYMBOL_INTNUM = 35,                    /* INTNUM  */
  YYSYMBOL_VAR = 36,                       /* VAR  */
  YYSYMBOL_LOWER_THAN_ELSE = 37,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_Program = 39,                   /* Program  */
  YYSYMBOL_LVal = 40,                      /* LVal  */
  YYSYMBOL_primary_exp = 41,               /* primary_exp  */
  YYSYMBOL_FuncRParams = 42,               /* FuncRParams  */
  YYSYMBOL_unary_exp = 43,                 /* unary_exp  */
  YYSYMBOL_unary_oper = 44,                /* unary_oper  */
  YYSYMBOL_mult_exp = 45,                  /* mult_exp  */
  YYSYMBOL_add_exp = 46,                   /* add_exp  */
  YYSYMBOL_rel_exp = 47,                   /* rel_exp  */
  YYSYMBOL_eq_exp = 48,                    /* eq_exp  */
  YYSYMBOL_and_exp = 49,                   /* and_exp  */
  YYSYMBOL_or_exp = 50,                    /* or_exp  */
  YYSYMBOL_decl = 51,                      /* decl  */
  YYSYMBOL_const_init_del_list = 52,       /* const_init_del_list  */
  YYSYMBOL_const_init_del = 53,            /* const_init_del  */
  YYSYMBOL_init_del_list = 54,             /* init_del_list  */
  YYSYMBOL_init_del = 55,                  /* init_del  */
  YYSYMBOL_del = 56,                       /* del  */
  YYSYMBOL_const_exp = 57,                 /* const_exp  */
  YYSYMBOL_FuncFParams = 58,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 59,                /* FuncFParam  */
  YYSYMBOL_init = 60,                      /* init  */
  YYSYMBOL_const_init = 61,                /* const_init  */
  YYSYMBOL_init_list = 62,                 /* init_list  */
  YYSYMBOL_const_init_list = 63,           /* const_init_list  */
  YYSYMBOL_sta = 64,                       /* sta  */
  YYSYMBOL_Block = 65,                     /* Block  */
  YYSYMBOL_block_item_list = 66,           /* block_item_list  */
  YYSYMBOL_block_item = 67,                /* block_item  */
  YYSYMBOL_exp_sta = 68,                   /* exp_sta  */
  YYSYMBOL_if_sta = 69,                    /* if_sta  */
  YYSYMBOL_iter_sta = 70,                  /* iter_sta  */
  YYSYMBOL_jump_sta = 71,                  /* jump_sta  */
  YYSYMBOL_tran_unit = 72,                 /* tran_unit  */
  YYSYMBOL_ext_decl = 73,                  /* ext_decl  */
  YYSYMBOL_func_def = 74                   /* func_def  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   218

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


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
       2,     2,     2,    23,     2,     2,     2,    26,     2,     2,
      12,    13,    24,    21,    19,    22,     2,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
      27,    18,    28,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    14,     2,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    16,     2,    17,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    29,    30,    31,
      32,    33,    34,    35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    51,    55,    60,    65,    70,    75,    79,
      84,    88,    92,    96,   101,   105,   109,   114,   118,   122,
     126,   131,   135,   139,   145,   149,   153,   157,   161,   166,
     170,   174,   179,   183,   188,   192,   197,   201,   206,   210,
     215,   220,   224,   229,   233,   239,   244,   248,   253,   258,
     262,   267,   272,   276,   281,   285,   290,   294,   299,   303,
     308,   312,   316,   320,   324,   329,   333,   338,   342,   347,
     351,   356,   360,   364,   368,   373,   377,   382,   387,   391,
     395,   399,   404,   408,   413,   417,   422,   426,   431,   435
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CONST", "INT", "VOID",
  "IF", "WHILE", "BREAK", "CONTINUE", "RETURN", "ELSE", "'('", "')'",
  "'['", "']'", "'{'", "'}'", "'='", "','", "';'", "'+'", "'-'", "'!'",
  "'*'", "'/'", "'%'", "'<'", "'>'", "LE", "GE", "EQ", "NE", "OR", "AND",
  "INTNUM", "VAR", "LOWER_THAN_ELSE", "$accept", "Program", "LVal",
  "primary_exp", "FuncRParams", "unary_exp", "unary_oper", "mult_exp",
  "add_exp", "rel_exp", "eq_exp", "and_exp", "or_exp", "decl",
  "const_init_del_list", "const_init_del", "init_del_list", "init_del",
  "del", "const_exp", "FuncFParams", "FuncFParam", "init", "const_init",
  "init_list", "const_init_list", "sta", "Block", "block_item_list",
  "block_item", "exp_sta", "if_sta", "iter_sta", "jump_sta", "tran_unit",
  "ext_decl", "func_def", YY_NULLPTR
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
     265,   266,    40,    41,    91,    93,   123,   125,    61,    44,
      59,    43,    45,    33,    42,    47,    37,    60,    62,   267,
     268,   269,   270,   271,   272,   273,   274,   275
};
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     112,    52,   -29,    51,    60,   -76,   112,   -76,   -76,    65,
     118,     3,   -76,    72,   124,   -76,   -76,   -76,    89,   -76,
     100,    24,    65,   -76,    90,   111,    41,    65,   -76,   119,
      65,   108,    -7,   -76,   -76,   155,   -76,   -76,   -76,   -76,
     -76,   138,   139,   -76,   -76,   155,   144,   122,   151,   111,
     122,   -76,   108,    44,   -76,   119,   -76,   -76,   175,    10,
     -76,   108,   188,    76,   116,   155,   -76,   155,   155,   155,
     155,   155,   -76,   -76,    77,   -76,   108,   -76,    87,    65,
     161,   186,   187,   180,   181,   136,   -76,   -76,   -76,   131,
     -76,   -76,   -76,    64,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,    46,   122,    61,   -76,   -76,   -76,   144,
     144,   -76,   111,   -76,   -76,   119,   190,   155,   155,   -76,
     -76,   -76,   159,   155,   -76,   -76,   -76,   155,   -76,   -76,
     -76,   152,   122,   133,   154,   169,    11,    22,   -76,   162,
     122,   184,    66,   155,   155,   155,   155,   155,   155,   155,
      42,   155,    42,   -76,   -76,   185,   122,   122,   122,   122,
     133,   133,   154,   195,   169,   -76,   -76,    42,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,    85,     2,    82,    84,     0,
      45,     0,    41,    43,     0,     1,    83,    45,     0,    38,
       0,     0,     0,    36,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    49,    42,     0,    47,    14,    15,    16,
       6,     3,     5,    10,    17,     0,    21,    48,     0,     0,
      52,    44,     0,     0,    39,     0,    54,    40,    51,     0,
      87,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,    46,    56,     0,    89,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    72,     3,     0,
      69,    70,    60,     0,    67,    61,    62,    63,    64,    86,
      50,     7,    12,     0,     8,     0,    18,    20,    19,    22,
      23,    53,     0,    88,    55,     0,     0,     0,     0,    81,
      80,    78,     0,     0,    66,    68,    11,     0,     4,    57,
      59,     0,    24,    29,    32,    34,     0,     0,    79,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    73,     0,    25,    26,    27,    28,
      30,    31,    33,    75,    35,    77,    74,     0,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,   -57,   -76,    78,   -35,   -76,   123,   -24,    48,
      58,    57,    92,   -50,   -76,   189,   -76,   191,    12,   193,
     192,   149,   -46,   -51,   -76,   -76,   -75,   -23,   -76,   121,
     -76,   -76,   -76,   -76,   -76,   206,   -76
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    42,    43,   103,    44,    45,    46,   132,   133,
     134,   135,   136,     5,    18,    19,    11,    12,    13,    56,
      32,    33,    51,    57,    74,    78,    91,    92,    93,    94,
      95,    96,    97,    98,     6,     7,     8
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    50,    89,    73,    77,    47,    61,    10,    60,    90,
      66,    63,    62,     1,    79,    80,    81,    82,    83,    84,
      85,    20,    22,    23,   150,    50,    59,    86,    30,    75,
      87,    47,   106,   107,   108,   152,    89,    31,    99,    20,
     104,   105,    58,    90,   151,    30,    88,    80,    81,    82,
      83,    84,    85,   113,    52,   151,     9,    76,    59,   126,
      15,   122,    87,    62,   130,   127,   129,     1,    79,    80,
      81,    82,    83,    84,    85,   163,   128,   165,    88,   155,
      59,   124,    70,    71,    87,   127,    24,    14,    50,   101,
      25,    47,   168,    89,   111,    89,   112,    70,    71,   139,
      88,    17,    35,   140,   114,    36,   115,   104,    27,    28,
      89,    37,    38,    39,    24,     1,     2,     3,    29,   156,
     157,   158,   159,    35,    59,    40,    41,    49,    35,   102,
      21,    35,    37,    38,    39,    55,    26,    37,    38,    39,
      37,    38,    39,    70,    71,    65,    40,    41,    35,   123,
      64,    40,    41,    65,    40,    41,   121,    37,    38,    39,
     143,   144,   145,   146,    35,   141,    72,    35,    67,    68,
      69,    40,    41,    37,    38,    39,    37,    38,    39,   138,
      70,    71,   153,    70,    71,   147,   148,    40,    41,    24,
      40,    41,    30,   109,   110,   160,   161,   116,   117,   118,
     119,   120,   131,   149,   154,   166,   167,   162,   164,   142,
     137,   100,    16,    34,   125,     0,    54,    48,    53
};

static const yytype_int16 yycheck[] =
{
      24,    25,    59,    49,    55,    29,    13,    36,    31,    59,
      45,    35,    19,     3,     4,     5,     6,     7,     8,     9,
      10,     9,    19,    20,    13,    49,    16,    17,     4,    52,
      20,    55,    67,    68,    69,    13,    93,    13,    61,    27,
      64,    65,    30,    93,    33,     4,    36,     5,     6,     7,
       8,     9,    10,    76,    13,    33,     4,    13,    16,    13,
       0,    85,    20,    19,   115,    19,   112,     3,     4,     5,
       6,     7,     8,     9,    10,   150,    15,   152,    36,    13,
      16,    17,    21,    22,    20,    19,    14,    36,   112,    13,
      18,   115,   167,   150,    17,   152,    19,    21,    22,   123,
      36,    36,    12,   127,    17,    15,    19,   131,    19,    20,
     167,    21,    22,    23,    14,     3,     4,     5,    18,   143,
     144,   145,   146,    12,    16,    35,    36,    16,    12,    13,
      12,    12,    21,    22,    23,    16,    12,    21,    22,    23,
      21,    22,    23,    21,    22,    14,    35,    36,    12,    18,
      12,    35,    36,    14,    35,    36,    20,    21,    22,    23,
      27,    28,    29,    30,    12,    13,    15,    12,    24,    25,
      26,    35,    36,    21,    22,    23,    21,    22,    23,    20,
      21,    22,    20,    21,    22,    31,    32,    35,    36,    14,
      35,    36,     4,    70,    71,   147,   148,    36,    12,    12,
      20,    20,    12,    34,    20,    20,    11,   149,   151,   131,
     118,    62,     6,    22,    93,    -1,    27,    24,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    39,    51,    72,    73,    74,     4,
      36,    54,    55,    56,    36,     0,    73,    36,    52,    53,
      56,    12,    19,    20,    14,    18,    12,    19,    20,    18,
       4,    13,    58,    59,    55,    12,    15,    21,    22,    23,
      35,    36,    40,    41,    43,    44,    45,    46,    57,    16,
      46,    60,    13,    58,    53,    16,    57,    61,    56,    16,
      65,    13,    19,    46,    12,    14,    43,    24,    25,    26,
      21,    22,    15,    60,    62,    65,    13,    61,    63,     4,
       5,     6,     7,     8,     9,    10,    17,    20,    36,    40,
      51,    64,    65,    66,    67,    68,    69,    70,    71,    65,
      59,    13,    13,    42,    46,    46,    43,    43,    43,    45,
      45,    17,    19,    65,    17,    19,    36,    12,    12,    20,
      20,    20,    46,    18,    17,    67,    13,    19,    15,    60,
      61,    12,    46,    47,    48,    49,    50,    50,    20,    46,
      46,    13,    42,    27,    28,    29,    30,    31,    32,    34,
      13,    33,    13,    20,    20,    13,    46,    46,    46,    46,
      47,    47,    48,    64,    49,    64,    20,    11,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    42,    42,
      43,    43,    43,    43,    44,    44,    44,    45,    45,    45,
      45,    46,    46,    46,    47,    47,    47,    47,    47,    48,
      48,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    54,    54,    55,    55,    56,    56,    56,    57,    58,
      58,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    69,    69,    70,    71,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     4,     1,     1,     3,     1,     3,
       1,     4,     3,     2,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     3,     4,     1,     3,
       3,     1,     3,     1,     3,     1,     4,     3,     1,     1,
       3,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       1,     4,     1,     5,     6,     5,     7,     5,     2,     3,
       2,     2,     1,     2,     1,     1,     6,     5,     6,     5
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
  case 2: /* Program: tran_unit  */
#line 45 "yacc.y"
                 {
		//printf("unit\n");
		root=create("Program",1,(yyvsp[0].gramtree));
	}
#line 1356 "y.tab.c"
    break;

  case 3: /* LVal: VAR  */
#line 51 "yacc.y"
           {
		(yyval.gramtree)=create("LVal",1,(yyvsp[0].gramtree));
	}
#line 1364 "y.tab.c"
    break;

  case 4: /* LVal: LVal '[' add_exp ']'  */
#line 55 "yacc.y"
                             {
		(yyval.gramtree)=create("LVal",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1372 "y.tab.c"
    break;

  case 5: /* primary_exp: LVal  */
#line 60 "yacc.y"
             {
		//printf("LVal");
		(yyval.gramtree)=create("primary_exp",1,(yyvsp[0].gramtree));
	}
#line 1381 "y.tab.c"
    break;

  case 6: /* primary_exp: INTNUM  */
#line 65 "yacc.y"
               {
		//printf("test INTNUM\n");
		(yyval.gramtree)=create("primary_exp",1,(yyvsp[0].gramtree));
	}
#line 1390 "y.tab.c"
    break;

  case 7: /* primary_exp: '(' add_exp ')'  */
#line 70 "yacc.y"
                        {
		(yyval.gramtree)=create("primary_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1398 "y.tab.c"
    break;

  case 8: /* FuncRParams: add_exp  */
#line 75 "yacc.y"
                {
		(yyval.gramtree)=create("FuncRParams",1,(yyvsp[0].gramtree));
	}
#line 1406 "y.tab.c"
    break;

  case 9: /* FuncRParams: FuncRParams ',' add_exp  */
#line 79 "yacc.y"
                               {
		(yyval.gramtree)=create("FuncRParams",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1414 "y.tab.c"
    break;

  case 10: /* unary_exp: primary_exp  */
#line 84 "yacc.y"
                   {
		(yyval.gramtree)=create("unary_exp",1,(yyvsp[0].gramtree));
	}
#line 1422 "y.tab.c"
    break;

  case 11: /* unary_exp: VAR '(' FuncRParams ')'  */
#line 88 "yacc.y"
                               {
		(yyval.gramtree)=create("unary_exp",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1430 "y.tab.c"
    break;

  case 12: /* unary_exp: VAR '(' ')'  */
#line 92 "yacc.y"
                    {
		(yyval.gramtree)=create("unary_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1438 "y.tab.c"
    break;

  case 13: /* unary_exp: unary_oper unary_exp  */
#line 96 "yacc.y"
                            {
		(yyval.gramtree)=create("unary_exp",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1446 "y.tab.c"
    break;

  case 14: /* unary_oper: '+'  */
#line 101 "yacc.y"
            {
		(yyval.gramtree)=create("unary_oper",1,(yyvsp[0].gramtree));
	}
#line 1454 "y.tab.c"
    break;

  case 15: /* unary_oper: '-'  */
#line 105 "yacc.y"
            {
		(yyval.gramtree)=create("unary_oper",1,(yyvsp[0].gramtree));
	}
#line 1462 "y.tab.c"
    break;

  case 16: /* unary_oper: '!'  */
#line 109 "yacc.y"
            {
		(yyval.gramtree)=create("unary_oper",1,(yyvsp[0].gramtree));
	}
#line 1470 "y.tab.c"
    break;

  case 17: /* mult_exp: unary_exp  */
#line 114 "yacc.y"
                 {
		(yyval.gramtree)=create("mult_exp",1,(yyvsp[0].gramtree));
	}
#line 1478 "y.tab.c"
    break;

  case 18: /* mult_exp: mult_exp '*' unary_exp  */
#line 118 "yacc.y"
                              {
		(yyval.gramtree)=create("mult_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1486 "y.tab.c"
    break;

  case 19: /* mult_exp: mult_exp '%' unary_exp  */
#line 122 "yacc.y"
                              {
		(yyval.gramtree)=create("mult_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1494 "y.tab.c"
    break;

  case 20: /* mult_exp: mult_exp '/' unary_exp  */
#line 126 "yacc.y"
                              {
		(yyval.gramtree)=create("mult_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1502 "y.tab.c"
    break;

  case 21: /* add_exp: mult_exp  */
#line 131 "yacc.y"
                 {
		(yyval.gramtree)=create("add_exp",1,(yyvsp[0].gramtree));
	}
#line 1510 "y.tab.c"
    break;

  case 22: /* add_exp: add_exp '+' mult_exp  */
#line 135 "yacc.y"
                            {
		(yyval.gramtree)=create("add_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1518 "y.tab.c"
    break;

  case 23: /* add_exp: add_exp '-' mult_exp  */
#line 139 "yacc.y"
                            {
		(yyval.gramtree)=create("add_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1526 "y.tab.c"
    break;

  case 24: /* rel_exp: add_exp  */
#line 145 "yacc.y"
                {
		(yyval.gramtree)=create("rel_exp",1,(yyvsp[0].gramtree));
	}
#line 1534 "y.tab.c"
    break;

  case 25: /* rel_exp: rel_exp '<' add_exp  */
#line 149 "yacc.y"
                           {
		(yyval.gramtree)=create("rel_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1542 "y.tab.c"
    break;

  case 26: /* rel_exp: rel_exp '>' add_exp  */
#line 153 "yacc.y"
                           {
		(yyval.gramtree)=create("rel_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1550 "y.tab.c"
    break;

  case 27: /* rel_exp: rel_exp LE add_exp  */
#line 157 "yacc.y"
                          {
		(yyval.gramtree)=create("rel_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1558 "y.tab.c"
    break;

  case 28: /* rel_exp: rel_exp GE add_exp  */
#line 161 "yacc.y"
                          {
		(yyval.gramtree)=create("rel_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1566 "y.tab.c"
    break;

  case 29: /* eq_exp: rel_exp  */
#line 166 "yacc.y"
               {
		(yyval.gramtree)=create("eq_exp",1,(yyvsp[0].gramtree));
	}
#line 1574 "y.tab.c"
    break;

  case 30: /* eq_exp: eq_exp EQ rel_exp  */
#line 170 "yacc.y"
                         {
		(yyval.gramtree)=create("eq_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1582 "y.tab.c"
    break;

  case 31: /* eq_exp: eq_exp NE rel_exp  */
#line 174 "yacc.y"
                         {
		(yyval.gramtree)=create("eq_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1590 "y.tab.c"
    break;

  case 32: /* and_exp: eq_exp  */
#line 179 "yacc.y"
              {
		(yyval.gramtree)=create("and_exp",1,(yyvsp[0].gramtree));
	}
#line 1598 "y.tab.c"
    break;

  case 33: /* and_exp: and_exp AND eq_exp  */
#line 183 "yacc.y"
                          {
		(yyval.gramtree)=create("and_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1606 "y.tab.c"
    break;

  case 34: /* or_exp: and_exp  */
#line 188 "yacc.y"
               {
		(yyval.gramtree)=create("or_exp",1,(yyvsp[0].gramtree));
	}
#line 1614 "y.tab.c"
    break;

  case 35: /* or_exp: or_exp OR and_exp  */
#line 192 "yacc.y"
                         {
		(yyval.gramtree)=create("or_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1622 "y.tab.c"
    break;

  case 36: /* decl: INT init_del_list ';'  */
#line 197 "yacc.y"
                                      {
			(yyval.gramtree)=create("decl",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
		}
#line 1630 "y.tab.c"
    break;

  case 37: /* decl: CONST INT const_init_del_list ';'  */
#line 201 "yacc.y"
                                                  {
			(yyval.gramtree)=create("decl",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
		}
#line 1638 "y.tab.c"
    break;

  case 38: /* const_init_del_list: const_init_del  */
#line 206 "yacc.y"
                      {
		(yyval.gramtree)=create("const_init_del",1,(yyvsp[0].gramtree));
	}
#line 1646 "y.tab.c"
    break;

  case 39: /* const_init_del_list: const_init_del_list ',' const_init_del  */
#line 210 "yacc.y"
                                               {
		(yyval.gramtree)=create("const_init_del_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1654 "y.tab.c"
    break;

  case 40: /* const_init_del: del '=' const_init  */
#line 215 "yacc.y"
                           {
		(yyval.gramtree)=create("const_init_del",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1662 "y.tab.c"
    break;

  case 41: /* init_del_list: init_del  */
#line 220 "yacc.y"
                {
		(yyval.gramtree)=create("init_del",1,(yyvsp[0].gramtree));
	}
#line 1670 "y.tab.c"
    break;

  case 42: /* init_del_list: init_del_list ',' init_del  */
#line 224 "yacc.y"
                                   {
		(yyval.gramtree)=create("init_del_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1678 "y.tab.c"
    break;

  case 43: /* init_del: del  */
#line 229 "yacc.y"
           {
		(yyval.gramtree)=create("init_del",1,(yyvsp[0].gramtree));
	}
#line 1686 "y.tab.c"
    break;

  case 44: /* init_del: del '=' init  */
#line 233 "yacc.y"
                     {
		//printf("test int b=1??\n");
		(yyval.gramtree)=create("init_del",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1695 "y.tab.c"
    break;

  case 45: /* del: VAR  */
#line 239 "yacc.y"
           {
		//printf("test var\n");
		(yyval.gramtree)=create("del",1,(yyvsp[0].gramtree));
	}
#line 1704 "y.tab.c"
    break;

  case 46: /* del: del '[' const_exp ']'  */
#line 244 "yacc.y"
                              {
		(yyval.gramtree)=create("del",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1712 "y.tab.c"
    break;

  case 47: /* del: del '[' ']'  */
#line 248 "yacc.y"
                    {
		(yyval.gramtree)=create("del",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1720 "y.tab.c"
    break;

  case 48: /* const_exp: add_exp  */
#line 253 "yacc.y"
                {
		(yyval.gramtree)=create("const_exp",1,(yyvsp[0].gramtree));
	}
#line 1728 "y.tab.c"
    break;

  case 49: /* FuncFParams: FuncFParam  */
#line 258 "yacc.y"
                   {
		(yyval.gramtree)=create("FuncFParams",1,(yyvsp[0].gramtree));
	}
#line 1736 "y.tab.c"
    break;

  case 50: /* FuncFParams: FuncFParams ',' FuncFParam  */
#line 262 "yacc.y"
                                  {
		(yyval.gramtree)=create("FuncFParams",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1744 "y.tab.c"
    break;

  case 51: /* FuncFParam: INT del  */
#line 267 "yacc.y"
               {
		(yyval.gramtree)=create("FuncFParam",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1752 "y.tab.c"
    break;

  case 52: /* init: add_exp  */
#line 272 "yacc.y"
               {
		(yyval.gramtree)=create("init",1,(yyvsp[0].gramtree));
	}
#line 1760 "y.tab.c"
    break;

  case 53: /* init: '{' init_list '}'  */
#line 276 "yacc.y"
                         {
		(yyval.gramtree)=create("init",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1768 "y.tab.c"
    break;

  case 54: /* const_init: const_exp  */
#line 281 "yacc.y"
                 {
		(yyval.gramtree)=create("const_init",1,(yyvsp[0].gramtree));
	}
#line 1776 "y.tab.c"
    break;

  case 55: /* const_init: '{' const_init_list '}'  */
#line 285 "yacc.y"
                                {
		(yyval.gramtree)=create("const_init",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1784 "y.tab.c"
    break;

  case 56: /* init_list: init  */
#line 290 "yacc.y"
            {
		(yyval.gramtree)=create("init_list",1,(yyvsp[0].gramtree));
	}
#line 1792 "y.tab.c"
    break;

  case 57: /* init_list: init_list ',' init  */
#line 294 "yacc.y"
                          {
		(yyval.gramtree)=create("init_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1800 "y.tab.c"
    break;

  case 58: /* const_init_list: const_init  */
#line 299 "yacc.y"
                  {
		(yyval.gramtree)=create("const_init_list",1,(yyvsp[0].gramtree));
	}
#line 1808 "y.tab.c"
    break;

  case 59: /* const_init_list: const_init_list ',' const_init  */
#line 303 "yacc.y"
                                      {
		(yyval.gramtree)=create("const_init_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1816 "y.tab.c"
    break;

  case 60: /* sta: Block  */
#line 308 "yacc.y"
             {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1824 "y.tab.c"
    break;

  case 61: /* sta: exp_sta  */
#line 312 "yacc.y"
               {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1832 "y.tab.c"
    break;

  case 62: /* sta: if_sta  */
#line 316 "yacc.y"
              {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1840 "y.tab.c"
    break;

  case 63: /* sta: iter_sta  */
#line 320 "yacc.y"
                {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1848 "y.tab.c"
    break;

  case 64: /* sta: jump_sta  */
#line 324 "yacc.y"
                {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1856 "y.tab.c"
    break;

  case 65: /* Block: '{' '}'  */
#line 329 "yacc.y"
               {
		(yyval.gramtree)=create("Block",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1864 "y.tab.c"
    break;

  case 66: /* Block: '{' block_item_list '}'  */
#line 333 "yacc.y"
                                {
		(yyval.gramtree)=create("Block",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1872 "y.tab.c"
    break;

  case 67: /* block_item_list: block_item  */
#line 338 "yacc.y"
                  {
		(yyval.gramtree)=create("block_item_list",1,(yyvsp[0].gramtree));
	}
#line 1880 "y.tab.c"
    break;

  case 68: /* block_item_list: block_item_list block_item  */
#line 342 "yacc.y"
                                  {
		(yyval.gramtree)=create("block_item_list",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1888 "y.tab.c"
    break;

  case 69: /* block_item: decl  */
#line 347 "yacc.y"
            {
		(yyval.gramtree)=create("block_item",1,(yyvsp[0].gramtree));
	}
#line 1896 "y.tab.c"
    break;

  case 70: /* block_item: sta  */
#line 351 "yacc.y"
           {
		(yyval.gramtree)=create("block_item",1,(yyvsp[0].gramtree));
	}
#line 1904 "y.tab.c"
    break;

  case 71: /* exp_sta: LVal '=' add_exp ';'  */
#line 356 "yacc.y"
                            {
		(yyval.gramtree)=create("exp_sta",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1912 "y.tab.c"
    break;

  case 72: /* exp_sta: ';'  */
#line 360 "yacc.y"
            {
		(yyval.gramtree)=create("exp_sta",1,(yyvsp[0].gramtree));
	}
#line 1920 "y.tab.c"
    break;

  case 73: /* exp_sta: VOID VAR '(' ')' ';'  */
#line 364 "yacc.y"
                            {
		(yyval.gramtree)=create("exp_sta",5,(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1928 "y.tab.c"
    break;

  case 74: /* exp_sta: VOID VAR '(' FuncRParams ')' ';'  */
#line 368 "yacc.y"
                                        {
		(yyval.gramtree)=create("exp_sta",6,(yyvsp[-5].gramtree),(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1936 "y.tab.c"
    break;

  case 75: /* if_sta: IF '(' or_exp ')' sta  */
#line 373 "yacc.y"
                                                   {
		(yyval.gramtree)=create("if_sta",5,(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1944 "y.tab.c"
    break;

  case 76: /* if_sta: IF '(' or_exp ')' sta ELSE sta  */
#line 377 "yacc.y"
                                      {
		(yyval.gramtree)=create("if_sta",7,(yyvsp[-6].gramtree),(yyvsp[-5].gramtree),(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1952 "y.tab.c"
    break;

  case 77: /* iter_sta: WHILE '(' or_exp ')' sta  */
#line 382 "yacc.y"
                                {
		(yyval.gramtree)=create("iter_statemenr",5,(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1960 "y.tab.c"
    break;

  case 78: /* jump_sta: RETURN ';'  */
#line 387 "yacc.y"
                  {
		(yyval.gramtree)=create("jump_sta",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1968 "y.tab.c"
    break;

  case 79: /* jump_sta: RETURN add_exp ';'  */
#line 391 "yacc.y"
                          {
		(yyval.gramtree)=create("jump_sta",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1976 "y.tab.c"
    break;

  case 80: /* jump_sta: CONTINUE ';'  */
#line 395 "yacc.y"
                    {
		(yyval.gramtree)=create("jump_sta",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1984 "y.tab.c"
    break;

  case 81: /* jump_sta: BREAK ';'  */
#line 399 "yacc.y"
                  {
		(yyval.gramtree)=create("jump_sta",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1992 "y.tab.c"
    break;

  case 82: /* tran_unit: ext_decl  */
#line 404 "yacc.y"
                {
		(yyval.gramtree)=create("tran_unit",1,(yyvsp[0].gramtree));
	}
#line 2000 "y.tab.c"
    break;

  case 83: /* tran_unit: tran_unit ext_decl  */
#line 408 "yacc.y"
                          {
		(yyval.gramtree)=create("tran_unit",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2008 "y.tab.c"
    break;

  case 84: /* ext_decl: func_def  */
#line 413 "yacc.y"
                {
		(yyval.gramtree)=create("ext_decl",1,(yyvsp[0].gramtree));
	}
#line 2016 "y.tab.c"
    break;

  case 85: /* ext_decl: decl  */
#line 417 "yacc.y"
            {
		(yyval.gramtree)=create("ext_decl",1,(yyvsp[0].gramtree));
	}
#line 2024 "y.tab.c"
    break;

  case 86: /* func_def: INT VAR '(' FuncFParams ')' Block  */
#line 422 "yacc.y"
                                         {
		(yyval.gramtree)=create("func_def",6,(yyvsp[-5].gramtree),(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2032 "y.tab.c"
    break;

  case 87: /* func_def: INT VAR '(' ')' Block  */
#line 426 "yacc.y"
                             {
		//printf("func test\n");
		(yyval.gramtree)=create("func_def",5,(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2041 "y.tab.c"
    break;

  case 88: /* func_def: VOID VAR '(' FuncFParams ')' Block  */
#line 431 "yacc.y"
                                          {
		(yyval.gramtree)=create("func_def",6,(yyvsp[-5].gramtree),(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2049 "y.tab.c"
    break;

  case 89: /* func_def: VOID VAR '(' ')' Block  */
#line 435 "yacc.y"
                              {
		//printf("func test\n");
		(yyval.gramtree)=create("func_def",5,(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2058 "y.tab.c"
    break;


#line 2062 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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


#if !defined yyoverflow
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

  return yyresult;
}

#line 440 "yacc.y"


void yyerror(const char *s){
	printf("??? %d\n",yylineno);
	printf("??? %s\n",yytext);
	//printf("??? \n%*s\n%*s\n", column, "^", column, s);
}

int main(int argc,char *argv[]){
	//printf("ok!\n");
	yyin = fopen(argv[1],"r");
	//printf("ok1\n");
	yyparse();
	//printf("ok2\n");
	//printtree(root,0);
	parse_unit(root->left);
	//printf("test ok!\n");
	
	printCode();
	fclose(yyin);
}


