#include <stdio.h>

int Sum(int low,int high)
{
	int i=0,sum=0;
	for(i=low;i<=high;i++)
	sum+=i;
	return sum;
}

int main() 
{
	int low=0,high=0;
	scanf("%d %d",&low,&high);
	int ret=Sum(low,high);
	printf("%d",ret);
	return 0;
}