#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//给你一个数组nums和一个值val，你需要原地移除所有数值等于val的元素，并返回移除后数组的新长度

//用双指针法遍历一遍nums数组，src用来找不等于val的元素，放在dst的位置，然后src++，dst++
//时间复杂度O(n),空间复杂度O(n)

int removeElement(int* nums, int numsSize, int val)
{
    int dst=0;
    int src=0;
    while(src<numsSize)                                   //遍历一遍nums数组
    {
        if(nums[src]!=val)                                //src找到不等于val的元素，放在dst上
        {
            nums[dst]=nums[src];
            dst++;
            src++;
        }
        else                                             //src等于val，继续向后找
        src++;
    }
    return dst;
}

int main()
{
    int nums[]={1,2,3,3,2,2,3};
    int sz=sizeof(nums)/sizeof(nums[0]);
    int ret=removeElement(nums,sz,3);
    int i=0;
    for(i=0;i<ret;i++)
    printf("%d ",nums[i]);
    system("pause");
    return 0;
}