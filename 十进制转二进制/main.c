#include <stdio.h>
#include <math.h>

long long convert(int n)
{
	long long Binarynumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
	{
		remainder = n%2;
        n /= 2;
        Binarynumber += remainder*i;
        i *= 10;
    }
	return Binarynumber;
}
 
int main()
{
	int n;
    printf("Decimal number: ");
    scanf("%d", &n);
    printf("Decimal number %d --> Binary number %lld", n, convert(n));
    return 0;
}
