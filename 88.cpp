#include<cstdio>
#include <Windows.h>


int* strToNum(char* str, int& n)
{
	int* mt;
	n = 0;
	if (!(mt = (int*)malloc(sizeof(int))))
		return nullptr;
	int num = 0;
	for (int i = 0; str[i - 1] != '\0'; i++)
	{
		if (!i)
			for (; str[i] < '0' && str[i - 1] != '\0' || str[i]>'9' && str[i - 1] != '\0'; i++)
				if (str[i] == '\0')
					return nullptr;
		if (str[i] <= '9' && str[i] >= '0')
		{
			num *= 10;
			num += str[i] - '0';
		}
		else
		{
			mt[n] = num;
			num = 0;
			for (; str[i] < '0' && str[i - 1] != '\0' || str[i]>'9' && str[i - 1] != '\0'; i++);
			i--;
			if (!(mt = (int*)realloc(mt, (++n + 1) * sizeof(int))))
			{
				free(mt);
				return nullptr;
			}
		}
	}
	return mt;
}


int main()
{
	char* s;
	if (!(s = (char*)malloc(sizeof(char))))
		return 0;
	int i = 0;
	while ((s[i] = getchar()) != '\n')
		if (!(s = (char*)realloc(s, (++i + 1) * sizeof(char))))
		{
			free(s);
			return 0;
		}
	s[i] = '\0';
	int n, * m;
	if (!(m = strToNum(s, n)))
	{
		free(s);
		return 0;
	}
	for (int i = 0; i < n; i++)
		printf(" %d", m[i]);
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += m[i];
	printf("\n\n%d", sum);
	free(m);
	free(s);
	system("pause");
}