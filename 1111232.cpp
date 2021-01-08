#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char str[256], s = '.';
    char* p = str;

    setlocale(LC_ALL, "");
    printf("Введите строку\n");
    gets_s (str);
    printf("Ваша строка\n");
    puts(str);
    for (int i = 0; i < 256; i++)
    {
        if(str[i]>=65 && str[i]<= 90)
            str[i]=str[i]+32;
    }
    for (int i = 0; i < 256; i++)
    {
        if (str[i] == 46)
        {
            int k = i + 1;
            str[k] = str[k] - 32;
        }
    }
    printf("Изменённая строка\n");
    puts(str);
    return 0;
}
