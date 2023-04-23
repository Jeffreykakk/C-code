#include <stdio.h>
#include <math.h>

int is_square(int n)
{
	int m=sqrt(n);
	if(pow(m,2)==n)
	return 1;
	else
	return 0;
}


int main()
{
	int low=0,high=0,i=0;
	scanf("%d %d",&low,&high);
	for(i=low;i<=high;i++)
	{
		if(is_square(i)==1)
		printf("%d ",i);
	}
	return 0;
}
