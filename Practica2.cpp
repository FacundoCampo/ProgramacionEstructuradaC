/*
//Ej 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct s_punto{
double x;
double y;
};

typedef struct s_punto t_punto;

double distancia(double px, double py){
double norma, parte1, parte2, suma;

parte1= pow(px,2);
parte2= pow(py,2);
suma= parte1 + parte2;
norma= sqrt(suma);

return norma;
}
int main() {
t_punto p1,p2;
double dist1,dist2;

printf("Ingrese el punto x1: ");
scanf("%lf", &p1.x);
printf("Ingrese el punto y1: ");
scanf("%lf", &p1.y);
printf("Ingrese el punto x2: ");
scanf("%lf", &p2.x);
printf("Ingrese el punto y2: ");
scanf("%lf", &p2.y);

printf("Primer punto ingresado: (%.2lf,%.2lf)",p1.x,p1.y);
printf("Segundo punto ingresado: (%.2lf,%.2lf)",p2.x,p2.y);

dist1= distancia(p1.x,p1.y);
dist2= distancia(p2.x,p2.y);

if(dist1>dist2){
printf("El punto mas cerca del origen (0,0) es (%.2lf,%.2lf) con una norma de: %.2lf",p2.x,p2.y,dist2);
}
else{
printf("El punto mas cerca del origen (0,0) es (%.2lf,%.2lf) con una norma de: %.02lf",p1.x,p1.y,dist1);
}

return 0;
}
*/

/*
//Ej 2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 10

struct s_punto{
int x;
int y;
};
typedef struct s_punto t_punto;

void cargarArrEstruct(struct s_punto puntos[TAM]), distanciaMinimaConsecutiva(t_punto puntos[TAM]), distanciaMinimaCualesquiera(t_punto puntos[TAM]);
double normal(t_punto punto1, t_punto punto2);

int main() {
t_punto puntos[TAM];

cargarArrEstruct(puntos);
distanciaMinimaConsecutiva(puntos);
distanciaMinimaCualesquiera(puntos);

return 0;
}
void cargarArrEstruct(t_punto puntos[TAM]){
FILE*arch;
int num, i=0;

arch=fopen("puntos.txt","r");
if(arch!=NULL){
num=fscanf(arch,"%d,%d,",&puntos[i].x,&puntos[i].y);
while(num!=EOF){
printf("%d = (%d,%d)\n",i,puntos[i].x,puntos[i].y);
i++;
num=fscanf(arch,"%d,%d,",&puntos[i].x,&puntos[i].y);
}
}
else{
printf("Ocurrio un error al abrir el archivo");
}
fclose(arch);
}
void distanciaMinimaConsecutiva(t_punto puntos[TAM]){
int i, backupi;
double distMenor=999999, dist;

for(i=0; i<TAM; i++){
dist=normal(puntos[i],puntos[i+1]);
if(dist<distMenor){
distMenor=dist;
backupi=i;
}
}
printf("Los puntos de menor distancia con (%d,%d) y (%d,%d) con una distancia de: %lf",puntos[backupi].x,puntos[backupi].y,puntos[backupi+1].x,puntos[backupi+1].y,distMenor);
}
double normal(t_punto punto1, t_punto punto2){
double x, y;
double result;

x = punto1.x - punto2.x;
y = punto1.y - punto2.y;
result = sqrt(pow(x,2)+pow(y,2));

return result;
}
void distanciaMinimaCualesquiera(t_punto puntos[TAM]){
int i, j, backupi, backupj;
double dist, distMenor=9999999;

for(i=0; i<TAM-1; i++){
for(j=i+1; j<TAM; j++){
dist=normal(puntos[i],puntos[j]);
if(dist<distMenor){
distMenor=dist;
backupi=i;
backupj=j;
}
}
}
printf("\nLa menor distancia de todos los puntos es entre (%d,%d) y (%d,%d) con: %lf",puntos[backupi].x,puntos[backupi].y,puntos[backupj].x,puntos[backupj].y,distMenor);
}
*/

