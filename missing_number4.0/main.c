#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//数组nums包含从0到n的所有整数，但缺了一个
//请编写代码找出那个缺失的整数，要求时间复杂度在O(n)之内

//创建num=0将0-n所有的数累加
//再减去数组内每一个数，最后num即为缺失的数
//时间复杂度为O(n)


int missingnumber(int nums[],int sz)
{
   int num=sz*(sz+1)/2;
   int i=0;
   for(i=0;i<sz;i++)
   num-=nums[i];
   return num;
}

int main()
{
    int nums[10]={0,1,2,3,4,5,7,8,9,10};
    int ret = missingnumber(nums,sizeof(nums)/sizeof(nums[0]));
    printf("%d\n",ret);
    system("pause");
    return 0;
}