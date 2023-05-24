#include <stdio.h>

//当n取很大值时，会超出时间限制
double myPow(double x, int n)
{
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else 
    {
        if(n==0)
        return 1;
        else if(n>0)
        {
            double mul=1;
            int i=0;
            for(i=0;i<n;i++)
            mul*=x;
            return mul;
        }
        else
        {
            double mul=1;
            x=1.0/x;
            long long m=n;      //防止整型溢出
            m=-m;
            int i=0;
            for(i=0;i<m;i++)
            mul*=x;
            return mul;
        }
    }
}

int main()
{
    printf("%lf\n",myPow(2,5));
    return 0;
}