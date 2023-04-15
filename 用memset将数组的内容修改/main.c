#include <stdio.h>
#include <string.h>

int main() 
{
	int arr[10]={0};
	int i=0;
	for(i=0;i<5;i++)
	{
		memset(arr+i,1,1);
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}