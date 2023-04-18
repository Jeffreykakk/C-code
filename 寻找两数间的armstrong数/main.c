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

int isarmstrong(int num)
{
	int n=num,sum=0;
	int ret=figure(n);
	while(n)
	{
		int a=n%10;
		sum=sum+pow(a,ret);
		n=n/10;
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
		if(isarmstrong(i)==1)
		printf("%d ",i);
	}
	return 0;
}