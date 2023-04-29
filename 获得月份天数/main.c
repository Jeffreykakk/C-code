#include <stdio.h>

int is_leap(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
    return 1;
    return 0;
}

int main() 
{
	int year=0,month=0;
	while(scanf("%d %d",&year,&month)!=EOF)
	{
		if(is_leap(year)==1)
		{
			switch(month)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					printf("31\n");
					break;
				case 2:
					printf("29\n");
					break;
				default:
					printf("30\n");
					break;
			}
		}
		else
		{
			switch(month)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					printf("31\n");
					break;
				case 2:
					printf("28\n");
					break;
				default:
					printf("30\n");
					break;
			}
		}
	}
	return 0;
}