/*
//Ej 4
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define N 5
#define TAM 30

struct s_punto{
int dni;
char nom[TAM];
char pais[TAM];
};

typedef struct s_punto t_punto;

void cargarArch(t_punto persona[N]), cargarTexto(char arr[TAM]), imprimirTabla(t_punto persona[N]), ordenarTabla(t_punto persona[N]);

int main(){
t_punto persona[N];

cargarArch(persona);
imprimirTabla(persona);
ordenarTabla(persona);

return 0;
}
void cargarArch(t_punto persona[N]){
FILE*arch;
int i=0;
char nombre[TAM]={0}, pais[TAM]={0};

arch=fopen("personas.txt","w");
if(arch!=NULL){
printf("Ingrese el dni: ");
scanf("%d",&persona[i].dni);
while(persona[i].dni!=0 && i<N){
printf("\nIngrese el nombre: ");
cargarTexto(nombre);
strcpy(persona[i].nom,nombre);
printf("\nIngrese el pais: ");
cargarTexto(pais);
strcpy(persona[i].pais,pais);
fprintf(arch,"%d,%s,%s\n",persona[i].dni,persona[i].nom,persona[i].pais);
i++;
printf("\nIngrese el dni: ");
scanf("%d",&persona[i].dni);
}
}
fclose(arch);
}
void cargarTexto(char arr[TAM]){
char c;
int i=0;

c=getche();
while(c!='\r' && i<TAM){
arr[i]=c;
c=getche();
i++;
}
arr[i]='\0';
}
void imprimirTabla(t_punto persona[N]){
int i;
char doc[TAM]="Documento\0",no[TAM]="Nombre\0",pa[TAM]="Pais\0";

printf("\n%-20s%-20s%-20s%\n",doc,no,pa);
printf("\n--------------------------------------------------------------\n");
for(i=0;i<N && persona[i].dni!=0;i++){
printf("%-20d%-20s%-20s%\n",persona[i].dni,persona[i].nom,persona[i].pais);
}
}
void ordenarTabla(t_punto persona[N]){
char aux[TAM];
int num, i, j, auxInt;

printf("Pulse:\n1- Ver listado ordenado por nombre\n2-Verlistado ordenado por documento\n3- Ver listado ordenado por pais\n4- Salir del programa");
scanf("%d",&num);
while(num!=4){
if(num==1){
for(i=0; i<N && persona[i+1].nom[0]!='\0'; i++){
for(j=i+1; j<N && persona[j].nom[0]!='\0'; j++){
if(strcmp(persona[i].nom,persona[j].nom)>0){

auxInt=persona[i].dni;
persona[i].dni=persona[j].dni;
persona[j].dni=auxInt;

strcpy(aux,persona[i].nom);
strcpy(persona[i].nom,persona[j].nom);
strcpy(persona[j].nom,aux);

strcpy(aux,persona[i].pais);
strcpy(persona[i].pais,persona[j].pais);
strcpy(persona[j].pais,aux);
}
}
}
}

else if(num==2){
for(i=0; i<N && persona[i+1].nom[0]!='\0'; i++){
for(j=i+1; j<N && personas[j].nom[0]!='\0'; j++){
if(persona[i].dni<persona[j].dni){

auxInt=persona[i].dni;
persona[i].dni=persona[j].dni;
persona[j].dni=auxInt;

strcpy(aux,persona[i].nom);
strcpy(persona[i].nom,persona[j].nom);
strcpy(persona[j].nom,aux);

strcpy(aux,persona[i].pais);
strcpy(persona[i].pais,persona[j].pais);
strcpy(persona[j].pais,aux);
}
}
}
}
else if(num==3){
for(i=0; i<N && persona[i+1].nom[0]!='\0'; i++){
for(j=i+1; j<N && persona[j].nom[0]!='\0'; j++){
if(strcmp(persona[i].pais,persona[j].pais)>0){

auxInt=persona[i].dni;
persona[i].dni=persona[j].dni;
persona[j].dni=auxInt;

strcpy(aux,persona[i].nom);
strcpy(persona[i].nom,persona[j].nom);
strcpy(persona[j].nom,aux);

strcpy(aux,persona[i].pais);
strcpy(persona[i].pais,persona[j].pais);
strcpy(persona[j].pais,aux);
}
}
}
}

imprimirTabla(persona);
printf("\nPulse:\n1- Ver listado ordenado por nombre\n2-Verlistado ordenado por documento\n3- Ver listado ordenado por pais\n4- Salir del programa\n");
scanf("%d",&num);
}
}
*/

