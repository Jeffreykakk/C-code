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
    int i=1,flag=1,n=0;
    double sum=0,num=1;
    scanf("%d",&n);
    while(fabs(num)>=pow(10,-5))
    {
        double ret=(double)fac(i);
        num=(pow(n,i)*1.0/ret)*flag;
        flag=-flag;
        sum+=num;
        i+=2;
    }
    printf("sin(%d)=%lf",n,sum);
 return 0;
}