#include <stdio.h>

int main() 
{
	int n=0,i=0;
	char ch='A';
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		int j=0;
		for(j=i;j>0;j--)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}