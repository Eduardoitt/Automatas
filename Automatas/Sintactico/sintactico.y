%{

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
%}

/*************************
  Declaraciones de Bison *
 *************************/


%union
{
  float real;
  int numero;
  char* texto;
}

%start librerias

%token  NUMERO
%token <numero> NUMENTERO
%token TDSBYTE
%token TDBYTE
%token TDSHORT
%token TDUSHORT
%token TDDOBLE
%token TDBOLEANO
%token TDNULO
%token TDENUM
%token TDENTERO
%token TDFLOTANTE
%token TDSTRING
%token TDCHAR
%token TDDECIMAL
%token TDUINT
%token TDLONG
%token TULONG
%token CICLOFOR 
%token CICLOWHILE
%token CICLOFOREACH
%token CICLODO	
%token PREGUNTA
%token ENTONCES
%token ENTSI
%token CLASE
%token LECTURAINPUT
%token LECTURALEER
%token LECTURALEERLINEA
%token LECTURAESCANEAR
%token IMPRESIONPRINT
%token IMPRESIONWRITE
%token IMPRESIONWLINE
%token DETENER
%token CONVERTIR
%token MENORQUE
%token MAYORQUE
%token MENORIGUAL
%token MAYORIGUAL
%token IGUALIGUAL
%token DIFERENTE
%token PASA
%token LAMBDA
%token NOLOCAL
%token EXPONENTE
%token MODULO
%token RCUADRADA
%token PI
%token SUMA
%token RESTA
%token MULTIPLICACION
%token DIVISION
%token INCREMENTO
%token DECREMENTO
%token OPLOGOR
%token OPLONOT
%token OPLOGAND
%token ASIGNACION
%token ASIIGNACIONSUMA
%token ASIGNACIONRESTA
%token ASIGNACIONMULTIPLICAION
%token ASIGNACIONDIVISION
%token ASIGNACIONEXPONENTE
%token ASIGNACIONMODULO
%token KEYIZQ
%token KEYDER
%token CORIZQ
%token CORDER
%token PARIZQ
%token PARDER
%token DIVIZQ
%token DIVDER
%token TRATAR
%token CAPTURA
%token ASIGNAPER
%token FINALMENTE
%token LANZAR
%token LISTA
%token PILA
%token COLA
%token NATIVO
%token SUPERCONST
%token CONTINUAR
%token EXTENDER
%token IMPLEMENTAR
%token IMPORTAR
%token INSTANCIADE
%token NUEVO
%token PRIVADO
%token PROTEGIDO
%token CASO
%token CAMBIO
%token VACIO
%token ESTO
%token SINCRONIZAR
%token DESCANZO
%token CONSOLA
%token INTERFAZ
%token PACKAGE 
%token ACCESO
%token OBTENER
%token LET
%token FUNCION
%token SINVALOR
%token GUARD
%token INICIOBLOQUE
%token FINBLOQUE
%token CALCULOINICIO
%token MATCH
%token INICIORUTINA
%token FINRUTINA
%token FINIF
%token ABRIR
%token CERRAR
%token SALIR
%token CAJADETEXTO
%token COMBOBOX
%token LISTBOX
%token BARRADEPROGRESO
%token RBUTTON
%token CHECKBOX
%token PICTUREBOX
%token ONCLICK
%token CLICKDOWN
%token SALIDA
%token VISIBLE
%token OCULTO
%token HINABILITADO
%token HABILITADO
%token TODO
%token ALTERAR
%token BORRARDROP
%token COPIAR
%token EMPUJAR
%token INSERTAR
%token TOPE
%token FECHA
%token DATOS
%token CREAR
%token LONGITUD
%token LIMPIAR
%token BORRARDELETE
%token IGUAL
%token EXCEPCION
%token RETORNAR 
%token TITULO
%token DE
%token GENERAR
%token AGRUPAR
%token LLENO
%token ALTO
%token ETIQUETA
%token LINEAS
%token ORDENAR
%token APUNTADOR
%token REMOVER
%token SORTEAR
%token TAMANO
%token TEXTO
%token DESPUES
%token ARRIBA
%token VALORES
%token NOMBRE
%token MUERE
%token VARIABLEBACIA
%token CLONAR
%token INCLUDE
%token LINK
%token CONTENTCODE
%token CLASEPRINCIPAL
%token REQUIERE
%token VARNOVACIA
%token ALIAS
%token PUNTO
%token PUNTOYCOMA
%token DOSPUNTOS
%token COMA
%token VERDADERO
%token FALSO
%token ID
%token VARIABLE
%token LIBUNO
%token LIBDOS
%token LIBTRES
%token PUBLICO
%token RT
%token OUTCOLA
%token INCOLA
%token SQLCONECTA


/*
%type <texto> celda
%type <real> valor
*/


%%
/***********************
 * Reglas Gramaticales *
 ***********************/

