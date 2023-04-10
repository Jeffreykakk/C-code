#include <stdio.h>

int main() 
{
	int num=0;
	scanf("%d",&num);
	printf("odd  -->");
	for(int i=30;i>=0;i-=2)
	{
		printf("%d ",(num>>i)&1);
	}
	printf("\n");
	printf("even -->");
	for(int i=31;i>=1;i-=2)
	{
		printf("%d ",(num>>i)&1);
	}
	printf("\n");
	return 0;
}