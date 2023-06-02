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


//希尔排序
//1.预排序：将待排数据分为gap组，每一组进行直接插入排序，使待排序数据接近有序
//2.直接插入排序（gap=1）
void ShellSort(int* arr,int n)
{
    int gap=n;
    while(gap>1)
    {
        gap=gap/3+1;
        //gap组数据的直接插入排序(gap组数据间隔进行插入排序)
        //一组数据的直接插入排序
        int j=0;
        for(j=0;j<n-gap;j++)
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

void ShellSort_test()
{
    int arr[]={9,6,8,7,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    ShellSort(arr,sz);
    printarr(arr,sz);
}

int main()
{
    ShellSort_test();
    system("pause");
    return 0;
}