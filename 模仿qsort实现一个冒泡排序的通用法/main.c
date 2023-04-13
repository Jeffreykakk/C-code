#include <stdio.h>

void swap(char* p1,char* p2,int wide)
{
	for(int i=0;i<wide;i++)
	{
		char temp=*p1;
		*p1=*p2;
		*p2=temp;
		p1++;
		p2++;
	}	
}

void bubble_sort(void* base,int sz,int wide,int (*p)(const void*,const void*))
{
	for(int i=0;i<sz-1;i++)
	{
		int flag=1;
		for(int j=0;j<sz-1-i;j++)
		{
			//10 00 00 00 20 00 00 00
			if(p(( (char*) base )+j*wide,( (char*) base )+(j+1)*wide)>0)
			{
				swap(( (char*) base )+j*wide,( (char*) base )+(j+1)*wide,wide);
				flag=0;
			}
			
		}
		if(flag==1)
		break;
	}
}

int cmp_int(const void* e1,const void* e2)
{
	return (*((int*)e1)-*((int*)e2));
}

int main()
{
	int arr[10]={1,3,5,7,9,0,2,4,6,8};		
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	for(int i=0;i<sz;i++)
	printf("%d ",arr[i]);
	return 0;
}