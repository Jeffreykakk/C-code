#include <stdio.h>
#include <math.h>

long long convert(int Octalnumber)
{
	int Decimalnumber = 0, i = 0;
    long long Binarynumber = 0;
    while(Octalnumber != 0)
	{
		Decimalnumber += (Octalnumber%10) * pow(8,i);
        ++i;
        Octalnumber/=10;
    }
	i = 1;
    while (Decimalnumber != 0)
	{
		Binarynumber += (Decimalnumber % 2) * i;
        Decimalnumber /= 2;
        i *= 10;
    }
	return Binarynumber;
}

int main()
{
	int Octalnumber;
    printf("Octal number: ");
    scanf("%d", &Octalnumber);
    printf("Octal number %d --> Binary number %lld", Octalnumber, convert(Octalnumber));
    return 0;
}
