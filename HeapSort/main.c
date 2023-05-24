#include <stdio.h>
#include <windows.h>

void Swap(int* e1, int* e2)
{
    int tmp=*e1;
    *e1=*e2;
    *e2=tmp;
}

void AdjustDown(int* data,int size,int parent)
{
    int child=2*parent+1;
    while(child<size)
    {
        if(child+1<size&&data[child+1]>data[child]) 
        child=child+1;          
        if(data[child]>data[parent])
        {
            Swap(&data[child],&data[parent]);
            parent=child;
            child=2*parent+1;
        }
        else
        break;
    }
}

void myHeapSort(int* arr,int size)
{
    int i=0;

    //1.升序排序，建大堆
    for(i=(size-1-1)/2;i>=0;i--)
    AdjustDown(arr,size,i);

    //2.取堆顶数据放在最后，继续向下调整建堆
    int end=size-1;
    while(end>=0)
    {
        Swap(&arr[end],&arr[0]);
        AdjustDown(arr,end,0);
        end--;
    }
}

int main()
{
    int arr[]={1,4,5,7,8,6,9,0,2,3};
    int sz=sizeof(arr)/sizeof(arr[0]);
    myHeapSort(arr,sz);
    int i=0;
    for(i=0;i<sz;i++)
    printf("%d ",arr[i]);
    system("pause");
    return 0;
}