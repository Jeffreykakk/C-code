#include <stdio.h>

int main() 
{
	int n=0,count=0,m=9;
	scanf("%d",&n);
	if(n==2||n==5)
	printf("can not!");
	else
	{
		while(1)
		{
			if(m%n==0)
			{
				count++;
				break;
			}
			count++;
			m=10*m+9;
		}
		printf("can!\ncount = %d",count);
	}
	return 0;
}