#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char arr1[10]={0},arr2[10]={0};
	fgets(arr1,7,stdin);
	fgets(arr2,9,stdin);
	printf(arr1);
	printf(arr2);
	return 0;
}