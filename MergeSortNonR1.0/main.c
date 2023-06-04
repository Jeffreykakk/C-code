#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//归并排序，将两个有序数据合并，使数据仍然有序
//将一个待排数据分割成两个待排区间，递归使两个区间有序

void printarr(int* arr,int size)
{
    int i=0;
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}




void MergeSort(int* arr, int begin, int end)
{
    int size=end-begin+1;
    int* tmp=(int*)malloc(sizeof(int)*size);
    int gap=1;
    while(gap<size)
    {
        int i=0,j=0;
        for(i=0;i<size;i+=2*gap)
        {
            //归并
            int begin1=i,end1=begin1+gap-1;
            int begin2=begin1+gap,end2=begin1+2*gap-1;
            //修正边界
            if(end1>=size)
            {
                end1=size-1;
                begin2=size;
                end2=size-1;
            }
            else if(begin2>=size)
            {
                begin2=size;
                end2=size-1;
            }
            else if(end2>=size)
            end2=size-1;
            while(begin1<=end1&&begin2<=end2)
            {
                if(arr[begin1]<=arr[begin2])
                tmp[j++]=arr[begin1++];
                else
                tmp[j++]=arr[begin2++];
            }
            while(begin1<=end1)
            tmp[j++]=arr[begin1++];
            while(begin2<=end2)
            tmp[j++]=arr[begin2++];
        }
        memcpy(arr,tmp,sizeof(int)*size);
        gap*=2;
    }
    free(tmp);
}



void MergeSort_test()
{
    int size=100;
    srand((unsigned int)time(NULL));
    int* arr=(int*)malloc(sizeof(int)*size);
    int i=0;
    for(i=0;i<size;i++)
    arr[i]=rand();
    MergeSort(arr,0,size-1);
    printarr(arr,size);
    
    free(arr);

}

int main()
{
    MergeSort_test();
    system("pause");
    return 0;
}