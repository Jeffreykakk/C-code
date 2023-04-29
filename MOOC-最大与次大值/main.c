#include <stdio.h>

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
	int max1=arr[0],max2=0,min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max1)
		max1=arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}	
	max2=min;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max2&&arr[i]!=max1)
		max2=arr[i];
	}
	printf("%d,%d",max1,max2);
	return 0;
}