#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/**2018 MP*/

/*void sum (int arr[]){
	*arr = *arr +3;
}
void resta (int a){
	a= a - 4 ;
}
int main(){
	int a[3]={3,2,13}; int num=1;
	sum(a);
	resta(num);
	printf("%d",*a + num);
	return 0;
}*/

/*void f(){
	int a=9, b=13;
	int* ar[2];
	ar[0]=&a;
	ar[1]= &b;
	printf("%d", *ar[0]+*ar[1]);
}
int main(){
	f();
	return 0;
}*/

/*int main(){
	int* p=NULL;
	(*p)=10;
	printf("%d",*(p)+1);
	return 0;
}*/

/*int foo(int n,int m){
	int miFoo=0;
	if(m<0){
		miFoo=n*foo(n,m-1);
		return miFoo;
	}
	return miFoo;
}
int main(){
	printf("%d",foo(3,4));
	return 0;
}*/


/**2017A MP*/

/*int foo(int n,int m){
	int miFoo=1;
	if(m>0){
		miFoo=n*foo(n,m-1);
	}
	return miFoo;
}
int main(){
	printf("%d",foo(3,4));
	return 0;
}*/

/*int main()
{
	char* s[5]; int i=0;
	char c='2';
	s[i]=&c;
	for(i=0;i<5;i++){
		s[i]=&c;
		c=c+1;
	}
	printf("(%d, %d)", (c=='2'), !(s[0]==&c));
	return 0;
}*/

/*int main(){
	char* s=NULL; int i;
	for(i=0;i<4;i++){
		*(s+i)='a'+i;
	}
	s[i]='\0';
	printf("%s",s);
	return 0;
}*/

/*int foo(unsigned char n,unsigned char filter){
	return n&((255&(filter<<n+n))>1);
}
int main(){
	printf("%d",foo(3,4));
	return 0;
}*/

/**2017B MP*/

/*void sum (int arr[]){
	arr[0] = arr[0]+3;
}
void resta (int a){
	a= a - 4 ;
}
int main(){
	int a[3]={3,2,13}; int num=0;
	sum(a);
	resta(num);
	printf("%d",a[0] + num);
	return 0;
}*/

/*void f(){
	int a=9, b=13;
	int *bb, **cc;
	bb=&b;
	cc= &bb;
	printf("%d", *bb+1);
}
int main(){
	f();
	return 0;
}*/

/*int main(){
	int* p=NULL;
	(*p)=10;
	printf("%d",*(p)+1);
	return 0;
}*/

/*int foo(int n,int m){
	int miFoo=1;
	if(m>0){
		miFoo=n*foo(n,m-1);
	}
	return miFoo;
}
int main(){
	printf("%d",foo(3,4));
	return 0;
}*/

/**2016A MP*/

/*int main(){
	unsigned char a=1;
	unsigned int i;
	for(i=0;i<8;i++)
	{
		a=a&(1<<i);
	}
	printf("\n%d",a);
}*/

/*char f(char a)
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
}*/

/*int main(){ 
int* p=NULL;
(*p)=10;
printf("%d",*(p)+1);
return 0;
}*/

/*void f()
{ int a=9, b=13;
int *bb, **cc;
bb=&b;
cc= &bb;
printf("%d", *bb+1);
}
int main(){
	f();
}*/


/**2013 FEBRERO MP*/

/*int retorno(int valor)
{
	if( valor != (valor&&valor) )
	{
		retorno(valor&valor);
		if(valor!=1)
			return 144;
	}
	return 266;
}
int main(){
	printf("%d",retorno(2));
	return 0;
}*/

/*int main()
{
	int a[]={1,3,5,7,9,0};
	int *uno=NULL, dos=0;
	uno = a;
	dos= *(uno + *uno);
	printf("dos: %d\n", dos);
	return 0;
}*/

/*unsigned char a;
a= ~( (~0) << (1<<2));*/

/*int main(){
	int a=100000, b=100000;
	
	if ( (a << b) > a )
		printf("rojo");
	else
		printf("negro");
}*/

/**2013 DICIEMBRE MP*/

