#include <stdio.h>

int main() 
{
	int a=0,b=0,c=0;
	for(a=0;a<9;a++)
	{
		for(b=0;b<12;b++)
		{
			c=36-a-b;
			if(a*4+b*3+c/2==36&&c%2==0)
			printf("man:%d\nwoman:%d\nkid:%d\n",a,b,c);
		}
	}
	return 0;
}