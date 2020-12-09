#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <assert.h>
#include <stdlib.h>
int main(void)
{
    char str[256], s = '.';
    char* p = str;

    setlocale(LC_ALL, "");
    printf("Введите строку\n");
    fgets(str, 256, stdin);
    printf("Ваша строку\n");
    puts(str);
    for (p = str; *p; ++p)
    {
        if (isupper(*(unsigned char*)p))
            *p = tolower(*(unsigned char*)p);
    }
    for (int i = 0; i < 256; i++)
    {
        if (str[i] == '.')
        {
            str[i++] = (char)toupper(str[++i]);
        }
    }
    puts(str);
    return 0;
}