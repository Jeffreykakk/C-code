#include <stdio.h>
#include <stdlib.h>

//给定两个大小分别为m和n的正序数组nums1和nums2
//请你找出并返回这两个正序数组的中位数
//算法的时间复杂度应该为O(log(m+n))

//时间复杂度O(m+n)，空间复杂度O(m+n)

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int* nums=(int*)malloc(sizeof(int)*(nums1Size+nums2Size));
    int i=0,j=0,k=0;
    while(i<nums1Size&&j<nums2Size)
    {
        if(nums1[i]<nums2[j])
        {
            nums[k]=nums1[i];
            k++;
            i++;
        }
        else
        {
            nums[k]=nums2[j];
            k++;
            j++;
        }
    }
    while(i<nums1Size)
    {
        nums[k]=nums1[i];
        k++;
        i++;
    }
    while(j<nums2Size)
    {
        nums[k]=nums2[j];
        k++;
        j++;
    }
    double mid=0;
    for(i=0;i<nums1Size+nums2Size;i++)
    printf("%d ",nums[i]);
    if((nums1Size+nums2Size)%2==0)
    mid=(nums[(nums1Size+nums2Size)/2-1]+nums[(nums1Size+nums2Size)/2])/2.0;
    else
    mid=nums[(nums1Size+nums2Size)/2];
    free(nums);
    nums=NULL;
    return mid;
}

int main()
{
    int nums1[]={1,4,7};
    int nums2[]={1,2,3};
    double mid=findMedianSortedArrays(nums1,sizeof(nums1)/sizeof(nums1[0]),nums2,sizeof(nums2)/sizeof(nums2[0]));
    printf("%lf\n",mid);
    return 0;
}