#include <stdio.h>

int main() 
{
	int i=0,j=0;
	for(i=1000;i<10000;i++)
	{
		int a=i%10,b=(i/10)%10;
		int c=(i/100)%10,d=i/1000;
		if(a==b&&c==d)
		{
			for(j=32;j<100;j++)
			{
				if(j*j==i)
				printf("The number is %d.\n",i);
			}
		}
	}
	return 0;
}