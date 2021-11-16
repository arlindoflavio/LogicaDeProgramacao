#include <stdio.h>

int main (){

    float salariobase, salario = 0, IR = 0;

    scanf("%f", &salariobase);

    if(salariobase <= 2000.00)
        printf("Isento\n");

    else
        if(salariobase <= 3000.00){
            salario = salariobase - 2000.00;
            IR = salario * 0.08;
            printf("R$ %.2f\n", IR);
        }
        
        else 
            if(salariobase <= 4500.00){
                salario = salariobase - 3000.00;
                IR = salario * 0.18 + (1000.00 * 0.08);
                printf("R$ %.2f\n", IR);
            }

            else
                if(salariobase > 4500.00){
                    salario = salariobase - 4500.00;
                    IR = salario * 0.28 + (1500.00 * 0.18) + (1000.00 * 0.08);
                    printf("R$ %.2f\n", IR);
                }

    return 0;

}
