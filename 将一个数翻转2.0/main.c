#include <stdio.h>

int main()
{
	int n=0,a=0,b=0,c=0;
    scanf("%d", &n);
    a=n;
	while(n)
	{
		c=n%10;
	    b=b*10+c;
	    n/=10;
	}
	printf("a = %d\nb = %d\n",a,b);
    return 0;
}