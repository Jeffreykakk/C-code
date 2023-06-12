#include <stdio.h>

// 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引
// 如果目标值不存在于数组中，返回它将会被按顺序插入的位置
// 请必须使用时间复杂度为 O(log n) 的算法

int searchInsert(int* nums, int numsSize, int target)
{
    int left=0;
    int right=numsSize-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(nums[mid]<target)
            left=mid+1;
        else if(nums[mid]>target)
            right=mid-1;
        else
        return mid;
    }
    return left;
}

int main()
{
    int nums[]={1,3,5,6};
    int sz=sizeof(nums)/sizeof(nums[0]);
    int ret=searchInsert(nums,sz,5);
    printf("%d\n",ret);
    return 0;
}