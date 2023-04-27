#include <stdio.h>

int main()
{
	int a=0;
	float b=0;
	scanf("%d %f",&a,&b);
	if(a<5)
	{
		if(b<40)
		printf("%.2f",30*b);
		else
		printf("%.2f",30*1.5*(b-40)+30*40);
	}
	else
	{
		if(b<40)
		printf("%.2f",50*b);
		else
		printf("%.2f",50*1.5*(b-40)+50*40);
	}
	return 0;
}
