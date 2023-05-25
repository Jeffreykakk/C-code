#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//找出n个数中前k个大的数
//n=100,k=3
//将n个数建一个大堆，取k次堆顶的数据

void Swap(int* e1,int* e2)
{
    int tmp=*e1;
    *e1=*e2;
    *e2=tmp;
}

void AdjustDown(int* data,int size,int parent)
{
    int child=parent*2+1;
    while(child<size)
    {
        if(child+1<size && data[child+1]>data[child])
        child=child+1;
        if(data[child]>data[parent])
        {
            Swap(&data[child],&data[parent]);
            parent=child;
            child=parent*2+1;
        }
        else
        break;
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    int i=0;
    int arr[100]={0};
    for(i=0;i<100;i++)
    arr[i]=rand()%1000;
    arr[4]=1001;
    arr[77]=1002;
    arr[32]=1003;
    
    //建堆
    for(i=(100-1-1)/2;i>=0;i--)
    AdjustDown(arr,100,i);

    //取堆顶数据
    for(i=0;i<3;i++)
    {
        printf("%d ",arr[0]);
        Swap(&arr[0],&arr[100-1-i]);
        AdjustDown(arr,100-1-i,0);
    }
    return 0;
}