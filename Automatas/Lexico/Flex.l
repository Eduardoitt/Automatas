%array
%option noyywrap
%{
  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
 int count=0;
 int r=0,i=0;
 char array[100][20];
 char array2[100][20];

%}

/*---------------- Expresiones regulares -------------------------*/
delim[\t\n]
ws{delim}+
letra [A-z a-z]
digito [0-9]

numero {digito}+(\.{digito+})?(E[+-]?(digito)+)?
palabra [^[a-z-A-Z]((([a-z-A-Z])|([0-9])|(([_])*))*$)]
numeroentero {digito}({digito})* 
separador ([ \t””])+ 
texto [{letra}{letra}*] 
ide [{letra}({letra} | {digito})*]
id [a-zA-Z][a-za-zA-Z0-9]*


/*-------------------------Reglas-------------------------------*/
%%


{delim} {/* omitir */}
{ws} {/* omitir */}
{separador} {/* omitir */} 
{numeroentero} {return (NUMENTERO);}
sbyte {return (TIPODATO);}
byte {return (TIPODATO);}
short {return (TIPODATO);}
ushort {return (TIPODATO);}
double {return (TIPODATO);}
bool {return (TIPODATO);}
null {return (TIPODATO);}
enum {return (TIPODATO);}
int {return (TIPODATO);}
float {return (TIPODATO);}
string {return (TIPODATO);}
char {return (TIPODATO);}
decimal {return (TIPODATO);}
uint {return (TIPODATO);}
long {return (TIPODATO);}
ulong {return (TIPODATO);}
while {return (CICLO);} 
for {return (CICLO);}
foreach {return (CICLO);}
do {return (CICLO);}	
if {return (PREGUNTA);}
else {return (ENTONCES);}
elif {return(ENTSI);}
class {return(CLASE);}
input {return (LECTURA);}
Read {return (LECTURA);}
ReadLine {return (LECTURA);}
Scan {return (LECTURA);}
print {return (IMPRESION);}
Write {return (IMPRESION);}
WriteLine {return (IMPRESION);}
ReadKey {return (DETENER);}
Parse {return (CONVERTIR);}
"<" {return (MENORQUE);}
">" {return (MAYORQUE);}
"<=" {return (MENORIGUAL);}
">=" {return (MAYORIIGUAL);}
"==" {return (IGUAL);}
"!=" {return (DIFERENTE);}
pasa {return (PASA);}
lambda {return (LAMBDA);}
nonlocal {return (NOLOCAL);}
"**" {return (EXPONENTE);}
"%" {return (MODULO);}
sqrt {return (RCUADRADA);}
pi {return (PI);}
add {return (SUMA);}
sub {return (RESTA);}
mul {return (MULTIPLICACION);}
div {return (DIVISION);}
inc {return (INCREMENTO);}
dec {return (DECREMENTO);}
or {return (OPLOGOR);}
not {return (OPLONOT);}
and {return (OPLOGAND);}
mov {return (ASIGNACION);}
"+=" {return (ASIIGNACIONSUMA);}
"-=" {return (ASIGNACIONRESTA);}
"*=" {return (ASIGNACIONMULTIPLICAION);}
"/=" {return (ASIGNACIONDIVISION);}
"**=" {return (ASIGNACIONEXPONENTE);}
"%=" {return (ASIGNACIONMODULO);}
"{" {return (KEYIZQ);}
"}" {return (KEYDER);}
"[" {return (CORIZQ);}
"]" {return (CORDER);}
"(" {return (PARIZQ);}
")" {return (PARDER);}
"<div>" {return (DIVIZQ)}
"</div>" {return (DIVDER);}
try {return (TRATAR);}
catch {return (CAPTURA);}
final {return (ASIGNAPER);}
finally {return (FINALMENTE);}
throw {return (LANZAR);}
List {return (LISTA);}
Stack {return (PILA);}
Queue {return (COLA);}
native {return (NATIVO);}
super {return (SUPERCONST);}
continue {return (CONTINUAR);}
extends {return (EXTENDER);}
implements {return (IMPLEMENTAR);}
Import {return (IMPORTAR);}
instanceof {return (INSTANCIADE);}
new {return (NUEVO);}
private {return (PRIVADO);}
protected {return (PROTEGIDO);}
case {return (CASO);}
switch {return (CAMBIO);}
void {return (VACIO);}
this {return (ESTO);}
syncronized {return (SINCRONIZAR);}
breack {return (DESCANZO);}
Console {return (CONSOLA);}
Interface {return (INTERFAZ);}
package {return (PACKAGE);} 
set {return (ACCESO);}
get {return (OBTENER);}
let {return (LET);}
funtion {return( FUNCION);}
nulo {return (SINVALOR);}
guard {return (GUARD);}
begin {return (INICIOBLOQUE);}
end {return (FINBLOQUE);}
lazy {return (CALCULOINICIO);}
match {return (MATCH);}
PERFORM {return (INICIORUTINA );}
EDNPERFORM {return (FINRUTINA);}
ENDIF {return (FINIF );}
Open {return (ABRIR );}
Close {return (CERRAR);}
out {return (SALIR);}
TexBox {return (CAJADETEXTO );}
ComboBox {return (COMBOBOX);}
ListBox {return (LISTBOX);}
ProgresBar {return (BARRADEPROGRESO);}
radioButton {return (RBUTTON);}
CheckBox {return (CHECKBOX);}
PictureBox {return (PICTUREBOX);}
OnClik {return (ONCLICK );}
ClikDown {return (CLICKDOWN );}
Output {return (SALIDA );}
Visible {return (VISIBLE);}
hidden {return (OCULTO );}
disable {return (HINABILITADO );}
Enable {return (HABILITADO);}
all {return (TODO );}
alter {return (ALTERAR);}
drop {return (BORRAR );}
copy {return (COPIAR );}
push {return (EMPUJAR );}
pop {return (INSERTAR);}
top {return (TOPE);}
date {return (FECHA );}
data {return (DATOS );}
create {return (CREAR );}
length {return (LONGITUD );}
clear {return (LIMPIAR );}
delete {return (BORRAR);}
equal {return (IGUAL);}
exeption {return (EXCEPCION );}
Extend {return (EXTENDER);}
title {return (TITULO);}
from {return (DE);}
generate {return (GENERAR );}
group {return (AGRUPAR );}
Full {return (LLENO);}
high {return (ALTO);}
label {return (ETIQUETA);}
lines {return (LINEAS);}
order {return (ORDENAR );}
pointer {return (APUNTADOR);}
remove {return (REMOVER);}
sort {return (SORTEAR);}
size {return (TAMAÑO);}
text {return (TEXTO);}
then {return (DESPUES);}
up {return (ARRIBA);}
values {return (VALORES);}
name {return (NOMBRE);}
die {return (MUERE);}
empty {return (VARIABLEBACIA);}
clone {return (CLONAR);}
include {return (INCLUDE);}
Link {return (LIGA);}
ContentCode {return (CONTENTCODEP);}
FirstClass {return (CLASEPRINCIPAL);}
require {return (REQUIERE);}
isset {return (VARNOVACIA);}
alias {return (ALIAS);}
"." {return (PUNTO);}
";" {return (PUNTOYCOMA);}
":" {return (DOSPUNTOS);}
"," {return (COMA);}
true {return (VERDADERO);}
false {return (FALSO);}

{id} { 

  for (int n = 0;n < 100; n++){
            strcpy(array2,yytext);
            r = strcmp(array[n],array2);

            if(r == 0){
                 printf("\nEl id: %s se encuentra en la tabla de simbolos en la posicion: %d  \n",array[n],n);
                 break;
            }
        }
        if(r != 0){
            strcpy(array[i],yytext);
            printf("\nEl Token id: %s  esta en la posicion | %d |  \n", array[i],i);
            i++;
        }

}


%%
/*------------------------main c--------------------------------*/
int main() {

  FILE *f1;
  f1 = fopen("texto.txt","r");
  yyin=f1; 
  yylex();

  printf("\n Tabla \n" );

 printf("\n =============================== Valores ==============================================\n");
printf("\n ====================================================================================== \n" );

	printf("\n | Posicion |    |   Valor  |");
    printf("\n |==========|    |==========|" );
    
	for(int a=0;a<i;a++){
     if(array[a]!=NULL){
	printf("\n |    %d     |    |  %s  \n",a,array[a]);
	
	}
	}
  
}



