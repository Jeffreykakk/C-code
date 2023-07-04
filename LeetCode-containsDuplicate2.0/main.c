#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

int cmp(const void *e1, const void *e2)
{
    return *(int *)e1 - *(int *)e2;
}

bool containsDuplicate(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(nums[0]), cmp);
    int i = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 1};
    int ret = containsDuplicate(nums, sizeof(nums) / sizeof(nums[0]));
    printf("%d\n", ret);
    system("pause");
    return 0;
}