
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
#line 1 "sintactico.y"


/********************** 
 * Declaraciones en C *
 **********************/


  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include "string.h"
  extern int yylex(void);
  extern char *yytext;
  extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);


/* Line 189 of yacc.c  */
#line 92 "sintactico.tab.c"

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
     NUMERO = 258,
     NUMENTERO = 259,
     TDSBYTE = 260,
     TDBYTE = 261,
     TDSHORT = 262,
     TDUSHORT = 263,
     TDDOBLE = 264,
     TDBOLEANO = 265,
     TDNULO = 266,
     TDENUM = 267,
     TDENTERO = 268,
     TDFLOTANTE = 269,
     TDSTRING = 270,
     TDCHAR = 271,
     TDDECIMAL = 272,
     TDUINT = 273,
     TDLONG = 274,
     TULONG = 275,
     CICLOFOR = 276,
     CICLOWHILE = 277,
     CICLOFOREACH = 278,
     CICLODO = 279,
     PREGUNTA = 280,
     ENTONCES = 281,
     ENTSI = 282,
     CLASE = 283,
     LECTURAINPUT = 284,
     LECTURALEER = 285,
     LECTURALEERLINEA = 286,
     LECTURAESCANEAR = 287,
     IMPRESIONPRINT = 288,
     IMPRESIONWRITE = 289,
     IMPRESIONWLINE = 290,
     DETENER = 291,
     CONVERTIR = 292,
     MENORQUE = 293,
     MAYORQUE = 294,
     MENORIGUAL = 295,
     MAYORIGUAL = 296,
     IGUALIGUAL = 297,
     DIFERENTE = 298,
     PASA = 299,
     LAMBDA = 300,
     NOLOCAL = 301,
     EXPONENTE = 302,
     MODULO = 303,
     RCUADRADA = 304,
     PI = 305,
     SUMA = 306,
     RESTA = 307,
     MULTIPLICACION = 308,
     DIVISION = 309,
     INCREMENTO = 310,
     DECREMENTO = 311,
     OPLOGOR = 312,
     OPLONOT = 313,
     OPLOGAND = 314,
     ASIGNACION = 315,
     ASIIGNACIONSUMA = 316,
     ASIGNACIONRESTA = 317,
     ASIGNACIONMULTIPLICAION = 318,
     ASIGNACIONDIVISION = 319,
     ASIGNACIONEXPONENTE = 320,
     ASIGNACIONMODULO = 321,
     KEYIZQ = 322,
     KEYDER = 323,
     CORIZQ = 324,
     CORDER = 325,
     PARIZQ = 326,
     PARDER = 327,
     DIVIZQ = 328,
     DIVDER = 329,
     TRATAR = 330,
     CAPTURA = 331,
     ASIGNAPER = 332,
     FINALMENTE = 333,
     LANZAR = 334,
     LISTA = 335,
     PILA = 336,
     COLA = 337,
     NATIVO = 338,
     SUPERCONST = 339,
     CONTINUAR = 340,
     EXTENDER = 341,
     IMPLEMENTAR = 342,
     IMPORTAR = 343,
     INSTANCIADE = 344,
     NUEVO = 345,
     PRIVADO = 346,
     PROTEGIDO = 347,
     CASO = 348,
     CAMBIO = 349,
     VACIO = 350,
     ESTO = 351,
     SINCRONIZAR = 352,
     DESCANZO = 353,
     CONSOLA = 354,
     INTERFAZ = 355,
     PACKAGE = 356,
     ACCESO = 357,
     OBTENER = 358,
     LET = 359,
     FUNCION = 360,
     SINVALOR = 361,
     GUARD = 362,
     INICIOBLOQUE = 363,
     FINBLOQUE = 364,
     CALCULOINICIO = 365,
     MATCH = 366,
     INICIORUTINA = 367,
     FINRUTINA = 368,
     FINIF = 369,
     ABRIR = 370,
     CERRAR = 371,
     SALIR = 372,
     CAJADETEXTO = 373,
     COMBOBOX = 374,
     LISTBOX = 375,
     BARRADEPROGRESO = 376,
     RBUTTON = 377,
     CHECKBOX = 378,
     PICTUREBOX = 379,
     ONCLICK = 380,
     CLICKDOWN = 381,
     SALIDA = 382,
     VISIBLE = 383,
     OCULTO = 384,
     HINABILITADO = 385,
     HABILITADO = 386,
     TODO = 387,
     ALTERAR = 388,
     BORRARDROP = 389,
     COPIAR = 390,
     EMPUJAR = 391,
     INSERTAR = 392,
     TOPE = 393,
     FECHA = 394,
     DATOS = 395,
     CREAR = 396,
     LONGITUD = 397,
     LIMPIAR = 398,
     BORRARDELETE = 399,
     IGUAL = 400,
     EXCEPCION = 401,
     RETORNAR = 402,
     TITULO = 403,
     DE = 404,
     GENERAR = 405,
     AGRUPAR = 406,
     LLENO = 407,
     ALTO = 408,
     ETIQUETA = 409,
     LINEAS = 410,
     ORDENAR = 411,
     APUNTADOR = 412,
     REMOVER = 413,
     SORTEAR = 414,
     TAMANO = 415,
     TEXTO = 416,
     DESPUES = 417,
     ARRIBA = 418,
     VALORES = 419,
     NOMBRE = 420,
     MUERE = 421,
     VARIABLEBACIA = 422,
     CLONAR = 423,
     INCLUDE = 424,
     LINK = 425,
     CONTENTCODE = 426,
     CLASEPRINCIPAL = 427,
     REQUIERE = 428,
     VARNOVACIA = 429,
     ALIAS = 430,
     PUNTO = 431,
     PUNTOYCOMA = 432,
     DOSPUNTOS = 433,
     COMA = 434,
     VERDADERO = 435,
     FALSO = 436,
     ID = 437,
     VARIABLE = 438,
     LIBUNO = 439,
     LIBDOS = 440,
     LIBTRES = 441,
     PUBLICO = 442,
     RT = 443,
     OUTCOLA = 444,
     INCOLA = 445,
     SQLCONECTA = 446
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "sintactico.y"

  float real;
  int numero;
  char* texto;



