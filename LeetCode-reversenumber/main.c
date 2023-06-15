#include <stdio.h>
#include <windows.h>


//给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果
//如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0

int reverse(int x)
{
    long long reversenumber=0;
    while(x)
    {
        reversenumber=reversenumber*10+x%10;
        x/=10;
    }
    if(reversenumber>INT_MAX||reversenumber<INT_MIN)
    return 0;
    else
    return reversenumber; 
}

int main()
{
    int num=0;
    scanf("%d",&num);
    printf("%d\n",reverse(num));
    system("pause");
    return 0;
}