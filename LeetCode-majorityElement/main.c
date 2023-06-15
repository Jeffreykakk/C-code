#include <stdio.h>
#include <windows.h>

// 给定一个大小为 n 的数组 nums ，返回其中的多数元素
//多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素

int majorityElement(int *nums, int numsSize)
{
    int min = nums[0];
    int max = nums[0];
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }
    int range = max - min;
    int *count = (int *)malloc(sizeof(int) * (range + 1));
    memset(count, 0, sizeof(int) * (range + 1));
    for (i = 0; i < numsSize; i++)
        count[nums[i] - min]++;
    int n = 0;
    for (i = 0; i <= range; i++)
    {
        if (count[i] > numsSize / 2)
        {
            n = i + min;
            break;
        }
    }
    free(count);
    return n;
}

int main()
{
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int ret = majorityElement(nums, sizeof(nums) / sizeof(nums[0]));
    printf("%d\n", ret);
    system("pause");
    return 0;
}