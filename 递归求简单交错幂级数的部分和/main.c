#include <stdio.h>
#include <math.h>

double fn( double x, int n );

int main()
{
    double x=0;
    int n=0;
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));
    return 0;
}

double fn( double x, int n )
{
	if(n==1)
	return x;
	else
	return pow(x,n)*pow(-1,n-1)+fn(x,n-1);
}