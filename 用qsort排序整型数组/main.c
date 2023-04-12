#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void* e1,const void* e2)
{
	return (*((int*)e1)-*((int*)e2));
}

int main()
{
	int arr[10]={1,3,5,7,9,0,2,4,6,8};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for(int i=0;i<sz;i++)
	printf("%d ",arr[i]);
	return 0;
}