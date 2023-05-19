#include <stdio.h>
#include <stdlib.h>


//给你一个按照非递减顺序排列的整数数组nums，和一个目标值target，请你找出给定目标值在数组中的开始位置和结束位置
//如果数组中不存在目标值 target，返回 [-1, -1]。
//你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题

int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    int* arr=(int*)malloc(sizeof(int)*2);
    if(numsSize==0)
    {
        arr[0]=-1;
        arr[1]=-1;
        *returnSize=2;
        return arr;
    }
    int left=0;
    int right=numsSize-1;
    while(left<=right&&nums[left]!=target)
        left++;
    while(left<=right&&nums[right]!=target)
        right--;
    if(left>right)      //找不到target
    {
        arr[0]=-1;
        arr[1]=-1;
        *returnSize=2;
    }
    else
    {
        arr[0]=left;
        arr[1]=right;
        *returnSize=2;
    }
    return arr;
}

int main()
{
    int nums[]={5,7,7,8,8,10};
    int returnSize=0;
    int* arr=searchRange(nums,sizeof(nums)/sizeof(nums[0]),6,&returnSize);
    int i=0;
    for(i=0;i<returnSize;i++)
    printf("%d ",arr[i]);
    free(arr);
    arr=NULL;
    return 0;
}