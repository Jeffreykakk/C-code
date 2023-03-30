#include <stdio.h>

int main() 
{
	int a,i,m=0;
	int arr[100];
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			arr[m]=i;
			m++;
		}
	}
	for(i=0;i<m;i++)
	printf("%d ",arr[i]);
	return 0;
}