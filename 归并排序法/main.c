#include <stdio.h>

int merge(int r[],int s[],int x1,int x2,int x3)
{
    int i=0,j=0,k=0;
    i=x1;
    j=x2+1;
    k=x1;
    while((i<=x2)&&(j<=x3))
    if(r[i]<=r[j])
    {
        s[k] = r[i];
        i++;
        k++;
    }
    else
    {
        s[k]=r[j];
        j++;
        k++;
    }
    while(i<=x2)
    s[k++]=r[i++];
    while(j<=x3)
    s[k++]=r[j++];
    return 0;
}

int merge_sort(int r[],int s[],int m,int n)
{
    int p=0;
    int t[20]={0};
    if(m==n)
    s[m]=r[m];
    else
    {
        p=(m+n)/2;
        merge_sort(r,t,m,p);
        merge_sort(r,t,p+1,n);
        merge(t,s,m,p,n);
    }
    return 0;
}

int main()
{
    int a[11]={0};
    int i=0;
    printf("10 numbers:\n");
    for(i=1;i<=10;i++)
    scanf("%d",&a[i]);
    printf("before sort\n");
    for(i=1;i<=10;i++)
    printf("%d ",a[i]);
    printf("\n");
    merge_sort(a,a,1,10);
    printf("after sort\n");
    for(i=1;i<=10;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}