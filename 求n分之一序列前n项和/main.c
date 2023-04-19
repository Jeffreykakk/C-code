#include <stdio.h>

int main() 
{
	double sum=0,i=1;
	int n=0;
	scanf("%d",&n);
	while(n--)
	{
		sum+=1.0/i;
		i++;
	}
	printf("sum = %.6lf",sum);
	return 0;
}