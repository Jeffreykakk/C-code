#include <stdio.h>

void place(int arr[11],int num,int sz)
{
	if(num>arr[sz-2])
	arr[sz-1]=num;
	else
	{
		int i=0;
		for(i=0;i<sz-1;i++)
		{
			if(num<arr[i])
			{
				int tmp1=arr[i];
				arr[i]=num;					//place the num
				int j=0;
				for(j=i+1;j<sz;j++)		    //move
				{
					int tmp2=arr[j];
					arr[j]=tmp1;
					tmp1=tmp2;
				}
				break;
			}
		}
	}
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