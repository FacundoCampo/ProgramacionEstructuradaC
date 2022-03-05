/*
//Ej 1
#include <stdio.h>
#include <conio.h>

int main() {
float numReal,numSobra;
int numEnt, redondeo, numTecho;
//printf("Ingresar un numero real: ");
scanf("%f",&numReal);
numEnt= numReal;
numSobra= numReal-numEnt;
if (numSobra>=0.5)
{
redondeo= numEnt + 1;
numTecho= numEnt + 1;
printf("Redondeo: %d\n", redondeo);
printf("Piso: %d\n", numEnt);
printf("Techo: %d\n", numTecho);
}
else{
redondeo= numEnt;
numTecho= numEnt;
printf("Redondeo: %d\n", redondeo);
printf("Piso: %d\n", numEnt);
printf("Techo: %d\n", numTecho);
}

//printf("%.2f\n",numReal);
//printf("%d\n",numEnt);
//printf("%f\n",numSobra);
return 0;
}
*/

/*
//Ej 1a
#include <stdio.h>
#include <conio.h>

int redondeo(float numReal), piso(float numReal), techo(float numReal);

int main() {

float numReal; 
int r, p, t;

printf("Ingresar un numero real: ");
scanf("%f",&numReal);
r= redondeo(numReal);
printf("Redondeo: %d\n", r);
p= piso(numReal);
printf("Piso: %d\n", p);
t= techo(numReal);
printf("Techo: %d\n", t);

return 0;
}

int redondeo(float numReal){
int numEnt, numRedondeo;
float numSobra;
numEnt= numReal;
numSobra= numReal - numEnt;
if (numSobra>=0.5){
numRedondeo= numEnt + 1;
return numRedondeo;
}
else{
numRedondeo= numEnt;
return numRedondeo;
}
}

int piso(float numReal){
int numEnt;
numEnt= numReal;
return numEnt;
}

int techo(float numReal){
int numEnt, numTecho;
float numSobra;
numEnt= numReal;
numSobra= numReal - numEnt;
if (numSobra>=0.5){
numTecho= numEnt +1;
return numTecho;
}
else{
numTecho= numEnt;
return numTecho;
}
}
*/

/*
//Ej 2
#include <stdio.h>
#include <conio.h>
#include <math.h>

int suma(int num1, int num2), resta(int num1, int num2), multiplicacion(int num1, int num2);
double division(int num1, int num2);

int main() {
int num1, num2, r;
double res;
char c;

printf("Ingrese un numero entero: ");
scanf("%d",&num1);
printf("\nIngrese un segundo numero entero: ");
scanf("%d", &num2);
printf("\nIngrese una operacion [+ - * /]: ");
c=getche();

if(c=='+'){
r= suma(num1,num2);
printf("\n%d + %d = %d",num1,num2,r);
}
else if(c=='-'){
r= resta(num1,num2);
printf("\n%d - %d = %d",num1,num2,r);
}
else if(c=='/'){
r= division(num1,num2);
printf("\n%d / %d = %lf", num1,num2,res);
}
else if(c=='*'){
r= multiplicacion(num1,num2);
printf("\n%d * %d = %d",num1,num2,r);
}
else{
printf("\nNo existe esa operacion.");
}

return 0;
}

int suma(int num1,int num2){
int calculo;
calculo= num1 + num2;
return calculo;
}
int resta(int num1, int num2){
int calculo;
calculo= num1 - num2;
return calculo;
}
double division(int num1, int num2){
double calculo;
float a=1.0;
calculo= (a*num1) / num2;
return calculo;
}
int multiplicacion(int num1, int num2){
int calculo;
calculo= num1 * num2;
return calculo;
}
*/

