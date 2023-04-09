#include <stdio.h>

int main() 
{
	int num=0;
	scanf("%d",&num);
	if(num&(num-1)==0)
	printf("yes!\n");
	else
	printf("no!\n");
	return 0;
}