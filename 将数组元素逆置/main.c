#include <stdio.h>

int main() 
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int left=0,right=sizeof(arr)/sizeof(arr[0])-1;
	while(left<right)
	{
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left++;
		right--;
	}
	for(int i=0;i<10;i++)
	printf("%d ",arr[i]);
	return 0;
}