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

#include "tree.h"
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

extern char *yytext;
extern FILE *yyin;
extern int column;
gramTree *root;
extern int yylineno;

int yylex(void);
void yyerror(const char*);


#line 89 "y.tab.c"

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
#line 19 "yacc.y"

	struct gramTree* gramtree;

#line 185 "y.tab.c"

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
  YYSYMBOL_primary_exp = 40,               /* primary_exp  */
  YYSYMBOL_postfix_exp = 41,               /* postfix_exp  */
  YYSYMBOL_arg_exp_list = 42,              /* arg_exp_list  */
  YYSYMBOL_unary_exp = 43,                 /* unary_exp  */
  YYSYMBOL_unary_oper = 44,                /* unary_oper  */
  YYSYMBOL_mult_exp = 45,                  /* mult_exp  */
  YYSYMBOL_add_exp = 46,                   /* add_exp  */
  YYSYMBOL_rel_exp = 47,                   /* rel_exp  */
  YYSYMBOL_eq_exp = 48,                    /* eq_exp  */
  YYSYMBOL_and_exp = 49,                   /* and_exp  */
  YYSYMBOL_or_exp = 50,                    /* or_exp  */
  YYSYMBOL_ass_exp = 51,                   /* ass_exp  */
  YYSYMBOL_exp = 52,                       /* exp  */
  YYSYMBOL_typ = 53,                       /* typ  */
  YYSYMBOL_decl = 54,                      /* decl  */
  YYSYMBOL_init_del_list = 55,             /* init_del_list  */
  YYSYMBOL_init_del = 56,                  /* init_del  */
  YYSYMBOL_del = 57,                       /* del  */
  YYSYMBOL_param_list = 58,                /* param_list  */
  YYSYMBOL_param_decl = 59,                /* param_decl  */
  YYSYMBOL_idt_list = 60,                  /* idt_list  */
  YYSYMBOL_init = 61,                      /* init  */
  YYSYMBOL_init_list = 62,                 /* init_list  */
  YYSYMBOL_sta = 63,                       /* sta  */
  YYSYMBOL_more_sta = 64,                  /* more_sta  */
  YYSYMBOL_block_item_list = 65,           /* block_item_list  */
  YYSYMBOL_block_item = 66,                /* block_item  */
  YYSYMBOL_exp_sta = 67,                   /* exp_sta  */
  YYSYMBOL_if_sta = 68,                    /* if_sta  */
  YYSYMBOL_iter_sta = 69,                  /* iter_sta  */
  YYSYMBOL_jump_sta = 70,                  /* jump_sta  */
  YYSYMBOL_tran_unit = 71,                 /* tran_unit  */
  YYSYMBOL_ext_decl = 72,                  /* ext_decl  */
  YYSYMBOL_func_def = 73,                  /* func_def  */
  YYSYMBOL_decl_list = 74                  /* decl_list  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

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
       0,    45,    45,    51,    56,    61,    66,    70,    74,    78,
      83,    87,    92,    96,   101,   105,   109,   114,   118,   122,
     126,   131,   135,   139,   145,   149,   153,   157,   161,   166,
     170,   174,   179,   183,   188,   192,   197,   202,   207,   211,
     216,   220,   226,   230,   235,   239,   244,   248,   254,   259,
     263,   267,   271,   275,   279,   285,   289,   294,   299,   303,
     308,   312,   317,   321,   326,   330,   334,   338,   342,   347,
     351,   356,   360,   365,   369,   374,   379,   383,   388,   393,
     397,   401,   405,   410,   414,   419,   423,   428,   432,   438,
     442
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
  "INTNUM", "VAR", "LOWER_THAN_ELSE", "$accept", "Program", "primary_exp",
  "postfix_exp", "arg_exp_list", "unary_exp", "unary_oper", "mult_exp",
  "add_exp", "rel_exp", "eq_exp", "and_exp", "or_exp", "ass_exp", "exp",
  "typ", "decl", "init_del_list", "init_del", "del", "param_list",
  "param_decl", "idt_list", "init", "init_list", "sta", "more_sta",
  "block_item_list", "block_item", "exp_sta", "if_sta", "iter_sta",
  "jump_sta", "tran_unit", "ext_decl", "func_def", "decl_list", YY_NULLPTR
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

#define YYPACT_NINF (-75)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,   142,   -75,   -75,    28,     7,   -75,    51,   -75,   -75,
       7,   -75,     7,   -75,    86,   -75,   177,   -75,   181,    47,
     171,     7,   -75,     1,    17,    87,   116,     7,   -75,   -75,
      44,   -75,   -75,   -75,     7,   -75,   -75,    88,   -75,   114,
     152,   -75,   -75,   -75,   -75,   -75,   -75,   -75,    30,    13,
     152,   137,   182,   149,   174,    11,     8,    43,    54,    76,
      82,   106,   133,   -75,   -75,   188,   -75,   -75,   -75,   108,
     -75,   -75,   -75,   -75,   -75,   116,   -75,   -75,   -75,   -75,
      73,   -75,    59,   -75,   129,   121,   136,   152,   152,   -75,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   -75,   152,   152,   -75,   -75,   -75,   190,
     152,   -75,   -75,   -75,   -75,    81,   -75,   -75,   -75,   -75,
     122,   -75,    -4,   -75,   -75,   -75,   -75,   -75,   137,   137,
     182,   182,   182,   182,   149,   149,   174,    11,   123,   147,
     -75,   -75,   -75,   116,   -75,   152,   -75,     0,     0,   -75,
     -75,   139,   -75,     0,   -75
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    41,    40,     0,     0,    86,     2,    83,    85,
       0,     1,     0,    48,     0,    44,    46,    84,     0,    46,
       0,     0,    42,     0,     0,     0,     0,     0,    89,    88,
       0,    43,    49,    45,     0,    54,    58,     0,    55,     0,
       0,    51,    14,    15,    16,     4,     3,     6,    12,    17,
       0,    21,    24,    29,    32,    34,    36,     0,     0,     0,
       0,     0,     0,    69,    38,     0,    73,    74,    64,     0,
      71,    65,    66,    67,    68,     0,    60,    47,    90,    87,
      57,    52,     0,    53,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,    82,    81,    79,     0,
       0,    75,    70,    72,    62,     0,    56,    59,     5,     8,
       0,    10,     0,    37,    18,    20,    19,    17,    22,    23,
      25,    26,    27,    28,    30,    31,    33,    35,     0,     0,
      80,    39,    61,     0,     9,     0,     7,     0,     0,    63,
      11,    76,    78,     0,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,   -75,   -75,   -20,   -75,   118,   101,   115,
      66,    68,   -75,   -24,   -37,    26,   -12,   176,   169,    12,
     -75,   110,   -75,   -74,   -75,   -64,     4,   -75,   125,   -75,
     -75,   -75,   -75,   -75,   195,   -75,   -75
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,    47,    48,   120,    49,    50,    51,    52,    53,
      54,    55,    56,    64,    65,    27,     6,    14,    15,    19,
      37,    38,    39,    77,   115,    67,    68,    69,    70,    71,
      72,    73,    74,     7,     8,     9,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,   114,    76,    85,    28,    34,    58,    59,    60,    61,
      62,   146,    40,    66,    35,   110,    25,    16,    78,    12,
      29,    42,    43,    44,    20,   109,     5,    10,    11,    40,
      89,    88,    41,     5,    79,    45,    46,    36,    42,    43,
      44,   102,    86,    13,    87,   101,    80,     1,     2,     3,
     122,    76,    45,    46,     1,     2,     3,    66,   103,    23,
      25,    24,   121,    34,   123,    26,   104,   138,   139,   149,
     124,   125,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   151,   152,    23,   141,    24,   105,   154,
       1,     2,     3,    58,    59,    60,    61,    62,   142,    40,
     143,    81,   106,    25,    63,    21,    22,    82,    42,    43,
      44,     1,     2,     3,    58,    59,    60,    61,    62,    76,
      40,   150,    45,    46,    25,   112,   107,    83,    40,    42,
      43,    44,    75,    84,   118,   144,   147,    42,    43,    44,
     110,   145,   110,    45,    46,    40,     2,     3,    40,   119,
     153,    45,    46,   108,    42,    43,    44,    42,    43,    44,
     148,    90,    91,    92,    40,   117,   110,   136,    45,    46,
     137,    45,    46,    42,    43,    44,    95,    96,    97,    98,
       1,     2,     3,    23,    32,    24,    18,    45,    46,    23,
      33,    24,   116,    25,   113,    26,   130,   131,   132,   133,
      21,    31,    17,    93,    94,    99,   100,   110,   111,   110,
     140,   128,   129,     0,   134,   135
};

static const yytype_int16 yycheck[] =
{
      24,    75,    26,    40,    16,     4,     6,     7,     8,     9,
      10,    15,    12,    25,    13,    19,    16,     5,    30,    12,
      16,    21,    22,    23,    12,    62,     0,     1,     0,    12,
      50,    18,    15,     7,    30,    35,    36,    36,    21,    22,
      23,    33,    12,    36,    14,    34,    34,     3,     4,     5,
      87,    75,    35,    36,     3,     4,     5,    69,    15,    12,
      16,    14,    86,     4,    88,    18,    12,   104,   105,   143,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   147,   148,    12,   110,    14,    12,   153,
       3,     4,     5,     6,     7,     8,     9,    10,    17,    12,
      19,    13,    20,    16,    17,    19,    20,    19,    21,    22,
      23,     3,     4,     5,     6,     7,     8,     9,    10,   143,
      12,   145,    35,    36,    16,    17,    20,    13,    12,    21,
      22,    23,    16,    19,    13,    13,    13,    21,    22,    23,
      19,    19,    19,    35,    36,    12,     4,     5,    12,    13,
      11,    35,    36,    20,    21,    22,    23,    21,    22,    23,
      13,    24,    25,    26,    12,    36,    19,   101,    35,    36,
     102,    35,    36,    21,    22,    23,    27,    28,    29,    30,
       3,     4,     5,    12,    13,    14,    10,    35,    36,    12,
      21,    14,    82,    16,    69,    18,    95,    96,    97,    98,
      19,    20,     7,    21,    22,    31,    32,    19,    20,    19,
      20,    93,    94,    -1,    99,   100
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    39,    53,    54,    71,    72,    73,
      53,     0,    12,    36,    55,    56,    57,    72,    55,    57,
      57,    19,    20,    12,    14,    16,    18,    53,    54,    64,
      74,    20,    13,    56,     4,    13,    36,    58,    59,    60,
      12,    15,    21,    22,    23,    35,    36,    40,    41,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     6,     7,
       8,     9,    10,    17,    51,    52,    54,    63,    64,    65,
      66,    67,    68,    69,    70,    16,    51,    61,    54,    64,
      57,    13,    19,    13,    19,    52,    12,    14,    18,    43,
      24,    25,    26,    21,    22,    27,    28,    29,    30,    31,
      32,    34,    33,    15,    12,    12,    20,    20,    20,    52,
      19,    20,    17,    66,    61,    62,    59,    36,    13,    13,
      42,    51,    52,    51,    43,    43,    43,    43,    45,    45,
      46,    46,    46,    46,    47,    47,    48,    49,    52,    52,
      20,    51,    17,    19,    13,    19,    15,    13,    13,    61,
      51,    63,    63,    11,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    40,    41,    41,    41,    41,
      42,    42,    43,    43,    44,    44,    44,    45,    45,    45,
      45,    46,    46,    46,    47,    47,    47,    47,    47,    48,
      48,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    63,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    68,    68,    69,    70,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       1,     3,     1,     2,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     3,     4,     1,     3,     1,     3,     1,     3,
       4,     3,     4,     4,     3,     1,     3,     2,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     2,
       3,     1,     2,     1,     1,     2,     5,     7,     5,     2,
       3,     2,     2,     1,     2,     1,     1,     4,     3,     1,
       2
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
		printf("unit\n");
		root=create("Program",1,(yyvsp[0].gramtree));
	}
#line 1354 "y.tab.c"
    break;

  case 3: /* primary_exp: VAR  */
