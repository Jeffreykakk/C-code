#include <stdio.h>
#include <stdlib.h>

//给一个升序排列的数组nums ，原地删除重复出现的元素，使每个元素只出现一次
//返回删除后数组的新长度。
//元素的相对顺序保持一致
//去重算法
//1.从下标为1的元素开始遍历数组，若其与前一个下标元素相同，挪动数组覆盖
//空间复杂度O(1)，时间复杂度O(n^2)

int removeDuplicates(int* nums, int numsSize)
{
    int i=1,count=0;
    while(i<numsSize-count)       //覆盖后数组最后全为原数组最后一个数，会死循环，故循环条件i小于新数组长度即可
    {
        if(nums[i]==nums[i-1])
        {
            int j=0;
            for(j=i;j<numsSize-1;j++)           
            {
                nums[j]=nums[j+1];
            }
            count++;
        }
        else
        i++;
    }
    return numsSize-count;
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