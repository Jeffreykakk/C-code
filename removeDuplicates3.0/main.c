#include <stdio.h>
#include <stdlib.h>

//给一个升序排列的数组nums ，原地删除重复出现的元素，使每个元素只出现一次
//返回删除后数组的新长度。
//元素的相对顺序保持一致
//去重算法
//1.先置dst为0，用i和j标记相邻元素，若i位置的元素不等于j位置的元素，把i位置的元素放在dst上，dst自增1
//2.若i位置的元素等于j位置的元素，i和j自增1
//3.把数组最后一个元素放在dst上
//空间复杂度O(1)，时间复杂度O(n)

int removeDuplicates(int* nums, int numsSize)
{
    int i=0;
    int j=1;
    int dst=0;
    while(i<numsSize-1)
    {
        if(nums[i]!=nums[j])
        {
            nums[dst]=nums[i];
            dst++;
            i++;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    nums[dst]=nums[i];
    return dst+1;
}

int main()
{
    int nums[]={1,1,2,3,4,4,5,5,6,8};
    int ret=removeDuplicates(nums,sizeof(nums)/sizeof(nums[0]));
    int i=0;
    for(i=0;i<ret;i++)
    printf("%d ",nums[i]);
    return 0;
}