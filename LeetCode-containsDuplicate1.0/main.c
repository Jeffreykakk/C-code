#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

bool containsDuplicate(int *nums, int numsSize)
{
    int i = 0;
    int max = nums[0], min = nums[0];
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] > max)
            max = nums[i];
        if (nums[i] < min)
            min = nums[i];
    }
    int range = max - min;
    int *count = (int *)malloc(sizeof(int) * (range + 1));
    memset(count, 0, sizeof(int) * (range + 1));
    for (i = 0; i < numsSize; i++)
        count[nums[i] - min]++;
    for (i = 0; i <= range; i++)
    {
        if (count[i] > 1)
        {
            free(count);
            return true;
        }
    }
    free(count);
    return false;
}

int main()
{
    int nums[] = {1, 2, 3, 4};
    int ret = containsDuplicate(nums, sizeof(nums) / sizeof(nums[0]));
    printf("%d\n", ret);
    system("pause");
    return 0;
}