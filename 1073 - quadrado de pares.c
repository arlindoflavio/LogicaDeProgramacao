#include <stdio.h>
#include <math.h>

int main() {
     
    int N, x, y = 0;
    
    scanf("%d", &N);

    for(x = 1; x <= N; x++){    
        if(x % 2 == 0){
            y = pow(x,2);
            printf("%d^2 = %d\n", x, y);
            x++;
        }
    }

    return 0;
}
