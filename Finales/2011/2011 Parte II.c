//a)
/**int main()
{
    int a=9, b=13, c=-3, d=8;
    int *bb, **cc;
    bb=&a;         //bb apunta a la direccion de memoria de a
    cc= &bb;       //cc apunta a la direccion de memoria que apunta bb
    (*bb)++;       //el valor de la direccion de memoria que apunta mas uno (a+1)
    a= 5;
    **cc = **cc + 4;   //como cc apuntaba a la direccion de memoria de a, **cc apunta al valor de a
    cc = &d;           //esto no cambia nada, solo que apunta a la direccion de memoria de d

    printf("%d", *bb); //*b apuntaba al valor de a, que se vio modificado en la linea 9

    return 0;
} ///RTA---->9*/

//b)
/**char x (char a)
{
    if (a<='w')
        printf("%c", x(a+1));
    return 'w';
}
void main()
{
    printf("%c",x('u'));
} ///RTA---->wwww*/

//c)
/**int main()
{
    char *b = "3456789";
    char * p = b;
    p += 5;                //p va a ser 89, porque ese +5 es como la posicion que tomaria de un arreglo
    printf( "%s%s", p,b );
} ///RTA---->893456789*/

//d)
/**int main()
{
    unsigned char a;
    a= ~( (~0) << (1<<2));   //(1<<2 = 4), (~0 = -1), (-1<<4 = -16), (~-16 = 15)
    printf("%d",a);          //el ~ invierte todo, de 1 a 0 y de 0 a 1
} ///RTA---->15*/

