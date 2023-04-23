#include <stdio.h>
#include <math.h>

int is_square(int n)
{
	int m=sqrt(n);
	if(pow(m,2)==n)
	return 1;
	else
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