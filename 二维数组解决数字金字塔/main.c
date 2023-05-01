#include <stdio.h>

void pyramid(int n)
{
	int i=0,j=0;
	char arr[n][2*n-1];
	for(i=0;i<n;i++)
		for(j=0;j<(2*n-1);j++)
			arr[i][j]=' ';	
	for(i=0;i<n;i++)
	{
		for(j=(n-1-i);j<=(n-1+i);j+=2)
		arr[i][j]=i+49;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<(2*n-1);j++)
		printf("%c",arr[i][j]);	
		printf("\n");
	}
}

int main() 
{
	int n=0;
	scanf("%d",&n);
	pyramid(n);
	return 0;
}