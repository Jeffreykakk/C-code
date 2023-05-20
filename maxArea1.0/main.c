#include <stdio.h>
#include <stdlib.h>

//给定一个长度为n的整数数组height，有n条垂线，第i条线的两个端点是(i, 0)和(i, height[i])
//找出其中的两条线，使得它们与x轴共同构成的容器可以容纳最多的水
//返回容器可以储存的最大水量

//暴力求解法
int maxArea(int* height, int heightSize)
{
    int i=0,j=0,max=0;
    for(i=0;i<heightSize-1;i++)
    {
        int j=0;
        for(j=i+1;j<heightSize;j++)
        {
            int area=0;
            int h=height[i]<height[j]?height[i]:height[j];
            area=h*(j-i);
            if(area>max)
            max=area;
        }
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