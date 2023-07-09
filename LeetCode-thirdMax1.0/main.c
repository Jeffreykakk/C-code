#include <stdio.h>
#include <windows.h>

// 给你一个非空数组，返回此数组中 第三大的数
// 如果不存在，则返回数组中最大的数

int thirdMax(int *nums, int numsSize)
{
    int i = 0;
    int firstmax = INT_MIN;
    int secondmax = INT_MIN;
    long long thirdmax = LLONG_MIN;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] > firstmax)
            firstmax = nums[i];
    }
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] > secondmax && nums[i] < firstmax)
            secondmax = nums[i];
    }
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] > thirdmax && nums[i] < secondmax)
            thirdmax = nums[i];
    }
    if (thirdmax == LLONG_MIN)
        return firstmax;
    else
        return thirdmax;
}

int main()
{
    int nums[] = {2, 5, 3, 2, 4};
    int ret = thirdMax(nums, sizeof(nums) / sizeof(nums[0]));
    printf("%d\n", ret);
    system("pause");
    return 0;
}