#include <stdio.h>
#include <math.h>

int convert(long long Binarynumber)
{
	int Octalnumber = 0, Decimalnumber = 0, i = 0;
    while(Binarynumber != 0)
	{
		Decimalnumber += (Binarynumber%10) * pow(2,i);
        ++i;
        Binarynumber/=10;
    }
	i = 1;
    while (Decimalnumber != 0)
	{
		Octalnumber += (Decimalnumber % 8) * i;
        Decimalnumber /= 8;
        i *= 10;
    }
	return Octalnumber;
}

int main()
{
	long long Binarynumber;
    printf("Binary number: ");
    scanf("%lld", &Binarynumber);
    printf("Binary number %lld --> Octal number %d", Binarynumber, convert(Binarynumber));
    return 0;
}
