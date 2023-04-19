#include <stdio.h>
#include<math.h>

int isautomorphic(long num)
{
    if(num==0)
    return 1;
    long long n=pow(num,2),flag=n;
    int i=1;
    while(flag)
    {
        if(n%(int)pow(10,i)==num)
        return 1;
        i++;
        flag/=10;
    }
}

int main()
{
    long low=0,high=0;
    int i=0;
    scanf("%d %d",&low,&high);
    for(i=low;i<=high;i++)
    {
        if(isautomorphic(i)==1)
        printf("%d ",i);
    }
    return 0;
  }