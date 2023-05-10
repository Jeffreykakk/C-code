#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//数组nums包含从0到n的所有整数，但缺了一个
//请编写代码找出那个缺失的整数，要求时间复杂度在O(n)之内

//快速排序+二分查找
//时间复杂度为O(n*logn)

int cmp(const void* e1,const void* e2)
{
    return *(int*)e1-*(int*)e2;
}

int missingnumber(int nums[],int sz)
{
   int left=0,right=sz-1;
   int mid=0;
   while(left<right)
   {
        mid=(left+right)/2;
        if(mid==nums[mid])
        left=mid+1;
        else
        right=mid; 
   }
   return left;
}

int main()
{
    int nums[10]={0,1,2,3,4,5,7,8,9,10};
    qsort(nums,10,sizeof(nums[0]),cmp);
    int ret = missingnumber(nums,sizeof(nums)/sizeof(nums[0]));
    printf("%d\n",ret);
    system("pause");
    return 0;
}