/*
//Ej 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define TAM 100

void cargarArrC(char arrC[TAM]), imprimirArrC(char arrC[TAM]), reemplazar(char arrC[TAM]);

int main() {
char arrC[TAM];

cargarArrC(arrC);
//imprimirArrC(arrC);
reemplazar(arrC);
imprimirArrC(arrC);

return 0;
}

void cargarArrC(char arrC[TAM]){
int i=0;
char aux, term='\n';

if(i<TAM-1){
printf("Ingrese contenido: ");
aux= getchar();
}
while(aux!=term && i<TAM-1){
arrC[i]=aux;
i++;
if(i<TAM-1){
aux=getchar();
}
}
arrC[i]='\0';
}
void imprimirArrC(char arrC[TAM]){
//printf("\n%s",arrC);
int i;
printf("\n");
for (i=0; arrC[i]!='\0'; i++){
printf("%c",arrC[i]);
}
printf("\n");
}
void reemplazar(char arrC[TAM]){
int i;
char letraVieja, letraNueva;

printf("\nIngrese la letra a reemplazar: ");
letraVieja= getche();
printf("\nIngrese la letra nueva: ");
letraNueva= getche();
for(i=0; i<TAM-1 && arrC[i]!='\0'; i++){
if(arrC[i] == letraVieja){
arrC[i]= letraNueva;
}
}
}
*/

/*
//Ej 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define TAM 100

void cargarArrI(int arr[TAM]), imprimirArrI(int arr[TAM]), invertirArr(int arr[TAM]), ordenarArr(int arr[TAM]);
int largoArrI(int arr[TAM]);

int main() {
int arrI1[TAM], arrI2[TAM];

//printf("Ingresar el primer arreglo de numeros(Termine con 0): ");
//cargarArrI(arrI1);
//invertirArr(arrI1);
//imprimirArrI(arrI1);
printf("Ingresar el segundo arreglo de numeros(Termine con 0): ");
cargarArrI(arrI2);
ordenarArr(arrI2);
imprimirArrI(arrI2);

return 0;
}

void cargarArrI(int arr[TAM]){
int i=0, aux;

if(i<TAM-1){
printf("\t[%d]: ",i);
scanf("%d", &aux);
}
while(i<TAM-1 && aux!=0){
arr[i]=aux;
i++;
if(i<TAM-1){
printf("\t[%d]: ",i);
scanf("%d", &aux);
}
}
arr[i]=0;
}
void imprimirArrI(int arr[TAM]){
int i;

for(i=0; arr[i]!=0 && i<TAM-1; i++){
printf("%d ",arr[i]);
}
}
void invertirArr(int arr[TAM]){
int i,j,aux;
for(i=0, j=largoArrI(arr)-1; i<j; i++, j--){

aux= arr[i];
arr[i]=arr[j];
arr[j]=aux;
}
}
int largoArrI(int arr[TAM]){
int i;

for(i=0; arr[i]!=0 && i<TAM-1; i++);

return i;
}
void ordenarArr(int arr[TAM]){
int i,j,aux, cant;
cant= largoArrI(arr);
for(i=0; i<cant-1; i++){
for(j=i+1; j<cant; j++){
if(arr[i]>arr[j]){
aux= arr[j];
arr[j]= arr[i];
arr[i]= aux;
}
}
}
}
*/

/*
//Ej 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define TAM 100

void cargarArr(int arr[TAM]), imprimirArr(int arr[TAM]); 
int estaEnArr(int arr[TAM], int n), esPos(int n), largoArr(int arr[TAM]);

int main() {

int arr[TAM]={0};

printf("Ingrese un arreglo de numeros enteros, positivos y no repetidos: ");
cargarArr(arr);
imprimirArr(arr);

return 0;
}

void cargarArr(int arr[TAM]){
int i=0, aux;

printf("[%d] = ",i);
scanf("%d",&aux);

while(i<TAM-1 && aux!=0){
if(esPos(aux)!=1){
printf("No es positivo, ingrese otro: ");
}
else if(estaEnArr(arr,aux)!=0){
printf("Está en el arreglo, ingrese otro: ");
}
else{
arr[i]= aux;
i++;
}
printf("[%d] = ",i);
scanf("%d",&aux);
}
arr[i]=0;
}
void imprimirArr(int arr[TAM]){
int i;

for(i=0; i<TAM-1 && arr[i]!=0; i++){
printf("%d ", arr[i]);
}
}
int estaEnArr(int arr[TAM], int n){
int i;

for(i=0; i<largoArr(arr); i++){
if(arr[i]==n){
return 1;
}
}
return 0;
}
int esPos(int n){
if(n>0){
return 1;
}
else{
return 0;
}
}
int largoArr(int arr[TAM]){
int i;
for(i=0; i<TAM-1 && arr[i]!=0; i++);
return i;
}
*/

