#include <stdio.h>
#include <math.h>

long long convert(int Octalnumber)
{
	int Decimalnumber = 0, i = 0;
    while(Octalnumber != 0)
	{
		Decimalnumber += (Octalnumber%10) * pow(8,i);
        ++i;
        Octalnumber/=10;
    }
	i = 1;
    return Decimalnumber;
}

int main()
{
	int Octalnumber;
    printf("Octal number: ");
    scanf("%d", &Octalnumber);
    printf("Octal number %d  --> Decimal number %lld", Octalnumber, convert(Octalnumber));
    return 0;
}
