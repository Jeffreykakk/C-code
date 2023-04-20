#include <stdio.h>

int count(int n)
{
	if(n==1)
	return 1;
	else if(n==2)
	return 2;
	else 
	return count(n-1)+count(n-2);
}

int main() 
{
	int n=0;
	scanf("%d",&n);
	printf("%d",count(n));
	return 0;
}