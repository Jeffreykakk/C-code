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

int judge(int n,int ret2)
{
	if(n>9)
	judeg(n/10);
	;
}

int main() 
{
	int n=0,ret1=0,ret2=0;
	scanf("%d",&n);
	ret1=figure(n);
	ret2=judge(n,ret1);
	if(ret2)
	printf("yes!\n");
	else
	printf("no!\n");
	return 0;
}