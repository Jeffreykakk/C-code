#include <stdio.h>

int main() 
{
	int a=0,b=0,i=0;
	scanf("%d %d",&a,&b);
	for(i=1;;i++)
	{
		if(((a>b?a:b)*i)%(a<b?a:b)==0)
		break;
	}
	printf("%d",(a>b?a:b)*i);
	return 0;
}