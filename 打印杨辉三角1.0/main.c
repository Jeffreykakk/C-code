#include <stdio.h>
#define N 14

int main()
{
    int i, j, k, n=0, a[N][N];
    while(n<=0||n>=13)
    {
        printf("line:");
        scanf("%d",&n);
    }
    for(i=1;i<=n;i++)
    a[i][1] = a[i][i] = 1;
    for(i=3;i<=n;i++)
    for(j=2;j<=i-1;j++)
    a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(i=1;i<=n;i++)
	{
        for(k=1;k<=n-i;k++)
        printf("   ");
        for(j=1;j<=i;j++)
        printf("%6d",a[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}