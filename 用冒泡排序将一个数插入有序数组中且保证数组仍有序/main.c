#include <stdio.h>

void place(int arr[11],int num,int sz)
{
	arr[10]=num;
	int i=0;
	for(i=sz-1;i>0;i--)
	{
		int flag=1;
		if(arr[i]<arr[i-1])
		{
			int tmp=arr[i-1];
			arr[i-1]=arr[i];
			arr[i]=tmp;
			flag=0;
		}
		if(flag==1)
		break;
	}
}

int main() 
{
	int arr[11]={0,1,2,3,4,5,6,7,8,9};
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