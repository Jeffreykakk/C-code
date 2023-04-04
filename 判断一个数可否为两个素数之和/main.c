#include <stdio.h>
#include <math.h>

int prime(int n)
{
	if(n<2)
	return -1;
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
	int num=0,i=0,j=0,flag=0;
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		for(j=2;j<=num;j++)
		if(prime(i)==1&&prime(j)==1&&i+j==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("%yes!\n");
	else
	printf("no!\n");
	return 0;
}