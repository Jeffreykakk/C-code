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


void _MergeSort(int* arr, int* tmp, int begin, int end)
{
    if(begin==end)
    return;
    int mid=(begin+end)/2;
    //让左区间有序
    _MergeSort(arr,tmp,begin,mid);
    //让右区间有序
    _MergeSort(arr,tmp,mid+1,end);
    //将左右两个有序区间归并[begin,mid] [mid+1,end]
    int begin1=begin,end1=mid;
    int begin2=mid+1,end2=end;
    int k=begin;
    while(begin1<=end1 && begin2<=end2)
    {
        if(arr[begin1]<=arr[begin2])
        tmp[k++]=arr[begin1++];
        else
        tmp[k++]=arr[begin2++];
    }
    while(begin1<=end1)
        tmp[k++]=arr[begin1++];
    while(begin2<=end2)
        tmp[k++]=arr[begin2++];
    memcpy(arr+begin,tmp+begin,sizeof(int)*(end-begin+1));
}

void MergeSort(int* arr, int begin, int end)
{
    if(end-begin<=0)
    return;
    int* tmp=(int*)malloc(sizeof(int)*(end-begin+1));
    _MergeSort(arr,tmp,begin,end);
    free(tmp);
}



void MergeSort_test()
{
    int size=100;
    srand((unsigned int)time(NULL));
    int* arr=(int*)malloc(sizeof(int)*size);
    int i=0;
    for(i=0;i<size;i++)
    arr[i]=rand()%1000;
    int e1=clock();
    MergeSort(arr,0,size-1);
    int e2=clock();
    printf("%d\n",e2-e1);
    printarr(arr,size);
    
    free(arr);

}

int main()
{
    MergeSort_test();
    system("pause");
    return 0;
}