/*
//Ej 6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define TAM 100

void cargarArrC(char arr[TAM]), imprimirArr(char arr[TAM]), normalizarArr(char arr[TAM]), primeraMayuscula(char arr[TAM]), unSoloEspacio(char arr[TAM]), terminaConPunto(char arr[TAM]);
int deMinAMayus(char c), esMayuscula(char letra);

int main() {
char arr[TAM]={0};

cargarArrC(arr);
imprimirArr(arr);
normalizarArr(arr);
imprimirArr(arr);

return 0;
}
void cargarArrC(char arr[TAM]){
int i=0;
char aux, term='\n';

printf("Ingrese contenido: ");
aux= getchar();
while(aux!=term && i<TAM-1){
arr[i]=aux;
i++;
if(i<TAM-1){
aux=getchar();
}
}
arr[i]='\0';
}
void imprimirArr(char arr[TAM]){
int i;

for(i=0; i<TAM-1 && arr[i]!='\0'; i++){
printf("%c",arr[i]);
}
printf("\n");
}
int esMayuscula(char letra){
if(letra>='A' && letra<='Z'){
return 1;
}
else{
return 0;
}
}

int deMinAMayus(char c){
if('a'<=c && 'z'>=c){
return c-32;
}
}
void primeraMayuscula(char arr[TAM]){
if(esMayuscula(arr[0])!=1){
arr[0]= deMinAMayus(arr[0]);
}
}
void unSoloEspacio(char arr[TAM]){
int i=0;

while(arr[i]!='\0'){
if(arr[i]==' ' && arr[i+1]==' '){
int e=i, j=i+1;
while(arr[e]!='\0'){
arr[e]= arr[j];
e++;
j++;
}
i--;
}
i++;
}
}
void terminaConPunto(char arr[TAM]){
int i=0;

while(arr[i]!='\0'){
if(arr[i]!='.' && arr[i+1]=='\0'){
arr[i+1]='.';
arr[i+2]='\0';
}
i++;
}
}
void normalizarArr(char arr[TAM]){
primeraMayuscula(arr);
unSoloEspacio(arr);
terminaConPunto(arr);
}
*/

/*
//Ej 7
#include <stdio.h>
#include <stdlib.h>

#define F 3
#define C 3

void cargarMat(int mat[F][C]), imprimirMat(int mat[F][C]);
float promedioMat(int mat[F][C]);

int main() {
int mat[F][C]={0};

printf("Ingrese matriz: \n");
cargarMat(mat);
printf("\n");
imprimirMat(mat);
printf("Promedio: %.2f",promedioMat(mat));

return 0;
}

void cargarMat(int mat[F][C]){
int i,j, num;

for(i=0; i<F; i++){
for(j=0; j<C; j++){
printf("[%d][%d]: ",i,j);
scanf("%d",&num);
mat[i][j]=num;
}
}
}
void imprimirMat(int mat[F][C]){
int i,j;

for(i=0; i<F; i++){
for(j=0; j<C; j++){
printf("%4d",mat[i][j]);
}
printf("\n");
}
}
float promedioMat(int mat[F][C]){
int cant=0, i, j;
float x=0, total=0;

for(i=0; i<F; i++){
for(j=0; j<C; j++){
cant++;
total+= mat[i][j];
}
}
x= total/cant;
return x;
}
*/

/*
//Ej 8
#include <stdio.h>
#include <stdlib.h>

#define F 3
#define C 3

void cargarMat(int mat[F][C]), imprimirMat(int mat[F][C]), transponer(int mat[F][C]);

int main() {
int mat[F][C]={0};

printf("Ingrese una matriz: \n");
cargarMat(mat);
printf("La matriz ingresada es: \n");
imprimirMat(mat);
printf("\n");
transponer(mat);
printf("La matriz transpuesta es: \n");
imprimirMat(mat);

return 0;
}

void cargarMat(int mat[F][C]){
int i, j, num;

for(i=0; i<F; i++){
for(j=0; j<C; j++){
printf("[%d][%d]: ",i,j);
scanf("%d",&num);
mat[i][j]= num;
}
}
}
void imprimirMat(int mat[F][C]){
int i, j;

for(i=0; i<F; i++){
for(j=0; j<C; j++){
printf("%4d",mat[i][j]);
}
printf("\n");
}
}
void transponer(int mat[F][C]){
int i,j, matAux[F][C]={0};

for(i=0; i<F; i++){
for(j=0; j<C; j++){
matAux[i][j]=mat[i][j];
}
}
for(i=0; i<F; i++){
for(j=0; j<C; j++){
mat[j][i]=matAux[i][j];
}
}
}
*/

