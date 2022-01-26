#include <stdio.h>
#define MAX 6
 
int main() {
 
    double num[MAX];
    int i, z = 0;
    
    for(i = 0; i < MAX; i++){
        scanf("%lf", &num[i]);
        if(num[i] > 0){
            z++;
        }
    }
  
    printf("%d valores positivos\n", z);
 
    return 0;
}