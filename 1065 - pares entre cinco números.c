#include <stdio.h>
#define MAX 5
 
int main() {
 
    int num[MAX], i, y = 0, z = 0;
    
    for(i = 0; i < MAX; i++){
        scanf("%d", &num[i]);
        y = num[i] % 2;
        if(y == 0){
            z++;
        }
    }
  
    printf("%d valores pares\n", z);
 
    return 0;
}