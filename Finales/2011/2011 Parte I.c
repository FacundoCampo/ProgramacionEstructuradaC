#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define filas 5
#define cols 3
void cargarmatriz(int matriz[filas][cols]);
void procesar(int matriz[filas][cols]);
void imprimirmatriz(int matriz[filas][cols]);

int main()
{
    int matriz[filas][cols];
    cargarmatriz(matriz);
    imprimirmatriz(matriz);
    procesar(matriz);
    printf("\n");
    imprimirmatriz(matriz);

    return 0;
}
void procesar(int matriz[filas][cols])
{
    int fila=0,col=0;
    for(col=1;col<cols;col++){    //AND bit a bit de cada valor con el valor correspondiente a la columna anterior de la misma fila
        for(fila=0;fila<filas;fila++){
            matriz[fila][col]=matriz[fila][col]&matriz[fila][col-1];

        }
    }
    for(fila=1;fila<filas;fila++){  //OR bit a bit de cada valor con el valor correspondiente a la fila anterior de la misma columna
        for(col=0;col<cols;col++){
            matriz[fila][col]=matriz[fila][col] | matriz[fila-1][col];
        }
    }
    for(fila=0;fila<filas;fila++){ //Desplazar a izquierda los bits de cada una de las posiciones de la matriz,
//una cantidad de lugares equivalente a el valor guardado en la fila 0, columna 0.
        for(col=0;col<cols;col++){
            matriz[fila][col]=matriz[fila][col] << matriz[0][0];
        }
    }
}
void cargarmatriz(int matriz[filas][cols])
{
    int fila,col;
    for(fila=0;fila<filas;fila++){
        for(col=0;col<cols;col++){
            printf("[%d][%d]",fila,col);
            scanf("%d",&matriz[fila][col]);
        }
        matriz[fila+1][col]=0;
    }
    matriz[fila][col+1]=0;
}
void imprimirmatriz(int matriz[filas][cols])
{
    int fila,col;
    for(fila=0;matriz[fila][0]!=0;fila++){
        for(col=0;col<cols;col++){
            printf("%12d",matriz[fila][col]);
        }
        printf("\n");
    }
}
