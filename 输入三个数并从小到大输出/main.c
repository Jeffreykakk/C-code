#include <stdio.h>

int main() 
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		int n=a;
		a=b;
		b=n;
	}
		if(a<c)
	{
		int n=a;
		a=c;
		c=n;
	}
		if(b<c)
	{
		int n=b;
		b=c;
		c=n;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}