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

int main()
{
    int num=0,i=0,factor=0;
    scanf("%d",&num);
    printf("%d=",num);
    for(i=2;i<=num;i++)
    {
    	if(num%i==0&&isprime(i)==1)
    	{
    		if(i==num)
    		printf("%d",i);
    		else
    		{
    			num/=i;
    			printf("%d*",i--);
			}
		}
	}
    return 0;
}