/*
//Ej 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAXCANTIDAD 30
#define MAX 5

struct s_punto{
int dni;
char nom[MAXCANTIDAD];
char pais[MAXCANTIDAD];
};
typedef struct s_punto t_punto;

void cargarNum(t_punto persona[MAXCANTIDAD],int i){
printf("\nIngrese el dni: ");
scanf("%d",&persona[i].dni);
}

void cargarPal(char arr[]){
char let;
int e=0;

let=getche();
while(let!='\r' && e<MAXCANTIDAD-1){
arr[e]=let;
e++;
let=getche();
}
arr[e]='\0';
}

void cargarArch(t_punto persona[MAX]){
int i, band=0;
char nombre[MAXCANTIDAD]={0}, country[MAXCANTIDAD]={0};
persona[0].dni=1;
FILE * arch;

arch=fopen("personas.txt","w");
for(i=0; i<MAX && band==0; i++){
cargarNum(persona,i);
if(persona[i].dni!=0){
printf("\nIngrese el nombre: ");
cargarPal(nombre);
strcpy(persona[i].nom,nombre);
printf("\nIngrese la nacionalidad: ");
cargarPal(country);
strcpy(persona[i].pais,country);
fprintf(arch,"%d,%s,%s\n",persona[i].dni,persona[i].nom,persona[i].pais);
}
else{
band++;
}
}
fclose(arch);
}
void imprimirTabla(t_punto persona[MAX]){
int i;

printf("%-20s","Documento");
printf("%-20s","Nombre");
printf("%-20s","Pais");
printf("\n--------------------------------------------\n");

for(i=0; persona[i].dni!=0 && i<MAX; i++){
printf("%-20d",persona[i].dni);
printf("%-20s",persona[i].nom);
printf("%-20s",persona[i].pais);
printf("\n");
}

}
int main() {
t_punto persona[MAX];

cargarArch(persona);
imprimirTabla(persona);

return 0;
}
*/

