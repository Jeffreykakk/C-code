#include <stdio.h>

int main() 
{
	int a=0,b=0,c=0;
	scanf("%d %d",&a,&b);
	int m=a,n=b;
	while(c=a%b)
	{
		a=b;
		b=c;
	}
	printf("%d",m*n/b);
	return 0;
}