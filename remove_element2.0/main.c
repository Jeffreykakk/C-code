#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//给你一个数组nums和一个值val，你需要原地移除所有数值等于val的元素，并返回移除后数组的新长度

//遍历一遍nums数组，把不等于val的元素放在新创建的数组tmp中，再把tmp数组拷贝到nums数组
//时间复杂度O(n),空间复杂度O(n)

int removeElement(int* nums, int numsSize, int val)
{
    int i=0,j=0;
    int* tmp=malloc(10*sizeof(int));
    if(tmp==NULL)
    exit(-1);
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            tmp[j]=nums[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    nums[i]=tmp[i];
    free(tmp);
    tmp=NULL;
    return j;
}

int main()
{
    int nums[]={1,2,3,4,3,4,3,3,2,3,1};
    int sz=sizeof(nums)/sizeof(nums[0]);
    int ret=removeElement(nums,sz,3);
    int i=0;
    for(i=0;i<ret;i++)
    printf("%d ",nums[i]);
    system("pause");
    return 0;
}