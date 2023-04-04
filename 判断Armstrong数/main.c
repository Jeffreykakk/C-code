#include <stdio.h>
#include <math.h>

int figure(int n)
{
	int count=0;
	while(n)
	{
		n=n/10;
		count++;
	}
	return count;
}



int main() 
{
	int num=0,ret=0,n=0,a=0,sum=0;
	scanf("%d",&num);
	n=num;
	ret=figure(n);
	while(n)
	{
		a=n%10;
		sum=sum+pow(a,ret);
		n=n/10;
	}
	if(sum==num)
	printf("yes!\n");
	else
	printf("no!\n");
	return 0;
}