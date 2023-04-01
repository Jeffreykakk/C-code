#include <stdio.h>

int main() 
{	
	int i=0,count=0,a=0;
	scanf("%d",&a);
	while(a>>i)
	{
		if((a>>i)&1==1)
		count++;
		i++;
	}
	printf("%d",count);
	return 0;
}