#include<iostream>

int main()
{
	const int size = 100;
	int arr1[size], arr2[size];
	int t = 0;
	int sum = 0;
	int n = 0;
	printf("Введите элементов массива\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Введите\n");
		printf("%d", i);
		printf("  ");
		scanf_s("%d", &arr1[i]);

	}
	for (int i = 0; i < n; i++)
	{
		printf("Введите\n");
		printf("%d", i);
		printf("  ");
		scanf_s("%d", &arr2[i]);

	}
	for (int i = 0; i < n; i++)
	{
		double long x = arr1[i] * arr2[i];
		if (x > 10)
		{
			printf("индекс  элемента\n ");
			printf("%d\n", i);
			t++;
			sum += x;
		}
	}
	printf("количество\n");
	printf("%d\n", t);
	printf("sum\n");
	printf("%d\n", sum);

	return(0);
}