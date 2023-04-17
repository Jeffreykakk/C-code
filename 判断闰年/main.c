#include <stdio.h>

int is_leap(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0)
	return 1;
	return 0;
}

int main() 
{
	int year=0;
	scanf("%d",&year);
	int ret=is_leap(year);
	if(ret==1)
	printf("leap year\n");
	else
	printf("not leap year\n");
	return 0;
}