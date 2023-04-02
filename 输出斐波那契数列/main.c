#include <stdio.h>
int main()
{
    int n1=1,n2=1,n,num;
    printf("how many?");
    scanf("%d",&n);
    if(n==1)
    printf("1\n");
    else if(n==2)
    printf("1 1\n");
    else
    {
        int i=0,arr[n];
        for( i=2;i<n;i++)
        {
            arr[0]=1;
            arr[1]=1;
            arr[i]=arr[i-2]+arr[i-1];
        }
        for( i = 0;i < n;i++) 
        {
            printf("%d ",arr[i]);
        }
        return 0;
    }
}