#include <stdio.h>

//选择排序优化版，每一趟排序同时找出最大值与最小值，效率增加一倍

void sort(int arr[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        int pos_min=left,min=arr[left];
        int pos_max=right,max=arr[right];
        int i=0;

        //找最大值与最小值
        for(i=left;i<=right;i++)        
        {
            if(arr[pos_min]>arr[i])
            {
                pos_min=i;
                min=arr[i];
            }
            if(arr[pos_max]<arr[i])
            {
                pos_max=i;
                max=arr[i];
            }
        }

        //交换
        if(arr[left]!=min)
        {
            int tmp=arr[left];
            arr[left]=arr[pos_min];
            arr[pos_min]=tmp;
        }
        //如果left与pos_max重叠，在第一次交换后，要更新pos_max的位置
        if(pos_max==left)
        pos_max=pos_min;
        if(arr[right]!=max)
        {
            int tmp=arr[right];
            arr[right]=arr[pos_max];
            arr[pos_max]=tmp;
        }
        left++;
        right--;
    }
}

int main()
{
    int arr[10]={9,1,7,8,6,5,4,3,2,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    sort(arr,sz);
    int i=0;
    for(i=0;i<sz;i++)
    printf("%d ",arr[i]);
    return 0;
}
