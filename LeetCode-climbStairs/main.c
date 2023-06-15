#include <stdio.h>
#include <windows.h>

//假设你正在爬楼梯。需要 n 阶你才能到达楼顶
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
//要求非递归解法

int climbStairs(int n){
    if(n==1)
    return 1;
    else if(n==2)
    return 2;
    else
    {
        n-=2;
        int a=1;
        int b=2;
        int c=0;
        while(n--)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}

int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d\n",climbStairs(n));
    system("pause");
    return 0;
}