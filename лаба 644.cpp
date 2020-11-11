#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int const N = 6;
    int mas[N][N];
    int i, j, sum = 0, sum1 = 0;

    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            mas[i][j] = +rand() % 10;
        }

    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            printf(" %d", mas[i][j]);

        }
        printf("  ");
        printf(" \n");
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i % 2 == 0)
            {
                int k = i + j;
                if (k % 2 == 0)
                {
                    if (mas[i][j] % 2 != 0)
                    {
                        sum += mas[i][j];
                    }

                }
            }
            else
            {
                int k = i + j;
                if (k % 2 != 0)
                {
                    if (mas[i][j] % 2 != 0)
                    {
                        sum += mas[i][j];
                    }

                }
            }
        }

    }
    printf("%d", sum);
}