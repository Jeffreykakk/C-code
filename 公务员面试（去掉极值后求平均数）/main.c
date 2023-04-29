#include <stdio.h>

int main() 
{
	float average=0,max=0,min=0,sum=0,score=0;
	int i=0;
	for(i=0;i<7;i++)
	{
		scanf("%f",&score);
		if(i==0)
		{
			max=score;
			min=score;
		}
		else
		{
			if(score>max)
			max=score;
			if(score<min)
			min=score;
		}
		sum+=score;
	}
	average=(sum-min-max)/5.0;
	printf("%.2f",average);
	return 0;
}