#include <stdio.h>

int fib(int n)
{
	if(n<=2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
int main() 
{
	int n,ret;
	scanf("%d",&n);
	ret=fib(n);
	printf("%d",ret);
	return 0;
}