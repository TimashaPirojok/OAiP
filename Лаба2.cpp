//laba 2 
#include <iostream>

int main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100] = { 0 };
	int i, j, m, n;
	setlocale(LC_ALL, "Russia");
	printf("Введите количество строк, n=");
	scanf_s("%d", &n);
	 printf("Введите количество столбцов, m=");
	  scanf_s("%d", &m);
	printf ("Введите элемент матрицы a\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("a[%d][%d]=",i,j );
			scanf_s("%d",  &a[i][j]);
		}                
	}
	printf("Введите элемент матрицы b \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("b[%d][%d]=",i,j );
			scanf_s("%d",&b[i][j]);
		}
	}
	printf("Сумма матриц= \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			c[i][j] = (a[i][j] + b[i][j]);
		    printf("%3d",c[i][j]);	
		}
		printf("\n");
	}

	return 0;
}