#include <stdio.h>
#include <stdlib.h>

//给你两个按非递减顺序排列的整数数组nums1和nums2，另有两个整数m和n ，分别表示nums1和nums2中的元素数目
//请你合并nums2到nums1中，使合并后的数组同样按非递减顺序排列
//注意：最终，合并后数组不应由函数返回，而是存储在数组nums1中
//为了应对这种情况，nums1的初始长度为m+n，其中前m个元素表示应合并的元素，后n个元素为0

//1.用i和j分别标记nums1和nums2最后的元素，dst标记在nums1数组的最后位置
//2.把i标记元素和j标记元素较大的一个放在dst的位置上，dst--
//3.若nums2未遍历完，把其数组元素放在nums1的前面
//空间复杂度O(1)，时间复杂度O(m+n)

void merge(int* nums1,int m,int* nums2, int n)
{
    int i=0,j=0,dst=m+n-1;
    if(m==0)                                   //nums1为空数组
    {
        for(i=0;i<m+n;i++)
        nums1[i]=nums2[i];
        return;
    }
    if(n==0)                                   //nums2为空数组
    return;
    i=m-1;
    j=n-1;
    while(i>=0&&j>=0)
    {
        if(nums1[i]>=nums2[j])
        {
            nums1[dst]=nums1[i];
            i--;
            dst--;
        }
        else
        {
            nums1[dst]=nums2[j];
            j--;
            dst--;
        }
    }
    if(j>=0)
    {
        while(dst>=0)
        {
            nums1[dst]=nums2[j];
            j--;
            dst--;
        }
    }
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