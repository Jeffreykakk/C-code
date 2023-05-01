#include <stdio.h>
#include <math.h>

int fac(int n)
{
	if(n<=1)
	return 1;
	else
	return n*fac(n-1);
}

int main() 
{
	int n=0,flag=1,i=0;
	double x=0,sum=0,e=0,num=0;
	scanf("%lf %lf",&x,&e);
	do
	{
		num=(pow(x,i)*1.0/fac(i))*flag;
		flag=-flag;
		sum+=num;
		i+=2;
	}while(fabs(num)>=e);
	printf("cos(%.2lf) = %lf",x,sum);
	return 0;
}