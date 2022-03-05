/*
//Ej 1
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#define T 30

struct estructura1{
char nombre[T];
char apellido[T];
int dni;
};
typedef struct estructura1 datos;

struct sNodo{
struct estructura1 persona;
struct sNodo* sig;
};
typedef struct sNodo* tNodo;

void cargarListaDesdeArch(tNodo* lista, char* nombArch), imprimirListaR(tNodo lista), insertarEnListaUltimo(tNodo* nodo, datos contenido);

void insertarEnListaUltimo(tNodo* nodo, datos contenido){

if(*nodo==NULL){
*nodo=(tNodo)malloc(sizeof(struct sNodo));
(*nodo)->persona=contenido;
(*nodo)->sig=NULL;
}
else{
insertarEnListaUltimo(&((*nodo)->sig),contenido);
}
}

void cargarListaDesdeArch(tNodo* lista, char* nombArch){
FILE* arch;
datos auxdatos={0};

arch=fopen(nombArch,"r");
if(arch!=NULL){
while(!feof(arch)){
fscanf(arch,"%s,",&auxdatos.nombre);
fscanf(arch,"%s,",&auxdatos.apellido);
fscanf(arch,"%d",&auxdatos.dni);
insertarEnListaUltimo(lista,auxdatos);
}
fclose(arch);
}
}

void imprimirListaR(tNodo lista){
datos auxdatos;

if(lista!=NULL){
auxdatos=lista->persona;
printf("[%s][%s][%d]\n",auxdatos.nombre,auxdatos.apellido,auxdatos.dni);
imprimirListaR(lista->sig);
}
}

int main() {
tNodo lista=NULL;

cargarListaDesdeArch(&lista,"arch.txt");
imprimirListaR(lista);

return 0;
}
*/

/*
//Ej 2
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#define T 50

struct estructura1{
char* nombre;
char* apellido;
int dni;
};
typedef struct estructura1 datos;

struct sNodo{
struct estructura1 persona;
struct sNodo* sig;
};
typedef struct sNodo* tNodo;

void insertarEnListaOrdenado(tNodo* nodo, datos contenido);
void cargarListaDesdeArch(tNodo* lista, char* nombArch);
void imprimirListaR(tNodo lista);
void leerCadDeArch(FILE* arch, char** arrC, char sep);
int criterioOrden(datos criterio1, datos criterio2, int campo, int asc);

void imprimirListaR(tNodo lista){
datos auxdatos;
if(lista!=NULL){
auxdatos=lista->persona;
printf("[%s][%s][%d]\n",auxdatos.nombre,auxdatos.apellido,auxdatos.dni);
imprimirListaR(lista->sig);
}
}

void leerCadDeArch(FILE* arch, char** arrC, char sep){
char car;
int i=0;
*(arrC)=malloc(sizeof(char));

if(!feof(arch)){
car=fgetc(arch);
}
while(!feof(arch) && car!=sep){
(*(arrC))[i]=car;
i++;
*(arrC)=realloc(*(arrC),sizeof(char)*(i+1));
car=fgetc(arch);
}
(*(arrC))[i]='\0';
}

int criterioOrden(datos criterio1, datos criterio2, int campo, int asc){
int res=0;
if(campo==1){
if(asc==0){
if(strcmp(criterio1.nombre,criterio2.nombre)==-1){
res=1;
}
}
else{
if(strcmp(criterio1.nombre,criterio2.nombre)==1){
res=1;
}
}
}
else if(campo==2){
if(asc==0){
if(strcmp(criterio1.apellido,criterio2.apellido)==-1){
res=1;
}
}
else{
if(strcmp(criterio1.apellido,criterio2.apellido)==1){
res=1;
}
}
}
else if(campo==3){
if(asc==0){
if(criterio1.dni<criterio2.dni){
res=1;
}
}
else{
if(criterio1.dni>criterio2.dni){
res=1;
}
}
}
return res;
}

void insertarEnListaOrdenado(tNodo* nodo, datos contenido){
tNodo aux=NULL;
if(*nodo==NULL){
*nodo=(tNodo)malloc(sizeof(struct sNodo));
(*nodo)->persona=contenido;
(*nodo)->sig=NULL;
}
else{
if(criterioOrden(((*nodo)->persona),contenido,1,1)){
aux=(tNodo)malloc(sizeof(struct sNodo));
aux->sig=(*nodo);
aux->persona= contenido;
(*nodo)=aux;
}
else{
insertarEnListaOrdenado(&(*nodo)->sig,contenido);
}
}
}

void cargarListaDesdeArch(tNodo* lista, char* nombArch){
FILE* arch;
datos auxdatos={0};

arch=fopen(nombArch,"r");
if(arch!=NULL){
while(!feof(arch)){
leerCadDeArch(arch,&(auxdatos.nombre),',');
leerCadDeArch(arch,&(auxdatos.apellido),',');
fscanf(arch,"%d\n",&auxdatos.dni);
insertarEnListaOrdenado(lista,auxdatos);
}
}
fclose(arch);
}

int main() {
tNodo lista=NULL;

cargarListaDesdeArch(&lista,"arch2.txt");
imprimirListaR(lista);

return 0;
}
*/

