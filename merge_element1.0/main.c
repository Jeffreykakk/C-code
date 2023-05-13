#include <stdio.h>
#include <stdlib.h>

//给你两个按非递减顺序排列的整数数组nums1和nums2，另有两个整数m和n ，分别表示nums1和nums2中的元素数目
//请你合并nums2到nums1中，使合并后的数组同样按非递减顺序排列
//注意：最终，合并后数组不应由函数返回，而是存储在数组nums1中
//为了应对这种情况，nums1的初始长度为m+n，其中前m个元素表示应合并的元素，后n个元素为0

//1.开辟一个长度为m+n的数组tmp，分别遍历nums1和nums2数组按非递减的顺序把元素放进tmp数组中
//2.把tmp数组拷贝放进nums1数组中
//空间复杂度O(m+n)，时间复杂度O(m+n)

void merge(int* nums1,int m,int* nums2, int n)
{
    int i=0,j=0,k=0;
    if(m==0)                                   //nums1为空数组
    {
        for(k=0;k<m+n;k++)
        nums1[k]=nums2[k];
        return;
    }
    if(n==0)                                   //nums2为空数组
    return;
    int* tmp=(int*)malloc((m+n)*sizeof(int)); 
    while(i<m&&j<n)
    {
        if(nums1[i]<=nums2[j])
        {
            tmp[k]=nums1[i];
            i++;
            k++;
        }
        else
        {
            tmp[k]=nums2[j];
            j++;
            k++;
        }
    }
    if(i<m)
    {
        while(k<(m+n))
        {
            tmp[k]=nums1[i];
            i++;
            k++;
        }
    }
    if(j<n)
    {
        while(k<(m+n))
        {
            tmp[k]=nums2[j];
            j++;
            k++;
        }
    }
    for(k=0;k<m+n;k++)
    nums1[k]=tmp[k];
    free(tmp);
    tmp=NULL;
}

int main()
{
    int m=0,n=0;
    scanf("%d %d",&m,&n);
    int* nums1=(int*)malloc((m+n)*sizeof(int));
    int* nums2=(int*)malloc(n*sizeof(int));
    int i=0;
    for(i=0;i<m;i++)
    scanf("%d",nums1+i);
    for(i=0;i<n;i++)
    scanf("%d",nums2+i);
    merge(nums1,m,nums2,n);
    for(i=0;i<m+n;i++)
    printf("%d ",nums1[i]);
    return 0;
}