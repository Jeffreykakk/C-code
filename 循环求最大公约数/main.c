#include <stdio.h>

int main() 
{
	int a=0,b=0;
	scanf("%d,%d",&a,&b);
	for(int i=(a<b?a:b);;i--)
	{
		if(a%i==0&&b%i==0)
		{
			printf("%d",i);
			break;
		}
	}	
	return 0;
}