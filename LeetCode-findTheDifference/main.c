#include <stdio.h>
#include <windows.h>

char findTheDifference(char *s, char *t)
{
    int sum = 0;
    int i = 0;
    for (i = 0; t[i] != '\0'; i++)
        sum += t[i];
    for (i = 0; s[i] != '\0'; i++)
        sum -= s[i];
    return sum;
}

int main()
{
    char s[] = "abcd";
    char t[] = "acdeb";
    char ch = findTheDifference(s, t);
    printf("%c\n", ch);
    system("pause");
    return 0;
}