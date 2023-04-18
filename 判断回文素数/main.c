#include <stdio.h>
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

int ispalindrome(int n)
{
    int sum=0,num=n;
    while(n)
    {
        sum=sum*10+n%10;
        n/=10;
    }
    if(sum==num)
    return 1;
    else
    return 0;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    if(isprime(n)&&ispalindrome(n))
    printf("yes!\n");
    else
    printf("no!\n");
    return 0;
}