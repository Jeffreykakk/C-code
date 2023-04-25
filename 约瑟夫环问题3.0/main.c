#include <stdio.h>

int josef(int a[],int n,int m)
{
    int i=0,j=0,k=0;
    for(i=0;i<n;i++)
    {
        j=1;
        while(j<m)
        {
            while(a[k]==0)
            k=(k+1)%n;
            j++;
            k=(k+1)%n;
        }
        while(a[k]==0)
        k=(k+1)%n;
        if(i==n-1)
        printf("%d ",a[k]);
        a[k]=0;
    }
    return 0;
}

int main()
{
    int i=0,n=0,m=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    a[i]=i+1;
    josef(a,n,m);
    return 0;
}