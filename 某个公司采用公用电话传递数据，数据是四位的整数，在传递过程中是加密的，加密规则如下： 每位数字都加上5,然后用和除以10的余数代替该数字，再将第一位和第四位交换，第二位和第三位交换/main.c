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

void decode(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		arr[i]+=5;
		arr[i]%=10;
	}
	reverse(arr,arr+sz-1);
}

void init(int arr[],int sz)
{
	int i=0,n=0;
	scanf("%d",&n);
	for(i=sz-1;i>=0;i--)
	{
		arr[i]=n%10;
		n/=10;
	}
}

void print(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	printf("%d",arr[i]);
}

int main() 
{
	int arr[4]={0},sz=sizeof(arr)/sizeof(arr[0]);
	init(arr,sz);
	decode(arr,sz);
	print(arr,sz);
	return 0;
}