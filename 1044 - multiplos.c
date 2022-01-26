#include <stdio.h>

int main(){

    int a, b, aux = 0, mult = 0;
	
    scanf("%d %d", &a, &b);

    if(a < b){
        aux = a;
        a = b;
        b = aux;
    }

    mult = a % b;

    if(mult == 0)
        printf("Sao Multiplos\n");
        
    else
        if(mult != 0)
            printf("Nao sao Multiplos\n");

  return 0;
}