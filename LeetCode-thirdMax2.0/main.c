#include <stdio.h>
#include <windows.h>

// 给你一个非空数组，返回此数组中 第三大的数
// 如果不存在，则返回数组中最大的数

void Swap(int *e1, int *e2)
{
    int tmp = *e1;
    *e1 = *e2;
    *e2 = tmp;
}

void AdjustDown(int *data, int size, int parent)
{
    int child = 2 * parent + 1;
    while (child < size)
    {
        if (child + 1 < size && data[child + 1] > data[child])
            child = child + 1;
        if (data[child] > data[parent])
        {
            Swap(&data[child], &data[parent]);
            parent = child;
            child = 2 * parent + 1;
        }
        else
            break;
    }
}

int myHeapSort(int *arr, int size)
{
    int i = 0;

    for (i = (size - 1 - 1) / 2; i >= 0; i--)
        AdjustDown(arr, size, i);
    int max = arr[0];
    int top = arr[0];
    int end = size - 1;
    for (i = 0; i < 2 && end >= 0; i++)
    {
        Swap(&arr[end], &arr[0]);
        AdjustDown(arr, end, 0);
        end--;
        if (arr[0] == top)
            i--;
        top = arr[0];
    }
    if (i < 2)
        return max;
    else
        return top;
}

int thirdMax(int *nums, int numsSize)
{
    int ret = myHeapSort(nums, numsSize);
    return ret;
}

int main()
{
    int nums[] = {2, 2, 1};
    int ret = thirdMax(nums, sizeof(nums) / sizeof(nums[0]));
    printf("%d\n", ret);
    system("pause");
    return 0;
}