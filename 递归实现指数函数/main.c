#include <stdio.h>

int my_pow(int x,int n)
{
	if(n==0)
	return 1;
	else
	return x*my_pow(x,n-1);
}

int main() 
{
	int x=0,n=0;
	scanf("%d %d",&x,&n);
	int ret=my_pow(x,n);
	printf("%d",ret);
	return 0;
}