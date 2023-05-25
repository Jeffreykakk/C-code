#include "circularqueue.h"

MyCircularQueue* myCircularQueueCreate(int k) 
{
    MyCircularQueue* queue=(MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    queue->head=queue->tail=0;
    queue->k=k;
    queue->data=(int*)malloc(sizeof(int)*(k+1));    //多开辟一个位置，不存储数据
    return queue;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)    //入队列
{
    assert(obj);
    if(!myCircularQueueIsFull(obj))          //循环队列不满时可以插入数据
    {
        obj->data[obj->tail]=value;
        obj->tail++;
        if(obj->tail>obj->k)
        obj->tail=0;
        return true;
    }
    else
    return false;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)       //出队列
{
    assert(obj);
    if(!myCircularQueueIsEmpty(obj))               //循环队列不为空时可以删除数据
    {
        if(obj->head==obj->k)
        obj->head=0;
        else
        obj->head++;
        return true;
    }
    else
    return false;
}

int myCircularQueueFront(MyCircularQueue* obj)          //取队头
{
    assert(obj);
    if(myCircularQueueIsEmpty(obj))
    return -1;
    else
    return obj->data[obj->head];
}

int myCircularQueueRear(MyCircularQueue* obj)           //取队尾
{
    assert(obj);
    if(myCircularQueueIsEmpty(obj))
    return -1;
    else
    {
        int end=obj->tail-1;
        if(obj->tail==0)
        end=obj->k;
        return obj->data[end];
    }
    
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)       //head和tail指向同一位置说明循环队列为空
{
    assert(obj);
    return obj->head==obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)        //tail指向位置的下一个为head说明循环队列已满
{
    assert(obj);
    int next=obj->tail+1;
    if(obj->tail==obj->k)
    next=0;
    return next==obj->head;
}

void myCircularQueueFree(MyCircularQueue* obj) 
{
    assert(obj);
    free(obj->data);
    obj->head=obj->tail=obj->k=0;
    free(obj);
}