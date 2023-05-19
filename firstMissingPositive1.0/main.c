#include <stdio.h>
#include <stdlib.h>

//给你一个未排序的整数数组nums ，请你找出其中没有出现的最小的正整数
//请你实现时间复杂度为 O(n) 并且只使用常数级别额外空间的解决方案

//时间复杂度O(nlogn)，空间复杂度O(1)

int cmp(const void* e1,const void* e2)
{
    return *(int*)e1-*(int*)e2;
}

int firstMissingPositive(int* nums, int numsSize)
{
    int i=0,checkone=1;         //由题可得，缺失的正数肯定在[1,n+1]的闭区间内
    for(i=0;i<numsSize;i++)     //故将所有的负数和大于n的数转化成0，防止数据的溢出          
    {
        if(nums[i]>numsSize||nums[i]<0)  
        nums[i]=0;
    }
    qsort(nums,numsSize,sizeof(int),cmp);
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>0)
        {
            if(checkone)          //检查是否有1
            {
                if(nums[i]==1)
                checkone=0;
                else
                return 1;
            }
            if(i==numsSize-1)
            return nums[i]+1;
            if(nums[i]!=nums[i+1]&&nums[i+1]!=nums[i]+1)
            return nums[i]+1;
        }
    }
    return 1;       //说明数组内没有正整数
}

int main()
{
    int nums[]={-1,-2,-3};
    int ret=firstMissingPositive(nums,sizeof(nums)/sizeof(nums[0]));
    printf("%d\n",ret);
    return 0;
}