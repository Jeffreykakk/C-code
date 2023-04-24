#include <stdio.h>

int main()
{
    int n=0,j=0,i=0,m=0,k=0,lim=0;
    scanf("%d %d",&n,&lim);
    int num[n];
    for (j=0;j<n;j++)
    num[j]=j+1;
    while(m<n-1)
    {
        if (num[i]!=0)
        k++;
        if (k==lim)
        {
            k=0;
            num[i]=0;
            m++;
        }
        i++;
        if (i==n)
        i=0;
    }
	for (j=0;j<n;j++)
    {
        if (num[j]!=0)
        printf("%d",num[j]);
    }
}