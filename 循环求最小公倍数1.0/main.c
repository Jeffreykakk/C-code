#include <stdio.h>

int main() 
{
	int i=0,a=0,b=0;
	scanf("%d %d",&a,&b);
	for(i=(a<b?a:b);;i++)
	{
		if(i%a==0&&i%b==0)
		break;
	}
	printf("%d",i);
	return 0;
}