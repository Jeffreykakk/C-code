#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

//丑数就是只包含质因数 2、3 和 5 的正整数
//给你一个整数 n ，请你判断 n 是否为丑数 
//如果是，返回 true ；否则，返回 false 
bool isUgly(int n)
{
    if(n<=0)
    return false;
    else if(n==1||n==2||n==3||n==5)
    return true;
    else
    {
        int ret=0;
        if(n%2==0)
        ret=isUgly(n/2);
        if(n%3==0)
        ret=isUgly(n/3);
        if(n%5==0)
        ret=isUgly(n/5);
        if(ret==1)
        return true;
        else 
        return false;
    }
}

int main()
{
    int num=0;
    scanf("%d",&num);
    int ret=isUgly(num);
    printf("%d\n",ret);
    system("pause");
    return 0;
}