/*
//Ej 3
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct estructura1{
char* nombre;
char* apellido;
int dni;
};
typedef struct estructura1 datos;

struct sNodo{
struct estructura1 persona;
struct sNodo* sig;
};
typedef struct sNodo* tNodo;

void cargarListaDesdeArch(tNodo* lista);
void insertarEnListaUltimo(tNodo* nodo, datos contenido);
void imprimirListaR(tNodo lista);
void eliminarEnListaPorValor(tNodo* nodo, int campo, int valor);
void leerCadDeArch(FILE* arch, char** arrC, char sep);
void eliminarEnLista(tNodo* lista, int campo);
void eliminarEnListaPorValorC(tNodo* nodo, char* valor);
void eliminarEnListaPorValorCN(tNodo* nodo, char* valor);
void eliminarPorPosiciion(tNodo* nodo, int pos);

void imprimirListaR(tNodo lista){
datos auxDatos;

if(lista!=NULL){
auxDatos=lista->persona;
printf("[%s][%s][%d]\n",auxDatos.nombre,auxDatos.apellido,auxDatos.dni);
imprimirListaR(lista->sig);
}

}

void insertarEnListaUltimo(tNodo* nodo, datos contenido){
if(*nodo==NULL){
*nodo=(tNodo)malloc(sizeof(struct sNodo));
(*nodo)->persona=contenido;
(*nodo)->sig=NULL;
}
else{
insertarEnListaUltimo(&(*nodo)->sig,contenido);
}
}

void leerCadDeArch(FILE* arch, char** arrC, char sep){
char car;
int i=0;
*(arrC)=malloc(sizeof(char));

if(!feof(arch)){
car=fgetc(arch);
}
while(!feof(arch) && car!=sep){
(*arrC)[i]=car;
i++;
*arrC=realloc(*arrC,sizeof(char)*(i+1));
car=fgetc(arch);
}
(*(arrC))[i]='\0';
}

void cargarListaDesdeArch(tNodo* lista){
FILE*arch;
datos auxDatos={0};

arch=fopen("arch2.txt","r");
if(arch!=NULL){
while(!feof(arch)){
leerCadDeArch(arch,&(auxDatos.nombre),',');
leerCadDeArch(arch,&(auxDatos.apellido),',');
fscanf(arch,"%d\n",&auxDatos.dni);
insertarEnListaUltimo(lista,auxDatos);
}
}
fclose(arch);
}

void eliminarEnListaPorValor(tNodo* nodo, int campo, int valor){
tNodo aux=NULL;
int primero=0;

if(*nodo == NULL){
printf("Ha ocurrido un error al querer eliminar la lista, la lista esta vacia.");
}
else if((*nodo)->persona.dni ==valor && primero==0){
aux=(*nodo);
(*nodo)=(*nodo)->sig;
free(aux);
}
else{
eliminarEnListaPorValor(&(*nodo)->sig,campo,valor);
}
}

void eliminarEnListaPorValorC(tNodo* nodo, char* valor){
tNodo aux=NULL;
int primero=0;

if(*nodo == NULL){
printf("Ha ocurrido un error al querer eliminar la lista, la lista esta vacia.");
}
else if(strcmp(((*nodo)->persona.nombre),valor)==-1 && primero==0){
eliminarEnListaPorValorC((&(*nodo)->sig),valor);
}
else{
aux=(*nodo);
(*nodo)=(*nodo)->sig;
free(aux);
primero=1;
}
}

void eliminarEnListaPorValorCN(tNodo* nodo, char* valor){
tNodo aux=NULL;
int primero=0;

if(*nodo == NULL){
printf("Ha ocurrido un error al querer eliminar la lista, la lista esta vacia.");
}
else if(strcmp(((*nodo)->persona.apellido),valor)==-1 && primero==0){
eliminarEnListaPorValorC((&(*nodo)->sig),valor);
}
else{
aux=(*nodo);
(*nodo)=(*nodo)->sig;
free(aux);
primero=1;
}
}

void eliminarEnLista(tNodo* lista, int campo){
int valInt;

if(campo==3){
printf("Ingrese el valor a eliminar: ");
scanf("%d",&valInt);
eliminarEnListaPorValor(&(*lista),campo,valInt);
}
else if(campo==1){
eliminarEnListaPorValorC(&(*lista),"Tito");
}
else if(campo==2){
eliminarEnListaPorValorCN(&(*lista),"Campo");
}
}

void eliminarPorPosicion(tNodo* nodo, int pos){
tNodo aux=NULL;

if(*nodo!=NULL){
if(pos>0){
eliminarPorPosicion((&(*nodo)->sig),pos-1);
}
else{
aux=(*nodo);
(*nodo)=(*nodo)->sig;
free(aux);
}
}
}

int main() {
tNodo lista=NULL;

cargarListaDesdeArch(&lista);
printf("Lista completa:\n\n");
imprimirListaR(lista);
printf("\n\nLista recortada:\n\n");
//eliminarEnLista(&lista,2);
eliminarPorPosicion(&lista,0);
imprimirListaR(lista);

return 0;
}
*/

