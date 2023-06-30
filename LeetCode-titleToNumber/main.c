#include <stdio.h>
#include <math.h>
#include <windows.h>

int titleToNumber(char *columnTitle)
{
    int end = strlen(columnTitle) - 1;
    int i = 0, num = 0;
    for (i = end; i >= 0; i--)
        num += (columnTitle[i] - 64) * pow(26, end - i);
    return num;
}

int main()
{
    char str[10] = {0};
    scanf("%s", str);
    int ret = titleToNumber(str);
    printf("%d\n", ret);
    system("pause");
    return 0;
}