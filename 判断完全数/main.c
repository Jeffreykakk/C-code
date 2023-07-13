#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPerfectNumber(int num)
{
    if (num == 1)
        return false;
    int i = 0, sum = 1;
    double end = sqrt(num);
    for (i = 2; i <= end; i++)
    {
        if (num % i == 0)
        {
            if (i < end)
                sum = sum + i + num / i;
            else
                sum += i;
        }
    }
    if (sum == num)
        return true;
    else
        return false;
}

int main()
{
    int ret = checkPerfectNumber(6);
    printf("%d\n", ret);
    return 0;
}