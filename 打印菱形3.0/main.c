#include <stdio.h>

int main() 
{
	int n,i,j,count=0,k=1;
	char x=0,y=0;
	scanf("%d,%c",&n,&x);
	for(i=0;i<n;i++)
	{
		if(i<=n/2)
		{
			for(k=0;k<n/2-i;k++)
			{
				printf(" ");
			}
			for(j=1;j<=(2*i+1);j++)
			printf("%c",x);
			printf("\n");
		}
		else
		{
			for(k=0;k<i-n/2;k++)
			{
				printf(" ");
			}
			for(j=1;j<=(2*(n-i)-1);j++)
			printf("%c",x);	
			printf("\n");
		}
	}
	return 0;
}