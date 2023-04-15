#include <stdio.h>

void* mymemcpy(void* des,const void* sou,int n)	
{
	void* start=des;		
	if(des<sou)
	{
		while(n--)	//front to back
		{
			*((char*)des)=*((char*)sou);
			des=(char*)des+1;
			sou=(char*)sou+1;
		}
	}
	else
	{
		while(n--)	//back to front
		{
			*((char*)des+n)=*((char*)sou+n);
		}
	}
	return start;
}


int main() 
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};			//1 2 3 4 5 6 7 8 9 10
	int i=0,sz=sizeof(arr)/sizeof(arr[0]);		//1 2 1 2 3 4 5 8 9 10
	mymemcpy(arr+2,arr,20);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}