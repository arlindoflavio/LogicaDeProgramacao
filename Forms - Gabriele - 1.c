#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i, x, *vet;

    x = 5000;
    vet = malloc(x * sizeof(int));

    for(i = 0; i < x; i++){
        vet[i] = i;
        printf("%d \n", vet[i]);
    }
}