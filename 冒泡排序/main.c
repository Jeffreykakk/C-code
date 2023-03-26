#include <stdio.h>

void sort(int arr[],int sz)
{
	int i=0,j=0;
	for(i=0;i<sz-1;i++)
	{
		int flag=1;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=0;
			}
		}
		if(flag==1)
		break;
	}
}

int main() 
{
	int arr[]={4,6,8,3,2,7,9,1,5,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	sort(arr,sz);
	for(int i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}