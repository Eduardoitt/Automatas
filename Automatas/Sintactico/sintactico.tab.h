
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 25 "sintactico.y"

  float real;
  int numero;
  char* texto;



/* Line 1676 of yacc.c  */
#line 251 "sintactico.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


