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

void print(int low,int high)
{
	int i=0;
	for(i=1;;i++)
	{
		if(fib(i)>=low&&fib(i)<=high)
		printf("%d ",fib(i));
		if(fib(i)>=high)
		break;
	}
}

int main() 
{
	int low=0,high=0;
	scanf("%d %d",&low,&high);
	print(low,high);
	return 0;
}