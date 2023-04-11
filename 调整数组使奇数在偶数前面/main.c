#include <stdio.h>

int main() 
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0,right=sz-1;
	while(left<right)
	{
		while( (left<right) && (arr[left]%2==1) )
		left++;
		while( (left<right) && (arr[right]%2==0) )
		right--;
		if(left<right)
		{
			int temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
		}
	}
	for(int i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}