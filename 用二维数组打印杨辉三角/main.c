#include <stdio.h>

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

int main() 
{
	int arr[100][100]={0};
	int line=0;
	scanf("%d",&line);
	for(int i=0;i<line;i++)
	{
		int j=0;
		for(j=0;j<=i;j++)
		{
			if(j==0||j==i)
			arr[i][j]=1;
			if(i>=2&&j>0)
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
			
	}
	for(int i=0;i<line;i++)
	{
		for(int j=0;j<=i;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 0;
}