/*
//Ej 9
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define F 4
#define C 20

void cargarMatText(char mat[F][C]), ordenarMatText(char mat[F][C]), imprimirMatText(char mat[F][C]), pasajeAMinus(char mat[F][C]);
int esMayus(char l);
char deMayusAMin(char l);

int main() {
char mat[F][C]={0};

printf("Llene la matriz texto(max filas 4 y col 20): \n");
cargarMatText(mat);
printf("\nEl texto ingresado es: \n");
imprimirMatText(mat);
pasajeAMinus(mat);
ordenarMatText(mat);
printf("\nLa matriz ordenada es: \n");
imprimirMatText(mat);

return 0;
}
void cargarMatText(char mat[F][C]){
char c;
int i, j;

c=getche();
for(i=0; c!='\r' && i<F; i++){
for(j=0; c!='\r' && j<C; j++){
mat[i][j]=c;
c=getche();
}
mat[i][j]='\0';
printf("\n");
c=getche();
}
mat[i][j]='\0';
}
void imprimirMatText(char mat[F][C]){
int i,j;

for(i=0; i<F && mat[i][0]!='\0'; i++){
for(j=0; j<C && mat[i][j]!='\0'; j++){
printf("%c",mat[i][j]);
}
printf("\n");
}
}
int esMayus(char c){
if(c>='A' && c<='Z'){
return 1;
}
else{
return 0;
}
}
char deMayusAMin(char c){

return c+32;
}
void pasajeAMinus(char mat[F][C]){
int i,j;

for(i=0; i<F && mat[i][0]!='\0'; i++){
for(j=0; j<C && mat[i][j]!='\0'; j++){
if(esMayus(mat[i][j])==1){
mat[i][j]= deMayusAMin(mat[i][j]);
}
}
}
}
void ordenarMatText(char mat[F][C]){
int i,j;
char aux[C]={0};

for(i=0; i<F && mat[i][0]!='\0'; i++){
for(j=i+1; j<F && mat[j][0]; j++){
if(strcmp(mat[i],mat[j])>0){
strcpy(aux,mat[j]);
strcpy(mat[j],mat[i]);
strcpy(mat[i],aux);
}
}
}
}
*/

/*
//Ej 10
#include <stdio.h>
#include <stdlib.h>

#define F 20
#define C 50
#define TAM 100

void cargarMatTextDeArch(char mat[F][C], char nombreArch[TAM]), imprimirMatText(char mat[F][C]);

int main() {
char nombreArch[TAM]="Ej_10_texto.txt", mat[F][C]={0};

printf("Ingrese nombre del archivo: \n");
printf("\nUsted ha ingresado: %s\n",nombreArch);
cargarMatTextDeArch(mat,nombreArch);
printf("\nMatriz del archivo: \n\n");
imprimirMatText(mat);

return 0;
}

void cargarMatTextDeArch(char mat[F][C], char nombreArch[TAM]){
FILE * arch;
char c;
int i, j;

arch= fopen(nombreArch,"r");
if(arch==NULL){
printf("No se pudo abrir el archivo.");
}
c=fgetc(arch);
for(i=0; i<F && c!=EOF; i++){
for(j=0; j<C && c!=EOF; j++){
mat[i][j]=c;
c=fgetc(arch);
}
mat[i][j]='\0';
c=fgetc(arch);
}
mat[i][0]='\0';
if(fclose(arch)==EOF){
printf("Problemas al cerrar el archivo.");
}
}
void imprimirMatText(char mat[F][C]){
int i, j;

for(i=0; i<F && mat[i][0]!='\0'; i++){
for(j=0; j<C && mat[i][j]!='\0'; j++){
printf("%c",mat[i][j]);
}
printf("\n");
}
}
*/

