#include <stdio.h>

int main() 
{
	unsigned int num=0,count=0;
	scanf("%u",&num);
	while(num)
	{
		if(num%2==1)
		count++;
		num/=2;
	}
	printf("%u",count);
	return 0;
}