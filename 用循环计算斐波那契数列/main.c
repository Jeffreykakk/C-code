#include <stdio.h>

int fib(int n)
{
	int a=1,b=1,c;
	if(n>2)
	{
			while(n>2)
		{
			c=a+b;
			a=b;
			b=c;
			n--;
		}
		return c;
	}	
	else
	return 1;
	
}
int main() 
{
	int n,ret;
	scanf("%d",&n);
	ret=fib(n);
	printf("%d",ret);
	return 0;
}