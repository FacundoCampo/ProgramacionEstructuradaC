#include <stdlib.h>
#include <stdio.h>

//a)
/**int retorno(int valor)
{               //booleano siempre devuelve 1
    if( valor != (valor&&valor) ){
        retorno(valor&valor);
        if(valor!=1)
            return 144;
    }
    return 266;
}
void main()
{
    printf("%d",retorno(2));
} ///RTA---->No retorna para valor = 2, la recursiva se torna a infinito*/

//b)
/**int main()
{
    int a[]={1,3,5,7,9,0};
    int *uno=NULL, dos=0;
    uno = a;
    dos= *(uno + *uno); //estamos sumando posiciones
    printf("dos: %d\n", dos);
    return 0;
} ///RTA---->3*/

//c)
/**void main()
{
    unsigned char a;
    a= ~( (~0) << (1<<2));  //~0 es el -1, o bien 1 en todos los bits
    printf("%d",a);   //como es char nos fijamos solo en el primer byte
} ///RTA---->15*/

//d)
/**void main()
{
    int a=1, b=1;
    if ( (a << b) > a )
        printf("rojo");
    else
        printf("negro");
} ///RTA---->al ser enteros positivos distintos de 0, siempre imprime rojo*/

