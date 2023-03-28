#include<stdio.h>
int main()

{
    int i,n;
    printf("how many?");
    scanf("%d",&n);
    int shuzi[n];
    printf("separate the numbers with space\n");
    for(i=0;i<n;i++)
    scanf("%d",&shuzi[i]);
    int max=shuzi[0];
    for(i=1;i<n;i++)
    {
        if (max<shuzi[i])
        max=shuzi[i];
    }
    printf("max=%d",max);
    return 0;
}