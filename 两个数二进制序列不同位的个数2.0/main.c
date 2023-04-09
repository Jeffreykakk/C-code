#include <stdio.h>

int numberof1(int a) 
{	
	int count=0;
	for(int i=0;i<32;i++)
	{
		if((a>>i)&1==1)
		count++;
	}
	return count;
}

int main() 
{
	int a=0,b=0,c=0,ret=0;
	scanf("%d %d",&a,&b);
	c=a^b;
	ret=numberof1(c);
	printf("%d",ret);
	return 0;
}