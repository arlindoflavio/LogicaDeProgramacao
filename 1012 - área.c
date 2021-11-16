#include <stdio.h>
#include <math.h>

int main () {
    
    double A, B, C, tri, circ = 0, trap = 0, quad = 0, ret = 0, pi;
    
    scanf("%lf\n %lf\n %lf\n", &A, &B, &C);
    
    pi = 3.14159;
    
    tri = (A * C) / 2;
    
    circ = pi * C * C;
    
    trap = ((A + B) * C) / 2;
    
    quad = B * B;
    
    ret = A * B;
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", circ);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
    
    return 0;
}