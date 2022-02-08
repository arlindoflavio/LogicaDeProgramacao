#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lin 9
#define col 9

int main()
{
    int tst[10], i, j, k, l, n, aux = 0;
    char sudoku[lin][col];

    scanf("%d", &n);

    for (l = 1; l <= n; l++)
    {

        aux = 0;

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
                scanf(" %c", &sudoku[i][j]);
        }

        for (i = 0; i < 9 && !aux; i++)
        {
            memset(tst, 0, sizeof(tst));
            for (j = 0; j < 9 && !aux; j++)
            {
                if (tst[sudoku[i][j] - 96])
                    aux = 1;
                else
                    tst[sudoku[i][j] - 96] = 1;
            }
        }

        for (i = 0; i < 9 && !aux; i++)
        {
            memset(tst, 0, sizeof(tst));

            for (j = 0; j < 9 && !aux; j++)
            {
                if (tst[sudoku[j][i] - 96])
                    aux = 1;
                else
                    tst[sudoku[j][i] - 96] = 1;
            }
        }

        for (i = 2; i < 9 && !aux; i += 3)
        {
            memset(tst, 0, sizeof(tst));

            for (j = i - 2; j <= i && !aux; j++)
            {
                for (k = i - 2; k <= i && !aux; k++)
                {
                    if (tst[sudoku[j][k] - 96])
                        aux = 1;
                    else
                        tst[sudoku[j][k] - 96] = 1;
                }
            }
        }

        printf("Instancia %d\n", l);
      
        printf("%s\n\n", (!aux) ? "SIM" : "NAO");
    }

    return 0;
}