/* 1 Librerias y comienso */
librerias: libreria contentcodep;
libreria: lib; |;
lib:  INCLUDE PUNTO LINK PARIZQ nombrelib PARDER libreria;
nombrelib: LIBUNO;|LIBDOS;|LIBTRES;

/* 2 contenedor principal*/
contentcodep: CONTENTCODE KEYIZQ codigocontentcode  KEYDER; 
codigocontentcode: otro;|codigomain;|funcion|procedimientos|clases;
 otro: decvar; | asignacion; |claseprincipal;|;

/* 3 declaracion de variable*/

decvar: VARIABLE PARIZQ  declararvac PARDER tipodato PUNTOYCOMA codigocontentcode;
declararvac: ID masdeclararvac;
masdeclararvac: COMA declararvac; |;
 tipodato: TDLONG;|TDUINT;|TDDECIMAL;|TDCHAR;|TDSTRING;|TDFLOTANTE;|TDENTERO;
           |TDENUM;|TDNULO|TDBOLEANO;|TDDOBLE;|TDUSHORT;|TDSHORT;|TDBYTE;
           |TDSBYTE;

/* 4 asignaciones*/

asignacion: ASIGNACION  asignar PUNTOYCOMA codigocontentcode;
asignar: PARIZQ ID COMA  valorasig  PARDER asirnarval;
asirnarval: masasignaciones; |;
masasignaciones: COMA PARIZQ ID COMA valorasig PARDER asirnarval;

valorasig: ID;|NUMENTERO;

/* 5 Firstclass = main  */
claseprincipal: TDENTERO CLASEPRINCIPAL PARIZQ PARDER KEYIZQ codigomain KEYDER;
codigomain : decvar;|asignacion;|imprimir;| operacionesaritmeticas;|incrementoodecremeto;|cfor;|preguntasi;|cwhile;|open;|leer;|try;|cambio;
|llamar;|enviar;|resivir;|pilas;|colas;|arreglos;|matriz;|inputcola;|outputcola;|conversion;|conexion;|abrircon;|cerrarcon;|dataconv;|;

/* 6 imprimir*/
imprimir: tokenimpresion PARIZQ valorasig PARDER PUNTOYCOMA codigomain;
tokenimpresion: IMPRESIONPRINT;|IMPRESIONWLINE;|IMPRESIONWRITE;|;

/* 7 operaciones aritmericas*/
operacionesaritmeticas: operacion PUNTOYCOMA codigomain;
 operacion: ASIGNACION ID  COMA primeroperacion;
primeroperacion: valorasig operadores valorasig masoperaciones;|;
 masoperaciones: operadores valorasig primeroperacion;
operadores : RCUADRADA;| PI;|SUMA;|RESTA;|MULTIPLICACION;|DIVISION;|;

/*8 incremento*/
incrementoodecremeto: ID incremetarodecremetar PUNTOYCOMA codigomain;
incremetarodecremetar: INCREMENTO;| DECREMENTO;

/* 9 for */
cfor: CICLOFOR PARIZQ condicionfor PARDER  llaves codigomain;
llaves: KEYIZQ codigogeneral KEYDER; |;
condicionfor: ASIGNACION ID COMA valorasig PUNTOYCOMA valorasig incodec PUNTOYCOMA valorasig oprel valorasig PUNTOYCOMA;
incodec: INCREMENTO;| DECREMENTO;
oprel: MAYORQUE;| MENORQUE;| MAYORIGUAL;|MENORIGUAL;|DIFERENTE;|IGUALIGUAL;
codigogeneral: decvar;|asignacion;|imprimir;| operacionesaritmeticas;|incrementoodecremeto;|cfor;|preguntasi;|entonces;|cwhile;|llamar;
|enviar;|resivir;|arreglos;|pilas;|colas;|matriz;|inputcola;|outputcola;| conversion;|conexion;|abrircon;|cerrarcon;|dataconv;|;

/* 10 si */
preguntasi: PREGUNTA PARIZQ desicion PARDER iniciofin;
iniciofin: INICIOBLOQUE codigogeneral  FINBLOQUE entonces codigomain;|;
desicion: valorasig operador valorasig mascomp;|;
mascomp:  OPLONOT desicion;| OPLOGAND desicion ;| OPLOGOR desicion;|;
operador: MAYORQUE;| MENORQUE;| MAYORIGUAL;| MENORIGUAL;| IGUALIGUAL;| IGUAL;| DIFERENTE;

entonces: elegir INICIOBLOQUE codigogeneral FINBLOQUE
elegir: ENTONCES;|ENTSI;

/* 11 while*/
cwhile: CICLOWHILE PARIZQ desicion PARDER KEYIZQ codigogeneral KEYDER codigomain;


/* 12 comentarios*/

/* 13 open */
open: ASIGNACION ID COMA ABRIR PUNTO PARIZQ  ID PUNTO TEXTO COMA  RT PARDER PUNTOYCOMA codigomain;|
      ASIGNACION ID COMA ABRIR PUNTO PARIZQ  ID PUNTO TEXTO COMA  RT PARDER  {printf("Falta ;\n" );} codigomain;


