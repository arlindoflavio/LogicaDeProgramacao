#include <stdio.h>

int main(){  //início da função principal
    
    int i, j, aux = 0, m[3][3];  //declaração de variáveis
    
    for(i = 0; i <= 2; i++){  //inicialização de matrizes
        for(j = 0; j <= 2; j++){
            aux++;
            m[i][j] = aux;
            printf("%d ", m[i][j]); // escrevendo a matriz com os números inteiros de 1 até 9
        }
        
        printf("\n");
      }
      
    return 0; //fim da função principal
}