/*
//Ej 5 i
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 50

struct estructura1{
char* nombre;
char* apellido;
int dni;
};
typedef struct estructura1 datos;

struct sNodo{
struct estructura1 persona;
struct sNodo* sig;
};
typedef struct sNodo* tNodo;

void cargarListaDesdeArch(tNodo* lista);
void leerCadDeArch(FILE* arch, char** arrC, char sep);
void insertarPorOrden(tNodo* nodo, datos aux);
void imprimirListaR(tNodo lista);
//void pop(tNodo* pila, datos aux);
//void push(tNodo* pila, datos aux);
void eliminarPorPila(tNodo* pila, int valDni);

void eliminarPorPila(tNodo* pila, int valDni){
tNodo aux={0};
if(*pila!=NULL){
if(((*pila)->persona).dni!=valDni){
eliminarPorPila(&(*pila)->sig,valDni);
}
else{
aux=(*pila);
*pila=(*pila)->sig;
free(aux);
}
}
}

void cargarLista(tNodo* lista){
FILE* arch;
datos aux={0};

arch=fopen("arch2.txt","r");
if(arch!=NULL){
while(!feof(arch)){
leerCadDeArch(arch,&aux.nombre,',');
leerCadDeArch(arch,&aux.apellido,',');
fscanf(arch,"%d\n",&aux.dni);
insertarPorOrden(lista,aux);
}
}
fclose(arch);
}

void leerCadDeArch(FILE* arch, char** arrC, char sep){
char l;
(*arrC)=malloc(sizeof(char));
int i=0;

if(!feof(arch)){
l=fgetc(arch);
}
while(!feof(arch) && l!=sep){
(*arrC)[i]=l;
i++;
(*arrC)=realloc((*arrC),sizeof(char)*(i+1));
l=fgetc(arch);
}
(*arrC)[i]='\0';
}

void insertarPorOrden(tNodo* nodo, datos aux){
if((*nodo)==NULL){
(*nodo)=(tNodo)malloc(sizeof(struct sNodo));
(*nodo)->persona=aux;
(*nodo)->sig=NULL;
}
else{
insertarPorOrden((&(*nodo)->sig),aux);
}
}

void imprimirListaR(tNodo lista){
datos aux;

if(lista!=NULL){
aux=lista->persona;
printf("[%s][%s][%d]\n",aux.nombre,aux.apellido,aux.dni);
imprimirListaR(lista->sig);
}
}

int main() {
tNodo lista={0};

printf("Lista completa:\n");
cargarLista(&lista);
imprimirListaR(lista);
eliminarPorPila(&lista,99999);
printf("Lista eliminada:\n");
imprimirListaR(lista);

return 0;
}
*/

