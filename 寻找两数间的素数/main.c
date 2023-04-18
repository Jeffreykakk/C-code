#include <stdio.h>
#include <math.h>

int isprime(int n)
{
	if(n<2)
	return 0;
    int i=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}


int main() 
{
	int i=0,low=0,high=0;
	scanf("%d %d",&low,&high);
	for(i=low;i<=high;i++)
	{
		if(isprime(i)==1)
		printf("%d ",i);
	}
	return 0;
}