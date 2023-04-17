#include <stdio.h>


int main() 
{
	int day=0,end=1,i=0,start=0;
	scanf("%d",&day);
	i=day-1;
	while(i--)
	{
		start=(end+1)*2;
		end=start;
		
	}
	printf("%d",start);
	return 0;
}