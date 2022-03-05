#include <stdlib.h>
#include <stdio.h>

//a)
/**char x (char a)
{
    if (a<'b')
        printf("%c", x(a+1));
        return 'a';
    if (a>='b')
        return 'b';
}
void main()
{
    printf("%c",x('a'));
} ///RTA---->aa*/

//b)
/**int main()
{
    char nombre[]="Fernando";
    recursiva(nombre, 1);
    printf("%s",nombre);
}
void recursiva(char *nombre, int i)
{
    char aux;
    if(*nombre!='\0' ){
        recursiva(nombre+1, i+1);
        if(*nombre>'a' && *nombre<'z'){
            *nombre=65;
        }
        else{
            *nombre=*nombre&255;  //el 255 en bits es todo 1, con el &
        }//devuelve el mismo caracter, mientras sea menor que 255
    }
} ///RTA---->FAAAaAAA*/

//c)
/**void main()
{
    char b[] = "3456789";
    char * p = b+5 ;
    int i=0;
    while(*(b+i)!='\0')
        i++;
    while(i>0 && *p<'9'){  //*p = "89"
        i--;               //i = 7 - 1 = 6-->entra una sola vez al while
        *p=*p+1;           //*p = "99"
    }//como *p estaba dirigido al "89" de b, tambien se modifica b
    printf( "%s%s", p,b );
} ///RTA---->993456799*/

//d)
/**int main(){
    unsigned char a;
    a = ( ~ ((31<<1)) & 127);
    printf("%d",a);
    return 0;
} ///RTA---->65
//el ~ invierte todo
//el & devuelve 1 si tenemos 1 en las dos posiciones, 0 en otro caso
//el | devuelve 1 si hay un 1 en alguna posicion, 0 en caso de que las dos sea 0*/
