#include <stdlib.h>
#include <stdio.h>

//a)
/**void main()
{
    char a;
    a= ((((1) << (1<<2)) >> 4) & 255) << 7;
    printf("%d",a);
} ///RTA---->-128*/

//b)
/**void main()
{
    char *b = "12345";
    char * p = b;
    int i;
    for(i=0; *(p+i)!='\0';p++); //p esta apuntando a 0, nulo
    printf( "%s%s", p,b );
} ///RTA---->12345*/

//c)
/**void main()
{
    unsigned int i=0;
    for(i=1;i<10;i=i<<1)
    {
        printf("%d", i);
    }
} ///RTA---->1248*/

//d)
/**char x (char a)
{
    if (a<='D')
        printf("%c", x(a+1));
    else{
        printf("%c", a);
        return a-1; //esto hace que imprima una D de mas
    }   //si no estuviera se impime una E de mas
    return a;
}
void main()
{
    printf("%c",x('A'));
} ///RTA---->EDDCBA*/

