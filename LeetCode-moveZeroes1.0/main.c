#include <stdio.h>
#include <windows.h>

void moveZeroes(int *nums, int numsSize)
{
    int i = 0, j = 0;
    while (i < numsSize)
    {
        while (i < numsSize && nums[i] != 0)
            i++;
        j = i + 1;
        while (j < numsSize && nums[j] == 0)
            j++;
        if (j < numsSize)
        {
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
        }
        i++;
    }
}

int main()
{
    int nums[] = {0, 1, 0, 3, 12};
    int sz = sizeof(nums) / sizeof(nums[0]);
    moveZeroes(nums, sz);
    for (int i = 0; i < sz; i++)
        printf("%d ", nums[i]);
    system("pause");
    return 0;
}