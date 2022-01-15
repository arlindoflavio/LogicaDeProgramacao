#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lin 9
#define col 9

int main()
{
    int sudoku[lin][col], tst[10], i, j, k, l, n, aux = 0;

    scanf("%d", &n);

    for (l = 1; l <= n; l++)
    {

        aux = 0;

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
                scanf("%d", &sudoku[i][j]);
        }

        for (i = 0; i < 9 && !aux; i++)
        {
            memset(tst, 0, sizeof(tst));
            for (j = 0; j < 9 && !aux; j++)
            {
                if (tst[sudoku[i][j]])
                    aux = 1;
                else
                    tst[sudoku[i][j]] = 1;
            }
        }

        for (i = 0; i < 9 && !aux; i++)
        {
            memset(tst, 0, sizeof(tst));

            for (j = 0; j < 9 && !aux; j++)
            {
                if (tst[sudoku[j][i]])
                    aux = 1;
                else
                    tst[sudoku[j][i]] = 1;
            }
        }

        for (i = 2; i < 9 && !aux; i += 3)
        {
            memset(tst, 0, sizeof(tst));

            for (j = i - 2; j <= i && !aux; j++)
            {
                for (k = i - 2; k <= i && !aux; k++)
                {
                    if (tst[sudoku[j][k]])
                        aux = 1;
                    else
                        tst[sudoku[j][k]] = 1;
                }
            }
        }

        printf("Instancia %d\n", l);
        printf("%s\n\n", (!aux) ? "SIM" : "NAO");
    }

    return 0;
}
