#include <stdio.h>

typedef struct Date
{
    int year;
    int month;
    int day;
}Date;

void Initdate(Date* date1,Date* date2)
{
    printf("first date\n");
    printf("year:");
    scanf("%d",&date1->year);
    printf("month:");
    scanf("%d",&date1->month);
    printf("day:");
    scanf("%d",&date1->day);
    printf("second date\n");
    printf("year:");
    scanf("%d",&date2->year);
    printf("month:");
    scanf("%d",&date2->month);
    printf("day:");
    scanf("%d",&date2->day);
}

int is_leap(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
    return 1;
    return 0;
}

int dayofyear(Date* date)
{
    int i=0,sum=0;
    if(is_leap(date->year)==1)
    {
        for(i=1;i<date->month;i++)
        {
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            sum+=31;
            if(i==4||i==6||i==9||i==11)
            sum+=31;
            if(i==2)
            sum+=29;
        }
        sum+=date->day;
    }
    else
    {
        for(i=1;i<date->month;i++)
        {
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            sum+=31;
            if(i==4||i==6||i==9||i==11)
            sum+=31;
            if(i==2)
            sum+=28;
        }
        sum+=date->day;
    }
    return sum;
}

int intervalofday(Date* date1,Date* date2)
{
    int i=0,sum=0;
    int day1=dayofyear(date1),day2=dayofyear(date2);
    sum-=day1;
    sum+=day2;
    for(i=date1->year;i<date2->year;i++)
    {
        if(is_leap(i)==1)
        sum+=366;
        else
        sum+=365;
    }
    return sum;
}

int main()
{
    Date date1={0},date2={0};
    Initdate(&date1,&date2);
    int interval=intervalofday(&date1,&date2);
    printf("interval between two days:%d\n",interval);
    return 0;
}