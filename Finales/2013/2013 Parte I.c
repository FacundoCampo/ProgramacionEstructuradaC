#include <stdlib.h>
#include <stdio.h>

//1)
/**typedef struct s_nodo_bin
{
    int dato;
    struct s_nodo_bin* pIzq;
    struct s_nodo_bin* pDer;
}*t_nodo_bin_ptr;

int descendientes(t_nodo_bin_ptr arb)
{
    if(arb!=NULL){
        ///return 1 + (arb-1);
    }
    else{
        return 0;
    }
}*/

//2)
/**typedef struct s_nodo
{
    int valor;
    struct s_nodo* sig;
    struct s_nodo* ant;
} * t_nodo;

void agregar(t_nodo* lista, int valor)
    {
    t_nodo aux;
    if (*lista == NULL) {
        *lista = nuevo_nodo(valor);
    }
    else {
        for(aux = *lista; aux->sig != NULL; aux = aux -> sig);

        aux->sig = nuevo_nodo(valor);
        aux->sig->ant = aux;
    }
}*/
