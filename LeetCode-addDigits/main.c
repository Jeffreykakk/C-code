#include <stdio.h>
#include <windows.h>

int addDigits(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    if (sum >= 10)
        sum = addDigits(sum);
    return sum;
}

int main()
{
    int num=0;
    scanf("%d",&num);
    int ret=addDigits(num);
    printf("%d\n",ret);
    system("pause");
    return 0;
}