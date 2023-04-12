#include<stdio.h>
#include <math.h>

int fac(int x)
{
    if(x==0)
    return 1;
    else
    return x*fac(x-1);
}

int main()
{
    int i=0;
    double sum=0,num=1;
    while(fabs(num)>=pow(10,-7))
    {
        double ret=(double)fac(i);
        num=(1.0/ret);
        sum+=num;
        i ++;
    }
    printf("e=%lf",sum);
 return 0;
}