#include <stdio.h>

int main() 
{
	double sum=0,i=1;
	int n=0,flag=1;
	scanf("%d",&n);
	while(n--)
	{
		sum+=(1.0/i)*flag;
		flag=-flag;
		i++;
	}
	printf("sum = %.6lf",sum);
	return 0;
}