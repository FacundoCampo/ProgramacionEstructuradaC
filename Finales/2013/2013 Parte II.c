#include <stdlib.h>
#include <stdio.h>

//a)
/**int doble(int valor)
{
    int entero=16;
    entero=(valor<<20)&16; //siempre es 0 & 1, devuelve 0
    return entero;
} ///RTA---->0 siempre retorna 0*/

//b)
/**int main()
{
    char *ptrA = "Juan";
    char *ptrB = "Pedro";
    ptrA = ptrA + 4;   //en la posicion 4 es NULL
    for(;*ptrB!='\0';ptrB++);  //ptrB tambien va a ser NULL
    printf("%c", *ptrA);
} ///RTA---->No muestra nada*/

//c)
/**void main()
{
    unsigned char a;
    a= ~0 << ((sizeof(unsigned char)*8)-1);
    printf("%d",a);  //devuelve 128, porque el char ocupa solo 1 byte, entonces se fija en lo que pasa solo en ese byte.
// teniamos todo 1, pero en el primer byte 1 0 0 0 0 0 0 0, y esto es 128, o 2**7
} ///RTA---->128*/

//d)
/**char x (char a)
{
    if (a<='c')
        printf("%c", x(a+1));
    else
        printf("b"); //seguro que primero imprime b, despues imprime una z por el primer return, despues entra 3 veces a la recursiva e imrpime 3 z mas
    return 'z';
}
void main()
{
    printf("%c",x('a'));
} ///RTA---->bzzzz*/

