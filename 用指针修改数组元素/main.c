#include <stdio.h>

int main()
{
	int arr[3]={1,2,3};
	int* p=arr;
	for(int i=0;i<3;i++)
	{
		*(p+i)=0;
	}
	for(int i=0;i<3;i++)
	{
		printf("%d ",arr[i]);
	}
    return 0;
}