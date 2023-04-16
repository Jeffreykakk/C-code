#include <stdio.h>

int shsort(int s[], int n)
{
    int i=0,j=0,d=0;
    d=n/2;
    while(d>=1)
    {
        for(i=d+1;i<=n;i++)
        {
            s[0]=s[i];
            j=i-d;
            while((j>0)&&(s[0]<s[j]))
            {
                s[j+d]=s[j];
                j=j-d;
            }
            s[j + d]=s[0];
        }
        d = d/2;
    }
    return 0;
}
int main()
{
    int a[11]={0},i=0;
    printf(" 10 numbers:\n");
    for(i=1;i<=10;i++)
    scanf("%d",&a[i]);
    printf("before sort:\n");
    for(i=1;i<=10;i++)
    printf("%d ",a[i]);
    printf("\n");
    shsort(a, 10);
    printf("after sort:\n");
    for(i=1;i<=10;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}