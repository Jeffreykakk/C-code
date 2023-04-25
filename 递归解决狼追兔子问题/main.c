#include <stdio.h>
#define find_number 20

void find(int pos[],int count)
{
    static int k=0;
    if(count>find_number)
    return;
    else
    {
        if(count==1)
        pos[k]=0;
        else
        {
            k=(k+count)%10;
            pos[k]=0;
        }
        count++;
        find(pos,count);
    }
}

int main()
{
    int pos[10]={0},i=0,count=1;
    for(i=0;i<10;i++)
    pos[i]=1;
    find(pos,count);
    for(i=0;i<10;i++)
    {
        if(pos[i]==1)
        printf("%d ",i+1);
    }
    return 0;
}