#line 51 "yacc.y"
            {
		printf("primary");
		(yyval.gramtree)=create("primary_exp",1,(yyvsp[0].gramtree));
	}
#line 1363 "y.tab.c"
    break;

  case 4: /* primary_exp: INTNUM  */
#line 56 "yacc.y"
               {
		//printf("test INTNUM\n");
		(yyval.gramtree)=create("primary_exp",1,(yyvsp[0].gramtree));
	}
#line 1372 "y.tab.c"
    break;

  case 5: /* primary_exp: '(' exp ')'  */
#line 61 "yacc.y"
                    {
		(yyval.gramtree)=create("primary_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1380 "y.tab.c"
    break;

  case 6: /* postfix_exp: primary_exp  */
#line 66 "yacc.y"
                   {
		(yyval.gramtree)=create("postfix_exp",1,(yyvsp[0].gramtree));
	}
#line 1388 "y.tab.c"
    break;

  case 7: /* postfix_exp: postfix_exp '[' exp ']'  */
#line 70 "yacc.y"
                                {
		(yyval.gramtree)=create("postfix_exp",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1396 "y.tab.c"
    break;

  case 8: /* postfix_exp: postfix_exp '(' ')'  */
#line 74 "yacc.y"
                           {
		(yyval.gramtree)=create("postfix_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1404 "y.tab.c"
    break;

  case 9: /* postfix_exp: postfix_exp '(' arg_exp_list ')'  */
#line 78 "yacc.y"
                                         {
		(yyval.gramtree)=create("postfix_exp",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1412 "y.tab.c"
    break;

  case 10: /* arg_exp_list: ass_exp  */
#line 83 "yacc.y"
               {
		(yyval.gramtree)=create("arg_exp_list",1,(yyvsp[0].gramtree));
	}
#line 1420 "y.tab.c"
    break;

  case 11: /* arg_exp_list: arg_exp_list ',' ass_exp  */
#line 87 "yacc.y"
                                 {
		(yyval.gramtree)=create("arg_exp_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1428 "y.tab.c"
    break;

  case 12: /* unary_exp: postfix_exp  */
#line 92 "yacc.y"
                   {
		(yyval.gramtree)=create("unary_exp",1,(yyvsp[0].gramtree));
	}
#line 1436 "y.tab.c"
    break;

  case 13: /* unary_exp: unary_oper unary_exp  */
#line 96 "yacc.y"
                            {
		(yyval.gramtree)=create("unary_exp",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1444 "y.tab.c"
    break;

  case 14: /* unary_oper: '+'  */
#line 101 "yacc.y"
            {
		(yyval.gramtree)=create("unary_oper",1,(yyvsp[0].gramtree));
	}
#line 1452 "y.tab.c"
    break;

  case 15: /* unary_oper: '-'  */
#line 105 "yacc.y"
            {
		(yyval.gramtree)=create("unary_oper",1,(yyvsp[0].gramtree));
	}
#line 1460 "y.tab.c"
    break;

  case 16: /* unary_oper: '!'  */
#line 109 "yacc.y"
            {
		(yyval.gramtree)=create("unary_oper",1,(yyvsp[0].gramtree));
	}
#line 1468 "y.tab.c"
    break;

  case 17: /* mult_exp: unary_exp  */
#line 114 "yacc.y"
                 {
		(yyval.gramtree)=create("mult_exp",1,(yyvsp[0].gramtree));
	}
#line 1476 "y.tab.c"
    break;

  case 18: /* mult_exp: mult_exp '*' unary_exp  */
#line 118 "yacc.y"
                              {
		(yyval.gramtree)=create("mult_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1484 "y.tab.c"
    break;

  case 19: /* mult_exp: mult_exp '%' unary_exp  */
#line 122 "yacc.y"
                              {
		(yyval.gramtree)=create("mult_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1492 "y.tab.c"
    break;

  case 20: /* mult_exp: mult_exp '/' unary_exp  */
#line 126 "yacc.y"
                              {
		(yyval.gramtree)=create("mult_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1500 "y.tab.c"
    break;

  case 21: /* add_exp: mult_exp  */
#line 131 "yacc.y"
                 {
		(yyval.gramtree)=create("add_exp",1,(yyvsp[0].gramtree));
	}
#line 1508 "y.tab.c"
    break;

  case 22: /* add_exp: add_exp '+' mult_exp  */
#line 135 "yacc.y"
                            {
		(yyval.gramtree)=create("add_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1516 "y.tab.c"
    break;

  case 23: /* add_exp: add_exp '-' mult_exp  */
#line 139 "yacc.y"
                            {
		(yyval.gramtree)=create("add_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1524 "y.tab.c"
    break;

  case 24: /* rel_exp: add_exp  */
#line 145 "yacc.y"
                {
		(yyval.gramtree)=create("rel_exp",1,(yyvsp[0].gramtree));
	}
#line 1532 "y.tab.c"
    break;

  case 25: /* rel_exp: rel_exp '<' add_exp  */
#line 149 "yacc.y"
                           {
		(yyval.gramtree)=create("rel_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1540 "y.tab.c"
    break;

  case 26: /* rel_exp: rel_exp '>' add_exp  */
#line 153 "yacc.y"
                           {
		(yyval.gramtree)=create("rel_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1548 "y.tab.c"
    break;

  case 27: /* rel_exp: rel_exp LE add_exp  */
#line 157 "yacc.y"
                          {
		(yyval.gramtree)=create("rel_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1556 "y.tab.c"
    break;

  case 28: /* rel_exp: rel_exp GE add_exp  */
#line 161 "yacc.y"
                          {
		(yyval.gramtree)=create("rel_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1564 "y.tab.c"
    break;

  case 29: /* eq_exp: rel_exp  */
#line 166 "yacc.y"
               {
		(yyval.gramtree)=create("eq_exp",1,(yyvsp[0].gramtree));
	}
#line 1572 "y.tab.c"
    break;

  case 30: /* eq_exp: eq_exp EQ rel_exp  */
#line 170 "yacc.y"
                         {
		(yyval.gramtree)=create("eq_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1580 "y.tab.c"
    break;

  case 31: /* eq_exp: eq_exp NE rel_exp  */
#line 174 "yacc.y"
                         {
		(yyval.gramtree)=create("eq_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1588 "y.tab.c"
    break;

  case 32: /* and_exp: eq_exp  */
#line 179 "yacc.y"
              {
		(yyval.gramtree)=create("and_exp",1,(yyvsp[0].gramtree));
	}
#line 1596 "y.tab.c"
    break;

  case 33: /* and_exp: and_exp AND eq_exp  */
#line 183 "yacc.y"
                          {
		(yyval.gramtree)=create("and_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1604 "y.tab.c"
    break;

  case 34: /* or_exp: and_exp  */
#line 188 "yacc.y"
               {
		(yyval.gramtree)=create("or_exp",1,(yyvsp[0].gramtree));
	}
#line 1612 "y.tab.c"
    break;

  case 35: /* or_exp: or_exp OR and_exp  */
#line 192 "yacc.y"
                         {
		(yyval.gramtree)=create("or_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1620 "y.tab.c"
    break;

  case 36: /* ass_exp: or_exp  */
#line 197 "yacc.y"
              {
		//printf("or test\n");
		(yyval.gramtree)=create("ass_exp",1,(yyvsp[0].gramtree));
	}
#line 1629 "y.tab.c"
    break;

  case 37: /* ass_exp: unary_exp '=' ass_exp  */
#line 202 "yacc.y"
                             {
		(yyval.gramtree)=create("ass_exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1637 "y.tab.c"
    break;

  case 38: /* exp: ass_exp  */
#line 207 "yacc.y"
               {
		(yyval.gramtree)=create("exp",1,(yyvsp[0].gramtree));
	}
#line 1645 "y.tab.c"
    break;

  case 39: /* exp: exp ',' ass_exp  */
#line 211 "yacc.y"
                       {
		(yyval.gramtree)=create("exp",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1653 "y.tab.c"
    break;

  case 40: /* typ: VOID  */
#line 216 "yacc.y"
             {
		(yyval.gramtree)=create("typ",1,(yyvsp[0].gramtree));
	}
#line 1661 "y.tab.c"
    break;

  case 41: /* typ: INT  */
#line 220 "yacc.y"
           {
		//printf("INT test\n");
		(yyval.gramtree)=create("typ",1,(yyvsp[0].gramtree));
	}
#line 1670 "y.tab.c"
    break;

  case 42: /* decl: typ init_del_list ';'  */
#line 226 "yacc.y"
                                      {
			(yyval.gramtree)=create("decl",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
		}
#line 1678 "y.tab.c"
    break;

  case 43: /* decl: CONST typ init_del_list ';'  */
#line 230 "yacc.y"
                                            {
			(yyval.gramtree)=create("decl",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
		}
#line 1686 "y.tab.c"
    break;

  case 44: /* init_del_list: init_del  */
#line 235 "yacc.y"
                {
		(yyval.gramtree)=create("init_del",1,(yyvsp[0].gramtree));
	}
#line 1694 "y.tab.c"
    break;

  case 45: /* init_del_list: init_del_list ',' init_del  */
#line 239 "yacc.y"
                                   {
		(yyval.gramtree)=create("init_del_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1702 "y.tab.c"
    break;

  case 46: /* init_del: del  */
#line 244 "yacc.y"
           {
		(yyval.gramtree)=create("init_del",1,(yyvsp[0].gramtree));
	}
#line 1710 "y.tab.c"
    break;

  case 47: /* init_del: del '=' init  */
#line 248 "yacc.y"
                     {
		//printf("test int b=1??\n");
		(yyval.gramtree)=create("init_del",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1719 "y.tab.c"
    break;

  case 48: /* del: VAR  */
#line 254 "yacc.y"
           {
		//printf("test var\n");
		(yyval.gramtree)=create("del",1,(yyvsp[0].gramtree));
	}
#line 1728 "y.tab.c"
    break;

  case 49: /* del: '(' del ')'  */
#line 259 "yacc.y"
                    {
		(yyval.gramtree)=create("del",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1736 "y.tab.c"
    break;

  case 50: /* del: del '[' ass_exp ']'  */
#line 263 "yacc.y"
                            {
		(yyval.gramtree)=create("del",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1744 "y.tab.c"
    break;

  case 51: /* del: del '[' ']'  */
#line 267 "yacc.y"
                    {
		(yyval.gramtree)=create("del",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1752 "y.tab.c"
    break;

  case 52: /* del: del '(' param_list ')'  */
#line 271 "yacc.y"
                               {
		(yyval.gramtree)=create("del",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1760 "y.tab.c"
    break;

  case 53: /* del: del '(' idt_list ')'  */
#line 275 "yacc.y"
                             {
		(yyval.gramtree)=create("del",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1768 "y.tab.c"
    break;

  case 54: /* del: del '(' ')'  */
#line 279 "yacc.y"
                   {
		//printf("() test");
		(yyval.gramtree)=create("del",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1777 "y.tab.c"
    break;

  case 55: /* param_list: param_decl  */
#line 285 "yacc.y"
                   {
		(yyval.gramtree)=create("param_list",1,(yyvsp[0].gramtree));
	}
#line 1785 "y.tab.c"
    break;

  case 56: /* param_list: param_list ',' param_decl  */
#line 289 "yacc.y"
                                 {
		(yyval.gramtree)=create("param_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1793 "y.tab.c"
    break;

  case 57: /* param_decl: INT del  */
#line 294 "yacc.y"
               {
		(yyval.gramtree)=create("param_decl",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1801 "y.tab.c"
    break;

  case 58: /* idt_list: VAR  */
#line 299 "yacc.y"
           {
		(yyval.gramtree)=create("idt_list",1,(yyvsp[0].gramtree));
	}
#line 1809 "y.tab.c"
    break;

  case 59: /* idt_list: idt_list ',' VAR  */
#line 303 "yacc.y"
                        {
		(yyval.gramtree)=create("idt_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1817 "y.tab.c"
    break;

  case 60: /* init: ass_exp  */
#line 308 "yacc.y"
               {
		(yyval.gramtree)=create("initalizer",1,(yyvsp[0].gramtree));
	}
#line 1825 "y.tab.c"
    break;

  case 61: /* init: '{' init_list '}'  */
#line 312 "yacc.y"
                         {
		(yyval.gramtree)=create("init",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1833 "y.tab.c"
    break;

  case 62: /* init_list: init  */
#line 317 "yacc.y"
            {
		(yyval.gramtree)=create("init_list",1,(yyvsp[0].gramtree));
	}
#line 1841 "y.tab.c"
    break;

  case 63: /* init_list: init_list ',' init  */
#line 321 "yacc.y"
                          {
		(yyval.gramtree)=create("init_list",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1849 "y.tab.c"
    break;

  case 64: /* sta: more_sta  */
#line 326 "yacc.y"
                {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1857 "y.tab.c"
    break;

  case 65: /* sta: exp_sta  */
#line 330 "yacc.y"
               {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1865 "y.tab.c"
    break;

  case 66: /* sta: if_sta  */
#line 334 "yacc.y"
              {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1873 "y.tab.c"
    break;

  case 67: /* sta: iter_sta  */
#line 338 "yacc.y"
                {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1881 "y.tab.c"
    break;

  case 68: /* sta: jump_sta  */
#line 342 "yacc.y"
                {
		(yyval.gramtree)=create("sta",1,(yyvsp[0].gramtree));
	}
#line 1889 "y.tab.c"
    break;

  case 69: /* more_sta: '{' '}'  */
#line 347 "yacc.y"
               {
		(yyval.gramtree)=create("more_sta",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1897 "y.tab.c"
    break;

  case 70: /* more_sta: '{' block_item_list '}'  */
#line 351 "yacc.y"
                                {
		(yyval.gramtree)=create("more_sta",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1905 "y.tab.c"
    break;

  case 71: /* block_item_list: block_item  */
#line 356 "yacc.y"
                  {
		(yyval.gramtree)=create("block_item_list",1,(yyvsp[0].gramtree));
	}
#line 1913 "y.tab.c"
    break;

  case 72: /* block_item_list: block_item_list block_item  */
#line 360 "yacc.y"
                                  {
		(yyval.gramtree)=create("block_item_list",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1921 "y.tab.c"
    break;

  case 73: /* block_item: decl  */
#line 365 "yacc.y"
            {
		(yyval.gramtree)=create("block_item",1,(yyvsp[0].gramtree));
	}
#line 1929 "y.tab.c"
    break;

  case 74: /* block_item: sta  */
#line 369 "yacc.y"
           {
		(yyval.gramtree)=create("block_item",1,(yyvsp[0].gramtree));
	}
#line 1937 "y.tab.c"
    break;

  case 75: /* exp_sta: exp ';'  */
#line 374 "yacc.y"
               {
		(yyval.gramtree)=create("exp_sta",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1945 "y.tab.c"
    break;

  case 76: /* if_sta: IF '(' exp ')' sta  */
#line 379 "yacc.y"
                                                {
		(yyval.gramtree)=create("if_sta",5,(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1953 "y.tab.c"
    break;

  case 77: /* if_sta: IF '(' exp ')' sta ELSE sta  */
#line 383 "yacc.y"
                                   {
		(yyval.gramtree)=create("if_sta",7,(yyvsp[-6].gramtree),(yyvsp[-5].gramtree),(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1961 "y.tab.c"
    break;

  case 78: /* iter_sta: WHILE '(' exp ')' sta  */
#line 388 "yacc.y"
                             {
		(yyval.gramtree)=create("iter_statemenr",5,(yyvsp[-4].gramtree),(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1969 "y.tab.c"
    break;

  case 79: /* jump_sta: RETURN ';'  */
#line 393 "yacc.y"
                  {
		(yyval.gramtree)=create("jump_sta",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1977 "y.tab.c"
    break;

  case 80: /* jump_sta: RETURN exp ';'  */
#line 397 "yacc.y"
                      {
		(yyval.gramtree)=create("jump_sta",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1985 "y.tab.c"
    break;

  case 81: /* jump_sta: CONTINUE ';'  */
#line 401 "yacc.y"
                    {
		(yyval.gramtree)=create("jump_sta",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 1993 "y.tab.c"
    break;

  case 82: /* jump_sta: BREAK ';'  */
#line 405 "yacc.y"
                  {
		(yyval.gramtree)=create("jump_sta",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2001 "y.tab.c"
    break;

  case 83: /* tran_unit: ext_decl  */
#line 410 "yacc.y"
                {
		(yyval.gramtree)=create("tran_unit",1,(yyvsp[0].gramtree));
	}
#line 2009 "y.tab.c"
    break;

  case 84: /* tran_unit: tran_unit ext_decl  */
#line 414 "yacc.y"
                          {
		(yyval.gramtree)=create("tran_unit",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2017 "y.tab.c"
    break;

  case 85: /* ext_decl: func_def  */
#line 419 "yacc.y"
                {
		(yyval.gramtree)=create("ext_decl",1,(yyvsp[0].gramtree));
	}
#line 2025 "y.tab.c"
    break;

  case 86: /* ext_decl: decl  */
#line 423 "yacc.y"
            {
		(yyval.gramtree)=create("ext_decl",1,(yyvsp[0].gramtree));
	}
#line 2033 "y.tab.c"
    break;

  case 87: /* func_def: typ del decl_list more_sta  */
#line 428 "yacc.y"
                                  {
		(yyval.gramtree)=create("func_def",4,(yyvsp[-3].gramtree),(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2041 "y.tab.c"
    break;

  case 88: /* func_def: typ del more_sta  */
#line 432 "yacc.y"
                        {
		//printf("func test\n");
		(yyval.gramtree)=create("func_def",3,(yyvsp[-2].gramtree),(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2050 "y.tab.c"
    break;

  case 89: /* decl_list: decl  */
#line 438 "yacc.y"
            {
		(yyval.gramtree)=create("decl_list",1,(yyvsp[0].gramtree));
	}
#line 2058 "y.tab.c"
    break;

  case 90: /* decl_list: decl_list decl  */
#line 442 "yacc.y"
                      {
		(yyval.gramtree)=create("decl_list",2,(yyvsp[-1].gramtree),(yyvsp[0].gramtree));
	}
#line 2066 "y.tab.c"
    break;


#line 2070 "y.tab.c"

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

#line 447 "yacc.y"


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
	printtree(root,0);
	freeGramTree(root);

	fclose(yyin);
}