/*
//Ej 5ii

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 50

struct estructura1{
char* nombre;
char* apellido;
int dni;
};
typedef struct estructura1 datos;

struct sNodo{
struct estructura1 persona;
struct sNodo* sig;
};
typedef struct sNodo* tNodo;

void leerCadDeArch(FILE* arch, char** arrC, char sep);
void cargarPila(tNodo* pila);
void push(tNodo* pila, datos contenido);
void pop(tNodo* pila);
int estaVacia(tNodo* pila);


void leerCadDeArch(FILE* arch, char** arrC, char sep){
char l;
(*arrC)=malloc(sizeof(char));
int i=0;

if(!feof(arch)){
l=fgetc(arch);
}
while(!feof(arch) && l!=sep){
(*arrC)[i]=l;
i++;
(*arrC)=realloc((*arrC),sizeof(char)*(i+1));
l=fgetc(arch);
}
(*arrC)[i]='\0';
}

void cargarPila(tNodo* pila){
FILE* arch;
datos aux={0};

arch=fopen("arch2.txt","r");
if(arch!=NULL){
while(!feof(arch)){
leerCadDeArch(arch,&aux.nombre,',');
leerCadDeArch(arch,&aux.apellido,',');
fscanf(arch,"%d\n",&aux.dni);
push(pila,aux);
}
}
fclose(arch);
}

void push(tNodo* pila, datos contenido){ //APILAR --> agregar al frente
//tNodo aux={0};

//aux=(tNodo)malloc(sizeof(struct sNodo));
//aux->valor=valor;
//aux->sig= *pila;
//*pila=aux;

if(*pila==NULL){
*pila=(tNodo)malloc(sizeof(struct sNodo));
(*pila)->persona=contenido;
(*pila)->sig=NULL;
}
else{
push(&(*pila)->sig,contenido);
}
}

void pop(tNodo* pila){ //DESAPILAR --> elimina el primero
//int valor;
tNodo aux={0};

aux=*pila;
//valor=aux->valor;
printf("[%s][%s][%d]\n",(aux->persona).nombre,(aux->persona).apellido,(aux->persona).dni);
*pila=aux->sig;
free(aux);
}

int estaVacia(tNodo* pila){
return *pila==NULL;
}

int main(){
tNodo pila=NULL;
//int val;

//push(&pila,10);
//push(&pila,140);
//push(&pila,18);
//push(&pila,3);
cargarPila(&pila);
// para imprimir una pila tengo que sacarle cada valor hasta que quede vacia
while(!estaVacia(&pila)){
//val=pop(&pila);
//printf("[%d]",val);
pop(&pila);
}
return 0;
}
*/

/*
//Ej 5 iii
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 50

struct estructura1{
char* nombre;
char* apellido;
int dni;
};
typedef struct estructura1 datos;

struct sNodo{
struct estructura1 persona;
struct sNodo* sig;
};
typedef struct sNodo* tNodo;

struct sCola{
tNodo frente; //head --> primero
tNodo fin; //tail --> ultimo
};
typedef struct sCola tCola;

void queue(tCola* cola, datos valor); // Agrega nodos por detras
void dequeue(tCola* cola); // Elimina el nodo de adelante
void leerCadDeArch(FILE* arch, char** arrC, char sep);
void cargarCola(tCola* cola);

void lerCadDeArch(FILE* arch, char** arrC, char sep){
char l;
(*arrC)=malloc(sizeof(char));
int i=0;

if(!feof(arch)){
l=fgetc(arch);
}
while(l!=sep && !feof(arch)){
(*arrC)[i]=l;
i++;
(*arrC)=realloc((*arrC),sizeof(char)*(i+1));
l=fgetc(arch);
}
(*arrC)[i]='\0';
}

void cargarCola(tCola* cola){
FILE* arch;
datos aux={0};

arch=fopen("arch2.txt","r");
if(arch!=NULL){
while(!feof(arch)){
leerCadDeArch(arch,&aux.nombre,',');
leerCadDeArch(arch,&aux.apellido,',');
fscanf(arch,"%d\n",&aux.dni);
queue(cola,aux);
}
}
fclose(arch);
}

void queue(tCola* cola, datos valor){
if(cola==NULL){
tNodo aux=(tNodo)malloc(sizeof(struct sNodo));
aux->persona=valor;
aux->sig==NULL;
if(cola->frente==NULL && cola->fin==NULL){
cola->frente=aux;
cola->fin=aux;
}
else{
cola->fin->sig=aux;
cola->fin=aux;
}
}
else{
queue((&(cola)->fin)->sig, valor);
}
}

void dequeue(tCola cola){
tNodo aux=cola.frente;
cola->frente=cola->frente->sig;
printf("[%s][%s][%d]",(aux->persona).nombre,(aux->persona).apellido,(aux->persona).dni);
free(aux);
if(cola->frente==NULL){
cola->fin==NULL;
}
}

int main(){
tNodo cola=NULL;

cargarCola(&cola);
while(!estaVacia(&cola)){
dequeue(&cola);
}

return 0;
}
*/

