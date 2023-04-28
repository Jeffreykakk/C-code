#include <stdio.h>

int main() 
{
	int i=0;
	for(i=1000;i<10000;i++)
	{
		int a=i/100,b=i%100;
		if((a+b)*(a+b)==i)
		printf("%d\n",i);
	}
	return 0;
}