
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
#line 73 "y.tab.c"

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
     OCBRACKET = 258,
     CCBRACKET = 259,
     ORBRACKET = 260,
     CRBRACKET = 261,
     SEMICOLON = 262,
     COLON = 263,
     COMMA = 264,
     PLUSEQUAL = 265,
     MINUSEQUAL = 266,
     MULTIPLYEQUAL = 267,
     DIVIDEEQUAL = 268,
     INC = 269,
     DEC = 270,
     GREATERTHAN = 271,
     LESSTHAN = 272,
     GREATERTHANOREQUAL = 273,
     LESSTHANOREQUAL = 274,
     EQUALEQUAL = 275,
     NOTEQUAL = 276,
     PLUS = 277,
     MINUS = 278,
     MULTIPLY = 279,
     DIVIDE = 280,
     ASSIGN = 281,
     REM = 282,
     AND = 283,
     OR = 284,
     NOT = 285,
     WHILE = 286,
     DO = 287,
     FOR = 288,
     IF = 289,
     ELSE = 290,
     PRINT = 291,
     BOOL = 292,
     INT = 293,
     FLOAT = 294,
     CHAR = 295,
     STRING = 296,
     CONST = 297,
     BREAK = 298,
     SWITCH = 299,
     CASE = 300,
     FALSE = 301,
     TRUE = 302,
     RETURN = 303,
     DEFAULT = 304,
     EXIT = 305,
     IFX = 306,
     UMINUS = 307,
     INTEGER = 308,
     FLOATNUMBER = 309,
     TEXT = 310,
     CHARACTER = 311,
     IDENTIFIER = 312
   };
#endif
/* Tokens.  */
#define OCBRACKET 258
#define CCBRACKET 259
#define ORBRACKET 260
#define CRBRACKET 261
#define SEMICOLON 262
#define COLON 263
#define COMMA 264
#define PLUSEQUAL 265
#define MINUSEQUAL 266
#define MULTIPLYEQUAL 267
#define DIVIDEEQUAL 268
#define INC 269
#define DEC 270
#define GREATERTHAN 271
#define LESSTHAN 272
#define GREATERTHANOREQUAL 273
#define LESSTHANOREQUAL 274
#define EQUALEQUAL 275
#define NOTEQUAL 276
#define PLUS 277
#define MINUS 278
#define MULTIPLY 279
#define DIVIDE 280
#define ASSIGN 281
#define REM 282
#define AND 283
#define OR 284
#define NOT 285
#define WHILE 286
#define DO 287
#define FOR 288
#define IF 289
#define ELSE 290
#define PRINT 291
#define BOOL 292
#define INT 293
#define FLOAT 294
#define CHAR 295
#define STRING 296
#define CONST 297
#define BREAK 298
#define SWITCH 299
#define CASE 300
#define FALSE 301
#define TRUE 302
#define RETURN 303
#define DEFAULT 304
#define EXIT 305
#define IFX 306
#define UMINUS 307
#define INTEGER 308
#define FLOATNUMBER 309
#define TEXT 310
#define CHARACTER 311
#define IDENTIFIER 312




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 102 "mylang.y"

    int IntgerValue;                 /* integer value */
	float FloatValue;               /* float Value */
    char * StringValue;              /* string value */
	char * ChValue;               /* character value */
	char * ID ;                    /*IDENTIFIER Value */
	int* dummy;



/* Line 214 of yacc.c  */
#line 234 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 120 "mylang.y"
 
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>	
	#include"SymbolTable.h"
	int yyerror(char *);
	int yylex(void);
	int yylineno;
	int IDCount=0;
	int SCOPE_Number=0;
	FILE * outFile;
	FILE * inFile;
	FILE *outSymbol;
	void ThrowError(char *Message, char *rVar);							//-- A Function to Terminate the Program and Report an Semantic Error
	void CreateID(int type , char*rName,int rID);						// -- Create a Symbol given its type and Name 
	void  getIDENTIFIER(char*rName);									//-- set Symbol Value 
	void usedIDENTIFIER(char*rName);									// set that Symbol is Used as a RHS in any operation 
	char * conctanteStr(char* str1,char*str2);							// -- a function to conctante two strings 
	bool checktypeIDENTIFER(int LeftType,int RightType,char* Right);		//-- Check Left and Right hand side in Assigment operation;
	char* idtypeString[10] = { "Integer", "Float", "Char", "String", "Bool", "ConstIntger", "ConstFloat", "ConstChar", "ConstString", "ConstBool" };


