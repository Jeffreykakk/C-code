#include<stdio.h>
#include <math.h>
int main()
{
    int i=1,flag=1;
    double sum=0,num=1;
    while(fabs(num)>=pow(10,-6))
    {
        num=(1.0/i)*flag*4;
        flag=-flag;
        sum+=num;
        i +=2;
    }
    printf("pi=%lf",sum);
 return 0;
}