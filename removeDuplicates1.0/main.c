#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//给一个升序排列的数组nums ，原地删除重复出现的元素，使每个元素只出现一次
//返回删除后数组的新长度。
//元素的相对顺序保持一致
//去重算法
//1.malloc一个新数组tmp并把nums数组第一个元素放进tmp数组
//2.放第二个元素前检查其是否与tmp第一个元素相同，相同则跳过，不相同则放进去，依次重复
//3.把tmp数组拷贝放到nums数组并free动态开辟的空间
//空间复杂度O(n)，时间复杂度O(n)

int removeDuplicates(int* nums, int numsSize)
{
    int* tmp=(int*)malloc(numsSize*sizeof(int));
    int i=1,count=1;
    tmp[0]=nums[0];
    while(i<numsSize)
    {
        if(nums[i]!=tmp[count-1])
        {
            tmp[count]=nums[i];
            i++;
            count++;
        }
        else
        i++;
    }
    for(i=0;i<count;i++)
    nums[i]=tmp[i];
    free(tmp);
    tmp==NULL;
    return count;
}

int main()
{
    int nums[]={1,1,2,3,4,4,5,5,6,8};
    int ret=removeDuplicates(nums,sizeof(nums)/sizeof(nums[0]));
    int i=0;
    for(i=0;i<ret;i++)
    printf("%d ",nums[i]);
    system("pause");
    return 0;
}