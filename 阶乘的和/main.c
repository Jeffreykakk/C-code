#include <stdio.h>

int main() 
{
	int sum=0,n,i,j,fac=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			fac*=j;
		}
		sum+=fac;
		fac=1;
	}
	printf("%d",sum);
	return 0;
}