/*
//Ej 1
#include <stdio.h>
#include <math.h>

int funcionR(int a, int b){
if(a!=1){
return b+funcionR(a-1,b);
}
else{
return b;
}
}
int main() {

printf("%d",funcionR(3,7));

return 0;
}
*/

/*
//Ej 2
#include <stdio.h>
#include <math.h>

int funcionR(int a, int b){
int result;

if(b>=a){
result = 1 + funcionR(a,b-a);
}
else{
result=0;
}
return result;
}
int main() {

printf("%d",funcionR(3,12));

return 0;
}
*/

/*
//Ej 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int division(int cant, int num){
int result=0;

if(cant>=num){
result = division(cant-num,num);
}
else{
result = cant;
}
return result;
}
int main() {

printf("%d",division(100,5));

return 0;
}
*/

/*
//Ej 4
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

void invertir(int* a, unsigned int num){
int aux;

if(num>3){
aux=*(a-num+5);
*(a-num+5)=*(a+num);
*(a+num)=aux;
invertir(a,num-1);
}
}

int main() {
int a[MAX]={6,2,7,1,8};
int i;


for(i=0; i<5; i++){
printf("[i]: %d\n",a[i]);
}
printf("\n");
invertir(a,5);
for(i=0; i<5; i++){
printf("[i]: %d\n",a[i]);
}

return 0;
}
*/

/*
//Ej 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int recursiva(int* arr){
int max=0, valorActual= *arr;

if(*arr!=0){
max=recursiva(arr+1);
if(max==0){
return valorActual;
}
if(max<valorActual){
return valorActual;
}
else{
return max;
}
}
else{
return 0;
}
}
int* dirMemoriaValorMaximo(int* arr){
int* dirMemMax=NULL;
int* dirMemActual=arr;
if(*arr!=0){
dirMemMax=dirMemoriaValorMaximo(arr+1);
if(dirMemMax==NULL){
return dirMemActual;
}
if(*(dirMemActual) > *(dirMemMax)){
return dirMemActual;
}
else{
return dirMemMax;
}
}
else{
return NULL;
}
}
int main() {
int arr[]={1,15,2,7,4,0};

printf("Valor maximo: %d",recursiva(arr));
printf("\nDireccion de memoria del valor maximo: %p", dirMemoriaValorMaximo(arr));

return 0;
}
*/

/*
//Ej 6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* dirMemValorMin(int* arr){
int* dirMemActual=arr;
int* dirMemMin=NULL;

if(*arr!=0){
dirMemMin=dirMemValorMin(arr+1);
if(dirMemMin==NULL){
return dirMemActual;
}
if(*(dirMemActual) < *(dirMemMin)){
return dirMemActual;
}
else{
return dirMemMin;
}
}
else{
return NULL;
}
}

void ordenar(int* arr){
int numPuntero= *arr;
int* punteroMasChico=dirMemValorMin(arr);
int aux;
if(numPuntero!=0){
aux=*punteroMasChico;
*punteroMasChico=numPuntero;
*arr=aux;

ordenar(arr+1);
}
}

int main() {
int arr[]={1,15,2,7,4,0}, i;
printf("Arreglo\n");
for(i=0; arr[i]!=0; i++){
printf("[%d] %d\n",i,arr[i]);
}
printf("\n\nArreglo ordenado:\n");
ordenar(arr);
for(i=0; arr[i]!=0; i++){
printf("[%d] %d\n",i,arr[i]);
}
return 0;
}
*/

/*
//Ej 7
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

unsigned int contar_vocales(char* vocales){
int cant=0;
char l=*vocales;


if(l!='\0'){
if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u' || l=='A' || l=='E' || l=='I' || l=='o' || l=='U'){
cant= 1 + contar_vocales(vocales+1);
}
else{
return contar_vocales(vocales+1);
}
}
return cant;
}
int main() {
char vocales[]="LAS mañanas calidas de PRIMAVERA";

printf("%d",contar_vocales(vocales));

return 0;
}
*/
