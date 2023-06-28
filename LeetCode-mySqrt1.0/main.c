#include <stdio.h>
#include <windows.h>

// 给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
// 由于返回类型是整数，结果只保留整数部分 ，小数部分将被舍去

int mySqrt(int x)
{

    long long i = 0; // 防止 i * i 溢出
    while (1)
    {
        if (i * i <= x && (i + 1) * (i + 1) > x)
            break;
        i++;
    }
    return i;
}

int main()
{
    int x = 0;
    scanf("%d", &x);
    int ret = mySqrt(x);
    printf("%d\n", ret);
    system("pause");
    return 0;
}