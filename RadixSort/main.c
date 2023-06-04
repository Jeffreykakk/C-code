#include "Queue.h"
#define RADIX 10
#define K 3

int getkey(int num, int k)
{
    int key=0;
    while(k--)
    {
        key=num%10;
        num/=10;
    }
    return key;
}

void Distribute(int* arr, int n, Queue* q, int k)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        int key=getkey(arr[i],k);
        QueuePush(&q[key],arr[i]);
    }
}

void Collect(int* arr, Queue* q)
{
    int i=0;
    int j=0;
    while(i<RADIX)
    {
        while(!QueueEmpty(&q[i]))
        {
            arr[j++]=QueueFront(&q[i]);
            QueuePop(&q[i]);
        }
        i++;
    }
}


void RadixSort(int* arr,int n)
{
    Queue q[RADIX];
    int i=0;
    for(i=0;i<RADIX;i++)
    QueueInit(&q[i]);
    for(i=1;i<=K;i++)
    {
        //分发数据
        Distribute(arr,n,q,i);
        //回收数据
        Collect(arr,q);
    }

    for(i=0;i<RADIX;i++)
    QueueDestroy(&q[i]);
}

int main()
{
    srand((unsigned int)time(NULL));
    int i=0;
    int arr[100]={0};
    for(i=0;i<100;i++)
    arr[i]=rand()%900+100;
    RadixSort(arr,100);
    for(i=0;i<100;i++)
    printf("%d ",arr[i]);
    printf("\n");
    system("pause");
    return 0;
}