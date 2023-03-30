#include <stdio.h>
#include <math.h>
int main() 
{
	int a,i;
	scanf("%d",&a);
	if(a==2)
	printf("both\n");
	else if(a<2)
	printf("input error");
	else
	{
			for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				printf("composite number\n");
				break;
			}
		}
		if(i==a)
		printf("prime number\n");
	}
	return 0;
}