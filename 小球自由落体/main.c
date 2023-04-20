#include <stdio.h>

int main() 
{
	double high=0,shift=0;
	int i=0,count=0;
	scanf("%lf %d",&high,&count);
	for(i=0;i<count;i++)
	{
		if(i==0)
		shift+=high;
		else
		shift+=(2*high);
		high=high/2.0;
	}
	printf("shift = %lf\nhigh = %lf",shift,high);
	return 0;
}