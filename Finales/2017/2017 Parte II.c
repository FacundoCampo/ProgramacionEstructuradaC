#include <stdlib.h>
#include <stdio.h>

//a)
/**void sum (int arr[]){
    arr[0] = arr[0]+3; //al ser un arreglo, si modifica el valor en otras funciones
}
void resta (int a){
    a= a - 4 ; //es interno a la funcion, no cambia el valor en otras funciones
}
int main()
{
    int a[3]={3,2,13}; int num=0;
    sum(a);  //a[0] = 6
    resta(num);  //num = 0, no se ve afectado
    printf("%d",a[0] + num); //(a[0] = 6) - (num = 0) = 6
    return 0;
} ///RTA---->6*/

//b)
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
    return 0;
} ///RTA---->14*/

//c)
/**int main()
{
    int* p=NULL;
    (*p)=10;
    printf("%d",*(p)+1);
    return 0;
} ///RTA---->Error de compilacion*/

//d)
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
} ///RTA---->81, 3**4*/
