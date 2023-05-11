#include <stdio.h>
#include <windows.h>

//给你一个数组nums和一个值val，你需要原地移除所有数值等于val的元素，并返回移除后数组的新长度

//找到数组nums中等于val的元素，挪动数组覆盖删除

int removeElement(int* nums, int numsSize, int val)
{
    int i=0,j=0;
    for(i=0,j=0;j<numsSize;i++,j++)
    {
        if(nums[i]==val)
        {
            int j=0;
            for(j=i;j<numsSize-1;j++)
            nums[j]=nums[j+1];
            i--;
        }
    }
    return i;
}

int main()
{
    int nums[]={1,2,3,4,3,4,3,3,2,3,1};
    int sz=sizeof(nums)/sizeof(nums[0]);
    int ret=removeElement(nums,sz,3),i=0;
    for(i=0;i<ret;i++)
    printf("%d ",nums[i]);
    system("pause");
    return 0;
}