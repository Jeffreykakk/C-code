#include <stdio.h>

double P( int n, double x );

int main()
{
    int n=0;
    double x=0;
    scanf("%d %lf", &n, &x);
    printf("%.2f\n", P(n,x));
    return 0;
}

double P( int n, double x )
{
	if(n==0)
	return 1;
	if(n==1)
	return x;
	else
	return ((2*n-1)*P(n-1,x)-(n-1)*P(n-2,x))/n;
}