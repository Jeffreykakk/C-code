#include <stdio.h>

int main() 
{
	int n=0,count=0,x1=1,x2=2,x3=0;
	scanf("%d",&n);
	if(n==1)
	count=x1;
	else if(n==2)
	count=x2;
	else
	{
		int i=0;
		for(i=3;i<=n;i++)
		{
			int x3=x1+x2;
			x1=x2;
			x2=x3;
			count=x3;
		}
	}
	printf("%d",count);
	return 0;
}