#include <stdlib.h>
#include <stdio.h>

//1)
/**int es_palindromo(char *palabra)
{
    int i, ini, fin, res = 1;
    for (i = 0; *(palabra+i) != '\0'; i++);
    ini = 0;
    fin = i-1;
    while (ini<(i/2)){
        if (*(palabra+ini)!=*(palabra-ini+fin)){
            res = 0;
        }
        ini++;

    }
    return res;
}*/

//2)
typedef struct s_nodo_bin
{
    int valor;
    struct s_nodo_bin* pIzq;
    struct s_nodo_bin* pDer;
} *t_nodo_bin_ptr;

int cantidad_niveles(t_nodo_bin_ptr pNodo)
{
    int izq, der;
    if (pNodo != NULL){
        izq = ______________________________;
        der = ______________________________;
        if (______________________________){
            return 1 + izq;
        }
        else{
            ______________________________;
        }
    }
    else{
        return 0;
    }
}
