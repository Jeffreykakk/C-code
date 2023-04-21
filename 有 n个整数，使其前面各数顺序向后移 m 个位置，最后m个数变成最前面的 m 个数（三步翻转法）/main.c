#include <stdio.h>

void reverse(int* left,int* right)
{
	while(left<right)
	{
		int tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}

void swap(int arr[],int n, int m)
{
	reverse(arr,&arr[n-1]);
	reverse(arr,&arr[m-1]);
	reverse(&arr[m],&arr[n-1]);
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
	swap(arr,n,m);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}