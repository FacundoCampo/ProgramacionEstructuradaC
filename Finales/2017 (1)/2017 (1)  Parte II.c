#include <stdlib.h>
#include <stdio.h>

//a)
/**int foo(int n,int m)
{
    int miFoo=1;
    if(m>0){
        miFoo=n*foo(n,m-1);
    }
    return miFoo;
}
void main()
{
    printf("%d",foo(3,4));
} ///RTA---->Ninguna de las anteriores, imprime 81*/

//b)
/**int main()
{
    char* s[5]; int i=0;
    char c='2';
    s[i]=&c;
    for(i=0;i<5;i++){
        s[i]=&c;
        c=c+1;
    }                 //c = '7'
    printf("(%d, %d)", (c=='2'), !(s[0]==&c));
    return 0;
} ///RTA---->(0,0), es un boleeano, la primer condicion es falsa, la segunda es verdadera pero tiene un ! adelante*/

//c)
/**int main()
{
    char* s=NULL; int i;
    for(i=0;i<4;i++){
        *(s+i)='a'+i;
    }
    s[i]='\0';
    printf("%s",s);
    return 0;
} ///RTA---->Error, porque a s no se le asigno espacio en la memoria*/

//d)
/**int foo(unsigned char n,unsigned char filter)
{
    return n&((255&(filter<<n+n))>1);   //el filter<<n+n da 0, 255&0 da 0, 0>1 da 0, n&0 da 0
}   //primero se ejecuta la suma n+n
void main()
{
    int n=1;
    printf("%d",foo(3,4));
} ///RTA---->0*/


