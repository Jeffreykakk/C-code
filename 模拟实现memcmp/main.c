#include <stdio.h>

int mymemcmp(const void* p1,const void* p2,int n)
{
	while(n--)		//00 00 00 00
	{
		if(*(char*)p1!=*(char*)p2)
		return *(char*)p1-*(char*)p2;
		p1=(char*)p1+1;
		p2=(char*)p2+1;
	}
	return 0;
}

int main() 
{
	int arr1[10]={0,1,2,3,4,5,6,7,8,9};
	int arr2[10]={0,1,2,3,4,9,8,7,6,5};
	int ret=mymemcmp(arr1,arr2,21);
	printf("%d",ret);
	return 0;
}