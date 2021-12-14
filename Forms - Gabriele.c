#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i, x, y, *vet;

    x = 5000;
    y = 0;
    for(i = 0; i < x; i++){
        vet = malloc(x * sizeof(int));
        vet[i] = y;
        y++;
        printf("%d \n", vet[i]);
    }
}