/*14 leer */

leer: ASIGNACION ID COMA  lectura PARIZQ PARDER PUNTOYCOMA codigomain;
lectura: LECTURAESCANEAR;| LECTURALEERLINEA;| LECTURALEER;| LECTURAINPUT;
/* 15 try cathc*/
try: TRATAR DOSPUNTOS codigogeneral FINBLOQUE CAPTURA codigogeneral FINBLOQUE codigomain;
|TRATAR DOSPUNTOS codigogeneral FINBLOQUE CAPTURA codigogeneral {printf("\nError falta end\n");} codigomain;
|TRATAR DOSPUNTOS codigogeneral FINBLOQUE {printf("\nError falta catch\n");} codigogeneral FINBLOQUE codigomain;
|TRATAR DOSPUNTOS codigogeneral {printf("\nError falta end\n");} CAPTURA codigogeneral FINBLOQUE codigomain;
 /* 16 switch*/
cambio: CAMBIO PARIZQ valorasig PARDER INICIOBLOQUE bloque FINBLOQUE codigomain;
|CAMBIO PARIZQ valorasig PARDER INICIOBLOQUE bloque {printf("\nError falta end\n");} codigomain;|
CAMBIO PARIZQ valorasig PARDER {printf("\nError falta begin\n");} bloque FINBLOQUE codigomain;
bloque: CASO valorasig DOSPUNTOS bloquecambio FINBLOQUE mascasos ;|;
mascasos: CASO valorasig DOSPUNTOS bloquecambio FINBLOQUE;
bloquecambio: decvar;|asignacion;|imprimir;| operacionesaritmeticas;|incrementoodecremeto;|cfor;|preguntasi;|entonces;|cwhile;|llamar;
|enviar;|resivir;|arreglos;|pilas;|colas;|matriz;|inputcola;|outputcola;| conversion;|conexion;|abrircon;|cerrarcon;|try;|;

/* 17 funciones */
funcion: FUNCION ID PARIZQ parametros PARDER KEYIZQ codigogeneral RETORNAR valorasig PUNTOYCOMA  KEYDER codigocontentcode;
parametros: tipodato ID masparametros;|;
masparametros: COMA parametros;

/* 18 procedimientos*/
procedimientos: alcance VACIO ID PARIZQ parametros PARDER KEYIZQ codigogeneral KEYDER codigocontentcode;
alcance: PUBLICO;| PROTEGIDO;| PRIVADO;|;
/* 19 clases */
clases: alcance CLASE ID KEYIZQ codigogeneral KEYDER codigocontentcode;
/* 20  llamar funciones y procedimientos */
llamar: ID PUNTO PARIZQ PARDER PUNTOYCOMA codigomain;
/* 21 mandar parametros */
enviar: ID PUNTO PARIZQ valorasig PARDER PUNTOYCOMA codigomain;

/* 22 resivir datos de una funcion o procedimiento */
resivir: ID PUNTO PARIZQ tipodato ID PARDER PUNTOYCOMA codigomain;
/* 23 array */
arreglos: ASIGNACION ID PUNTO PARIZQ NUMENTERO PARDER COMA CORIZQ datosarreglo CORDER tipodato PUNTOYCOMA  codigomain;
datosarreglo: ID masdatos;|;
masdatos: COMA ID datosarreglo;|;

/*24 listas*/
pilas: ASIGNACION ID COMA PILA PARIZQ NUMENTERO PARDER tipodato PUNTOYCOMA codigomain;

/*25 colas*/
colas: ASIGNACION ID COMA  COLA  PARIZQ NUMENTERO PARDER tipodato PUNTOYCOMA codigomain;

/*26 matrices*/
matriz: ASIGNACION ID CORIZQ COMA CORDER COMA CORIZQ NUMENTERO COMA NUMENTERO CORDER tipodato PUNTOYCOMA codigomain;

/* 27 insertar sacar de un cola */
inputcola: ID PUNTO INCOLA PUNTO PARIZQ valorasig PARDER PUNTOYCOMA codigomain;

/* 28 sacar de una cola*/
outputcola: ID PUNTO OUTCOLA PUNTO PARIZQ valorasig PARDER PUNTOYCOMA codigomain; 

/*29 conversion de datos*/
conversion: ID PUNTO CONVERTIR PUNTO PARIZQ tipodato PARDER PUNTOYCOMA codigomain;

/*30 crear conexion*/
conexion: ASIGNACION ID COMA SQLCONECTA PUNTO PARIZQ ID PARDER PUNTOYCOMA codigomain;
/* 31 abrir  conexion*/
abrircon: ID PUNTO ABRIR PARIZQ PARDER PUNTOYCOMA codigomain;
/* 32 cerrar conexion */
cerrarcon: ID PUNTO CERRAR PARIZQ PARDER PUNTOYCOMA codigomain;

dataconv: ASIGNACION ID COMA ID PUNTOYCOMA codigomain;



%%
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