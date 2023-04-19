#include <stdio.h>

int main() 
{
	double x=0,x1=2,x2=1,sum=0;
	int n=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		x=x1*1.0/x2;
		double tmp=x1;
		x1=x1+x2;
		x2=tmp;
		sum+=x;
	}
	printf("%.2lf",sum);
	return 0;
}