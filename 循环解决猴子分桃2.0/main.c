#include <stdio.h>

int main() 
{
	int last=0,first=0,count=5;
	for(;;last++)
	{
		first=last;
		while(count)
		{
			if(first%4==0)
			{
				count--;
				first=first*5/4+1;
			}
			else
			break;
		}
		if(count==0)
		break;
		else
		count=5;
	}
	printf("first = %d\nlast = %d",first,last);
	return 0;
}