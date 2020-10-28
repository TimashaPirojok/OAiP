#include <stdio.h>

int main()
{
	int number, a[6], k = 0;
	for (int i = 10; i <= 999999; i++)
	{
		number = i;
		for (int j = 5; j >= 0; j--)
		{
			a[j] = number % 10;
			number /= 10;
		}
		if (a[0] + a[1] + a[2] == a[3] + a[4] + a[5])
		{
			k++;
			printf("%d%d%d%d%d%d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
			
		}
		
	}
	printf(" \n");
	printf("kolichestvo shastlivih chisel   ");
	printf("%d\n", k);
	return 0;
}