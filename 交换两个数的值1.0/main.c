#include <stdio.h>

int main() 
{
	int a=5,b=8,temp;
	printf("before: a = %d b = %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after:  a = %d b = %d\n",a,b);
	return 0;
}