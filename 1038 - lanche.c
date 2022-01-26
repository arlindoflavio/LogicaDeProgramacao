#include <stdio.h>
 
int main() {
 
    int cod, qtd;
    double valor = 0, total = 0;
    
    scanf("%d %d", &cod, &qtd);
    
    switch(cod){
        
        case 1 : valor = 4.00; break;
        case 2 : valor = 4.50; break;
        case 3 : valor = 5.00; break;
        case 4 : valor = 2.00; break;
        default : valor = 1.50;
    }
    
    total = valor * qtd;
    
    printf("Total: R$ %.2lf\n", total);
 
    return 0;
}