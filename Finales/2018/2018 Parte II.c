#include <stdlib.h>
#include <stdio.h>

//a)
/**void sum (int arr[]){
    *arr = *arr +3;
}
void resta (int a){
    a= a - 4 ;  //funciona localmente
}
int main(){
    int a[3]={3,2,13}; int num=1;
    sum(a);  //le afecta porque es un arreglo
    resta(num); //no le afecta la funcion
    printf("%d",*a + num);  //*a es la primer posicion del arreglo
    return 0;
} ///RTA---->7*/

//b)
/**void f(){
    int a=9, b=13;
    int* ar[2]; //esto funciona bien, ya que le asigna espacio en la memoria con el [2]
    ar[0]=&a;
    ar[1]= &b;
    printf("%d", *ar[0]+*ar[1]);
}
int main(){
    f();
    return 0;
} ///RTA---->22*/

//c)
/**int main(){
    int* p=NULL;
    (*p)=10;
    printf("%d",*(p)+1);
    return 0;
} ///ERROR, p no existe en la memoria*/

//d)
/**int foo(int n,int m){
    int miFoo=0;
    if(m<0){   //m es positivo, no entra nunca al if, no hace recursividad
        miFoo=n*foo(n,m-1);
        return miFoo;
    }
    return miFoo;
}
void main()
{
    printf("%d",foo(3,4));
} ///RTA---->0*/
