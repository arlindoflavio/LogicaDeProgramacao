#include <stdio.h>
#include <stdlib.h>
#define LINHA 9
#define COLUNA 9

void random(int matriz[LINHA][COLUNA])
{
    int i, j;

    srand((0));

    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            matriz[i][j] = rand();
        }
    }

    return;
}

int main(){         //função principal
    int **matriz;
    int i;
    
    matriz = (int**)malloc(LINHA*sizeof(int*));

    for(i = 0; i < LINHA; i++)
        matriz[i] = (int*)malloc(COLUNA*sizeof(int));

    random(matriz);     //chamando função random

    for(i = 0; i < LINHA; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}