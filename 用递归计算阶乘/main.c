#include <stdio.h>

int fac(int n)
{
	if(n<=1)
	return 1;
	else
	return n*fac(n-1);
}

int main() 
{
	int n,ret;
	scanf("%d",&n);
	ret=fac(n);
	printf("%d",ret);
	return 0;
}