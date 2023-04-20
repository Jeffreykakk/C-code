#include<stdio.h>
#include <math.h>

int isprime(int n)
{
    if(n<2)
    return 0;
    int i=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

void decompose(int n)
{
    int i=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0&&isprime(i)==1)
        break;
    }
    if(i<n)
    {
        printf("%d*",i);
        decompose(n/i);
    }
    else
    printf("%d",i);
}

int main()
{
    int num=0;
    scanf("%d",&num);
    printf("%d=",num);
    decompose(num);
    return 0;
}