#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	while(a%b)
	{
		b=a%b;	
	}
	printf("%d",b);
	return 0;
}