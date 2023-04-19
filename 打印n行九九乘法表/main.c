#include <stdio.h>

int main() 
{
	int n=0,i=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int j=0;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-4d",j,i,j*i);
		}
		printf("\n");
	}
	return 0;
}