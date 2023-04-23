#include <stdio.h>
#include <math.h>

int is_square(int n)
{
	int i=0;
	for(i=0;i<=sqrt(n);i++)
	{
		if(i*i==n)
		return 1;
	}
	return 0;
}

int main()
{
	int n=0;
	scanf("%d",&n);
	int ret=is_square(n);
	if(ret==1)
	printf("yes!\n");
	else
	printf("no!\n");
	return 0;
}