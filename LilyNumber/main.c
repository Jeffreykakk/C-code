#include <stdio.h>
#include <math.h>
//Lily Number：把任意的数字，从中间拆分成两个数字，比如1461可以拆分成（1和461）,（14和61）,（146和1)
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：655 = 6 * 55 + 65 * 5  
//     1461 = 1*461 + 14*61 + 146*1
//求出5位数中的所有Lily Number

int main()
{
    int i=0;
    for(i=10000;i<99999;i++)
    {
        int sum=0,j=0;
        for(j=10;j<=10000;j*=10)
        sum+=(i/j)*(i%j);
        if(sum==i)
        printf("%d ",i);
    }
}