/*
//Ej 7
#include <stdio.h>
#include <stdlib.h>

typedef struct sNodoBin{
int valor;
struct sNodoBin* izq;
struct sNodoBin* der;
}*tNodoBin;

//MODIFICACION DEL ARBOL
void insertarEnArbol(tNodoBin* arbol, int valor);
void eliminarArbol(tNodoBin* arbol); // --> ELIMINA EL ARBOL COMPLETO
void buscarYBorrarEnArbol(tNodoBin* arbol, int valor); // --> ELIMINA UN SUBARBOL

//LECTURA
void preorderImprimir(tNodoBin arbol);
void inorderImprimir(tNodoBin arbol);
void postorderImprimir(tNodoBin arbol);
void porNivelesImprimir(tNodoBin arbol);

//BUSQUEDA
int estaValorEnArbol(tNodoBin arbol, int valor);
tNodoBin direccionValorEnArbol(tNodoBin arbol, int valor);

void buscarYBorrarEnArbol(tNodoBin* arbol, int valor){
if((*arbol) != NULL){
if((*arbol)->valor == valor){
free((*arbol)->izq);
free((*arbol)->der);
(*arbol)->izq = NULL;
(*arbol)->der = NULL;
}
else{
buscarYBorrarEnArbol(&(*arbol)->izq,valor);
buscarYBorrarEnArbol(&(*arbol)->izq,valor);
}
}
}

void insertarEnArbol(tNodoBin* arbol, int valor){
if(*arbol == NULL){
*arbol = (tNodoBin)malloc(sizeof(struct sNodoBin));
(*arbol)->valor=valor;
(*arbol)->izq=NULL;
(*arbol)->der=NULL;
}
else{
if(valor<(*arbol)->valor){
insertarEnArbol(&(*arbol)->izq, valor);
}
else{
insertarEnArbol(&(*arbol)->der, valor);
}
}
}

void preorderImprimir(tNodoBin arbol){
if(arbol != NULL){
printf("[%d]",arbol->valor);
preorderImprimir(arbol->izq);
preorderImprimir(arbol->der);
}
}

void inorderImprimir(tNodoBin arbol){
if(arbol != NULL){
inorderImprimir(arbol->izq);
printf("[%d]",arbol->valor);
inorderImprimir(arbol->der);
}
}

void postorderImprimir(tNodoBin arbol){
if(arbol != NULL){
postorderImprimir(arbol->izq);
postorderImprimir(arbol->der);
printf("[%d]",arbol->valor);
}
}

int main() {
tNodoBin arbol=NULL;

insertarEnArbol(&arbol,35);
insertarEnArbol(&arbol,45);
insertarEnArbol(&arbol,30);
insertarEnArbol(&arbol,20);
insertarEnArbol(&arbol,15);
insertarEnArbol(&arbol,40);
insertarEnArbol(&arbol,38);
insertarEnArbol(&arbol,41);
insertarEnArbol(&arbol,55);
insertarEnArbol(&arbol,21);

//printf("\n\n----> PreOrden <----\n\n");
//preorderImprimir(arbol);
//printf("\n\n----> InOrden <----\n\n");
//inorderImprimir(arbol);
printf("\n\n----> PostOrden <----\n\n");
postorderImprimir(arbol);

buscarYBorrarEnArbol(&arbol,20);
printf("\n\n----> PostOrden Nuevo <----\n\n");
postorderImprimir(arbol);
//printf("\n\n----> Por Niveles <----\n\n");
//porNivelesImprimir(arbol);

return 0;
}
*/

