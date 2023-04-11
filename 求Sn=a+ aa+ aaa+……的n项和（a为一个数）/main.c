#include <stdio.h>

int main() 
{
	int a=0,n=0,sum=0;
	scanf("%d %d",&a,&n);
	for(int i=0;i<n;i++)
	{
		int ret=0;
		for(int j=0;j<=i;j++)
		{
			ret=ret*10+a;
		}
		sum+=ret;
	}
	printf("%d",sum);
	return 0;
}