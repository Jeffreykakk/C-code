#include <stdio.h>

void print(int (*p)[5],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		printf("%d ",*(*(p+i)+j));
		printf("\n");
	}
}

int main() 
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print(arr,3,5);
	return 0;
}