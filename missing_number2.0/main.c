#include <stdio.h>
#include <windows.h>

//数组nums包含从0到n的所有整数，但缺了一个
//请编写代码找出那个缺失的整数，要求时间复杂度在O(n)之内

//1.创建变量num=0并将nums数组所有的数异或一遍   --n
//2.再将0-n的所有数异或一遍     --n
//3.num即为缺失的数（从出现两遍的数中找出只出现一次的数）
//时间复杂度为O(n)

int missingnumber(int nums[],int sz)
{
    int num=0;
    int i=0;
    for(i=0;i<sz;i++)
    num^=nums[i];
    for(i=0;i<=sz;i++)
    num^=i;
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