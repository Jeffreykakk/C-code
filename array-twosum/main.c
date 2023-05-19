#include <stdio.h>
#include <stdlib.h>

//给定一个整数数组nums和一个整数目标值 target，请你在该数组中找出和为目标值target的那两个整数，并返回它们的数组下标
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现
//你可以按任意顺序返回答案
//暴力解法
//时间复杂度O(n^2)

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* arr=(int*)malloc(2*sizeof(int));
    int i=0;
    for(i=0;i<numsSize;i++)
    {
        int j=0;
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                arr[0]=i;
                arr[1]=j;
                *returnSize=2;
                goto again;
            }
        }
    }
    again:
    return arr;
}


int main()
{
    int nums[]={2,7,11,15};
    int sz=sizeof(nums)/sizeof(nums[0]);
    int returnSize=0,i=0;
    int* arr=twoSum(nums,sz,9,&returnSize);
    for(i=0;i<returnSize;i++)
    printf("%d ",arr[i]);
    free(arr);
    arr=NULL;
    return 0;
}