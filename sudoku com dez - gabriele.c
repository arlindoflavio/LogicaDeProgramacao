#include <stdio.h>

int main() {

    int n, s_n = 0, i, j, jj=0, k, l;
    
    scanf(" %d", &n);

    int sudoku[n*9][9];
    for(i = 0; i < n*9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &sudoku[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        printf("\nInstancia %d\n", i+1);

        for(j = i*9, jj = 0; j < (i+1)*9; j++, jj++){
            for(k = 0; k < 9; k++){
                for(l = k+1; l < 9; l++){

                    /*idenifica quando ha algum elemento repetido na linha*/
                    if(sudoku[j][k] == sudoku[j][l]){
                        /*chave que idetifica quando aparece um erro*/
                        s_n = 1;
                        break;
                    }
                    
                    if(sudoku[k+(i*9)][jj] == sudoku[l+(i*9)][jj]){
                        s_n = 1;
                        break;
                    }
                }
                /*quando identifica a primeira irregularidade ja interrompe o laco
                em outros ifs tambem fazem isso para otimizar o programa*/
                if(s_n == 1)
                    break;

                if(j % 3 == 0){
                    if(k % 3 == 0){

                       /*identifica se ha elementos repetidos dentro do bloco na 2a ou 3a
                        linha e 2a ou 3a coluna*/
                        if(sudoku[j][k] == sudoku[j+1][k+1] || sudoku[j][k] == sudoku[j+1][k+2]
                        || sudoku[j][k] == sudoku[j+2][k+1] || sudoku[j][k] == sudoku[j+2][k+2]){
                            s_n = 1;
                            break;
                        }
                    }

                    /*e na 2a coluna do bloco ... */
                    else if(k % 3 == 1){

                        /*identifica se ha elementos repetidos dentro do bloco na 2a ou 3a
                        linha e 1a ou 3a coluna*/
                        if(sudoku[j][k] == sudoku[j+1][k+1] || sudoku[j][k] == sudoku[j+1][k-1]
                        || sudoku[j][k] == sudoku[j+2][k+1] || sudoku[j][k] == sudoku[j+2][k-1]){
                            s_n = 1;
                            break;
                        }
                    }

                    /*e na 3a coluna do bloco ... */
                    else if(k % 3 == 2){

                        /*identifica se ha elementos repetidos dentro do bloco na 2a ou 3a
                        linha e 1a ou 2a coluna*/
                        if(sudoku[j][k] == sudoku[j+1][k-1] || sudoku[j][k] == sudoku[j+1][k-2]
                        || sudoku[j][k] == sudoku[j+2][k-1] || sudoku[j][k] == sudoku[j+2][k-2]){
                            s_n = 1;
                            break;
                        }

                    }
                }

               
                else if(j % 3 == 1){
                    if(k % 3 == 0){

                        /*identifica se ha elementos repetidos dentro do bloco na 3a
                        linha e 2a ou 3a coluna*/
                        if(sudoku[j][k] == sudoku[j+1][k+1] || sudoku[j][k] == sudoku[j+1][k+2]){
                            s_n = 1;
                            break;
                        }
                    }

                    /*e na 2a coluna do bloco ... */
                    else if(k % 3 == 1){

                        /*identifica se ha elementos repetidos dentro do bloco na 3a
                        linha e 1a ou 3a coluna*/
                        if(sudoku[j][k] == sudoku[j+1][k+1] || sudoku[j][k] == sudoku[j+1][k-1]){
                            s_n = 1;
                            break;
                        }
                    }

                    /*e na 3a coluna do bloco ... */
                    else if(k % 3 == 2){

                        /*identifica se ha elementos repetidos dentro do bloco na 3a
                        linha e 1a ou 2a coluna*/
                        if(sudoku[j][k] == sudoku[j+1][k-1] || sudoku[j][k] == sudoku[j+1][k-2]){
                            s_n = 1;
                            break;
                        }

                    }
                }
                /*quando na 3a linha do bloco ...
                nao precisa ser comparada porque ja foi comparada com os
                da 1a e 2a linha e com ela propria*/
            
                if(s_n == 1)
                    break;
            }
           
            if(s_n == 1)
                    break;
        }

        if(s_n == 0)
            printf("SIM\n");
        else
            printf("NAO\n");

        /*reseta a chave*/
        s_n = 0;
    }

  return 0;
}