/*
//Ej 11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 25
#define F 10
#define C 25
#define MAX 100

void cargarMatTextDeArch(char mat[F][C], char nombreArch[MAX]), imprimirMatText(char mat[F][C]), ordenarText(char mat[][N]);

int main() {
char mat[F][C]={0}, nombreArch[MAX]="Ej_10_texto.txt";

printf("Ingrese nombre del archivo: \n");
cargarMatTextDeArch(mat,nombreArch);
printf("\nMatriz ingresada: \n");
imprimirMatText(mat);
ordenarText(mat);
printf("\n\nMatriz ordenada: \n");
imprimirMatText(mat);

return 0;
}
void cargarMatTextDeArch(char mat[F][C], char nombreArch[MAX]){
int f, c;
char caracter;
FILE * archivo;

archivo= fopen(nombreArch, "r");
if(archivo==NULL){
printf("No se pudo abrir el archivo.");
}
caracter=fgetc(archivo);
for(f=0; f<F-1 && caracter!=EOF; f++){
for(c=0; c<C-1 && caracter!=EOF && caracter!='\n'; c++){
mat[f][c]=caracter;
caracter=fgetc(archivo);
}
mat[f][c]='\0';
caracter=fgetc(archivo);
}
mat[f][0]='\0';
if(fclose(archivo)==EOF){
printf("Error al  cerrar el archivo.");
}

}
void imprimirMatText(char mat[F][C]){
int f, c;

for(f=0; f<F && mat[f][0]!='\0'; f++){
for(c=0; c<C && mat[f][c]!='\0'; c++){
printf("%c",mat[f][c]);
}
printf("\n");
}
}
void ordenarText(char mat[][N]){
int f, c;
char aux[N]={0};

for(f=0; mat[f][0]!='\0'; f++){
for(c=0; mat[c][0]!='\0'; c++){

if(strcmp(mat[f],mat[c]) < 0){
strcpy(aux,mat[f]);
strcpy(mat[f],mat[c]);
strcpy(mat[c],aux);
}
}
}
}
*/

/*
//Ej 12
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define F 50
#define C 50
#define TAM 100
#define DATOS 8

void cargarMatNumDeArch(int mat[F][C], char nombreArch[TAM]), imprimirMatNum(int mat[F][C], int fil, int col);

int main() {
int mat[F][C]={0};
char nombreArch[TAM]="puntos.txt";

printf("Ingrese el nombre del archivo: \n");
printf("Nombre de archivo ingresado: %s\n",nombreArch);
cargarMatNumDeArch(mat, nombreArch);
printf("La matriz que contenia el archivo es: \n");
imprimirMatNum(mat,5,8);

return 0;
}
void cargarMatNumDeArch(int mat[F][C], char nombreArch[TAM]){
int i=0, num=0, n1, n2, n3, n4, n5, n6, n7, n8;
FILE * archivo;

archivo= fopen(nombreArch, "r");
if(archivo==NULL){
printf("No se pudo abrir el archivo.");
}
for(i=0; fscanf(archivo,"%d,%d,%d,%d,%d,%d,%d,%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8)!=EOF && i<F && i<DATOS; i++){
mat[i][0]=n1;
mat[i][1]=n2;
mat[i][2]=n3;
mat[i][3]=n4;
mat[i][4]=n5;
mat[i][5]=n6;
mat[i][6]=n7;
mat[i][7]=n8;
}
mat[i][0]=EOF;
if(fclose(archivo)==EOF){
printf("Error al cerrar el archivo.");
}
}
void imprimirMatNum(int mat[F][C], int fil, int col){
int i, j;

for(i=0; i<F && i<fil && mat[i][0]!=EOF; i++){
for(j=0; j<C && j<col; j++){
if(mat[i][j]>0 && j==7){
printf("\t+%d",mat[i][j]);
}
else{
printf("\t%d",mat[i][j]);
}
}
printf("\n");
}
}
*/

