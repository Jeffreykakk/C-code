#include <stdio.h>

int is_leap(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
    return 1;
    return 0;
}

int main() 
{
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year=0,month=0,day=0;
	while(scanf("%d %d",&year,&month)!=EOF)
	{
		day=days[month];
		if(month==2&&is_leap(year)==1)
		printf("%d\n",day+1);
		else
		printf("%d\n",day);
	}
	return 0;
}