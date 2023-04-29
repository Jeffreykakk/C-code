#include <stdio.h>
#include <stdlib.h>

int cmp(const void* e1,const void* e2)
{
	return *(int*)e2-*(int*)e1;
}

int main() 
{
	int n=0,i=0;
	scanf("%d",&n);
	int arr[10]={0};
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		scanf("%d",arr+i);
		else
		scanf("%d,",arr+i);
	}
	qsort(arr,n,4,cmp);
	printf("%d,%d",arr[0],arr[1]);
	return 0;
}