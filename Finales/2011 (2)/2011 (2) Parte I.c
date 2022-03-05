#include <stdlib.h>
#include <stdio.h>

//a)
/**struct s_nodo
{
    int valor;
    struct s_nodo* sig;
    struct s_nodo* ant;
};typedef struct s_nodo* t_nodo;

t_nodo nuevo_nodo(int valor)
{
    t_nodo aux;
    aux = (t_nodo) malloc(sizeof(struct s_nodo));
    aux->valor = valor;
    aux->ant = NULL;
    aux->sig = NULL;
    return aux;
}

void agregar(t_nodo* lista, int valor)
{
    t_nodo aux;
    if (*lista == NULL){
        *lista = nuevo_nodo(valor);
    }
    else {
        aux = *lista;
        while (aux->sig != NULL)
            aux = aux-> sig;
        aux->sig = nuevo_nodo(valor);
        aux->sig->ant = aux;
    }
}*/

//b)
/**struct s_nodo_bin
{
    int valor;
    struct s_nodo_bin* izq;
    struct s_nodo_bin* der;
}; typedef struct s_nodo_bin* t_nodo_bin;

void borrarNodo(t_nodo_bin* arbol){
    if (*arbol != NULL){
        borrarNodo( &(*arbol)->izq );
        borrarNodo( &(*arbol)->der );
        free( *arbol );
        *arbol=NULL;
        }
}

void eliminarSub(t_nodo_bin* arbol, int valor){
    if (*arbol == NULL)
        return;
    else{
        if (valor == (*arbol)-> valor){
            borrarNodo(& (*arbol) );}
        else if (valor < (*arbol)->valor)
            eliminarSub(&(*arbol)->izq,valor);
        else
            eliminarSub(&(*arbol)->der,valor);
        }
    return;
}*/