/*
//Ej 8
#include <stdio.h>
#include <stdlib.h>

typedef struct sNodoBin{
int valor;
struct sNodoBin* izq;
struct sNodoBin* der;
}*tNodoBin;

void insertarEnArbol(tNodoBin* arbol, int valor);
void inorderImprimir(tNodoBin arbol);

void insertarEnArbol(tNodoBin* arbol, int valor){
if(*arbol == NULL){
(*arbol)=(tNodoBin)malloc(sizeof(struct sNodoBin));
(*arbol)->valor=valor;
(*arbol)->izq=NULL;
(*arbol)->der=NULL;
}
else{
if(valor < (*arbol)->valor){
insertarEnArbol(&(*arbol)->izq,valor);
}
else{
insertarEnArbol(&(*arbol)->der,valor);
}
}
}

void inorderImprimir(tNodoBin arbol){
if(arbol != NULL){
inorderImprimir(arbol->izq);
printf("[%d]",arbol->valor);
inorderImprimir(arbol->der);
}
}

int main() {
tNodoBin arbol = NULL;
int i=0,val;

printf("--> Ingrese el numero (termine con 0) <--\n[%d]: ",i);
scanf("%d",&val);
while(val!=0){
insertarEnArbol(&arbol,val);
i++;
printf("[%d]: ",i);
scanf("%d",&val);
}
printf("Impreso de menor a mayor:");
inorderImprimir(arbol);

return 0;
}
*/

/*
//Ej 9
#include <stdio.h>
#include <stdlib.h>

typedef struct sNodoBin{
int valor;
struct sNodoBin* izq;
struct sNodoBin* der;
}*tNodoBin;

//MODIFICACION DEL ARBOL
void insertarEnArbol(tNodoBin* arbol, int valor);
void buscarYBorrarEnArbol(tNodoBin* arbol, int valor); // --> ELIMINA UN SUBARBOL

//LECTURA
void postorderImprimir(tNodoBin arbol);

void buscarYBorrarEnArbol(tNodoBin* arbol, int valor){
if((*arbol) != NULL){
if((*arbol)->valor == valor){
free((*arbol)->izq);
free((*arbol)->der);
free(*arbol);
(*arbol)->izq = NULL;
(*arbol)->der = NULL;
(*arbol) = NULL;
}
else{
buscarYBorrarEnArbol(&(*arbol)->izq,valor);
buscarYBorrarEnArbol(&(*arbol)->izq,valor);
}
}
}
void insertarEnArbol(tNodoBin* arbol, int valor){
if(*arbol == NULL){
*arbol = (tNodoBin)malloc(sizeof(struct sNodoBin));
(*arbol)->valor=valor;
(*arbol)->izq=NULL;
(*arbol)->der=NULL;
}
else{
if(valor<(*arbol)->valor){
insertarEnArbol(&(*arbol)->izq, valor);
}
else{
insertarEnArbol(&(*arbol)->der, valor);
}
}
}
void postorderImprimir(tNodoBin arbol){
if(arbol != NULL){
postorderImprimir(arbol->izq);
postorderImprimir(arbol->der);
printf("[%d]",arbol->valor);
}
}
int main() {
tNodoBin arbol=NULL;

insertarEnArbol(&arbol,35);
insertarEnArbol(&arbol,45);
insertarEnArbol(&arbol,30);
insertarEnArbol(&arbol,20);
insertarEnArbol(&arbol,15);
insertarEnArbol(&arbol,40);
insertarEnArbol(&arbol,38);
insertarEnArbol(&arbol,41);
insertarEnArbol(&arbol,55);
insertarEnArbol(&arbol,21);

printf("\n\n----> PostOrden <----\n\n");
postorderImprimir(arbol);

buscarYBorrarEnArbol(&arbol,20);
printf("\n\n----> PostOrden Nuevo <----\n\n");
postorderImprimir(arbol);

return 0;
}

