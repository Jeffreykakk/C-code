#include <stdio.h>

int main() 
{
	int a=0,b=0,count=0;
	scanf("%d %d",&a,&b);
	for(int i=0;i<32;i++)
	{
		if(((a>>i)&1)!=((b>>i)&1))
		count++;
	}
	printf("%d",count);
	return 0;
}