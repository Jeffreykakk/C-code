#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    *returnSize = digitsSize;
    int flag = 0;
    int i = digitsSize - 1;
    digits[i] += 1;
    if (digits[i] == 10)
    {
        flag = 1;
        digits[i] = 0;
        i--;
        while (i >= 0 && flag==1)
        {
            digits[i] += flag;
            flag = 0;
            if(digits[i]==10)
            {
                flag = 1;
                digits[i] = 0;
                i--;
            }
        }
    }
    if (flag == 1)
    {
        *returnSize = digitsSize + 1;
        int *tmp = (int *)realloc(digits, sizeof(int) * (digitsSize + 1));
        if (tmp)
            digits = tmp;
        for (i = digitsSize; i > 0; i--)
            digits[i] = digits[i - 1];
        digits[0] = 1;
    }
    return digits;
}

int main()
{
    int sz = 3;
    int *digits = (int *)malloc(sizeof(int) * sz);
    int i = 0;
    for (i = 0; i < sz; i++)
        digits[i] = 9;
    int returnSize = 0;
    digits = plusOne(digits, sz, &returnSize);
    for (i = 0; i < returnSize; i++)
        printf("%d", digits[i]);
    printf("\n");
    system("pause");
    return 0;
}