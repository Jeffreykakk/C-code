#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 整数的数组形式num是按照从左到右的顺序表示其数字的数组
// 例如，对于num=1321，数组形式是[1,3,2,1]
// 给定num，整数的数组形式和整数 k，返回整数num+k的数组形式
// 提示：
// 1 <= num.length <= 10^4
// 0 <= num[i] <= 9
// num 不包含任何前导零，除了零本身
// 1 <= k <= 10^4

//采用逐位相加的方法，满10下一位加1
//可以解决整数溢出的问题


int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
{
    int i=numSize-1,j=0,flag=0,add=0,len=(numSize+1)>10?(numSize+1):10;
    *returnSize=0;
    int* arr=(int*)malloc(sizeof(int)*len);
    while(i>=0)
    {
        add=num[i]+k%10+flag;
        k/=10;
        if(add<10)
        {
            arr[i]=add;
            flag=0;
        }
        else
        {
            arr[i]=add%10;
            flag=1; 
        }
        (*returnSize)++;
        i--;
    }
    k+=flag;                                          //解决i=0没进位的问题
    while(k!=0)                                       //k没加完的情况
    { 
        for(j=(*returnSize)-1;j>=0;j--)
        arr[j+1]=arr[j];
        arr[0]=k%10;
        (*returnSize)++;
        k/=10;
    }
    return arr;
}


int main()
{
    int k=0,returnSize=0;
    int num[]={9,9,9};
    int numSize=sizeof(num)/sizeof(num[0]);
    scanf("%d",&k);
    int* arr=addToArrayForm(num,numSize,k,&returnSize);
    int i=0;
    for(i=0;i<returnSize;i++)
    printf("%d ",arr[i]);
    free(arr);
    return 0;
}


