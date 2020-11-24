#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

 int main()
{  
    int** a;  // указатель на указатель на строку элементов
    int i, j, n, m, x, t=0;
    system("cls");
    printf("Введите количество строк: ");
    scanf_s("%d", &n);
    int* b = new int[n];
    // Выделение памяти под указатели на строки
    a = (int**)malloc(n * sizeof(int*));
    // Ввод элементов массива
    for (i = 0; i < n; i++)  // цикл по строкам
    {
        // Выделение памяти под хранение строк
        a[i] = (int*)malloc(n*2 * sizeof(int));
        for (j = 0; j < n*2; j++)  // цикл по столбцам
        {
            printf("a[%d][%d] = ", i, j);
            scanf_s("%d", &a[i][j]);
        }
    }
    // Вывод элементов массива
    for (i = 0; i < n; i++)  // цикл по строкам
    {
        for (j = 0; j < n*2; j++)  // цикл по столбцам
        {
            printf("%5d ", a[i][j]); // 5 знакомест под элемент массива
        }
        printf("\n");
    }

    printf("введите х ");
    scanf_s("%d", &x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (a[i][j] <= x)
                t++;
        }
        if (t == 2 * n)
        {
            b[i] = 1;
        }
        else
        {
            b[i] = 0;
        }
        t = 0;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
    // Очистка памяти
    for (i = 0; i < n; i++)  // цикл по строкам
        free(a[i]);   // освобождение памяти под строку
    free(a);
    getchar();   getchar();
    return 0;
}