/*
//Ej 13
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define F 25
#define C 50
#define TAM 100
#define DATOS 8

void cargarMatNumDeArch(int mat[F][C], char nombreArch[TAM]), cargarMatTextDeArch(char mat[F][C], char nombreArch[TAM]); 
void imprimirTabla(char cabeceras[F][C], char items[F][C], int datos[F][C]), ordenarTabla(char items[F][C], int datos[F][C], int colDatos, int orden);
void intercambiarMat(int datos1[C], int datos2[C]);

int main() {
char cabeceras[F][C]={0}, items[F][C]={0};
int datos[F][C]={0};

cargarMatTextDeArch(cabeceras, "cabeceras.txt");
cargarMatTextDeArch(items, "items.txt");
cargarMatNumDeArch(datos, "datos.txt");
printf("Tabla ingresada:\n");
imprimirTabla(cabeceras,items,datos);
ordenarTabla(items, datos, 7, 0);
printf("\nTabla ordenada:\n");
imprimirTabla(cabeceras,items,datos);

return 0;
}

void cargarMatNumDeArch(int mat[F][C], char nombreArch[TAM]){
int i, num=0, n0, n1, n2, n3, n4, n5, n6, n7;
FILE * arch;

arch=fopen(nombreArch,"r");
if(arch==NULL){
printf("Ocurrio un error abriendo el archivo.");
}
num=fscanf(arch,"%d,%d,%d,%d,%d,%d,%d,%d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7);
for(i=0; num!=EOF && i<F && i<DATOS; i++){
mat[i][0]=n0;
mat[i][1]=n1;
mat[i][2]=n2;
mat[i][3]=n3;
mat[i][4]=n4;
mat[i][5]=n5;
mat[i][6]=n6;
mat[i][7]=n7;
num=fscanf(arch,"%d,%d,%d,%d,%d,%d,%d,%d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7);
}
mat[i][0]=EOF;
if(fclose(arch)==EOF){
printf("Ocurrio un error cerrando el archivo.");
}

}
void cargarMatTextDeArch(char mat[F][C], char nombreArch[TAM]){
int i, j;
char c;
FILE * arch;

arch=fopen(nombreArch, "r");
if(arch==NULL){
printf("Ocurrio un error al abrir el archivo.");
}
c=fgetc(arch);
for(i=0; c!=EOF && i<F-1; i++){
for(j=0; c!=EOF && j<C-1 && c!='\n'; j++){
mat[i][j]=c;
c=fgetc(arch);
}
mat[i][j]='\0';
c=fgetc(arch);
}
mat[i][0]='\0';
if(fclose(arch)==EOF){
printf("Ocurrio un error al cerrar el archivo.");
}
}
void imprimirTabla(char cabeceras[F][C], char items[F][C], int datos[F][C]){
int i, j;

//La cabecera
printf("\n");
for(i=0; i<8+1; i++){
if(i==0){
printf("%-15s",cabeceras[i]);
}
else{
printf("%-8s",cabeceras[i]);
}
}
printf("\n");

//Las "-"
for(i=0; i<8+1; i++){
if(i==0){
printf("----------");
}
else{
printf("--------");
}
}
printf("\n");

//Los Equipos + Los Datos
for(i=0; items[i]!='\0' && datos[i][0]!=EOF && i<F; i++){
printf("%-8s",items[i]);
for(j=0; j<C && j<8; j++){
if(datos[i][j]>0 && j==7){
printf("\t%+d",datos[i][j]);
}
else{
printf("\t%d",datos[i][j]);
}
}
printf("\n");
}
}
void ordenarTabla(char items[F][C], int datos[F][C], int colDatos, int orden){
int i, j, matAuxN[F]={0};
char matAuxT[F]={0};

if(orden==0){
for(i=0; i<F && items[i][0]!=EOF; i++){
for(j=i+1; j<F && items[j][0]!=EOF; j++){
if(strcmp(items[i],items[j])<0){
strcpy(matAuxT,items[i]);
strcpy(items[i],items[j]);
strcpy(items[j],matAuxT);
intercambiarMat(datos[i],datos[j]);
}
}
}
}
else{
for(i=0; i<F && items[i][0]!=EOF; i++){
for(j=i+1; j<F && items[j][0]!=EOF; j++){
if(strcmp(items[i],items[j])>0){
strcpy(matAuxT,items[i]);
strcpy(items[i],items[j]);
strcpy(items[j],matAuxT);
intercambiarMat(datos[i],datos[j]);
}
}
}
}
}
void intercambiarMat(int datos1[C], int datos2[C]){
int i, aux;

for(i=0; i<C; i++){
aux= datos1[i];
datos1[i]= datos2[i];
datos2[i]= aux;
}
}
*/

