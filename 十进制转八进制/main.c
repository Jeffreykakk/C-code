#include <stdio.h>
#include <math.h>

int convert(int Decimalnumber)
{
	int Octalnumber = 0, i = 1;
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
	int Decimalnumber;
    printf("Decima lnumber: ");
    scanf("%d", &Decimalnumber);
    printf("Decima lnumber %d --> Octal number %d", Decimalnumber, convert(Decimalnumber));
    return 0;
}
