#include <stdio.h>

int mypower(int x,int n)
{
    if(n==0)
    return 1;
    int i=0,mul=1;
    for(i=1;i<=n; i++)
    mul*=x;
    return mul;
}

int main()
{
    int x=0,n=0;
    scanf("%d %d",&x,&n);
    int ret = mypower(x,n);
    printf("%d",ret);
    return 0;
}