#include <stdio.h>

int insort(int s[], int n)    
{
    int i=0,j=0;
    for(i=2;i<=n;i++)    
    {
        s[0]=s[i];    
        j=i-1;    
        while(s[0]<s[j])
        {
            s[j+1]=s[j];  
            j--;    
        }
        s[j+1]=s[0];    
    }
    return 0;
}

int main()
{
    int a[11],i;    
    printf("10 numbers:\n");
    for (i =1;i<=10;i++)
    scanf("%d",&a[i]);    
    printf("before sort:\n");
    for(i=1;i<11;i++)
    printf("%d ",a[i]);    
    insort(a,10);   
    printf("\n after sort:\n");
    for(i=1;i<11;i++)
    printf("%d ",a[i]); 
    printf("\n");
    return 0;
}