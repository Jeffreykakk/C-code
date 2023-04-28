#include <stdio.h>

int main() 
{
	int i=0,j=0,n=0,sum=0;
	scanf("%d",&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				sum+=j;
			}
		}
		printf("%d",sum);
	}
	else
	printf("Error!");
	return 0;
}