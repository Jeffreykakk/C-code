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
	int n=0,ret=0;
	scanf("%d",&n);
	ret=numberof1(n);
	if(ret==1)
	printf("yes!\n");
	else
	printf("no!\n");
}