#include <stdio.h>

int main() 
{
	int line=0,i=0,j=0;
	scanf("%d",&line);
	int arr[line][line];
	for(i=0;i<line;i++)
		for(j=0;j<line;j++)
		arr[i][j]=' ';
	for(i=0;i<line;i++)
	arr[i][i]='*';
	for(i=0;i<line;i++)
	arr[i][line-1-i]='*';
	for(i=0;i<line;i++)
	{
		for(j=0;j<line;j++)
		printf("%c",arr[i][j]);
		printf("\n");
	}
	return 0;
}