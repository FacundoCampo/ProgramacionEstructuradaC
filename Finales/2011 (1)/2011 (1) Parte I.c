#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int entero;
    int decimal;
}real;

void GenerarArchivo(char *archivo)
{
    FILE *ptrArchivo;
    real numero;
    int entero, decimal;
    ptrArchivo = fopen(archivo,"w");
    if (ptrArchivo!=NULL)
        { do
            { printf("Ingrese valor entero, Finaliza con Valor 0(Cero)\n");
            scanf("%d", &entero);
            if (entero!=0)
            {   printf("Ingrese valor decimal\n");
                scanf("%d", &decimal);
                numero.entero=entero;
                numero.decimal=decimal;
                fprintf(ptrArchivo,"%d.%d\n",numero.entero,numero.decimal);
            }
        } while (entero!=0);
        fclose(ptrArchivo);
    }
}
