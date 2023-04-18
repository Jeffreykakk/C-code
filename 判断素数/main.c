#include <stdio.h>

int isprime(int n)
{
	if(n==1)
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
	int num=0;
	scanf("%d",&num);
	if(isprime(num)==1)
	printf("yes!\n");
	else
	printf("no!\n");
	return 0;
}