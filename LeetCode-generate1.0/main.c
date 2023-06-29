#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    *returnSize=numRows;
    *returnColumnSizes=(int*)malloc(sizeof(int)*numRows);
    int** row=(int**)malloc(sizeof(int*)*numRows);
    int i=0;
    for(i=0;i<numRows;i++)
    {
        row[i]=(int*)malloc(sizeof(int)*(i+1));
        (*returnColumnSizes)[i]=i+1;
    }
    for(i=0;i<numRows;i++)
    {
        int j=0;
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            row[i][j]=1;
            if(j>0&&j<i)
            row[i][j]=row[i-1][j-1]+row[i-1][j];
        }
    }
    return row;
}

int main()
{
    int row=0,returnSize=0;
    int* returnColumnSizes=NULL;
    scanf("%d",&row);
    int** gen=generate(row,&returnSize,&returnColumnSizes);
    int i=0;
    for(i=0;i<returnSize;i++)
    {
        int j=0;
        for(j=0;j<returnColumnSizes[i];j++)
        printf("%d ",gen[i][j]);
        printf("\n");
    }
    for(i=0;i<row;i++)
    free(gen[i]);
    free(gen);
    free(returnColumnSizes);
    system("pause");
    return 0;
}