/*int doble(int valor)
{
	int entero=16;
	entero=(valor<<20)&16;
	return entero;
}
int main(){
	printf("%d",doble(99));
	return 0;
}*/

/*int main()
{
	char *ptrA = "Juan";
	char *ptrB = "Pedro";
	ptrA = ptrA + 4;
	for(;*ptrB!='\0';ptrB++);
	printf("%c", *ptrA);
}*/

/*int main(){
	unsigned char a;
	a= ~0 << ((sizeof(unsigned char)*8)-1);
	printf("%d",a);
}*/

/*char x (char a)
{
	if (a<='c')
		printf("%c", x(a+1));
	else
		printf("b");
	return 'z';
}
void main()
{ printf("%c",x('a'));
}*/


/**2012 MP*/

/*int main(){
	char a;
	a= ((((1) << (1<<2)) >> 4) & 255) << 7;
	printf("%d",a);
	return 0;
}*/

/*int main(){
	char *b = "12345";
	char * p = b;
	int i;
	for(i=0; *(p+i)!='\0';p++);
	printf( "%s%s", p,b );
}*/

/*int main(){
	unsigned int i=0;
	for(i=1;i<10;i=i<<1)
	{
		printf("%d", i);
	}
}*/

/*char x (char a)
{
	if (a<='D')
		printf("%c", x(a+1));
	else
	{
		printf("%c", a);
		return a-1;
	}
	return a;
}
void main()
{
	printf("%c",x('A'));
}*/

/**2011 JUNIO  MP*/

/*char x (char a)
{
	if (a<'b'){
		printf("%c", x(a+1));
		return 'a';
	}
	if (a>='b'){
		return 'b';
	}
}
void main()
{
	printf("%c",x('a'));
}*/

/*void recursiva(char *nombre, int i){ 
	char aux;
	if(*nombre!='\0' ){
		recursiva(nombre+1, i+1);
		if(*nombre>'a' && *nombre<'z'){
			*nombre=65;
		}
		else{ 
			*nombre=*nombre&255; 
		}
	}
}
int main(){ 
	char nombre[]="Fernando";
	recursiva(nombre, 1);
	printf("%s",nombre);
}*/

/*void main()
{
	char b[] = "3456789";
	char * p = b+5 ;
	int i=0;
	while(*(b+i)!='\0')
		i++;
	while(i>0 && *p<'9')
	{
		i--;
		*p=*p+1;
	}
	printf( "%s%s", p,b );
}*/

/*int main(){
	unsigned char a;
	a = ( ~ ((31<<1)) & 127);
	printf("%d",a);
}*/

/**2011 MAYO  MP*/

/*int main(){
	int a=9, b=13, c=-3, d=8;
	int *bb, **cc;
	bb=&a;
	cc= &bb;
	(*bb)++;
	a= 5;
	**cc = **cc + 4;
	*cc = &d;
	printf("%d", *bb);
}*/

/*char x (char a)
{
	if (a>'w')
		printf("%c", x(a-1));
	return 'w';
}
void main()
{ printf("%c",x('y'));
}*/

/*int main(){
	char *b = "3456789";
	char * p = b;
	p += 5;
	printf( "%s%s", p,b );
}*/

/*int main(){
	unsigned char a;
	a= ( (1) << (1<<2));
	printf("%d",a);
}*/

/**2011 FEBRERO  MP*/

/*int main(){
	int a=9, b=13, c=-3, d=8;
	int *bb, **cc;
	bb=&a;
	cc= &bb;
    (*bb)++;
	a= 5;
	**cc = **cc + 4;
	cc = &d;
	printf("%d", *bb);
	return 0;
}*/

/*int main(){
	char *b = "3456789";
	char * p = b;
	p += 5;
	printf( "%s%s", p,b );
}*/

/*char x (char a)
{
	if (a<='w')
		printf("%c", x(a+1));
	return 'w';
}
void main()
{ printf("%c",x('u'));
}*/

/*int main(){
	unsigned char a;
	a= ~( (~0) << (1<<2));
	printf("%d",a);
}*/
