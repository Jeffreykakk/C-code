#include <stdio.h>
#define find_number 100

int main()
{
    int pos[10]={0},i=0,k=0;
    for(i=0;i<10;i++)
    pos[i]=1;
    for(i=1;i<=find_number;i++)
    {
        if(i==1)
        pos[k]=0;
        else
        {
            k=(k+i)%10;
            pos[k]=0;
        }
    }
    for(i=0;i<10;i++)
    {
        if(pos[i]==1)
        printf("%d ",i+1);
    }
    return 0;
}
