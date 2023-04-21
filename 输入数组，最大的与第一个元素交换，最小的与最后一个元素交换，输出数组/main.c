#include <stdio.h>

void swap(int arr[10])
{
	int max=arr[0],min=arr[9],i=0,index_max=0,index_min=0;
	for(i=1;i<10;i++)		//find max
	{
		if(max<arr[i])
		{
			max=arr[i];
			index_max=i;
		}
	}
	for(i=0;i<9;i++)		//find min
	{
		if(min>arr[i])
		{
			min=arr[i];
			index_min=i;
		}
	}
	arr[index_max]=arr[0];
	arr[0]=max;
	arr[index_min]=arr[9];
	arr[9]=min;
}

int main() 
{
	int arr[10]={0},i=0;
	printf("10 numbers: ");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	swap(arr);
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	return 0;
}