#include <stdio.h>
#include <stdlib.h>

int main(){
    
    double area = 0, raio, pi = 3.14159;
    
    scanf("%lf", &raio);
    
    area = pi * raio * raio;
    
    printf("A=%.4lf\n", area);
    
    return 0;
}