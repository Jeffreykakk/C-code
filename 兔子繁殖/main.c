#include <stdio.h>

int main() 
{
	int year,month,sum=2,c,a=1,b=1,i,j;
	scanf("%d",&year);
	month=year*12;
	for(i=2;i<month;i++)
	{
		c=a+b;
		a=b;
		b=c;
		sum+=c;
	}
	printf("sum = %d ",sum);
	return 0;
}