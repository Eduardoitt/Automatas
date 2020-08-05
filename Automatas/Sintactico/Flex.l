
%option noyywrap
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "sintactico.tab.h"
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
comentario ([ ]|{letra}|{digito})*


/*-------------------------Reglas-------------------------------*/
%%


delim {}
ws {}
separador {} 
{numeroentero} {printf("%s",yytext );return (NUMENTERO);}
sbyte {printf("%s",yytext );return (TDSBYTE);}
byte {printf("%s",yytext );return (TDBYTE);}
short {printf("%s",yytext );return (TDSHORT);}
ushort {printf("%s",yytext );return (TDUSHORT);}
double {printf("%s",yytext );return (TDDOBLE);}
bool {printf("%s",yytext );return (TDBOLEANO);}
null {printf("%s",yytext );return (TDNULO);}
enum {printf("%s",yytext );return (TDENUM);}
int {printf("%s",yytext );return (TDENTERO);}
float {printf("%s",yytext );return (TDFLOTANTE);}
string {printf("%s",yytext );return (TDSTRING);}
char {printf("%s",yytext );return (TDCHAR);}
decimal {printf("%s",yytext );return (TDDECIMAL);}
uint {printf("%s",yytext );return (TDUINT);}
long {printf("%s",yytext );return (TDLONG);}
ulong {printf("%s",yytext );return (TULONG);}
while {printf("%s",yytext );return (CICLOWHILE);} 
for {printf("%s",yytext );return (CICLOFOR);}
foreach {printf("%s",yytext );return (CICLOFOREACH);}
do {printf("%s",yytext );return (CICLODO);}	
if {printf("%s",yytext );return (PREGUNTA);}
else {printf("%s",yytext );return (ENTONCES);}
elif {printf("%s",yytext );return(ENTSI);}
class {printf("%s",yytext );return(CLASE);}
input {printf("%s",yytext );return (LECTURAINPUT);}
Read {printf("%s",yytext );return (LECTURALEER);}
ReadLine {printf("%s",yytext );return (LECTURALEERLINEA);}
Scan {printf("%s",yytext );return (LECTURAESCANEAR);}
print {printf("%s",yytext );return (IMPRESIONPRINT);}
Write {printf("%s",yytext );return (IMPRESIONWRITE);}
WriteLine {printf("%s",yytext );return (IMPRESIONWLINE);}
ReadKey {printf("%s",yytext );return (DETENER);}
Parse {printf("%s",yytext );return (CONVERTIR);}
"<" {printf("%s",yytext );return (MENORQUE);}
">" {printf("%s",yytext );return (MAYORQUE);}
"<=" {printf("%s",yytext );return (MENORIGUAL);}
">=" {printf("%s",yytext );return (MAYORIGUAL);}
"==" {printf("%s",yytext );return (IGUALIGUAL);}
"!=" {printf("%s",yytext );return (DIFERENTE);}
pasa {printf("%s",yytext );return (PASA);}
lambda {printf("%s",yytext );return (LAMBDA);}
nonlocal {printf("%s",yytext );return (NOLOCAL);}
"**" {printf("%s",yytext );return (EXPONENTE);}
"%" {printf("%s",yytext );return (MODULO);}
sqrt {printf("%s",yytext );return (RCUADRADA);}
pi {printf("%s",yytext );return (PI);}
add {printf("%s",yytext );return (SUMA);}
sub {printf("%s",yytext );return (RESTA);}
mul {printf("%s",yytext );return (MULTIPLICACION);}
div {printf("%s",yytext );return (DIVISION);}
inc {printf("%s",yytext );return (INCREMENTO);}
dec {printf("%s",yytext );return (DECREMENTO);}
or {printf("%s",yytext );return (OPLOGOR);}
not {printf("%s",yytext );return (OPLONOT);}
and {printf("%s",yytext );return (OPLOGAND);}
mov {printf("%s",yytext );return (ASIGNACION);}
"+=" {printf("%s",yytext );return (ASIIGNACIONSUMA);}
"-=" {printf("%s",yytext );return (ASIGNACIONRESTA);}
"*=" {printf("%s",yytext );return (ASIGNACIONMULTIPLICAION);}
"/=" {printf("%s",yytext );return (ASIGNACIONDIVISION);}
"**=" {printf("%s",yytext );return (ASIGNACIONEXPONENTE);}
"%=" {printf("%s",yytext );return (ASIGNACIONMODULO);}
"{" {printf("%s",yytext );return (KEYIZQ);}
"}" {printf("%s",yytext );return (KEYDER);}
"[" {printf("%s",yytext );return (CORIZQ);}
"]" {printf("%s",yytext );return (CORDER);}
"(" {printf("%s",yytext );return (PARIZQ);}
")" {printf("%s",yytext );return (PARDER);}
"<div>" {printf("%s",yytext );return (DIVIZQ);}
"</div>" {printf("%s",yytext );return (DIVDER);}
try {printf("%s",yytext );return (TRATAR);}
catch {printf("%s",yytext );return (CAPTURA);}
final {printf("%s",yytext );return (ASIGNAPER);}
finally {printf("%s",yytext );return (FINALMENTE);}
throw {printf("%s",yytext );return (LANZAR);}
List {printf("%s",yytext );return (LISTA);}
Stack {printf("%s",yytext );return (PILA);}
Queue {printf("%s",yytext );return (COLA);}
native {printf("%s",yytext );return (NATIVO);}
super {printf("%s",yytext );return (SUPERCONST);}
continue {printf("%s",yytext );return (CONTINUAR);}
extends {printf("%s",yytext );return (EXTENDER);}
implements {printf("%s",yytext );return (IMPLEMENTAR);}
Import {printf("%s",yytext );return (IMPORTAR);}
instanceof {printf("%s",yytext );return (INSTANCIADE);}
new {printf("%s",yytext );return (NUEVO);}
private {printf("%s",yytext );return (PRIVADO);}
protected {printf("%s",yytext );return (PROTEGIDO);}
public {printf("%s", yytext); return (PUBLICO);}
case {printf("%s",yytext );return (CASO);}
switch {printf("%s",yytext );return (CAMBIO);}
void {printf("%s",yytext );return (VACIO);}
this {printf("%s",yytext );return (ESTO);}
syncronized {printf("%s",yytext );return (SINCRONIZAR);}
breack {printf("%s",yytext );return (DESCANZO);}
Console {printf("%s",yytext );return (CONSOLA);}
Interface {printf("%s",yytext );return (INTERFAZ);}
package {printf("%s",yytext );return (PACKAGE);} 
set {printf("%s",yytext );return (ACCESO);}
get {printf("%s",yytext );return (OBTENER);}
let {printf("%s",yytext );return (LET);}
funtion {printf("%s",yytext );return( FUNCION);}
nulo {printf("%s",yytext );return (SINVALOR);}
guard {printf("%s",yytext );return (GUARD);}
begin {printf("%s",yytext );return (INICIOBLOQUE);}
end {printf("%s",yytext );return (FINBLOQUE);}
lazy {printf("%s",yytext );return (CALCULOINICIO);}
match {printf("%s",yytext );return (MATCH);}
PERFORM {printf("%s",yytext );return (INICIORUTINA );}
EDNPERFORM {printf("%s",yytext );return (FINRUTINA);}
endif {printf("%s",yytext );return (FINIF );}
Open {printf("%s",yytext );return (ABRIR );}
Close {printf("%s",yytext );return (CERRAR);}
out {printf("%s",yytext );return (SALIR);}
TexBox {printf("%s",yytext );return (CAJADETEXTO );}
ComboBox {printf("%s",yytext );return (COMBOBOX);}
ListBox {printf("%s",yytext );return (LISTBOX);}
ProgresBar {printf("%s",yytext );return (BARRADEPROGRESO);}
radioButton {printf("%s",yytext );return (RBUTTON);}
CheckBox {printf("%s",yytext );return (CHECKBOX);}
PictureBox {printf("%s",yytext );return (PICTUREBOX);}
OnClik {printf("%s",yytext );return (ONCLICK );}
ClikDown {printf("%s",yytext );return (CLICKDOWN );}
Output {printf("%s",yytext );return (SALIDA );}
Visible {printf("%s",yytext );return (VISIBLE);}
hidden {printf("%s",yytext );return (OCULTO );}
disable {printf("%s",yytext );return (HINABILITADO );}
Enable {printf("%s",yytext );return (HABILITADO);}
all {printf("%s",yytext );return (TODO );}
alter {printf("%s",yytext );return (ALTERAR);}
drop {printf("%s",yytext );return (BORRARDROP );}
copy {printf("%s",yytext );return (COPIAR );}
push {printf("%s",yytext );return (EMPUJAR );}
pop {printf("%s",yytext );return (INSERTAR);}
top {printf("%s",yytext );return (TOPE);}
date {printf("%s",yytext );return (FECHA );}
data {printf("%s",yytext );return (DATOS );}
create {printf("%s",yytext );return (CREAR );}
length {printf("%s",yytext );return (LONGITUD );}
clear {printf("%s",yytext );return (LIMPIAR );}
delete {printf("%s",yytext );return (BORRARDELETE);}
equal {printf("%s",yytext );return (IGUAL);}
exeption {printf("%s",yytext );return (EXCEPCION );}
Extend {printf("%s",yytext );return (EXTENDER);}
title {printf("%s",yytext );return (TITULO);}
from {printf("%s",yytext );return (DE);}
generate {printf("%s",yytext );return (GENERAR );}
group {printf("%s",yytext );return (AGRUPAR );}
Full {printf("%s",yytext );return (LLENO);}
high {printf("%s",yytext );return (ALTO);}
label {printf("%s",yytext );return (ETIQUETA);}
lines {printf("%s",yytext );return (LINEAS);}
order {printf("%s",yytext );return (ORDENAR );}
pointer {printf("%s",yytext );return (APUNTADOR);}
remove {printf("%s",yytext );return (REMOVER);}
sort {printf("%s",yytext );return (SORTEAR);}
size {printf("%s",yytext );return (TAMANO);}
txt {printf("%s",yytext );return (TEXTO);}
then {printf("%s",yytext );return (DESPUES);}
up {printf("%s",yytext );return (ARRIBA);}
values {printf("%s",yytext );return (VALORES);}
name {printf("%s",yytext );return (NOMBRE);}
die {printf("%s",yytext );return (MUERE);}
empty {printf("%s",yytext );return (VARIABLEBACIA);}
clone {printf("%s",yytext );return (CLONAR);}
Include {printf("%s",yytext ); return (INCLUDE); }
Link {printf("%s",yytext );return (LINK);}
ContentCode {printf("%s",yytext );return (CONTENTCODE);}
FirstClass {printf("%s",yytext );return (CLASEPRINCIPAL);}
require {printf("%s",yytext );return (REQUIERE);}
isset {printf("%s",yytext );return (VARNOVACIA);}
alias {printf("%s",yytext );return (ALIAS);}
"." {printf("%s",yytext );return (PUNTO);}
";" {printf("%s",yytext );return (PUNTOYCOMA);}
":" {printf("%s",yytext );return (DOSPUNTOS);}
"," {printf("%s",yytext );return (COMA);}
true {printf("%s",yytext );return (VERDADERO);}
false {printf("%s",yytext );return (FALSO);}
retorna {printf("%s",yytext );return(RETORNAR);}
var {printf("%s",yytext );return (VARIABLE);}
stdio.h {printf("%s",yytext );return (LIBUNO);}
stdlib.h {printf("%s",yytext );return (LIBDOS);}
math.h {printf("%s",yytext );return (LIBTRES);}

(["<"]{comentario}[">"]) {printf("%s",yytext );}
rt {printf("%s",yytext ); return (RT);}
Enqueue {printf("%s",yytext ); return (INCOLA);}
Dequeue {printf("%s",yytext ); return (OUTCOLA);}
SqlConnection {printf("%s", yytext); return (SQLCONECTA);}

{id} {printf("%s",yytext ); return (ID);}


%%
/*------------------------main c--------------------------------*/