/* Line 214 of yacc.c  */
#line 327 "sintactico.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 339 "sintactico.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  192
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNRULES -- Number of states.  */
#define YYNSTATES  462

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   446

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,     9,    17,    19,    21,    23,
      28,    30,    32,    34,    36,    38,    40,    42,    44,    45,
      53,    56,    59,    60,    62,    64,    66,    68,    70,    72,
      74,    76,    78,    80,    82,    84,    86,    88,    90,    95,
     102,   104,   105,   113,   115,   117,   125,   127,   129,   131,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   157,   159,   161,   163,   165,   167,   169,   171,
     173,   175,   177,   178,   185,   187,   189,   191,   192,   196,
     201,   206,   207,   211,   213,   215,   217,   219,   221,   223,
     224,   229,   231,   233,   240,   244,   245,   258,   260,   262,
     264,   266,   268,   270,   272,   274,   276,   278,   280,   282,
     284,   286,   288,   290,   292,   294,   296,   298,   300,   302,
     304,   306,   308,   310,   312,   314,   316,   318,   320,   321,
     327,   333,   334,   339,   340,   343,   346,   349,   350,   352,
     354,   356,   358,   360,   362,   364,   369,   371,   373,   382,
     397,   398,   413,   422,   424,   426,   428,   430,   439,   440,
     449,   450,   459,   460,   469,   478,   479,   488,   489,   498,
     505,   506,   512,   514,   516,   518,   520,   522,   524,   526,
     528,   530,   532,   534,   536,   538,   540,   542,   544,   546,
     548,   550,   552,   554,   556,   558,   559,   572,   576,   577,
     580,   591,   593,   595,   597,   598,   606,   613,   621,   630,
     644,   647,   648,   652,   653,   664,   675,   690,   700,   710,
     720,   731,   739,   747
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     193,     0,    -1,   194,   197,    -1,   195,    -1,    -1,   169,
     176,   170,    71,   196,    72,   194,    -1,   184,    -1,   185,
      -1,   186,    -1,   171,    67,   198,    68,    -1,   199,    -1,
     210,    -1,   248,    -1,   251,    -1,   253,    -1,   200,    -1,
     204,    -1,   209,    -1,    -1,   183,    71,   201,    72,   203,
     177,   198,    -1,   182,   202,    -1,   179,   201,    -1,    -1,
      19,    -1,    18,    -1,    17,    -1,    16,    -1,    15,    -1,
      14,    -1,    13,    -1,    12,    -1,    11,    -1,    10,    -1,
       9,    -1,     8,    -1,     7,    -1,     6,    -1,     5,    -1,
      60,   205,   177,   198,    -1,    71,   182,   179,   208,    72,
     206,    -1,   207,    -1,    -1,   179,    71,   182,   179,   208,
      72,   206,    -1,   182,    -1,     4,    -1,    13,   172,    71,
      72,    67,   210,    68,    -1,   200,    -1,   204,    -1,   211,
      -1,   213,    -1,   218,    -1,   220,    -1,   226,    -1,   233,
      -1,   234,    -1,   236,    -1,   238,    -1,   242,    -1,   254,
      -1,   255,    -1,   256,    -1,   260,    -1,   261,    -1,   257,
      -1,   262,    -1,   263,    -1,   264,    -1,   265,    -1,   266,
      -1,   267,    -1,   268,    -1,   269,    -1,    -1,   212,    71,
     208,    72,   177,   210,    -1,    33,    -1,    35,    -1,    34,
      -1,    -1,   214,   177,   210,    -1,    60,   182,   179,   215,
      -1,   208,   217,   208,   216,    -1,    -1,   217,   208,   215,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    -1,   182,   219,   177,   210,    -1,    55,
      -1,    56,    -1,    21,    71,   222,    72,   221,   210,    -1,
      67,   225,    68,    -1,    -1,    60,   182,   179,   208,   177,
     208,   223,   177,   208,   224,   208,   177,    -1,    55,    -1,
      56,    -1,    39,    -1,    38,    -1,    41,    -1,    40,    -1,
      43,    -1,    42,    -1,   200,    -1,   204,    -1,   211,    -1,
     213,    -1,   218,    -1,   220,    -1,   226,    -1,   231,    -1,
     233,    -1,   254,    -1,   255,    -1,   256,    -1,   257,    -1,
     260,    -1,   261,    -1,   262,    -1,   263,    -1,   264,    -1,
     265,    -1,   266,    -1,   267,    -1,   268,    -1,   269,    -1,
      -1,    25,    71,   228,    72,   227,    -1,   108,   225,   109,
     231,   210,    -1,    -1,   208,   230,   208,   229,    -1,    -1,
      58,   228,    -1,    59,   228,    -1,    57,   228,    -1,    -1,
      39,    -1,    38,    -1,    41,    -1,    40,    -1,    42,    -1,
     145,    -1,    43,    -1,   232,   108,   225,   109,    -1,    26,
      -1,    27,    -1,    22,    71,   228,    72,    67,   225,    68,
     210,    -1,    60,   182,   179,   115,   176,    71,   182,   176,
     161,   179,   188,    72,   177,   210,    -1,    -1,    60,   182,
     179,   115,   176,    71,   182,   176,   161,   179,   188,    72,
     235,   210,    -1,    60,   182,   179,   237,    71,    72,   177,
     210,    -1,    32,    -1,    31,    -1,    30,    -1,    29,    -1,
      75,   178,   225,   109,    76,   225,   109,   210,    -1,    -1,
      75,   178,   225,   109,    76,   225,   239,   210,    -1,    -1,
      75,   178,   225,   109,   240,   225,   109,   210,    -1,    -1,
      75,   178,   225,   241,    76,   225,   109,   210,    -1,    94,
      71,   208,    72,   108,   245,   109,   210,    -1,    -1,    94,
      71,   208,    72,   108,   245,   243,   210,    -1,    -1,    94,
      71,   208,    72,   244,   245,   109,   210,    -1,    93,   208,
     178,   247,   109,   246,    -1,    -1,    93,   208,   178,   247,
     109,    -1,   200,    -1,   204,    -1,   211,    -1,   213,    -1,
     218,    -1,   220,    -1,   226,    -1,   231,    -1,   233,    -1,
     254,    -1,   255,    -1,   256,    -1,   257,    -1,   260,    -1,
     261,    -1,   262,    -1,   263,    -1,   264,    -1,   265,    -1,
     266,    -1,   267,    -1,   268,    -1,   238,    -1,    -1,   105,
     182,    71,   249,    72,    67,   225,   147,   208,   177,    68,
     198,    -1,   203,   182,   250,    -1,    -1,   179,   249,    -1,
     252,    95,   182,    71,   249,    72,    67,   225,    68,   198,
      -1,   187,    -1,    92,    -1,    91,    -1,    -1,   252,    28,
     182,    67,   225,    68,   198,    -1,   182,   176,    71,    72,
     177,   210,    -1,   182,   176,    71,   208,    72,   177,   210,
      -1,   182,   176,    71,   203,   182,    72,   177,   210,    -1,
      60,   182,   176,    71,     4,    72,   179,    69,   258,    70,
     203,   177,   210,    -1,   182,   259,    -1,    -1,   179,   182,
     258,    -1,    -1,    60,   182,   179,    81,    71,     4,    72,
     203,   177,   210,    -1,    60,   182,   179,    82,    71,     4,
      72,   203,   177,   210,    -1,    60,   182,    69,   179,    70,
     179,    69,     4,   179,     4,    70,   203,   177,   210,    -1,
     182,   176,   190,   176,    71,   208,    72,   177,   210,    -1,
     182,   176,   189,   176,    71,   208,    72,   177,   210,    -1,
     182,   176,    37,   176,    71,   203,    72,   177,   210,    -1,
      60,   182,   179,   191,   176,    71,   182,    72,   177,   210,
      -1,   182,   176,   115,    71,    72,   177,   210,    -1,   182,
     176,   116,    71,    72,   177,   210,    -1,    60,   182,   179,
     182,   177,   210,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   236,   236,   237,   237,   238,   239,   239,   239,   242,
     243,   243,   243,   243,   243,   244,   244,   244,   244,   248,
     249,   250,   250,   251,   251,   251,   251,   251,   251,   251,
     252,   252,   252,   252,   252,   252,   252,   253,   257,   258,
     259,   259,   260,   262,   262,   265,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   270,   271,   271,   271,   271,   274,   275,
     276,   276,   277,   278,   278,   278,   278,   278,   278,   278,
     281,   282,   282,   285,   286,   286,   287,   288,   288,   289,
     289,   289,   289,   289,   289,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   294,
     295,   295,   296,   296,   297,   297,   297,   297,   298,   298,
     298,   298,   298,   298,   298,   300,   301,   301,   304,   310,
     311,   311,   316,   317,   317,   317,   317,   319,   320,   320,
     321,   321,   322,   322,   324,   325,   325,   326,   326,   327,
     327,   328,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   333,   334,   334,   335,
     338,   339,   339,   339,   339,   341,   343,   345,   348,   350,
     351,   351,   352,   352,   355,   358,   361,   364,   367,   370,
     373,   375,   377,   379
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERO", "NUMENTERO", "TDSBYTE",
  "TDBYTE", "TDSHORT", "TDUSHORT", "TDDOBLE", "TDBOLEANO", "TDNULO",
  "TDENUM", "TDENTERO", "TDFLOTANTE", "TDSTRING", "TDCHAR", "TDDECIMAL",
  "TDUINT", "TDLONG", "TULONG", "CICLOFOR", "CICLOWHILE", "CICLOFOREACH",
  "CICLODO", "PREGUNTA", "ENTONCES", "ENTSI", "CLASE", "LECTURAINPUT",
  "LECTURALEER", "LECTURALEERLINEA", "LECTURAESCANEAR", "IMPRESIONPRINT",
  "IMPRESIONWRITE", "IMPRESIONWLINE", "DETENER", "CONVERTIR", "MENORQUE",
  "MAYORQUE", "MENORIGUAL", "MAYORIGUAL", "IGUALIGUAL", "DIFERENTE",
  "PASA", "LAMBDA", "NOLOCAL", "EXPONENTE", "MODULO", "RCUADRADA", "PI",
  "SUMA", "RESTA", "MULTIPLICACION", "DIVISION", "INCREMENTO",
  "DECREMENTO", "OPLOGOR", "OPLONOT", "OPLOGAND", "ASIGNACION",
  "ASIIGNACIONSUMA", "ASIGNACIONRESTA", "ASIGNACIONMULTIPLICAION",
  "ASIGNACIONDIVISION", "ASIGNACIONEXPONENTE", "ASIGNACIONMODULO",
  "KEYIZQ", "KEYDER", "CORIZQ", "CORDER", "PARIZQ", "PARDER", "DIVIZQ",
  "DIVDER", "TRATAR", "CAPTURA", "ASIGNAPER", "FINALMENTE", "LANZAR",
  "LISTA", "PILA", "COLA", "NATIVO", "SUPERCONST", "CONTINUAR", "EXTENDER",
  "IMPLEMENTAR", "IMPORTAR", "INSTANCIADE", "NUEVO", "PRIVADO",
  "PROTEGIDO", "CASO", "CAMBIO", "VACIO", "ESTO", "SINCRONIZAR",
  "DESCANZO", "CONSOLA", "INTERFAZ", "PACKAGE", "ACCESO", "OBTENER", "LET",
  "FUNCION", "SINVALOR", "GUARD", "INICIOBLOQUE", "FINBLOQUE",
  "CALCULOINICIO", "MATCH", "INICIORUTINA", "FINRUTINA", "FINIF", "ABRIR",
  "CERRAR", "SALIR", "CAJADETEXTO", "COMBOBOX", "LISTBOX",
  "BARRADEPROGRESO", "RBUTTON", "CHECKBOX", "PICTUREBOX", "ONCLICK",
  "CLICKDOWN", "SALIDA", "VISIBLE", "OCULTO", "HINABILITADO", "HABILITADO",
  "TODO", "ALTERAR", "BORRARDROP", "COPIAR", "EMPUJAR", "INSERTAR", "TOPE",
  "FECHA", "DATOS", "CREAR", "LONGITUD", "LIMPIAR", "BORRARDELETE",
  "IGUAL", "EXCEPCION", "RETORNAR", "TITULO", "DE", "GENERAR", "AGRUPAR",
  "LLENO", "ALTO", "ETIQUETA", "LINEAS", "ORDENAR", "APUNTADOR", "REMOVER",
  "SORTEAR", "TAMANO", "TEXTO", "DESPUES", "ARRIBA", "VALORES", "NOMBRE",
  "MUERE", "VARIABLEBACIA", "CLONAR", "INCLUDE", "LINK", "CONTENTCODE",
  "CLASEPRINCIPAL", "REQUIERE", "VARNOVACIA", "ALIAS", "PUNTO",
  "PUNTOYCOMA", "DOSPUNTOS", "COMA", "VERDADERO", "FALSO", "ID",
  "VARIABLE", "LIBUNO", "LIBDOS", "LIBTRES", "PUBLICO", "RT", "OUTCOLA",
  "INCOLA", "SQLCONECTA", "$accept", "librerias", "libreria", "lib",
  "nombrelib", "contentcodep", "codigocontentcode", "otro", "decvar",
  "declararvac", "masdeclararvac", "tipodato", "asignacion", "asignar",
  "asirnarval", "masasignaciones", "valorasig", "claseprincipal",
  "codigomain", "imprimir", "tokenimpresion", "operacionesaritmeticas",
  "operacion", "primeroperacion", "masoperaciones", "operadores",
  "incrementoodecremeto", "incremetarodecremetar", "cfor", "llaves",
  "condicionfor", "incodec", "oprel", "codigogeneral", "preguntasi",
  "iniciofin", "desicion", "mascomp", "operador", "entonces", "elegir",
  "cwhile", "open", "$@1", "leer", "lectura", "try", "$@2", "$@3", "$@4",
  "cambio", "$@5", "$@6", "bloque", "mascasos", "bloquecambio", "funcion",
  "parametros", "masparametros", "procedimientos", "alcance", "clases",
  "llamar", "enviar", "resivir", "arreglos", "datosarreglo", "masdatos",
  "pilas", "colas", "matriz", "inputcola", "outputcola", "conversion",
  "conexion", "abrircon", "cerrarcon", "dataconv", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   192,   193,   194,   194,   195,   196,   196,   196,   197,
     198,   198,   198,   198,   198,   199,   199,   199,   199,   200,
     201,   202,   202,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   204,   205,
     206,   206,   207,   208,   208,   209,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   211,   212,   212,   212,   212,   213,   214,
     215,   215,   216,   217,   217,   217,   217,   217,   217,   217,
     218,   219,   219,   220,   221,   221,   222,   223,   223,   224,
     224,   224,   224,   224,   224,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   226,
     227,   227,   228,   228,   229,   229,   229,   229,   230,   230,
     230,   230,   230,   230,   230,   231,   232,   232,   233,   234,
     235,   234,   236,   237,   237,   237,   237,   238,   239,   238,
     240,   238,   241,   238,   242,   243,   242,   244,   242,   245,
     245,   246,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   248,   249,   249,   250,
     251,   252,   252,   252,   252,   253,   254,   255,   256,   257,
     258,   258,   259,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     0,     7,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     7,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       1,     0,     7,     1,     1,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     1,     1,     1,     0,     3,     4,
       4,     0,     3,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     1,     6,     3,     0,    12,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       5,     0,     4,     0,     2,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     8,    14,
       0,    14,     8,     1,     1,     1,     1,     8,     0,     8,
       0,     8,     0,     8,     8,     0,     8,     0,     8,     6,
       0,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,    12,     3,     0,     2,
      10,     1,     1,     1,     0,     7,     6,     7,     8,    13,
       2,     0,     3,     0,    10,    10,    14,     9,     9,     9,
      10,     7,     7,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     3,     0,     1,     0,     2,     0,
     204,     0,     0,     0,     0,     0,    74,    76,    75,     0,
       0,   203,   202,     0,     0,     0,     0,   201,     0,    10,
      15,    16,    17,    11,    48,     0,    49,     0,    50,    51,
      52,    53,    54,    55,    56,    57,    12,    13,     0,    14,
      58,    59,    60,    63,    61,    62,    64,    65,    66,    67,
      68,    69,    70,    71,     6,     7,     8,     0,     0,     0,
     133,   133,     0,     0,     0,   128,     0,     0,    91,    92,
       0,     0,     0,     9,     0,    72,     0,     0,     4,     0,
       0,     0,    44,    43,     0,     0,     0,     0,     0,     0,
      81,    18,   146,   147,     0,   105,   106,   107,   108,   109,
     110,   162,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   198,     0,     0,     0,     0,     0,     0,    72,    22,
       0,     0,    46,    47,    78,     0,     0,     5,     0,     0,
      95,   139,   138,   141,   140,   142,   144,   143,     0,     0,
     131,     0,     0,     0,   156,   155,   154,   153,     0,     0,
       0,    43,     0,    89,    79,     0,    38,     0,   160,     0,
      77,   167,    37,    36,    35,    34,    33,    32,    31,    30,
      29,    28,    27,    26,    25,    24,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,    20,
       0,     0,    77,   198,    72,     0,    77,    72,   137,    77,
      77,   129,     0,     0,     0,     0,     0,     0,    72,     0,
      83,    84,    85,    86,    87,    88,     0,     0,    81,   128,
      77,    77,     0,   170,   170,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    21,     0,    72,     0,     0,
       0,     0,     0,    93,   133,   133,   133,   132,     0,     0,
      41,     0,     0,     0,     0,     0,   223,     0,    89,     0,
     158,     0,     0,   145,     0,   165,     0,   198,   197,    77,
       0,   206,     0,    72,    72,    72,     0,     0,    18,    73,
      18,     0,    45,     0,    94,   136,   134,   135,    72,     0,
       0,    39,    40,     0,     0,     0,     0,     0,     0,    80,
       0,    72,    72,    72,    72,    72,     0,    72,    72,    72,
     199,     0,     0,    72,   207,   221,   222,     0,     0,    19,
     205,    77,     0,   148,    72,     0,     0,   211,     0,     0,
       0,     0,    81,   152,   157,   159,   161,   163,    77,   164,
     166,   168,     0,    72,   208,    72,    72,     0,    97,    98,
       0,   130,     0,     0,   213,     0,    72,    72,     0,    72,
      82,     0,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   194,     0,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,     0,   219,   218,   217,
      18,     0,     0,     0,     0,   210,     0,   214,   215,     0,
     220,     0,     0,     0,   200,     0,     0,     0,   211,     0,
       0,    81,     0,   169,    18,   100,    99,   102,   101,   104,
     103,     0,    41,     0,   212,    72,   150,     0,   196,     0,
      42,    72,   209,    72,    72,    77,    96,   216,   149,   151,
       0,   171
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    67,     8,    28,    29,   142,   140,
     209,   197,   143,    74,   311,   312,    94,    32,    33,    34,
      35,    36,    37,   174,   319,   236,    38,    81,    39,   217,
      91,   370,   441,   111,    40,   221,    95,   267,   158,   113,
     114,    41,    42,   454,    43,   175,    44,   323,   240,   179,
      45,   328,   244,   285,   433,   392,    46,   198,   288,    47,
      48,    49,    50,    51,    52,    53,   375,   415,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -352
