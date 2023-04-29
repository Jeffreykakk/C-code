#include <stdio.h>

int main() 
{
	int line=0,i=0,j=0;
	scanf("%d",&line);
	for(i=0;i<line;i++)
	{
		for(j=0;j<line;j++)
		{
			if(i==j||i+j==line-1)
			printf("*");
			else
			printf(" ");
		}
	printf("\n");	
	}
	return 0;
}