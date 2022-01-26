#include <stdio.h>
#define MAX 5
 
int main() {
 
    int num[MAX], i, y = 0, z = 0, par = 0, impar = 0, neg = 0, pos = 0;
    
    for(i = 0; i < MAX; i++){
        scanf("%d", &num[i]);
        y = num[i] % 2;
        
        if(y == 0)
          par++;
        if(y != 0)
          impar++;

        z = num[i];
        if(z < 0)
          neg++;
        if(z > 0)
          pos++;
    }
  
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
 
    return 0;
}