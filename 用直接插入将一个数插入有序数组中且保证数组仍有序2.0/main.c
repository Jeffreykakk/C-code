#include <stdio.h>

void place(int arr[11],int num,int sz)
{
	int i=0;
	for(i=sz-2;i>=0;i--)
	{
		if(num>arr[i])
		{
			arr[i+1]=num;
			break;
		}
		else
		arr[i+1]=arr[i];
	}
	if(i<0)
	arr[0]=num;
}

int main() 
{
	int arr[11]={1,4,6,8,9,10,14,16,17,18};
	int num=0,i=0,sz=sizeof(arr)/sizeof(arr[0]);
	scanf("%d",&num);
	printf("before place\n");
	for(i=0;i<sz-1;i++)
	printf("%d ",arr[i]);
	place(arr,num,sz);
	printf("\nafter place\n");
	for(i=0;i<sz;i++)
	printf("%d ",arr[i]);
	return 0;
}