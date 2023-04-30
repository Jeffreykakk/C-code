#include <stdio.h>

int countdigit(int number,int digit)
{
	if(number<0)
	number=-number;
	int count=0;
	while(number)
	{
		if(digit==number%10)
		count++;
		number/=10;
	}
	return count;
}

int main() 
{
	int number=0,digit=0;
	scanf("%d %d",&number,&digit);
	int count=countdigit(number,digit);
	printf("%d",count);
	return 0;
}