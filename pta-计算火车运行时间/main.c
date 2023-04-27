#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%d %d",&a,&b);
	c=b/100-a/100;;
	d=a%100;
	e=b%100;
	if(d<=e)
	{
		f=e-d;
		printf("%02d:%02d",c,f);
	}
	else
	{
		f=60-(d-e);
		printf("%02d:%02d",c-1,f);
	}
	return 0;
}