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

int main() 
{
	int a=0,b=0;
	scanf("%d%d",&a,&b);
	int ret=judge_friend(a,b);
	if(ret==1)
	printf("yes!\n");
	else
	printf("no!\n");
	return 0;
}