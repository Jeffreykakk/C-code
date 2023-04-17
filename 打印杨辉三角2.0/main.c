#include <stdio.h>

float J(int i)
{
    int j=0;
    float k=1;
    for(j=1;j<=i;j++)
    k=k*j;
    return k;
}

float C(int i,int j)
{  
    float k=0;
    k=J(j)/(J(i)*J(j-i));
    return(k);
}

int main()
{
    int i=0,j=0,k=0,n=0; 
    while(i<=0||i>16)
    {
        printf("line : ");
        scanf("%d",&i);
    }
    for(j=0;j<i;j++)
    {
        for(k=1;k<=(i-j);k++)
        printf("  ");
        for(n=0;n<=j;n++)
        printf("%4.0f",C(n,j));
        printf("\n");
    }
    printf("\n");
    return 0;
}