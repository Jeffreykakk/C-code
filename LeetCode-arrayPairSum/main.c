#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// 给定长度为 2n 的整数数组 nums ，你的任务是将这些数分成 n 对, 例如(a1, b1), (a2, b2), ..., (an, bn) 
// 使得从 1 到 n 的 min(ai, bi)总和最大

int cmp(const void *e1, const void *e2)
{
    return *(int *)e1 - *(int *)e2;
}

int arrayPairSum(int *nums, int numsSize)
{
    int sum = 0;
    qsort(nums, numsSize, sizeof(nums[0]), cmp);
    for (int i = 0; i < numsSize; i += 2)
        sum += nums[i];
    return sum;
}

int main()
{
    int arr[] = {6, 2, 6, 5, 1, 2};
    int ret = arrayPairSum(arr, sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", ret);
    system("pause");
    return 0;
}