/* Line 264 of yacc.c  */
#line 270 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    18,    24,    31,
      37,    45,    58,    64,    72,    78,    82,    84,    86,    88,
      91,   103,   109,   112,   116,   117,   121,   122,   127,   128,
     134,   139,   145,   146,   147,   149,   152,   154,   156,   158,
     160,   162,   164,   166,   168,   172,   176,   180,   184,   188,
     191,   194,   198,   201,   204,   208,   212,   216,   220,   222,
     226,   230,   234,   237,   241,   245,   249,   253,   257,   261,
     265,   267,   269,   271,   273,   275,   277,   279,   285,   293
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    60,    61,    -1,    -1,    72,
      57,     7,    -1,    57,    26,    78,     7,    -1,    72,    57,
      26,    78,     7,    -1,    42,    72,    57,    26,    78,     7,
      -1,    31,     5,    78,     6,    61,    -1,    32,    67,    31,
       5,    78,     6,     7,    -1,    33,     5,    38,    57,    26,
      53,     7,    78,     7,    75,     6,    67,    -1,    34,     5,
      78,     6,    67,    -1,    34,     5,    78,     6,    67,    35,
      67,    -1,    44,     5,    57,     6,    68,    -1,    36,    78,
       7,    -1,    62,    -1,    63,    -1,    67,    -1,    74,     7,
      -1,    72,    57,     5,    65,     6,     3,    71,    48,    78,
       7,     4,    -1,    57,     5,    64,     6,     7,    -1,    57,
      64,    -1,    57,     9,    64,    -1,    -1,    72,    57,    66,
      -1,    -1,     9,    72,    57,    66,    -1,    -1,     3,    69,
      71,     4,    70,    -1,     3,    69,     4,    70,    -1,     3,
      69,    79,     4,    70,    -1,    -1,    -1,    61,    -1,    71,
      61,    -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,
      37,    -1,    54,    -1,    53,    -1,    57,    -1,    73,    22,
      73,    -1,    73,    23,    73,    -1,    73,    24,    73,    -1,
      73,    25,    73,    -1,    73,    27,    73,    -1,    57,    14,
      -1,    57,    15,    -1,     5,    73,     6,    -1,    57,    14,
      -1,    57,    15,    -1,    57,    10,    73,    -1,    57,    11,
      73,    -1,    57,    12,    73,    -1,    57,    13,    73,    -1,
      74,    -1,    57,    26,    73,    -1,    78,    28,    78,    -1,
      78,    29,    78,    -1,    30,    78,    -1,    77,    16,    77,
      -1,    77,    17,    77,    -1,    77,    18,    77,    -1,    77,
      19,    77,    -1,    77,    21,    77,    -1,    77,    20,    77,
      -1,     5,    76,     6,    -1,    73,    -1,    56,    -1,    46,
      -1,    47,    -1,    55,    -1,    77,    -1,    76,    -1,    49,
       8,    71,    43,     7,    -1,    45,    53,     8,    71,    43,
       7,    79,    -1,    45,    53,     8,    71,    79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   147,   147,   150,   151,   154,   156,   170,   186,   203,
     205,   207,   213,   215,   217,   220,   222,   223,   225,   226,
     230,   232,   234,   235,   236,   238,   239,   242,   243,   245,
     246,   249,   251,   252,   253,   254,   256,   257,   258,   259,
     260,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   276,   277,   278,   279,   280,   281,   285,   286,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     300,   301,   302,   303,   304,   309,   310,   312,   313,   314
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OCBRACKET", "CCBRACKET", "ORBRACKET",
  "CRBRACKET", "SEMICOLON", "COLON", "COMMA", "PLUSEQUAL", "MINUSEQUAL",
  "MULTIPLYEQUAL", "DIVIDEEQUAL", "INC", "DEC", "GREATERTHAN", "LESSTHAN",
  "GREATERTHANOREQUAL", "LESSTHANOREQUAL", "EQUALEQUAL", "NOTEQUAL",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "ASSIGN", "REM", "AND", "OR",
  "NOT", "WHILE", "DO", "FOR", "IF", "ELSE", "PRINT", "BOOL", "INT",
  "FLOAT", "CHAR", "STRING", "CONST", "BREAK", "SWITCH", "CASE", "FALSE",
  "TRUE", "RETURN", "DEFAULT", "EXIT", "IFX", "UMINUS", "INTEGER",
  "FLOATNUMBER", "TEXT", "CHARACTER", "IDENTIFIER", "$accept", "mystart",
  "startProgram", "stmt", "function", "callFunction", "callList",
  "argList", "commas", "blockScope", "switchScope", "scopeOpen",
  "scopeClose", "manyStatements", "type", "equalFamily", "increments",
  "forExpression", "booleanExpression", "DataTypes", "expression",
  "caseExpression", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    63,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    69,    70,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     4,     5,     6,     5,
       7,    12,     5,     7,     5,     3,     1,     1,     1,     2,
      11,     5,     2,     3,     0,     3,     0,     4,     0,     5,
       4,     5,     0,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     2,
       2,     3,     2,     2,     3,     3,     3,     3,     1,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    32,     0,     0,     0,     0,     0,
      40,    36,    37,    38,    39,     0,     0,     0,     3,    16,
      17,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    42,    41,    74,    71,    43,    70,    76,
      75,     0,     0,     0,    24,     0,     0,     0,     0,    52,
      53,     0,     0,    19,    33,    34,     0,     0,     0,     0,
       0,    70,    76,     0,    62,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,    24,     0,     0,    54,    55,    56,    57,
       0,    26,     5,     0,    30,    33,    35,     0,     0,     0,
       0,    51,    69,    44,    45,    46,    47,    48,    63,    64,
      65,    66,    68,    67,    60,    61,     0,     0,    24,    22,
       0,     0,     6,     0,     0,     0,    29,     9,     0,     0,
      12,     0,    32,    14,    23,    21,     0,    28,     7,     0,
       0,     0,     8,     0,     0,     0,    25,    10,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
      28,     0,     0,     0,    31,     0,    27,     0,    58,     0,
       0,     0,     0,     0,     0,     0,    79,    77,    20,    59,
      11,     0,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    55,    19,    20,    84,   123,   146,    21,
     133,    24,    94,    56,    22,    38,    23,   169,    39,    40,
      41,   152
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -157
static const yytype_int16 yypact[] =
{
    -157,     5,   219,  -157,  -157,    18,    23,    50,    53,    29,
    -157,  -157,  -157,  -157,  -157,   194,    57,   214,  -157,  -157,
    -157,  -157,   -36,    58,   116,    29,    38,    35,    29,    29,
      29,  -157,  -157,  -157,  -157,  -157,  -157,    63,   142,  -157,
     167,     9,    34,    36,    37,    10,    10,    10,    10,  -157,
    -157,    29,   110,  -157,  -157,  -157,   159,     1,    76,    45,
       7,   119,   112,    59,  -157,  -157,  -157,    10,    10,    10,
      10,    10,   125,   125,   125,   125,   125,   125,  -157,    29,
      29,    95,   117,    -1,   120,    10,   142,   142,   142,   142,
      20,   194,  -157,    29,  -157,  -157,  -157,   219,    29,    96,
      23,  -157,  -157,   108,   108,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,    29,   124,    37,  -157,
     121,   119,  -157,   132,    74,    24,  -157,  -157,    16,    86,
     139,    43,  -157,  -157,  -157,  -157,   156,   166,  -157,   170,
     182,    23,  -157,   -21,   219,   194,  -157,  -157,    29,  -157,
     141,   210,   216,   173,   145,    61,   215,   219,  -157,    29,
     166,   197,   219,   205,  -157,    85,  -157,   254,  -157,   271,
      67,   272,   274,    10,    23,   275,  -157,  -157,  -157,   142,
    -157,   -21,  -157
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,    -2,  -157,  -157,   -71,  -157,   123,    -4,
    -157,   149,   -92,  -111,   -11,   -28,   126,  -157,   255,   198,
     -19,  -156
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      18,    61,    26,   126,    42,     3,    57,    97,   118,    60,
      63,    64,   119,   100,   176,    85,    78,    86,    87,    88,
      89,    52,   139,    25,   150,   182,     4,   122,   151,    79,
      80,   138,    90,   153,    29,    79,    80,    79,    80,   103,
     104,   105,   106,   107,    79,    80,   163,   134,    79,    80,
     142,   170,    79,    80,    96,    27,    83,   121,    28,    30,
     114,   115,    43,    33,    34,    53,   164,    37,   161,    58,
       4,    79,    80,    59,   125,    31,    32,    65,    66,   128,
     124,    98,    33,    34,    35,    36,    37,    79,    80,    79,
      80,    81,   172,    82,    83,   127,   130,   131,     5,     6,
       7,     8,    99,     9,    10,    11,    12,    13,    14,    15,
     175,    16,   150,    79,    80,    91,   151,    92,   102,     4,
      54,   116,   129,   117,    17,   101,   120,   132,   135,   155,
      85,   137,    69,    70,   154,    71,    93,   149,   136,   140,
     165,    67,    68,    69,    70,   179,    71,     5,     6,     7,
       8,    96,     9,    10,    11,    12,    13,    14,    15,   144,
      16,    96,     4,    95,    67,    68,    69,    70,    96,    71,
     180,    31,    32,    17,   141,   145,     4,   147,    33,    34,
      35,    36,    37,    72,    73,    74,    75,    76,    77,   148,
       5,     6,     7,     8,   156,     9,    10,    11,    12,    13,
      14,    15,   160,    16,     5,     6,     7,     8,     4,     9,
      10,    11,    12,    13,    14,    15,    17,    16,   157,    44,
     158,   159,     4,   162,    45,    46,    47,    48,    49,    50,
      17,    10,    11,    12,    13,    14,     5,     6,     7,     8,
      51,     9,    10,    11,    12,    13,    14,    15,   171,    16,
       5,     6,     7,     8,   167,     9,    10,    11,    12,    13,
      14,    15,    17,    16,    45,    46,    47,    48,    49,    50,
     108,   109,   110,   111,   112,   113,    17,   174,   178,   177,
     173,   143,   181,   166,    62,     0,     0,   168
};

