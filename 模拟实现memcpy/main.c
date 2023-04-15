#include <stdio.h>

void* mymemcpy(void* des,const void* sou,int n)	
{
	void* start=des;		//00 00 00 00
	while(n--)				//10 00 00 00
	{
		*((char*)des)=*((char*)sou);
		des=(char*)des+1;
		sou=(char*)sou+1;
	}
	return start;
}


int main() 
{
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int arr2[10]={0};
	int n=0,i=0,sz=sizeof(arr2)/sizeof(arr2[0]);
	scanf("%d",&n);
	mymemcpy(arr2,arr1,n*4);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}