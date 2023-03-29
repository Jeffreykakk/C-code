#include <stdio.h>

int main()
{
    int n,i,num=1;
    scanf("%d",&n);
    if(n==0)
    printf("0!=1\n");
    else
    {
        for(i=1;i<=n;i++)
        {
            num*=i;
        }
        printf("%d!=%d",n,num);
    }
    return 0;
}