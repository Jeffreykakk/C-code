#include <stdio.h>

int judge_friend(int a, int b)
{
	if(a==b)
	return 0;
	int i=0,sum_a=0,sum_b=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		sum_a+=i;
	}	
	for(i=1;i<b;i++)
	{
		if(b%i==0)
		sum_b+=i;
	}
	if(sum_a==b&&sum_b==a)
	return 1;
	else
	return 0;
}

void print(int low, int high)
{
	int i=0;
	for(i=low;i<=high;i++)
	{
		int j=0;
		for(j=low;j<=high;j++)
		{
			int ret=judge_friend(i,j);
			if(ret==1&&i<j)
			printf("%d--%d\n",i,j);
			
		}
	}
}

int main() 
{
	int low=0,high=0;
	scanf("%d %d",&low,&high);
	print(low,high);
	return 0;
}