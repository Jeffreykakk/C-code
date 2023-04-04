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
	if(a==b)
	printf("yes!\n");
	else
	printf("no!\n");
    return 0;
}