/*
//Ej 6
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define N 5
#define TAM 20

struct s_punto{
int dni;
char nom[TAM];
char pais[TAM];
};

typedef struct s_punto t_punto;

void cargarMat(t_punto persona[N]), tabla(t_punto persona[N]), ordenar(t_punto persona[N]);

int main() {
t_punto persona[N];

cargarMat(persona);
tabla(persona);
ordenar(persona);

return 0;
}
void cargarMat(t_punto persona[TAM]){
FILE * arch;
int num,var,i,e;
char let;

arch=fopen("personas.txt","r");
if(arch!=NULL){
num=fscanf(arch,"%d,",&var);
for(i=0; i<N && num!=EOF; i++){
persona[i].dni=var;
e=0;
let=fgetc(arch);
while(let!=','){
persona[i].nom[e]=let;
e++;
let=fgetc(arch);
}
persona[i].nom[e]='\0';
e=0;
let=fgetc(arch);
while(let!='\n'){
persona[i].pais[e]=let;
e++;
let=fgetc(arch);
}
persona[i].pais[e]='\0';
num=fscanf(arch,"%d,",&var);
e=0;
}
}
fclose(arch);
}

void tabla(t_punto persona[N]){
int i;

printf("%-20s","Documento");
printf("%-20s","Nombre");
printf("%-20s","Pais");
printf("\n----------------------------------------\n");
for(i=0; i<N && persona[i].dni!=0; i++){
printf("%-20d",persona[i].dni);
printf("%-20s",persona[i].nom);
printf("%-20s",persona[i].pais);
printf("\n");
}

}

void ordenar(t_punto persona[N]){
int num, i, auxInt;
char auxChar[TAM]={0};

printf("\nIngrese 1 si quiere ver el listado ordenado por nombre.");
printf("\nIngrese 2 si quiere ver el listado ordenado por documento.");
printf("\nIngrese 3 si quiere ver el listado ordenado por pais.");
printf("\nIngrese 4 si quiere salir del programa.");
scanf("%d",&num);
while(num!=4){
if(num==1){
for(i=0;persona[i+1].nom[0]!='\0'; i++){
if(strcmp(persona[i].nom,persona[i+1].nom)>0){
auxInt=persona[i].dni;
persona[i].dni=persona[i+1].dni;
persona[i+1].dni=auxInt;
strcpy(auxChar,persona[i].nom);
strcpy(persona[i].nom,persona[i+1].nom);
strcpy(persona[i+1].nom,auxChar);
strcpy(auxChar,persona[i].pais);
strcpy(persona[i].pais,persona[i+1].pais);
strcpy(persona[i+1].pais,auxChar);
}
}
}
else if(num==2){
for(i=0;persona[i+1].nom[0]!='\0'; i++){
if(persona[i].dni > persona[i+1].dni){
auxInt=persona[i].dni;
persona[i].dni=persona[i+1].dni;
persona[i+1].dni=auxInt;
strcpy(auxChar,persona[i].nom);
strcpy(persona[i].nom,persona[i+1].nom);
strcpy(persona[i+1].nom,auxChar);
strcpy(auxChar,persona[i].pais);
strcpy(persona[i].pais,persona[i+1].pais);
strcpy(persona[i+1].pais,auxChar);
}
}
}
else if(num==3){
for(i=0;persona[i+1].nom[0]!='\0'; i++){
if(strcmp(persona[i].pais,persona[i+1].pais)>0){
auxInt=persona[i].dni;
persona[i].dni=persona[i+1].dni;
persona[i+1].dni=auxInt;
strcpy(auxChar,persona[i].nom);
strcpy(persona[i].nom,persona[i+1].nom);
strcpy(persona[i+1].nom,auxChar);
strcpy(auxChar,persona[i].pais);
strcpy(persona[i].pais,persona[i+1].pais);
strcpy(persona[i+1].pais,persona[i].pais);
}
}
}
tabla(persona);
printf("\nIngrese 1 si quiere ver el listado ordenado por nombre.");
printf("\nIngrese 2 si quiere ver el listado ordenado por documento.");
printf("\nIngrese 3 si quiere ver el listado ordenado por pais.");
printf("\nIngrese 4 si quiere salir del programa.");
scanf("%d",&num);
}
}
*/

