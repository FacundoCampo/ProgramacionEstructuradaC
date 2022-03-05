#include <stdlib.h>
#include <stdio.h>

//a)
/**int main()
{
    unsigned char a=1;
    unsigned int i;

    for(i=0;i<8;i++){
        a=a&(1<<i);
    }
    printf("\n%d",a);
} ///RTA---->0*/

//b)
/**char f(char a)
{
    if (a<'c')
        f(a+1);

    else{
        if (a=='b')
            f(a+1);
    }
    return a;
}
void main()
{
    printf("%c",f('b'));
} ///RTA---->b*/

//c)
/**int main()
{
    int* p=NULL;
    (*p)=10;
    printf("%d",*(p)+1);
    return 0;
} ///RTA---->Error de compilacion*/

//d)
/**void f()
{
    int a=9, b=13;
    int *bb, **cc;

    bb=&b;
    cc= &bb;
    printf("%d", *bb+1);
}
int main()
{
    f();
} ///RTA---->14*/

