#include <stdio.h>
#include <math.h>

int main() 
{
	int i,j;
	for(i=101;i<200;i+=2)
	{
		for(j=3;j<=sqrt(i);j++)
		{
			if(i%j==0)
			break;
		}
		if(j>sqrt(i))
		printf("%d ",i);
	}
	return 0;
}