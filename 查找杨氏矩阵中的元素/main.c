#include <stdio.h>

int find(int arr[3][3],int* r,int* c,int k)
{
	int x=0;
	int y=*c-1;
	while(x<(*r)&&y>=0)
	{
		if(arr[x][y]<k)
		x++;
		else if(arr[x][y]>k)
		y--;
		else
		{
			*r=x;
			*c=y;
			return 1;
		}
	}
	return 0;
}

int main() 
{
	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};		// 1 2  3  4
	int x=sizeof(arr)/sizeof(arr[0]);				// 5 6  7  8
	int y=sizeof(arr[0])/sizeof(arr[0][0]);			// 9 10 11 12
	int k=0;
	scanf("%d",&k);
	int ret=find(arr,&x,&y,k);
	if(ret==1)
	printf("ok\nindex:%d %d ",x,y);
	else
	printf("can not find\n");
	return 0;
}