/*
//Ej 7
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define N 30
#define TAM 100

typedef struct{
char nombre[TAM];
int legajo;
int materias;
}
t_alumno;

typedef struct{
char nombre[TAM];
int codigo;
}
t_materia;

typedef struct{
int legajo_alumno;
int cod_materia;
int nota;
}
t_nota;

void cargarAlumno(t_alumno estudiante[N]), cargarMaterias(t_materia subject[N]), cargarEstructuraAlumno(t_alumno estudiante[N]);
void cargarEstructuraMateria(t_materia subject[N]), cargarNota(t_alumno estudiante[N], t_materia subject[N], t_nota calificacion[N]);

int main() {
t_alumno estudiante[N];
t_materia subject[N];
t_nota calificacion[N];

//cargarAlumno(estudiante);
//cargarMaterias(subject);
cargarEstructuraAlumno(estudiante);
cargarEstructuraMateria(subject);
cargarNota(estudiante,subject,calificacion);

return 0;
}
void cargarAlumno(t_alumno estudiante[N]){
int i=0, num, e;
char let;
FILE * arch;

arch=fopen("alumnos.txt","w");
if(arch!=NULL){
printf("Vamos a proceder a cargar alumnos\n");
printf("\nIngrese el numero de legajo del alumno: ");
scanf("%d",&num);
while(num!=0 && i<N){
estudiante[i].legajo=num;
printf("\nIngrese el nombre del alumno: ");
let=getche();
e=0;
while(let!='\r' && e<TAM){
estudiante[i].nombre[e]=let;
let=getche();
e++;
}
estudiante[i].nombre[e]='\0';
printf("\nIngrese el codigo de la materia: ");
scanf("%d",&num);
estudiante[i].materias=num;
fprintf(arch,"%s,%d,%d\n",estudiante[i].nombre,estudiante[i].legajo,estudiante[i].materias);
i++;
printf("\nVamos con otro alumno o ingrese 0 para terminar.\n");
printf("\nIngrese el numero de legajo del alumno: ");
scanf("%d",&num);
}
}
fclose(arch);
}
void cargarMaterias(t_materia subject[N]){
int i=0, num, e;
char let;
FILE * arch;

arch=fopen("materias.txt","w");
if(arch!=NULL){
printf("Vamos a proceder a cargar las materias\n");
printf("\nIngrese el codigo de la materia: ");
scanf("%d",&num);
while(num!=0 && i<N){
subject[i].codigo=num;
printf("\nIngrese el nombre de la materia: ");
let=getche();
e=0;
while(let!='\r' && e<TAM){
subject[i].nombre[e]=let;
let=getche();
e++;
}
subject[i].nombre[e]='\0';
fprintf(arch,"%s,%d\n",subject[i].nombre,subject[i].codigo);
i++;
printf("\nVamos con otra materia o ingrese 0 para terminar.\n");
printf("\nIngrese el codigo de la materia: ");
scanf("%d",&num);
}
}
fclose(arch);
}
void cargarEstructuraAlumno(t_alumno estudiante[N]){
FILE * arch;
char let;
int i=0,e,num,num2;

arch=fopen("alumnos.txt","r");
if(arch!=NULL){
while(i<N){
e=0;
let=fgetc(arch);
while(let!=','){
estudiante[i].nombre[e]=let;
e++;
let=fgetc(arch);
}
estudiante[i].nombre[e]='\0';
fscanf(arch,"%d,%d\n",&num,&num2);
estudiante[i].legajo=num;
estudiante[i].materias=num2;
printf("\nEstudiante numero %d, nombre: %s, legajo: %d, codigo de la materia: %d",i,estudiante[i].nombre,estudiante[i].legajo,estudiante[i].materias);
i++;
}
}
fclose(arch);
}
void cargarEstructuraMateria(t_materia subject[N]){
FILE * arch;
char let;
int i=0,e,num;

arch=fopen("materias.txt","r");
if(arch!=NULL){
while(i<N){
e=0;
let=fgetc(arch);
while(let!=','){
subject[i].nombre[e]=let;
e++;
let=fgetc(arch);
}
subject[i].nombre[e]='\0';
fscanf(arch,"%d\n",&num);
subject[i].codigo=num;
printf("\nMateria numero %d, nombre: %s, codigo de la materia: %d",i,subject[i].nombre,subject[i].codigo);
i++;
}
}
fclose(arch);
}
void cargarNota(t_alumno estudiante[N], t_materia subject[N], t_nota calificacion[N]){
FILE * arch;
int i,j,num,e=0;

arch=fopen("notas.txt","w");
if(arch!=NULL){
for(i=0; i<N && estudiante[i].nombre[0]!='\0'; i++){
for(j=0; j<N && subject[j].nombre[0]!='\0'; j++){
if(estudiante[i].materias==subject[j].codigo){
printf("Ingrese la nota de %s para la materia %s: ",estudiante[i].nombre,subject[j].nombre);
scanf("%d",&num);
calificacion[e].legajo_alumno=estudiante[i].legajo;
calificacion[e].cod_materia=subject[j].codigo;
calificacion[e].nota=num;
fprintf(arch,"%d,%d,%d\n",calificacion[e].legajo_alumno,calificacion[e].cod_materia,calificacion[e].nota);
e++;
}
}
}
}
fclose(arch);
}
*/

