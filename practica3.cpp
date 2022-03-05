/*
//Ej 1
#include <stdio.h>
#include <stdlib.h>

void intercambiarPunteros(int *p1, int *p2);

int main() {
int a=2, b=4;

printf("\nA: %d\nB: %d",a,b);
intercambiarPunteros(&a,&b);
printf("\n\nPOST CAMBIO\n\nA: %d\nB: %d",a,b);

return 0;
}
void intercambiarPunteros(int *p1, int *p2){
int aux;

aux= *p1;
*p1=*p2;
*p2=aux;
}
*/

/*
//Ej 2
#include <stdio.h>
#include <stdlib.h>

int *direccionDeMemoria(int arr[5], int pos){ // LOS ARREGLOS SON PUNTEROS DE POR SI.
return arr + pos;
}
int main(){
int arr[5];
int *direc = direccionDeMemoria(arr,2);

printf("Direccion de memoria: %p",arr);
printf("Direccion de la posicion buscada: %p",direc);

return 0;
}
*/

/*
//Ej 3
#include <stdio.h>
#include <stdlib.h>

void redondeo(double *num){
double numero = *num, sobra;
int entero = *num;

sobra= numero - entero;
if(sobra >= 0.5){
*num=entero+1;
}
else{
*num=entero;
}
}
int main() {
double num=5.7;

printf("El numero ingresado es %lf ",num);
redondeo(&num);
printf("y su valor redondeado es: %lf",num);

return 0;
}
*/

/*
//Ej 4
#include <stdio.h>
#include <stdlib.h>

struct s_carta{
int numero;
int valor;
char palo;
};
typedef struct s_carta t_carta;

void ordTruco(t_carta *arr[]){
int i, j;
t_carta aux;

for(i=0; i<3; i++){
for(j=0; j<3; j++){
if((*arr[j]).valor>(*arr[i]).valor){
aux=*arr[j];
*arr[j]=*arr[i];
*arr[i]=aux;
}
}
}
}

int main() {
t_carta carta1 = {7,3,'e'};
t_carta carta2 = {7,4,'o'};
t_carta carta3 = {1,1,'e'};
t_carta* arr[] = {&carta1,&carta2,&carta3};

printf("Cartas sin ordenar.\n         N V P\nCarta 1: %d %d %c\n\nCarta 2: %d %d %c\n\nCarta 3: %d %d %c\n",carta1.numero,carta1.valor,carta1.palo,carta2.numero,carta2.valor,carta2.palo,carta3.numero,carta3.valor,carta3.palo);
ordTruco(arr);
printf("Cartas ordenadas por valores.\n         N V P\nCarta 1: %d %d %c\n\nCarta 2: %d %d %c\n\nCarta 3: %d %d %c\n",carta1.numero,carta1.valor,carta1.palo,carta2.numero,carta2.valor,carta2.palo,carta3.numero,carta3.valor,carta3.palo);

return 0;
}
*/

/*
//Ej 5
#include <stdio.h>
#include <stdlib.h>

typedef struct{
int a;
int b;
int c;
}t_tres;


void modStruct(t_tres* valores){
int valA=(*valores).a, valB=(*valores).b, valC=(*valores).c;

if(valA<=valB && valA<=valC && valC<=valB){
(*valores).b=valC;
(*valores).c=valB;
}
else if(valB<=valA && valB<=valC){
(*valores).a=valB;
(*valores).b=valA;
if(valC<=valA){
(*valores).b=valC;
(*valores).c=valA;
}
}
else if(valC<=valA){
(*valores).a=valC;
(*valores).c=valA;
if(valA<valB){
(*valores).b=valA;
(*valores).c=valB;
}
}
}

int main() {
t_tres valores={3,14,8};

printf("Los valores son:\n\t\tA: %d\n\t\tB: %d\n\t\tC: %d\n\n",valores.a,valores.b,valores.c);
modStruct(&valores);
printf("Los valores modificados son:\n\t\tA: %d\n\t\tB: %d\n\t\tC: %d\n\n",valores.a,valores.b,valores.c);

return 0;
}
*/

/*
//Ej 6
#include <stdio.h>
#include <stdlib.h>

typedef struct{
int n, o, p;
char p1[26], p2[50];
double a, b, c;
}t_varios;

void intercambiarStruct(t_varios *struct1, t_varios *struct2){
t_varios aux;

aux=*struct1;
*struct1=*struct2;
*struct2=aux;
}

int main() {
t_varios struct1, struct2;
double tamStruct;

intercambiarStruct(&struct1,&struct2);
tamStruct=sizeof(t_varios);
printf("Tamaño de la estructura en bits: %lf", tamStruct);

return 0;
}
*/

/*
//Ej 7
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char* cargarStrDin(){
int i=0;
char letra;
char* arr=NULL;

arr = malloc(sizeof(char));
if (arr==NULL){
return NULL;
}
letra=getchar();
while(letra!='\n'){
*(arr+i)=letra;
i++;
arr=realloc(arr,(i+1)*sizeof(char));
if(arr==NULL){
return NULL;
}
letra=getchar();
}
arr[i]='\0';
printf("\n");
return arr;
}
int main() {

printf("%s",cargarStrDin());

return 0;
}
*/

