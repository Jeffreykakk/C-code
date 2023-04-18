#include <stdio.h>
#include <math.h>

int isprime(int n)
{
    int i=0;
    if(n<2)
    return 0;
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
	int i=0,low=0,high=0;
	scanf("%d %d",&low,&high);
	for(i=low;i<=high;i++)
	{
		if(ispalindrome(i)&&isprime(i))
		printf("%d ",i);
	}
	return 0;
}