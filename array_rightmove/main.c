#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//给定一个整数数组nums，将数组中的元素向右轮转k个位置，其中k是非负数
//开辟一个新的数组，将轮转的元素放在新数组的左边，未轮转的放在新数组的右边
//空间复杂度为O(n),时间复杂度为O(n)

void right_move(int* nums,int n,int m)
{
    int* arr=malloc(n*sizeof(int));
    int i=0,j=0;
    for(i=n-m,j=0;i<n;i++,j++)
    arr[j]=nums[i];
    for(i=0;j<n;j++,i++)
    arr[j]=nums[i];
    for(i=0;i<n;i++)
    nums[i]=arr[i];
    free(arr);
    arr=NULL;
}

int main() 
{
	int n=0,m=0,i=0;
	printf("n m:");
	scanf("%d %d",&n,&m);
	int nums[n];
	printf("%d numbers:",n);
	for(i=0;i<n;i++)
	scanf("%d",&nums[i]);
    right_move(nums,n,m%n);
	for(i=0;i<n;i++)
	printf("%d ",nums[i]);
    system("pause");
	return 0;
}