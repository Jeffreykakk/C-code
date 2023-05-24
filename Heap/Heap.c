#include "Heap.h"


void HeapInit(heap* pheap)          //堆的初始化
{
    assert(pheap);
    pheap->capacity=pheap->size=0;
    pheap->data=NULL;
}

void myHeapDestroy(heap* pheap)       //堆的销毁
{
    assert(pheap);
    free(pheap->data);
    pheap->capacity=pheap->size=0;
    pheap->data=NULL;
}

void HeapPush(heap* pheap,HeapDataType x)       //向堆中插入数据
{
    assert(pheap);
    if(pheap->size==pheap->capacity)        //扩容
    {
        int newcapacity=pheap->capacity==0?4:pheap->capacity*2;
        HeapDataType* tmp=(HeapDataType*)realloc(pheap->data,sizeof(HeapDataType)*newcapacity);
        if(tmp==NULL)
        {
            printf("扩容失败\n");
            exit(-1);
        }
        pheap->data=tmp;
        pheap->capacity=newcapacity;
    }
    pheap->data[pheap->size]=x;
    pheap->size++;
    AdjustUp(pheap->data,pheap->size-1);        //将插入的数据向上调整，确保插入数据后还是堆
}

void HeapPop(heap* pheap)           //删除堆顶数据
{
    assert(pheap);
    assert(!HeapEmpty(pheap));      //堆为空无法删除
    Swap(&pheap->data[0],&pheap->data[pheap->size-1]);
    pheap->size--;
    AdjustDown(pheap->data,pheap->size,0); //向下调整，确保删除数据后还是堆
}

HeapDataType HeapTop(heap* pheap)    //取堆顶数据
{
    assert(pheap);
    assert(!HeapEmpty(pheap));      //堆为空无法取数据
    return pheap->data[0];
}

int myHeapSize(heap* pheap)         //堆的大小
{
    assert(pheap);
    return pheap->size;
}

bool HeapEmpty(heap* pheap)        //判断堆是为空
{
    assert(pheap);
    return pheap->size==0;
}

void Swap(HeapDataType* e1, HeapDataType* e2)
{
    HeapDataType tmp=*e1;
    *e1=*e2;
    *e2=tmp;
}

void AdjustUp(HeapDataType* data,int child)
{
    int parent=(child-1)/2;
    while(child>0)
    {
        if(data[child]>data[parent])
        {
            Swap(&data[child],&data[parent]);
            child=parent;
            parent=(child-1)/2;
        }
        else
        break;
    }
}

void AdjustDown(HeapDataType* data,int size,int parent)
{
    int child=2*parent+1;
    while(child<size)
    {
        if(child+1<size&&data[child+1]>data[child])       //找最小的孩子节点
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