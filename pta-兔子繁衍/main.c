#include <stdio.h>
//  1 2 3 4 5 6 7
//  1 1 2 3 5 8 13
int main() 
{
	long n=0;
	int c=1,a=1,b=1,i=1;
	scanf("%ld",&n);
	if(n==1)
	printf("%d",i);
	else
	{
		for(i=3;;i++)
		{
			c=a+b;
			if(c>=n)
			break;
			a=b;
			b=c;
		}
		printf("%d",i);
	}
	return 0;
}