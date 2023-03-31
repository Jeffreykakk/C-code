#include <stdio.h>

int pick(int i,int count)
{
    if((i-1)%5==0)
    {
        count--;
        if(count==0)
        {
            return (i-1)*4/5;
        }
        pick((i-1)*4/5,count);
    }
    else
    return 0;
}
int main ()
{
    int i=0,count=5, ret=0;
    for(i =0;;i++)
    {
        ret=pick(i,count);
        if(ret!=0)
        break;
    }
    printf("%d\n%d",i,ret);
    return 0;
} 