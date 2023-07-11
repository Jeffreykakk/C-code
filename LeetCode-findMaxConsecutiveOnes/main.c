#include <stdio.h>
#include <windows.h>

// 给定一个二进制数组 nums ， 计算其中最大连续 1 的个数

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int i = 0, count = 0, max = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
            count++;
        else
        {
            if (count > max)
                max = count;
            count = 0;
        }
    }
    if (count > max)
        max = count;
    return max;
}

int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1};
    int ret = findMaxConsecutiveOnes(arr, sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", ret);
    system("pause");
    return 0;
}