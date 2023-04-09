#include <stdio.h>

int main() 
{	
	int count=0,a=0;
	scanf("%d",&a);
	while(a)
	{
		a=a&(a-1);
		count++;
	}
	printf("%d",count);
	return 0;
}