#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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

int cmp(const void* e1,const void* e2)
{
	return *(int*)e1-*(int*)e2;
}

int main() 
{
	int i=0,j=0;
	int arr1[10]={0},arr2[10]={0};
	for(i=0;i<10;i++)
	{
		if(i==9)
		scanf("%d",arr1+i);
		else
		scanf("%d,",arr1+i);
	}
	for(i=0;i<10;i++)
	{
		if(isprime(arr1[i])==1)
		{
			arr2[j]=arr1[i];
			j++;
		}
	}
	if(j==0)
	printf("Not found!\n");
	else
	{
		qsort(arr2,j,4,cmp);
		for(i=0;i<j;i++)
		{
			if(i==j-1)
			printf("%d",arr2[i]);
			else
			printf("%d,",arr2[i]);
		}
	}
	return 0;
}