/*
//Ej 14
#include <stdio.h>
#include <stdlib.h>

#define F 12
#define C 10
#define TAM 100

void cargarMatDeNum(int matTemp[F][C], char nombreArch[TAM]), imprimirMatDeNum(int matTemp[F][C]), promedioAnual(int matTemp[F][C]), promedioMensual(int matTemp[F][C]);
void promedioMesMasCalor(int matTemp[F][C]), promedioMesMenosCalor(int matTemp[F][C]);

int main() {
int matTemp[F][C]={0};
char nombreArch[TAM]="temperaturas.txt";

cargarMatDeNum(matTemp, nombreArch);
printf("Matriz de valores cargados es:\n\n");
imprimirMatDeNum(matTemp);
promedioAnual(matTemp);
printf("\n");
promedioMensual(matTemp);
printf("\n");
promedioMesMasCalor(matTemp);
printf("\n");
promedioMesMenosCalor(matTemp);

return 0;
}
void cargarMatDeNum(int matTemp[F][C], char nombreArch[TAM]){
int i, num=0, n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;
FILE * arch;

arch=fopen(nombreArch,"r");
if(arch==NULL){
printf("Ha ocurrido un error al abrir el archivo.");
}
num=fscanf(arch,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
for(i=0; i<F && num!=EOF; i++){
matTemp[i][0]=n0;
matTemp[i][1]=n1;
matTemp[i][2]=n2;
matTemp[i][3]=n3;
matTemp[i][4]=n4;
matTemp[i][5]=n5;
matTemp[i][6]=n6;
matTemp[i][7]=n7;
matTemp[i][8]=n8;
matTemp[i][9]=n9;
num=fscanf(arch,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
}
matTemp[i][0]=EOF;
if(fclose(arch)==EOF){
printf("Ocurrio un error al cerrar el archivo.");
}

}
void imprimirMatDeNum(int matTemp[F][C]){
int i, j;

for(i=0; i<F && matTemp[i][0]!=EOF; i++){
for(j=0; j<C; j++){
printf("%-4d",matTemp[i][j]);
}
printf("\n");
}
}
void promedioAnual(int matTemp[F][C]){
int i, j, tempMin=999999, tempMax=-9999999, cant=0;
float prom;

for(i=0; i<F && matTemp[i][0]!=EOF; i++){
for(j=0; j<C; j++){
if(tempMin>matTemp[i][j]){
tempMin=matTemp[i][j];
}
if(tempMax<matTemp[i][j]){
tempMax=matTemp[i][j];
}
cant+=matTemp[i][j];
}
}
prom=(cant/(i*j));
printf("Temperatura minima Anual: %d, Temperatura Maxima Anual: %d, Promedio Anual: %.1f",tempMin,tempMax,prom);
}
void promedioMensual(int matTemp[F][C]){
int i, j, cant=0;
float prom=0;

for(i=0; i<F && matTemp[i][0]!=EOF; i++){
for(j=0; j<C; j++){
cant+=matTemp[i][j];
}
prom=(cant/j);
if(i==0){
printf("\nEl promedio de Enero fue de: %.1f",prom);
}
else if(i==1){
printf("\nEl promedio de Febrero fue de: %.1f",prom);
}
else if(i==2){
printf("\nEl promedio de Marzo fue de: %.1f",prom);
}
else if(i==3){
printf("\nEl promedio de Abril fue de: %.1f",prom);
}
else if(i==4){
printf("\nEl promedio de Mayo fue de: %.1f",prom);
}
else if(i==5){
printf("\nEl promedio de Junio fue de: %.1f",prom);
}
else if(i==6){
printf("\nEl promedio de Julio fue de: %.1f",prom);
}
else if(i==7){
printf("\nEl promedio de Agosto fue de: %.1f",prom);
}
else if(i==8){
printf("\nEl promedio de Septiembre fue de: %.1f",prom);
}
else if(i==9){
printf("\nEl promedio de Octubre fue de: %.1f",prom);
}
else if(i==10){
printf("\nEl promedio de Noviembre fue de: %.1f",prom);
}
else{
printf("\nEl promedio de Diciembre fue de: %.1f",prom);
}
cant=0;
prom=0;
}
}
void promedioMesMasCalor(int matTemp[F][C]){
int i, j, mes=0, cant=0;
float cuenta=0, prom=0;

for(i=0; i<F && matTemp[i][0]!=EOF; i++){
for(j=0; j<C; j++){
cant+=matTemp[i][j];
}
cuenta=(cant/j);
if(prom<cuenta){
prom=cuenta;
mes=i;
}
cant=0;
cuenta=0;
}
if(mes==0){
printf("\nEl mes mas caluroso en promedio fue Enero con: %.1f",prom);
}
else if(mes==1){
printf("\nEl mes mas caluroso en promedio fue Febrero con: %.1f",prom);
}
else if(mes==2){
printf("\nEl mes mas caluroso en promedio fue Marzo con: %.1f",prom);
}
else if(mes==3){
printf("\nEl mes mas caluroso en promedio fue Abril con: %.1f",prom);
}
else if(mes==4){
printf("\nEl mes mas caluroso en promedio fue Mayo con: %.1f",prom);
}
else if(mes==5){
printf("\nEl mes mas caluroso en promedio fue Junio con: %.1f",prom);
}
else if(mes==6){
printf("\nEl mes mas caluroso en promedio fue Julio con: %.1f",prom);
}
else if(mes==7){
printf("\nEl mes mas caluroso en promedio fue Agosto con: %.1f",prom);
}
else if(mes==8){
printf("\nEl mes mas caluroso en promedio fue Septiembre con: %.1f",prom);
}
else if(mes==9){
printf("\nEl mes mas caluroso en promedio fue Octubre con: %.1f",prom);
}
else if(mes==10){
printf("\nEl mes mas caluroso en promedio fue Noviembre con: %.1f",prom);
}
else{
printf("\nEl mes mas caluroso en promedio fue Diciembre con: %.1f",prom);
}
}
void promedioMesMenosCalor(int matTemp[F][C]){
int i, j, mes=0, cant=0;
float cuenta=0, prom=999999;

for(i=0; i<F && matTemp[i][0]!=EOF; i++){
for(j=0; j<C; j++){
cant+=matTemp[i][j];
}
cuenta=(cant/j);
if(prom>cuenta){
prom=cuenta;
mes=i;
}
cant=0;
cuenta=0;
}
if(mes==0){
printf("\nEl mes menos caluroso en promedio fue Enero con: %.1f",prom);
}
else if(mes==1){
printf("\nEl mes menos caluroso en promedio fue Febrero con: %.1f",prom);
}
else if(mes==2){
printf("\nEl mes menos caluroso en promedio fue Marzo con: %.1f",prom);
}
else if(mes==3){
printf("\nEl mes menos caluroso en promedio fue Abril con: %.1f",prom);
}
else if(mes==4){
printf("\nEl mes menos caluroso en promedio fue Mayo con: %.1f",prom);
}
else if(mes==5){
printf("\nEl mes menos caluroso en promedio fue Junio con: %.1f",prom);
}
else if(mes==6){
printf("\nEl mes menos caluroso en promedio fue Julio con: %.1f",prom);
}
else if(mes==7){
printf("\nEl mes menos caluroso en promedio fue Agosto con: %.1f",prom);
}
else if(mes==8){
printf("\nEl mes menos caluroso en promedio fue Septiembre con: %.1f",prom);
}
else if(mes==9){
printf("\nEl mes menos caluroso en promedio fue Octubre con: %.1f",prom);
}
else if(mes==10){
printf("\nEl mes menos caluroso en promedio fue Noviembre con: %.1f",prom);
}
else{
printf("\nEl mes menos caluroso en promedio fue Diciembre con: %.1f",prom);
}
}
*/
