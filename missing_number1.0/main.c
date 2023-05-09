#include <stdio.h>
#include <windows.h>

//数组nums包含从0到n的所有整数，但缺了一个
//请编写代码找出那个缺失的整数，要求时间复杂度在O(n)之内

//1.malloc一个n+1个数的数组num并将所有元素初始化为-1    --n
//2.遍历nums数组并在数组num内记录，并保证下标和数字对应（num数组记录了n个数）   --n
//3.遍历num数组，元素为-1的下标即为缺失的数     --n
//时间复杂度为O(n)

int missingnumber(int* nums, int sz)
{
    int* num = (int*) malloc((sz+1)*sizeof(int));
    if(num==NULL)
    return -1;
    int i=0;

    //将数组num所有元素初始化为-1
    for(i=0;i<=sz;i++)
    *(num+i)=-1;

    //遍历nums数组并在数组num内记录，并保证下标和数字对应
    for(i=0;i<sz;i++)
    num[*(nums+i)] = *(nums+i);

    //遍历num数组，元素为-1的下标即为缺失的数
    for(i=0;i<=sz;i++)
    {
        if(num[i]==-1)
        {
            free(num);
            num = NULL;
            return i;
        }
    }
}
int main()
{
    int nums[10]={0,1,2,3,4,5,7,8,9,10};
    int ret = missingnumber(nums,sizeof(nums)/sizeof(nums[0]));
    printf("%d\n",ret);
    system("pause");
    return 0;
}