static const yytype_int16 yypact[] =
{
    -144,  -130,    54,  -115,  -352,  -108,  -352,    -4,  -352,    -2,
     888,  -142,  -106,     3,     4,     7,  -352,  -352,  -352,   -62,
    -111,  -352,  -352,     8,  -114,   -38,    11,  -352,     9,  -352,
    -352,  -352,  -352,  -352,  -352,    14,  -352,  -105,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,   -15,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,    20,    24,    13,
      -1,    -1,   -85,   -68,  -101,   530,    -1,    27,  -352,  -352,
     -26,   -78,   -81,  -352,    -1,  1005,   -80,   -79,  -144,    33,
     -76,    38,  -352,  -352,    -3,    42,    43,   -70,   -63,    73,
       2,   906,  -352,  -352,   -45,  -352,  -352,  -352,  -352,  -352,
    -352,    39,  -352,  -352,   -37,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
      78,  1036,   -14,   117,    85,    94,    -7,    15,  1005,    -8,
     104,   105,  -352,  -352,  -352,   115,   112,  -352,   118,    16,
     134,  -352,  -352,  -352,  -352,  -352,  -352,  -352,    -1,   137,
      82,    -1,   138,   208,  -352,  -352,  -352,  -352,   142,   147,
      50,    56,    51,   -30,  -352,   168,  -352,   -22,   166,   167,
     594,   139,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,    64,   178,   181,
      77,    76,   183,   188,   189,   192,   196,  -352,   -81,  -352,
    1036,    93,   611,  1036,   943,    -1,   611,  1005,     0,   611,
     594,  -352,   199,    80,   200,   269,   271,   210,  1005,   211,
    -352,  -352,  -352,  -352,  -352,  -352,    -1,   214,     6,   530,
     594,   594,   174,   201,   201,   110,   225,  1036,  1005,   228,
     124,   125,   127,    -1,    -1,  -352,   130,  1005,   240,   241,
     244,   143,   247,  -352,    -1,    -1,    -1,  -352,   248,   213,
     144,   255,   146,   256,   257,   145,  -352,   148,   -30,   155,
     224,   231,   232,  -352,    -1,   236,   237,  1036,  -352,   807,
     262,  -352,   170,  1005,  1005,  1005,   279,   282,   906,  -352,
     906,   288,  -352,    -1,  -352,  -352,  -352,  -352,  1005,     1,
     278,  -352,  -352,   352,   291,  1036,  1036,   185,   285,  -352,
      -1,  1005,  1005,  1005,  1005,  1005,   193,  1005,  1005,  1005,
    -352,   218,   195,  1005,  -352,  -352,  -352,   198,   202,  -352,
    -352,   611,     5,  -352,  1005,   203,   191,   204,   207,   212,
     219,   215,    -1,  -352,  -352,  -352,  -352,  -352,   284,  -352,
    -352,  -352,    -1,  1005,  -352,  1005,  1005,   313,  -352,  -352,
     227,  -352,   223,   383,   229,   320,  1005,  1005,   234,  1005,
    -352,   -42,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,   301,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,   238,  -352,  -352,  -352,
     906,    -1,    -1,   321,   235,  -352,  1036,  -352,  -352,   226,
    -352,    72,   318,   348,  -352,    10,   346,  1036,   204,   242,
     349,    12,    -1,  -352,   906,  -352,  -352,  -352,  -352,  -352,
    -352,    -1,   144,   243,  -352,  1005,   245,   252,  -352,   246,
    -352,  1005,  -352,  1005,  1005,   284,  -352,  -352,  -352,  -352,
     316,  -352
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -352,  -352,   343,  -352,  -352,  -352,   -60,  -352,   -10,   230,
    -352,  -129,    -5,  -352,    -6,  -352,   563,  -352,   570,   -73,
    -352,   -67,  -352,    90,  -352,   154,   -61,  -352,   -20,  -352,
    -352,  -352,  -352,   793,    25,  -352,   -41,  -352,  -352,  -294,
    -352,    37,  -352,  -352,  -352,  -352,  -351,  -352,  -352,  -352,
    -352,  -352,  -352,   190,  -352,   -12,  -352,  -201,  -352,  -352,
    -352,  -352,   123,   157,   187,   221,    19,  -352,   277,   283,
     293,   334,   364,   369,   445,   450,   517,   531
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -205
static const yytype_int16 yytable[] =
{
      30,    98,   107,    92,   201,    31,    92,   391,   108,    72,
      92,   132,   259,    86,   109,   344,    92,    78,    79,   230,
     231,   232,   233,   234,   235,     1,    72,   102,   103,    72,
      96,   164,   165,   166,   167,   151,   152,   153,   154,   155,
     156,   176,    64,    65,    66,   133,     5,    98,   435,   436,
     437,   438,   439,   440,     6,   110,     7,   264,   265,   266,
     368,   369,     9,    10,   389,   105,    68,    75,    77,    11,
     106,   180,    85,    90,    69,    70,   101,    83,    71,    76,
      87,   256,    82,   168,   169,    84,   330,   168,   169,   134,
     135,    30,    88,   168,   169,    89,    31,    97,   131,   138,
     112,   139,   145,   146,   391,   148,   149,   107,    99,   161,
     150,   100,   115,   108,   159,   160,   162,   170,   290,   109,
      73,    92,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   177,    80,   107,
     421,    98,   157,   107,   163,   108,   107,   107,   178,   108,
     181,   109,   108,   108,    99,   109,   203,   238,   109,   109,
     110,   389,   199,   136,   137,   204,   107,   107,   107,   205,
     105,   208,   108,   108,   108,   106,   210,   211,   109,   109,
     109,    93,   212,   213,   171,   214,   348,   349,   171,   200,
     220,   206,   110,   172,    93,   215,   110,   172,   116,   110,
     110,   216,   105,   172,   219,   112,   105,   106,   223,   105,
     105,   106,   224,   225,   106,   106,   107,   115,   226,   110,
     110,   110,   108,   305,   306,   307,   227,   229,   109,   105,
     105,   105,   117,   228,   106,   106,   106,   112,   339,   237,
     340,   112,   239,   241,   112,   112,   245,   243,    99,   115,
     246,   431,   247,   115,   248,   250,   115,   115,   249,   271,
     251,   252,   118,   253,   112,   112,   112,   254,   107,   110,
     257,   270,   272,   273,   108,   274,   115,   115,   115,   105,
     109,   275,   277,   283,   106,   384,   279,   429,    30,   287,
      30,   385,   289,    31,   284,    31,   119,   386,   443,    93,
     292,   293,   294,   116,   295,    13,    14,   298,   300,    15,
     102,   103,   302,   301,   112,   304,   308,    16,    17,    18,
     303,   110,   309,   310,   313,   314,   115,   317,   315,   316,
     318,   105,   321,   322,   332,   116,   106,   117,   387,   116,
     324,   325,   116,   116,   381,   327,   329,   333,   382,   345,
     424,   337,   120,   383,   338,   341,   346,   351,   121,    20,
     347,   350,   116,   116,   116,   362,   112,   118,   122,   117,
     373,   358,   363,   117,   448,   365,   117,   117,   115,   366,
     378,   410,   384,   388,   376,   372,   374,   413,   385,   377,
     416,   427,   379,  -195,   386,   390,   117,   117,   117,   118,
      30,   119,   412,   118,   411,    31,   118,   118,   414,   123,
     422,   432,   116,   419,   430,   423,   434,   428,   442,   445,
     451,   446,   453,   456,    30,   461,   118,   118,   118,    31,
     455,   147,   320,   119,   286,   387,   450,   119,   255,   124,
     119,   119,   380,   460,   125,   382,   117,   444,     0,     0,
     383,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     119,   119,   119,   121,   116,     0,    25,    26,     0,     0,
       0,     0,     0,   122,     0,     0,   118,     0,     0,     0,
     388,   393,     0,     0,     0,     0,     0,     0,     0,   120,
       0,     0,   390,   120,     0,   121,   120,   120,   117,   121,
       0,     0,   121,   121,     0,   122,     0,     0,     0,   122,
     119,     0,   122,   122,   123,   394,   120,   120,   120,     0,
     126,     0,   121,   121,   121,   127,     0,     0,   118,     0,
       0,     0,   122,   122,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   395,   123,     0,     0,   125,
     123,    13,    14,   123,   123,    15,   102,   103,     0,     0,
       0,     0,   119,    16,    17,    18,   120,     0,     0,     0,
       0,     0,   121,   123,   123,   123,   124,     0,   393,   396,
     124,   125,   122,   124,   124,   125,     0,     0,   125,   125,
     104,     0,   128,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,     0,   124,   124,   124,   129,     0,   125,   125,
     125,     0,   394,     0,     0,    13,    14,     0,   120,    15,
     102,   103,     0,   123,   121,   126,     0,    16,    17,    18,
     127,     0,    13,    14,   122,   397,    15,   102,   103,   130,
       0,   398,   395,     0,    16,    17,    18,   141,     0,     0,
       0,   399,     0,   124,   104,   144,     0,   126,   125,     0,
       0,   126,   127,   173,   126,   126,   127,     0,     0,   127,
     127,   104,     0,     0,     0,   123,   396,     0,     0,  -128,
       0,     0,     0,     0,   126,   126,   126,     0,     0,   127,
     127,   127,   400,     0,     0,     0,   202,   128,     0,     0,
       0,     0,     0,  -128,     0,   124,     0,     0,   207,     0,
     125,   129,    25,    26,     0,     0,     0,     0,     0,     0,
       0,   218,   401,     0,   222,     0,     0,   402,     0,   128,
       0,     0,   397,   128,   126,     0,   128,   128,   398,   127,
       0,     0,     0,   129,     0,     0,     0,   129,   399,     0,
     129,   129,     0,     0,     0,     0,   128,   128,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   129,   129,     0,     0,     0,    25,    26,   261,     0,
       0,     0,     0,     0,   260,     0,   126,   263,     0,   400,
       0,   127,     0,    25,    26,     0,     0,     0,   276,   278,
       0,   173,     0,   403,     0,     0,   128,     0,   404,     0,
       0,     0,     0,     0,     0,     0,   296,   297,   291,   401,
     129,     0,     0,     0,   402,     0,     0,   299,    13,    14,
       0,     0,    15,   102,   103,     0,     0,     0,     0,     0,
      16,    17,    18,     0,     0,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,     0,   334,   335,   336,   342,   104,     0,     0,
       0,     0,   129,     0,     0,   405,     0,     0,   343,     0,
       0,     0,     0,   352,     0,     0,     0,     0,     0,     0,
       0,   353,   354,   355,   356,   357,     0,   359,   360,   361,
     403,    12,     0,   364,     0,   404,     0,     0,     0,    13,
      14,     0,     0,    15,   371,   173,     0,     0,     0,    12,
       0,    16,    17,    18,     0,   406,     0,    13,    14,     0,
       0,    15,     0,   407,  -204,   408,   409,     0,     0,    16,
      17,    18,     0,     0,     0,     0,   417,   418,    19,   420,
       0,     0,     0,     0,  -128,     0,   -18,     0,     0,   -77,
       0,     0,     0,    20,    13,    14,    19,     0,    15,     0,
       0,     0,   405,   242,   425,   426,    16,    17,    18,    21,
      22,    20,    23,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,    24,   173,   447,     0,    21,    22,     0,
      23,  -204,     0,    19,   449,   258,     0,     0,     0,   262,
       0,    24,   268,   269,   -77,   452,     0,     0,    20,     0,
       0,   457,     0,   458,   459,     0,    13,    14,     0,     0,
      15,     0,   280,   281,   282,     0,     0,    23,    16,    17,
      18,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
      25,    26,     0,     0,     0,    27,     0,     0,     0,     0,
      20,     0,   331,     0,     0,     0,     0,     0,    25,    26,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26
};

static const yytype_int16 yycheck[] =
{
      10,    69,    75,     4,   133,    10,     4,   358,    75,    71,
       4,    37,   213,    28,    75,   309,     4,    55,    56,    49,
      50,    51,    52,    53,    54,   169,    71,    26,    27,    71,
      71,    29,    30,    31,    32,    38,    39,    40,    41,    42,
      43,   101,   184,   185,   186,    71,   176,    69,    38,    39,
      40,    41,    42,    43,     0,    75,   171,    57,    58,    59,
      55,    56,   170,    67,   358,    75,   172,   178,   182,    71,
      75,   108,   177,    60,    71,    71,   177,    68,    71,    71,
      95,   210,    71,    81,    82,    71,   287,    81,    82,   115,
     116,   101,    72,    81,    82,    71,   101,   182,    71,   177,
      75,   182,   182,   182,   455,    72,   182,   180,   176,   179,
      72,   179,    75,   180,    72,    72,   179,   115,   247,   180,
     182,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   182,   176,   212,
     182,    69,   145,   216,    71,   212,   219,   220,   109,   216,
      72,   212,   219,   220,   176,   216,    71,   179,   219,   220,
     180,   455,   176,   189,   190,    71,   239,   240,   241,   176,
     180,   179,   239,   240,   241,   180,    72,    72,   239,   240,
     241,   182,    67,    71,   182,    67,   315,   316,   182,    72,
     108,   176,   212,   191,   182,   179,   216,   191,    75,   219,
     220,    67,   212,   191,    67,   180,   216,   212,    70,   219,
     220,   216,     4,    71,   219,   220,   289,   180,    71,   239,
     240,   241,   289,   264,   265,   266,   176,   176,   289,   239,
     240,   241,    75,   177,   239,   240,   241,   212,   298,    71,
     300,   216,    76,    76,   219,   220,   182,   108,   176,   212,
      72,   179,    71,   216,   177,    72,   219,   220,   182,   179,
      72,    72,    75,    71,   239,   240,   241,    71,   341,   289,
     177,    72,    72,     4,   341,     4,   239,   240,   241,   289,
     341,    71,    71,   109,   289,   358,    72,   416,   298,   179,
     300,   358,    67,   298,    93,   300,    75,   358,   427,   182,
      72,   177,   177,   180,   177,    21,    22,   177,    68,    25,
      26,    27,    68,    72,   289,    68,    68,    33,    34,    35,
     177,   341,   109,   179,    69,   179,   289,   182,    72,    72,
     182,   341,   177,   109,    72,   212,   341,   180,   358,   216,
     109,   109,   219,   220,    60,   109,   109,   177,   358,    71,
     410,    72,    75,   358,    72,    67,     4,    72,    75,    75,
      69,   176,   239,   240,   241,   147,   341,   180,    75,   212,
     179,   178,   177,   216,   434,   177,   219,   220,   341,   177,
     161,    68,   455,   358,   177,   182,   182,     4,   455,   177,
      70,    70,   177,   109,   455,   358,   239,   240,   241,   212,
     410,   180,   179,   216,   177,   410,   219,   220,   179,    75,
     109,    93,   289,   179,   188,   177,    68,   182,    72,   177,
     177,    72,   177,   177,   434,   109,   239,   240,   241,   434,
     178,    88,   278,   212,   244,   455,   442,   216,   208,    75,
     219,   220,   352,   455,    75,   455,   289,   428,    -1,    -1,
     455,    -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,
     239,   240,   241,   180,   341,    -1,   182,   183,    -1,    -1,
      -1,    -1,    -1,   180,    -1,    -1,   289,    -1,    -1,    -1,
     455,   358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,   455,   216,    -1,   212,   219,   220,   341,   216,
      -1,    -1,   219,   220,    -1,   212,    -1,    -1,    -1,   216,
     289,    -1,   219,   220,   180,   358,   239,   240,   241,    -1,
      75,    -1,   239,   240,   241,    75,    -1,    -1,   341,    -1,
      -1,    -1,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,   358,   212,    -1,    -1,   180,
     216,    21,    22,   219,   220,    25,    26,    27,    -1,    -1,
      -1,    -1,   341,    33,    34,    35,   289,    -1,    -1,    -1,
      -1,    -1,   289,   239,   240,   241,   212,    -1,   455,   358,
     216,   212,   289,   219,   220,   216,    -1,    -1,   219,   220,
      60,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,   239,   240,   241,    75,    -1,   239,   240,
     241,    -1,   455,    -1,    -1,    21,    22,    -1,   341,    25,
      26,    27,    -1,   289,   341,   180,    -1,    33,    34,    35,
     180,    -1,    21,    22,   341,   358,    25,    26,    27,    76,
      -1,   358,   455,    -1,    33,    34,    35,    84,    -1,    -1,
      -1,   358,    -1,   289,    60,    85,    -1,   212,   289,    -1,
      -1,   216,   212,   100,   219,   220,   216,    -1,    -1,   219,
     220,    60,    -1,    -1,    -1,   341,   455,    -1,    -1,    68,
      -1,    -1,    -1,    -1,   239,   240,   241,    -1,    -1,   239,
     240,   241,   358,    -1,    -1,    -1,   133,   180,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   341,    -1,    -1,   138,    -1,
     341,   180,   182,   183,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,   358,    -1,   161,    -1,    -1,   358,    -1,   212,
      -1,    -1,   455,   216,   289,    -1,   219,   220,   455,   289,
      -1,    -1,    -1,   212,    -1,    -1,    -1,   216,   455,    -1,
     219,   220,    -1,    -1,    -1,    -1,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,    -1,    -1,    -1,   182,   183,   215,    -1,
      -1,    -1,    -1,    -1,   214,    -1,   341,   217,    -1,   455,
      -1,   341,    -1,   182,   183,    -1,    -1,    -1,   228,   236,
      -1,   238,    -1,   358,    -1,    -1,   289,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,   248,   455,
     289,    -1,    -1,    -1,   455,    -1,    -1,   257,    21,    22,
      -1,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,   284,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,
      -1,    -1,    -1,   293,   294,   295,   303,    60,    -1,    -1,
      -1,    -1,   341,    -1,    -1,   358,    -1,    -1,   308,    -1,
      -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   321,   322,   323,   324,   325,    -1,   327,   328,   329,
     455,    13,    -1,   333,    -1,   455,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,   344,   352,    -1,    -1,    -1,    13,
      -1,    33,    34,    35,    -1,   362,    -1,    21,    22,    -1,
      -1,    25,    -1,   363,    28,   365,   366,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    -1,   376,   377,    60,   379,
      -1,    -1,    -1,    -1,   147,    -1,    68,    -1,    -1,    71,
      -1,    -1,    -1,    75,    21,    22,    60,    -1,    25,    -1,
      -1,    -1,   455,   180,   411,   412,    33,    34,    35,    91,
      92,    75,    94,    -1,    -1,    -1,    -1,    -1,    -1,   182,
     183,    -1,    -1,   105,   431,   432,    -1,    91,    92,    -1,
      94,    95,    -1,    60,   441,   212,    -1,    -1,    -1,   216,
      -1,   105,   219,   220,    71,   445,    -1,    -1,    75,    -1,
      -1,   451,    -1,   453,   454,    -1,    21,    22,    -1,    -1,
      25,    -1,   239,   240,   241,    -1,    -1,    94,    33,    34,
      35,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
     182,   183,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      75,    -1,   289,    -1,    -1,    -1,    -1,    -1,   182,   183,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   169,   193,   194,   195,   176,     0,   171,   197,   170,
      67,    71,    13,    21,    22,    25,    33,    34,    35,    60,
      75,    91,    92,    94,   105,   182,   183,   187,   198,   199,
     200,   204,   209,   210,   211,   212,   213,   214,   218,   220,
     226,   233,   234,   236,   238,   242,   248,   251,   252,   253,
     254,   255,   256,   257,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   184,   185,   186,   196,   172,    71,
      71,    71,    71,   182,   205,   178,    71,   182,    55,    56,
     176,   219,    71,    68,    71,   177,    28,    95,    72,    71,
      60,   222,     4,   182,   208,   228,   228,   182,    69,   176,
     179,   177,    26,    27,    60,   200,   204,   211,   213,   218,
     220,   225,   226,   231,   232,   233,   254,   255,   256,   257,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     208,    71,    37,    71,   115,   116,   189,   190,   177,   182,
     201,   208,   200,   204,   210,   182,   182,   194,    72,   182,
      72,    38,    39,    40,    41,    42,    43,   145,   230,    72,
      72,   179,   179,    71,    29,    30,    31,    32,    81,    82,
     115,   182,   191,   208,   215,   237,   198,   182,   109,   241,
     108,    72,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   203,   249,   176,
      72,   203,   208,    71,    71,   176,   176,   210,   179,   202,
      72,    72,    67,    71,    67,   179,    67,   221,   208,    67,
     108,   227,   208,    70,     4,    71,    71,   176,   177,   176,
      49,    50,    51,    52,    53,    54,   217,    71,   179,    76,
     240,    76,   225,   108,   244,   182,    72,    71,   177,   182,
      72,    72,    72,    71,    71,   201,   203,   177,   225,   249,
     210,   208,   225,   210,    57,    58,    59,   229,   225,   225,
      72,   179,    72,     4,     4,    71,   210,    71,   208,    72,
     225,   225,   225,   109,    93,   245,   245,   179,   250,    67,
     203,   210,    72,   177,   177,   177,   208,   208,   177,   210,
      68,    72,    68,   177,    68,   228,   228,   228,    68,   109,
     179,   206,   207,    69,   179,    72,    72,   182,   182,   216,
     217,   177,   109,   239,   109,   109,   208,   109,   243,   109,
     249,   225,    72,   177,   210,   210,   210,    72,    72,   198,
     198,    67,   208,   210,   231,    71,     4,    69,   203,   203,
     176,    72,   208,   210,   210,   210,   210,   210,   178,   210,
     210,   210,   147,   177,   210,   177,   177,   225,    55,    56,
     223,   210,   182,   179,   182,   258,   177,   177,   161,   177,
     215,    60,   200,   204,   211,   213,   218,   220,   226,   231,
     233,   238,   247,   254,   255,   256,   257,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   208,   210,   210,   210,
      68,   177,   179,     4,   179,   259,    70,   210,   210,   179,
     210,   182,   109,   177,   198,   208,   208,    70,   182,   203,
     188,   179,    93,   246,    68,    38,    39,    40,    41,    42,
      43,   224,    72,   203,   258,   177,    72,   208,   198,   208,
     206,   177,   210,   177,   235,   178,   177,   210,   210,   210,
     247,   109
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
        case 150:

/* Line 1455 of yacc.c  */
#line 311 "sintactico.y"
    {printf("Falta ;\n" );;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 320 "sintactico.y"
    {printf("\nError falta end\n");;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 321 "sintactico.y"
    {printf("\nError falta catch\n");;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 322 "sintactico.y"
    {printf("\nError falta end\n");;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 325 "sintactico.y"
    {printf("\nError falta end\n");;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 326 "sintactico.y"
    {printf("\nError falta begin\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2193 "sintactico.tab.c"
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
#line 383 "sintactico.y"

/**********************
 * Codigo C Adicional *
 **********************/
void yyerror(char *s)
{
	printf("Error sintactico %s \n",s);
}

int main(int argc,char **argv)
{
	
	if (argc>1)
		{yyin=fopen(argv[1],"rt");}
	else
	{	//yyin=stdin;
		yyin=fopen("texto.txt","rt");
		if(yyparse()==0)
    {
      printf("\n\n Sintaxis correcta \n");
    }
   }
	
	return 0;
}
