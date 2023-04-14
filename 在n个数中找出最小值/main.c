#include <stdio.h>

int main()
{
	int m=0,n=0,min=0,count=1;
	scanf("%d",&m);
	while(m)
	{
		m--;
		scanf("%d",&n);
		while(count)
		{
			min=n;
			count=0;
		}
		if(n<min)
			min=n;
	}
	printf("min = %d",min);
	return 0;
}