/*
//Ej 8
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char* cargarStrDin1(){
char letra;
char* arr=NULL;
int i=0;

arr=malloc(sizeof(char));
if(arr==NULL){
return NULL;
}
letra=getchar();
while(letra!='\n'){
*(arr+i)=letra;
i++;
arr=realloc(arr,(i+1)*sizeof(char));
if(arr==NULL){
return NULL;
}
letra=getchar();
}
arr[i]='\0';
printf("\n");
return arr;
}

void cargarStrDin2(char** pCadena){
char letra;
*(pCadena)=NULL;
int i=0;

letra=getche();
if(letra!='\r'){
*(pCadena)=(char *) malloc(sizeof(char));
while(letra!='\r'){
*((*(pCadena))+i)=letra;
i++;
*(pCadena)=(char *) realloc(*(pCadena),(i+1)*sizeof(char));
letra=getche();
}
*((*(pCadena))+i)='\0';
}
}

void escribirArch(const char * nomArch, char* cadena){
FILE* arch;
int i=0;
char c;

c= *cadena;
arch=fopen(nomArch,"w");
if(arch!=NULL){
while(c!='\0'){
fprintf(arch,"%c",c);
i++;
c=*(cadena+i);
}
}
fclose(arch);
}
void imprimirArch(const char * nomArch){
FILE* arch;
//int i;
char c;

arch=fopen(nomArch,"r");
if(arch!=NULL){
c=fgetc(arch);
while(c!='\n' && c!=EOF){
printf("%c",c);
c=fgetc(arch);
}
}
fclose(arch);
}

int main() {
char* str=NULL;

//str=cargarStrDin1();
cargarStrDin2(&str);
escribirArch("frase.txt",str);
imprimirArch("frase.txt");

return 0;
}
*/

/*
//Ej 9
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char* subcadena(char* p, unsigned int i, unsigned int n){
int j;
char* str=(char*)malloc(sizeof(char));
str=realloc(str,(n)*sizeof(char));

for(j=0; j<n; j++){
if((*(p+i+j))!='\0'){
if(n<0){
*(str+j)=*(p+i-j);
}
else{
*(str+j)=*(p+i+j);
}

}
}
*(str+j)='\0';
return str;
}

char* leerArch(const char* nombArch){
FILE*arch;
int i=0;
char letra;
char* strg=(char *) malloc(sizeof(char));

arch=fopen(nombArch,"r");
if(arch!=NULL){
letra=fgetc(arch);
while(letra!='\0' && letra!=EOF && letra!='\n' && letra !='\r'){
*(strg+i)=letra;
//printf("%c",*(strg+i));
i++;
strg=(char *)realloc(strg,(i+1)*sizeof(char));
letra=fgetc(arch);
}
*(strg+i)='\0';
}
fclose(arch);
//printf("\n");
return strg;
}

int main() {
char* str=NULL;
char* subStr=NULL;
int i=8, n=5;

str=leerArch("frase.txt");
subStr=subcadena(str,i,n);
printf("Para i=%d y n=%d, se encontro el substring: %s",i,n,subStr);

return 0;
}
*/

/*
//Ej 10
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct s_texto{
char* txt;
unsigned int longitud;
};
typedef struct s_texto t_texto;

t_texto cargarTexto(){
char letra;
t_texto arrDin;
int i=0;
arrDin.txt=(char *)malloc(sizeof(char));

letra=getche();
while(letra!='\r'){
*(arrDin.txt+i)=letra;
i++;
arrDin.txt=(char *) realloc(arrDin.txt,(i+1)*sizeof(char));
letra=getche();
}
*(arrDin.txt+i)='\0';
arrDin.longitud = i;
return arrDin;
}

void escribirArchTex(const char* nombArch, t_texto arrDin){
FILE * arch;
int i=0;
char letra;

arch=fopen(nombArch,"w");
if(arch!=NULL){
fprintf(arch,"%d,",arrDin.longitud);
letra=*(arrDin.txt+i);
while(letra!='\0'){
fprintf(arch,"%c",letra);
i++;
letra=*(arrDin.txt+i);
}
fprintf(arch,"\n");
}
fclose(arch);
}

int main() {

escribirArchTex("frases_con_logintud.txt",cargarTexto());

return 0;
}
*/

/*
//Ej 11
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct{
int a,b;
}t_dosint;

void intercambiarPunteros(int *p1, int *p2){
int aux;

aux= *p1;
*p1=*p2;
*p2=aux;
}

int main() {
t_dosint structPunteros;
structPunteros.a=1;
structPunteros.b=6;

printf("Datos en el stuct, A: %d y B: %d.",structPunteros.a,structPunteros.b);
intercambiarPunteros(&structPunteros.a,&structPunteros.b);
printf("\n\nDatos en el stuct invertidos, A: %d y B: %d.",structPunteros.a,structPunteros.b);
return 0;
}
*/

/*
//Ej 12
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct s_texto{
char * txt;
unsigned int longitud;
};
typedef struct s_texto t_texto;

t_texto cargarTexto(){
char letra;
t_texto arrDin;
arrDin.txt=(char *)malloc(sizeof(char));
i=0;

letra=getche();
while(letra!='\r'){
*(arrDin.txt+i)=letra;
arrDin.txt=(char *)realloc(arrDin.txt,(i+1)*sizeof(char));
i++;
letra=getche();
}
*(arrDin.txt+i)='\0';
arrDin.longitud

}
int main(int argc, char *argv[]) {

return 0;
}
*/




