#include <stdio.h>

int main() 
{
	int Sum=4,sum=4,i=0,j=1;;
	printf("%d digits:%d\n",j,sum);
	for(i=2;i<=8;i++)
	{
		for(j=1;j<i;j++)
		{
			if(j==i-1)
			sum*=7;
			else
			sum*=8;
		}
		Sum+=sum;
		printf("%d digits:%d\n",j,sum);
		sum=4;
	}
	printf("total:%d\n",Sum);
	return 0;
}