#include <stdio.h>

void sort(int a[])
{
    int i=0,j=0;
    for(i=1;i<=9;i++)
    for (j=i+1;j<=10;j++)
    if(a[i]>a[j])
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
int main()
{
    int i=0,j=0,a[11]={0};
    printf("10 numbers\n");
    for(i=1;i<11;i++)
    scanf("%d",&a[i]);
    printf("before sort\n");
    for(i=1;i<=10;i++)
    printf("%d ", a[i]);
    printf("\n");
    sort(a);
    printf("after sort\n");
    for(i=1;i<=10;i++)
    printf("%d ", a[i]);
    printf("\n");
    return 0;
}