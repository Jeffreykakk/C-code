#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

// 给定两个字符串形式的非负整数 num1 和 num2 ，计算它们的和并同样以字符串形式返回

char *addStrings(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len = len1 > len2 ? len1 : len2;
    char flag = 0;
    char *num = (char *)malloc(sizeof(char) * (len + 1));
    int end1 = len1 - 1;
    int end2 = len2 - 1;
    num[len] = '\0';
    int end = len - 1;
    while (end1 >= 0 && end2 >= 0)
    {
        char add = num1[end1] + num2[end2] - 2 * '0' + flag;
        flag = 0;
        if (add >= 10)
        {
            flag = 1;
            add %= 10;
        }
        end1--;
        end2--;
        num[end--] = add + '0';
    }
    while (end1 >= 0)
    {
        char add = num1[end1] - '0' + flag;
        flag = 0;
        if (add >= 10)
        {
            flag = 1;
            add %= 10;
        }
        end1--;
        num[end--] = add + '0';
    }
    while (end2 >= 0)
    {
        char add = num2[end2] - '0' + flag;
        flag = 0;
        if (add >= 10)
        {
            flag = 1;
            add %= 10;
        }
        end2--;
        num[end--] = add + '0';
    }
    if (flag == 1)
    {
        num = (char *)realloc(num, sizeof(char) * (len + 2));
        int i = 0;
        for (i = len; i >= 0; i--)
            num[i + 1] = num[i];
        num[0] = '1';
    }
    return num;
}

int main()
{
    char str1[] = "999";
    char str2[] = "999";
    char *num = addStrings(str1, str2);
    printf("%s\n", num);
    free(num);
    system("pause");
    return 0;
}