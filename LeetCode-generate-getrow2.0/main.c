#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int* getRow(int rowIndex, int* returnSize)
{
    *returnSize=rowIndex+1;
    int* row=(int*)malloc(sizeof(int)*(rowIndex+1));
    int i=0;
    int** gen=(int**)malloc(sizeof(int*)*(rowIndex+1));
    for(i=0;i<=rowIndex;i++)
    gen[i]=(int*)malloc(sizeof(int)*(i+1));
    for(i=0;i<=rowIndex;i++)
    {
        int j=0;
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            gen[i][j]=1;
            if(j>0&&j<i)
            gen[i][j]=gen[i-1][j-1]+gen[i-1][j];
        }
    }
    memcpy(row,gen[rowIndex],sizeof(int)*(rowIndex+1));
    for(i=0;i<=rowIndex;i++)
    free(gen[i]);
    free(gen);
    return row;
}

int main()
{
    int row=0,returnSize=0;
    scanf("%d",&row);
    int* arr=getRow(row,&returnSize);
    for(int i=0;i<returnSize;i++)
    printf("%d ",arr[i]);
    printf("\n");
    free(arr);
    system("pause");
    return 0;
}