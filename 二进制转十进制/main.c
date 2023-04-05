#include <stdio.h>
#include <math.h>

int convert(long long n)
{
	int Decimalnumber = 0, i = 0, remainder;
    while (n!=0)
	{
		remainder = n%10;
        n /= 10;
        Decimalnumber += remainder*pow(2,i);
        ++i;
    }
	return Decimalnumber;
}
 
int main()
{
	long long n;
    printf("Binary number:");
    scanf("%lld", &n);
    printf("Binary number %lld --> Decimal number %d", n, convert(n));
    return 0;
}
