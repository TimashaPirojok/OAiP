#include <iostream>
#include <time.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russia");
	srand(time(NULL));
	int x,  n,  t = 0;
	const int size = 100;
	int arr[size][size], arr2[size];


	printf ("введите n ");
	scanf_s ("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			arr[i][j] = rand() % 100;
			printf ("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("введите х ");
	scanf_s("%d", &x);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (arr[i][j] <= x)
				t++;
		}
		if (t == 2 * n)
			arr2[i] = 1;
		else arr2[i] = 0 ;
		t = 0;
	}
	printf( "\n");
	for (int i = 0; i < n; i++)
	{
		printf ("%d\n", arr2[i]);
	}
	return(0);
}