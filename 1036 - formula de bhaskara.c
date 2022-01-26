#include <stdio.h>
#include <stdlib.h>

int main(){
    
    double A, B, C, delta = 0, R1 = 0, R2 = 0;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    delta = ((B * B) - 4 * A * C);
    
    if(delta <= 0 || A == 0)
        printf("Impossivel calcular");
        
    else {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
        
    }
    
    return 0;
}