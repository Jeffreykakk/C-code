#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,i,j,sum=0;
    scanf("%d",&n);
    int x=pow(10,n-1),y=pow(10,(n));
    for(i=x;i<y;i++)
    {
        j=i;
        while(j)
        {
            m=j%10;
            j=j/10;
            sum+=pow(m,n);
        }
        if(sum==i)
        printf("%d\n",i);
        sum=0;
    }
    return 0;
}