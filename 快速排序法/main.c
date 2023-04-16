#include <stdio.h>

int qusort(int s[],int start,int end)
{
    int i=0,j=0;
    i=start;
    j = end;
    s[0]=s[start];
    while(i<j)
    {
        while(i<j&&s[0]<s[j])
        j--;
        if(i<j)
        {
            s[i]=s[j];
            i++;
        }
        while(i<j&&s[i]<=s[0])
        i++;
        if(i<j)
        {
            s[j]=s[i];
            j--;
        }
    }
    s[i]=s[0];
    if (start<i)
    qusort(s,start,j-1);
    if (i<end)
    qusort(s,j+1,end);
    return 0;
}
int main()
{
    int a[11]={0}, i=0;
    printf("10 numbers\n");
    for(i=1;i<=10;i++)
    scanf("%d",&a[i]);
    printf("before sort:\n");
    for(i=1;i<=10;i++)
    printf("%d ",a[i]);
    qusort(a,1,10);
    printf("\n");
    printf("after sort:\n");
    for(i=1;i<=10;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}