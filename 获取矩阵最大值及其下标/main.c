#include <stdio.h>

int main()
{
    int a[3][4]={0},i=0,j=0,max=0,max_i=0,max_j=0;
    for(i=0;i<3;i++)
    for(j=0;j<4;j++)
    scanf("%d",&a[i][j]);
    max=a[0][0];
    for(i=0;i<3;i++)
    {
	   	for(j=0;j<4;j++)
		printf("%d ",a[i][j]);
		printf("\n");
    }
    for(i=0;i<3;i++)
	    for(j=0;j<4;j++)
	    if(a[i][j]>max)
	    {
	        max=a[i][j];
	        max_i=i;
	        max_j=j;
	    }
    printf("max=a[%d][%d]=%d\n",max_i+1,max_j+1,max);
    return 0;
}