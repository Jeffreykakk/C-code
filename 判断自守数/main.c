#include <stdio.h>
#include <math.h>

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
    return 0;
}

int main()
{
    long num=0;
    scanf("%d",&num);
    int ret=isautomorphic(num);
    if(ret==1)
    printf("yes!\n");
    else
    printf("no!\n");
    return 0;
  }