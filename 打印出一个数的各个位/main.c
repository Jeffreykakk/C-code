#include <stdio.h>

void print(int num)
{
	if(num>9)
	{
		print(num/10);
	}
	printf("%d ",num%10);
}

int main()
{
	int num;
	scanf("%d",&num);
	print(num);
	return 0;
}