static const yytype_int16 yycheck[] =
{
       2,    29,     6,    95,    15,     0,    25,     6,     9,    28,
      29,    30,    83,     6,   170,     5,     7,    45,    46,    47,
      48,    57,     6,     5,    45,   181,     3,     7,    49,    28,
      29,     7,    51,   144,     5,    28,    29,    28,    29,    67,
      68,    69,    70,    71,    28,    29,   157,   118,    28,    29,
       7,   162,    28,    29,    56,     5,    57,    85,     5,    30,
      79,    80,     5,    53,    54,     7,   158,    57,     7,    31,
       3,    28,    29,    38,    93,    46,    47,    14,    15,    98,
      91,     5,    53,    54,    55,    56,    57,    28,    29,    28,
      29,    57,     7,    57,    57,    97,   100,   116,    31,    32,
      33,    34,    57,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    28,    29,     5,    49,     7,     6,     3,
       4,    26,    26,     6,    57,     6,     6,     3,     7,   148,
       5,    57,    24,    25,   145,    27,    26,   141,     6,    53,
     159,    22,    23,    24,    25,   173,    27,    31,    32,    33,
      34,   153,    36,    37,    38,    39,    40,    41,    42,     3,
      44,   163,     3,     4,    22,    23,    24,    25,   170,    27,
     174,    46,    47,    57,    35,     9,     3,     7,    53,    54,
      55,    56,    57,    16,    17,    18,    19,    20,    21,     7,
      31,    32,    33,    34,    53,    36,    37,    38,    39,    40,
      41,    42,    57,    44,    31,    32,    33,    34,     3,    36,
      37,    38,    39,    40,    41,    42,    57,    44,     8,     5,
       4,    48,     3,     8,    10,    11,    12,    13,    14,    15,
      57,    37,    38,    39,    40,    41,    31,    32,    33,    34,
      26,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      31,    32,    33,    34,    57,    36,    37,    38,    39,    40,
      41,    42,    57,    44,    10,    11,    12,    13,    14,    15,
      72,    73,    74,    75,    76,    77,    57,     6,     4,     7,
      26,   132,     7,   160,    29,    -1,    -1,   161
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,     0,     3,    31,    32,    33,    34,    36,
      37,    38,    39,    40,    41,    42,    44,    57,    61,    62,
      63,    67,    72,    74,    69,     5,    67,     5,     5,     5,
      30,    46,    47,    53,    54,    55,    56,    57,    73,    76,
      77,    78,    72,     5,     5,    10,    11,    12,    13,    14,
      15,    26,    57,     7,     4,    61,    71,    78,    31,    38,
      78,    73,    76,    78,    78,    14,    15,    22,    23,    24,
      25,    27,    16,    17,    18,    19,    20,    21,     7,    28,
      29,    57,    57,    57,    64,     5,    73,    73,    73,    73,
      78,     5,     7,    26,    70,     4,    61,     6,     5,    57,
       6,     6,     6,    73,    73,    73,    73,    73,    77,    77,
      77,    77,    77,    77,    78,    78,    26,     6,     9,    64,
       6,    73,     7,    65,    72,    78,    70,    61,    78,    26,
      67,    78,     3,    68,    64,     7,     6,    57,     7,     6,
      53,    35,     7,    69,     3,     9,    66,     7,     7,    67,
      45,    49,    79,    71,    72,    78,    53,     8,     4,    48,
      57,     7,     8,    71,    70,    78,    66,    57,    74,    75,
      71,    43,     7,    26,     6,    43,    79,     7,     4,    73,
      67,     7,    79
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
        case 5:

/* Line 1455 of yacc.c  */
#line 154 "mylang.y"
    {(yyval.dummy)=NULL;CreateID((yyvsp[(1) - (3)].IntgerValue),(yyvsp[(2) - (3)].ID),IDCount++);printf("Declaration\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 156 "mylang.y"
    {(yyval.dummy)=NULL;
																			if(checktypeIDENTIFER(getSymbolType((yyvsp[(1) - (4)].ID)),(yyvsp[(3) - (4)].IntgerValue),(yyvsp[(1) - (4)].ID)))
																			{
																				getIDENTIFIER((yyvsp[(1) - (4)].ID));
																				printf("Assignment\n");}
																			else 
																				{
																					char*str1=conctanteStr((yyvsp[(1) - (4)].ID)," of Type");
																					char* str2=conctanteStr(str1,idtypeString[getSymbolType((yyvsp[(1) - (4)].ID))]);
																			
																				ThrowError("Error: incompatible types ",str2);
																				}
																			}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 170 "mylang.y"
    {(yyval.dummy)=NULL;
																			CreateID((yyvsp[(1) - (5)].IntgerValue),(yyvsp[(2) - (5)].ID),IDCount++);
																			if(checktypeIDENTIFER(getSymbolType((yyvsp[(2) - (5)].ID)),(yyvsp[(4) - (5)].IntgerValue),(yyvsp[(2) - (5)].ID)))
																			{
																			getIDENTIFIER((yyvsp[(2) - (5)].ID));// setValue here 
																			printf("Declaration and Assignment\n");
																			}
																			else
																				{
																					char*str1=conctanteStr((yyvsp[(2) - (5)].ID)," of Type ");
																					char* str2=conctanteStr(str1,idtypeString[getSymbolType((yyvsp[(2) - (5)].ID))]);
												
																				ThrowError("Error: incompatible types ",str2);
																				}
																			}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 186 "mylang.y"
    {
																				(yyval.dummy)=NULL;
																				CreateID((yyvsp[(2) - (6)].IntgerValue)+5,(yyvsp[(3) - (6)].ID),IDCount++);
																			if(checktypeIDENTIFER(getSymbolType((yyvsp[(3) - (6)].ID)),(yyvsp[(5) - (6)].IntgerValue),(yyvsp[(3) - (6)].ID)))
																			{
																				printf("Constant assignment\n");
																			}
																			else
																				{
																					char*str1=conctanteStr((yyvsp[(3) - (6)].ID)," of Type ");
																					char* str2=conctanteStr(str1,idtypeString[getSymbolType((yyvsp[(3) - (6)].ID))]);
																			
																				ThrowError("Error: incompatible types ",str2);
																				}
																			;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 203 "mylang.y"
    {(yyval.dummy)=NULL;printf("While loop\n");}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 205 "mylang.y"
    {(yyval.dummy)=NULL;printf("Do while\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 210 "mylang.y"
    {(yyval.dummy)=NULL;printf("For loop\n");CreateID(0,(yyvsp[(4) - (12)].ID),IDCount++);getIDENTIFIER((yyvsp[(4) - (12)].ID));}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 213 "mylang.y"
    {(yyval.dummy)=NULL;printf("If statement\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 215 "mylang.y"
    {(yyval.dummy)=NULL;printf("If-Elsestatement\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 217 "mylang.y"
    {(yyval.dummy)=NULL;printf("Switch case\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 220 "mylang.y"
    {(yyval.dummy)=NULL;printf("Print\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 222 "mylang.y"
    {(yyval.dummy)=NULL;printf("Function Body\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 223 "mylang.y"
    {(yyval.dummy)=NULL;printf("Function Call\n");}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 225 "mylang.y"
    {(yyval.dummy)=NULL;printf("New  block\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 226 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 230 "mylang.y"
    {(yyval.dummy)=NULL;printf("function\n");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 242 "mylang.y"
    {}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 245 "mylang.y"
    {(yyval.dummy)=NULL;printf("blockScope\n");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 246 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 249 "mylang.y"
    {printf("Switch Case block\n");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 251 "mylang.y"
    {(yyval.dummy)=NULL; SCOPE_Number++;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 252 "mylang.y"
    {(yyval.dummy)=NULL; SCOPE_Number--;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 253 "mylang.y"
    {(yyval.dummy)=(yyvsp[(1) - (1)].dummy);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 254 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 256 "mylang.y"
    {(yyval.IntgerValue)=0;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 257 "mylang.y"
    {(yyval.IntgerValue)=1;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 258 "mylang.y"
    {(yyval.IntgerValue)=2;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 259 "mylang.y"
    {(yyval.IntgerValue)=3;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 260 "mylang.y"
    {(yyval.IntgerValue)=4;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 263 "mylang.y"
    {(yyval.IntgerValue)=1;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 264 "mylang.y"
    {(yyval.IntgerValue)=0;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 265 "mylang.y"
    {(yyval.IntgerValue)=getSymbolType((yyvsp[(1) - (1)].ID));usedIDENTIFIER((yyvsp[(1) - (1)].ID));}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 266 "mylang.y"
    {if((yyvsp[(1) - (3)].IntgerValue)==(yyvsp[(3) - (3)].IntgerValue)) (yyval.IntgerValue)=(yyvsp[(1) - (3)].IntgerValue); else ThrowError("Conflict dataTypes in Addition \n "," "); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 267 "mylang.y"
    {if((yyvsp[(1) - (3)].IntgerValue)==(yyvsp[(3) - (3)].IntgerValue)) (yyval.IntgerValue)=(yyvsp[(1) - (3)].IntgerValue); else ThrowError("Conflict dataTypes in Subtraction \n "," "); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 268 "mylang.y"
    {if((yyvsp[(1) - (3)].IntgerValue)==(yyvsp[(3) - (3)].IntgerValue)) (yyval.IntgerValue)=(yyvsp[(1) - (3)].IntgerValue); else ThrowError("Conflict dataTypes in Multipication \n "," "); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 269 "mylang.y"
    {if((yyvsp[(1) - (3)].IntgerValue)==(yyvsp[(3) - (3)].IntgerValue)) (yyval.IntgerValue)=(yyvsp[(1) - (3)].IntgerValue); else ThrowError("Conflict dataTypes in Divison \n "," "); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 270 "mylang.y"
    {if((yyvsp[(1) - (3)].IntgerValue)==(yyvsp[(3) - (3)].IntgerValue)) (yyval.IntgerValue)=(yyvsp[(1) - (3)].IntgerValue); else ThrowError("Conflict dataTypes in reminder \n "," "); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 271 "mylang.y"
    {(yyval.IntgerValue)=getSymbolType((yyvsp[(1) - (2)].ID));usedIDENTIFIER((yyvsp[(1) - (2)].ID));}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 272 "mylang.y"
    {(yyval.IntgerValue)=getSymbolType((yyvsp[(1) - (2)].ID));usedIDENTIFIER((yyvsp[(1) - (2)].ID));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 273 "mylang.y"
    {(yyval.IntgerValue)=(yyvsp[(2) - (3)].IntgerValue);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 276 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 277 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 278 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 279 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 280 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 281 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 285 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 286 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 288 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 289 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 290 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 291 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 292 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 293 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 294 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 295 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 296 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 297 "mylang.y"
    {(yyval.dummy)=NULL;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 300 "mylang.y"
    {(yyval.IntgerValue)=(yyvsp[(1) - (1)].IntgerValue);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 301 "mylang.y"
    {(yyval.IntgerValue)=2;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 302 "mylang.y"
    {(yyval.IntgerValue)=4;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 303 "mylang.y"
    {(yyval.IntgerValue)=4;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 304 "mylang.y"
    {(yyval.IntgerValue)=3;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 309 "mylang.y"
    {{(yyval.IntgerValue)=(yyvsp[(1) - (1)].IntgerValue);}}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 310 "mylang.y"
    {{(yyval.IntgerValue)=4;}}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 312 "mylang.y"
    {(yyval.dummy)=NULL;printf(" Case Statment\n");}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 313 "mylang.y"
    {(yyval.dummy)=NULL;printf(" Case Statment\n");}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 314 "mylang.y"
    {(yyval.dummy)=NULL;printf(" Case Statment\n");}
    break;



/* Line 1455 of yacc.c  */
#line 2157 "y.tab.c"
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
#line 317 "mylang.y"
 
void CreateID(int type , char*rName,int rID)
{
	if(CheckIDENTIFYER(rName))
	ThrowError("Already Declared IDENTIFIER with Name ",rName);
	//printf("IDENTIFIER with Name %s is Already Declared \n",rName);
	else
	{
		bool isConstant=(type>4)?true:false;
		SymbolData* rSymbol=setSymbol(type,0,false,0,rName,!isConstant);
		if(isConstant)
		{
			rSymbol->Initilzation=true;
			pushSymbol(rID,rSymbol);
			printf("Constant Symbol is created with Name %s \n",rName);	
		}
		else 
		{
			pushSymbol(rID,rSymbol);
			printf(" Symbol is created with Name %s \n",rName);
		}
	}

}
void getIDENTIFIER(char*rName)
{
	SymbolNode * rSymbol=getID(rName, 0);
	if(!rSymbol)
	//printf("IDENTIFIER with Name %s is not Declared with this scope\n",rName);
	ThrowError("Not Declared in This Scope Identifiyer with Name \n ",rName);
	else
	{
		//printf("IDENTIFIER with Name is Initilized %s \n",rName);
		if(!rSymbol->DATA->Modifiable)
			ThrowError("Can't Modify a Constant Identifiyer with Name \n ",rName);
		else
			rSymbol->DATA->Initilzation=true;
	}
}
void usedIDENTIFIER(char*rName)
{
	SymbolNode * rSymbol=getID(rName, 0);
	if(!rSymbol)
	ThrowError("Not Declared in This Scope Identifiyer with Name \n ",rName);
	else
	{
		printf("IDENTIFIER with Name is Used %s \n",rName);
		if(!rSymbol->DATA->Initilzation)printf("Warning :IDENTIFIER with Name is not Initilized and Used %s \n",rName);// don't quit just a warning
		rSymbol->DATA->Used=true;
	}
}
bool checktypeIDENTIFER(int LeftType,int RightType,char* Right)
{
	/*if(LeftType!=RightType)
	{
		printf("IDENTIFIER with Name  %s has error Type conflict \n",Right);
		return false;
	}
	else
	{
		printf("IDENTIFIER with Name  %s has correct type \n",Right);
		return true;
	}*/
	bool correct = ((LeftType==RightType) || (LeftType-5 ==RightType))?true:false; // here i check both constants types and types 
	return correct;

}
void ThrowError(char *Message, char *rVar)
{
	fclose(inFile);
	//int x = remove("output.txt");
	inFile = fopen("output.txt","w");
	fprintf(inFile, "Syntax Error Could not parse quadruples\n");
 	fprintf(inFile, "line number: %d %s : %s\n", yylineno,Message,rVar);
	printf("line number: %d %s : %s\n", yylineno,Message,rVar);
	fclose(outSymbol);
	 remove("mySymbols.txt");
	outSymbol = fopen("mySymbols.txt","w");
	fprintf(outSymbol, "Syntax Error was Found\n");
 	fprintf(outSymbol, "line number: %d %s : %s\n", yylineno,Message,rVar);
 	exit(0);
};
// needed ?
 int yyerror(char *s) {  int lineno=++yylineno;   fprintf(stderr, "line number : %d %s\n", lineno,s);     return 0; }
 
 char * conctanteStr(char* str1,char*str2)
 {  
      char * str3 = (char *) malloc(1 + strlen(str1)+ strlen(str2) );
      strcpy(str3, str1);
      strcat(str3, str2);
	return str3;
 
 }
 int main(void) {
	
	inFile = fopen("input.txt", "r");
	outFile=fopen("output.txt","w");
	outSymbol=fopen("mySymbols.txt","w");
	if(!yyparse()) {
		printf("\nParsing complete\n");
		PrintSymbolTable(outSymbol);
		fprintf(outFile,"Completed");
	}
	else {
		printf("\nParsing failed\n %d",yylineno);
		return 0;
	}
	
	fclose(inFile);
	fclose(outFile);
    return 0;
}