#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void printarr(int* arr,int size)
{
    int i=0;
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}

void InsertSort(int* arr,int n)
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        //[0,end]为有序区间
        int end=i;
        //无序区间的第一个元素，即待排元素
        int tmp=arr[end+1];
        //单趟排序
        while(end>=0)
        {
            //后移元素
            if(tmp<arr[end])
            {
                arr[end+1]=arr[end];
                end--;
            }
            else
            break;
        }
        arr[end+1]=tmp;
    }
}



void InsertSort_test()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    InsertSort(arr,sz);
    printarr(arr,sz);
}


//希尔排序
//1.预排序：将待排数据分为gap组，每一组进行直接插入排序，使待排序数据接近有序
//2.直接插入排序（gap=1）
void ShellSort(int* arr,int n)
{
    int gap=n;
    while(gap>1)
    {
        gap=gap/3+1;
        int i=0;
        //gap组数据的直接插入排序(gap组数据分别进行插入排序)
        for(i=0;i<gap;i++)
        {
            //一组数据的直接插入排序
            int j=0;
            for(j=i;j<n-gap;j=j+=gap)
            {
                //每一组数据的单趟插入排序
                int end=j;
                int tmp=arr[end+gap];
                while(end>=0)
                {
                    //后移元素
                    if(tmp<arr[end])
                    {
                        arr[end+gap]=arr[end];
                        end-=gap;
                    }
                    else
                    break;
                }
                arr[end+gap]=tmp;
            }
        }
    }
}

void ShellSort_test()
{
    int arr[]={9,6,8,7,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    ShellSort(arr,sz);
    printarr(arr,sz);
}

int main()
{
    InsertSort_test();
    ShellSort_test();
    system("pause");
    return 0;
}