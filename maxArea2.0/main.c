#include <stdio.h>
#include <stdlib.h>

//给定一个长度为n的整数数组height，有n条垂线，第i条线的两个端点是(i, 0)和(i, height[i])
//找出其中的两条线，使得它们与x轴共同构成的容器可以容纳最多的水
//返回容器可以储存的最大水量

//双指针法遍历，如果指针指向高度较低，往数组中间移动
int maxArea(int* height, int heightSize)
{
    int left=0;
    int right=heightSize-1;
    int max=0;
    while(left<right)
    {
        int area=0;
        int h=height[left]<height[right]?height[left]:height[right];
        area=(right-left)*h;
        if(area>max)
        max=area;
        if(height[left]>height[right])
        right--;
        else
        left++;
    }
    return max;
}

int main()
{
    int height[]={1,8,6,2,5,4,8,3,7};
    int area=maxArea(height,sizeof(height)/sizeof(height[0]));
    printf("%d\n",area);
    return 0;
}