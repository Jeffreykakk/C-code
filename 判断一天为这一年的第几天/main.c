#include <stdio.h>

int is_leap(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0)
	return 1;
	return 0;
}

int judge_day(int year,int month,int day)
{
	int i=0,sum=0;
	if(is_leap(year)==1)
	{
		for(i=1;i<month;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			sum+=31;
			if(i==4||i==6||i==9||i==11)
			sum+=30;
			if(i==2)
			sum+=29;
		}
		sum+=day;
	}
	else
	{
		for(i=1;i<month;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			sum+=31;
			if(i==4||i==6||i==9||i==11)
			sum+=30;
			if(i==2)
			sum+=28;
		}
		sum+=day;
	}
	return sum;
}

int main() 
{
	int year=0,month=0,day=0;
	scanf("%d %d %d",&year,&month,&day);
	int ret=judge_day(year,month,day);
	printf("%d",ret);
	return 0;
}