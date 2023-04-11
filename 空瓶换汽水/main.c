#include <stdio.h>

int main() 
{
	int money=0,total=0,empty=0;
	scanf("%d",&money);
	total=money;
	empty=total;
	while(empty>=2)
	{
		total+=empty/2;
		empty=empty/2+empty%2;
	}
	printf("%d",total);
	return 0;
}