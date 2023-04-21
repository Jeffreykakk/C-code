#include <stdio.h>

void move(int arr[],int n, int m)
{
	while(m--)
	{
		int end=arr[n-1],i=0;
		for(i=n-1;i>0;i--)
		arr[i]=arr[i-1];
		arr[i]=end;
	}
}

int main() 
{
	int n=0,m=0,i=0;
	printf("n m:");
	scanf("%d %d",&n,&m);
	int arr[n];
	printf("%d numbers:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	move(arr,n,m);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}