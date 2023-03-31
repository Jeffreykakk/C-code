#include <stdio.h>

int main() 
{
	int ret=0;
	int arr[7]={1,1,2,2,3,3,4};
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<sz;i++)
	{
		ret^=arr[i];
	}
	printf("%d",ret);
	return 0;
}