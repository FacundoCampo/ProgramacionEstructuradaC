#include <stdlib.h>
#include <stdio.h>

//a)
/**void main()
{
    unsigned char a;
    a= ( (1) << (1<<2));
    printf("%d",a);
} ///RTA---->16*/

//b)
//primero detecta el caso base, la recursiva da vueltas hasta llegar a este caso base, vemos que los valores que utilizamos son 'y','x','w', cuando llega a 'w'
//retorna w, luego se ejecuta para el caso de 'x' y de 'y', pero el print sigue detectando que es 'w' el valor a imprimir, se ejecuta 3 veces
/**char x (char a)
{
    if (a>'w')
        printf("%c", x(a-1));
    return 'w';
}
void main()
{
    printf("%c",x('y'));
} ///RTA---->www*/

//c)
/**void main()
{
    char *b = "3456789";
    char * p = b;
    p += 5;    //apunta a 89
    printf( "%s%s", p,b );
} ///RTA---->893456789*/

//d)
/**void main()
{
    int a=9, b=13, c=-3, d=8;
    int *bb, **cc;
    bb=&a;
    cc= &bb;   //&bb es la direccion de memoria de a
    (*bb)++;   //*bb es el valor de a
    **cc = **cc + 4;    //a se convierte en 14
    *cc = &d;
    printf("%d", *bb);
}*/
