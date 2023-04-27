#include <stdio.h>

int main()
{
	int m=1,sum=0,count=0;
	scanf("%d",&m);
	while(m)
	{
		count++;
		sum+=m%10;
		m/=10;
	}
	printf("count = %d\nsum = %d",count,sum);
	return 0;
}