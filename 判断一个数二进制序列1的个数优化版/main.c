#include <stdio.h>

int main() 
{	
	int i=0,count=0,a=0;
	scanf("%d",&a);
	for(i=0;i<32;i++)
	{
		if((a>>i)&1==1)
		count++;
	}
	printf("%d",count);
	return 0;
}