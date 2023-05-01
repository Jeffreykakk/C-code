#include <stdio.h>

void pyramid(int n)
{
	int i=0;
	for(i=1;i<=n;i++)
	{
		int j=0;
		for(j=0;j<=n-1-i;j++)
		printf(" ");
		for(j=1;j<=(2*i-1);j++)
		{
			if(j%2==1)
			printf("%d",i);
			else
			printf(" ");
		}
		printf("\n");
	}
}

int main() 
{
	int n=0;
	scanf("%d",&n);
	pyramid(n);
	return 0;
}