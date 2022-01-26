#include <stdio.h>
#define MAX 6
 
int main() {
 
    double num[MAX], media, soma;
    int i, z = 0;
    
    for(i = 0; i < MAX; i++){
        scanf("%lf", &num[i]);
        if(num[i] > 0){
          z++;
          soma += num[i];
          
        }
    }
    media = soma / z;
    printf("%d valores positivos\n", z);
    printf("%.1lf", media);
 
    return 0;
}