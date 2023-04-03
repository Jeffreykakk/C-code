#include <stdio.h>

int judge(int n)
{
	int count=0;
	if(n==0)
	return 1;
	while(n)
	{
		n=n/10;
		count++;
	}
	return count;
}

int main() 
{
	int ret=0,num=0;
	scanf("%d",&num);
	ret=judge(num);
	printf("%d",ret);
	return 0;
}