/*
//Ej 8

#include <stdio.h>
#include <stdlib.h>

#define MASK 128

void charABin(char letra);

int main() {
char letra='c';

printf("%c en binario: ",letra);
charABin(letra);

return 0;
}

void charABin(char letra){
int i;

for(i=0; i<8; i++){ //Es i<8 pq es un char y los char tienen 8 bits
printf("%d",(letra&(MASK>>i))!=0); //Compara si es diferente o no de 0, con True(1) o False(0)
}
}
// en cada vuelta va imprimiendo

// 0 1 1 0 0 0 1 1  Primera vuelta
// 1 0 0 0 0 0 0 0  &
//------------------
// 0 0 0 0 0 0 0 0    --> 0

// 0 1 1 0 0 0 1 1  Segunda vuelta
// 0 1 0 0 0 0 0 0  &
//-----------------
// 0 1 0 0 0 0 0 0   --> 1

// 0 1 1 0 0 0 1 1  Tercera vuelta
// 0 0 1 0 0 0 0 0  &
//-----------------
// 0 0 1 0 0 0 0 0  --> 1

// 0 1 1 0 0 0 1 1  Cuarta vuelta
// 0 0 0 1 0 0 0 0  &
//-----------------
// 0 0 0 0 0 0 0 0  --> 0

// 0 1 1 0 0 0 1 1  Quinta vuelta
// 0 0 0 0 1 0 0 0  &
//-----------------
// 0 0 0 0 0 0 0 0  --> 0

// 0 1 1 0 0 0 1 1  Sexta vuelta
// 0 0 0 0 0 1 0 0  &
//-----------------
// 0 0 0 0 0 0 0 0  --> 0

// 0 1 1 0 0 0 1 1  Septima vuelta
// 0 0 0 0 0 0 1 0  &
//-----------------
// 0 0 0 0 0 0 1 0  --> 1

// 0 1 1 0 0 0 1 1  Octava vuelta
// 0 0 0 0 0 0 0 1  &
//-----------------
// 0 0 0 0 0 0 0 1  --> 1
*/

/*
//Ej 9
#include <stdio.h>
#include <stdlib.h>

#define MASK 127

int shiftearAlaIzq(char letra);

int main() {
char letra='c';

printf("%c shifteado a la derecha en binario es igual a : %d",letra,shiftearAlaIzq(letra));

return 0;
}

int shiftearAlaIzq(char letra){
int resultado= (letra>>1)&MASK;

return resultado;
}
/** EJEMPLO

0 1 1 0 0 0 1 1 	--> CHAR C = 99 ASCCI

0 0 1 1 0 0 0 1  	--> C >> 1
0 1 1 1 1 1 1 1 	--> &MASK
-----------------------------------
0 0 1 1 0 0 0 1 	--> RESULTADO = 49

*/

/*
//Ej 10
#include <stdio.h>
#include <stdlib.h>

#define MASK 1

int contadorDeBits(int num);

int main() {
unsigned int num = 127;

printf("Cantidad de Bits en (1): %d",contadorDeBits(num));

return 0;
}

int contadorDeBits(int num){
int i, cont=0;

for(i=0; i<32; i++){
if((num&MASK)==1){
cont++;
}
num=num>>1;
}
return cont;
}

/** 	
EN CADA VUELTA HACE EL CORRIMIENTO DEL NUMERO Y SE 
FIJA CUANTOS BITS ESTAN EN 1, EN LA VUELTA 1 SERIA:

0 1 1 1 1 1 1 1 	--> NUM=127
0 0 0 0 0 0 0 1		--> MASK=1
---------------------------------------
0 0 0 0 0 0 0 1 	--> CONT++

LUEGO SE HACE UN SHIFTEO A LA DERECHA Y SE AGREGA 
UN 0 A LA IZQUIERDA

0 0 1 1 1 1 1 1		--> NUM=127>>1
0 0 0 0 0 0 0 1		--> MASK=1
--------------------------------------
0 0 0 0 0 0 0 1		--> CONT++ 

ASÍ HASTA QUE SE ACABEN LOS BITS DEL NUMERO (8 VUELTAS)
*/


