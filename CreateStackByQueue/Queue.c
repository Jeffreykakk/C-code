#include "Queue.h"

void QueueInit(Queue* queue)                        //队列的初始化
{
    assert(queue);
    queue->head=queue->tail=NULL;
}

void QueueDestroy(Queue* queue)                     //队列的销毁
{
    assert(queue);
    node* cur=queue->head;
    while(cur)
    {
        node* next=cur->next;
        free(cur);
        cur=next;
    }
    queue->head=queue->tail=NULL;
}

void QueuePush(Queue* queue,QueueDatatype x)        //插入数据
{
    assert(queue);
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=x;
    newnode->next=NULL;
    if(queue->head==NULL)
    queue->head=queue->tail=newnode;
    else
    {
        queue->tail->next=newnode;
        queue->tail=newnode;
    }
}

void QueuePop(Queue* queue)                         //删除数据
{
    assert(queue);
    assert(!QueueEmpty(queue));                     //队列不为空
    if(queue->head==queue->tail)                    //只有一个节点
    {
        free(queue->head);
        queue->head=queue->tail=NULL;
    }
    else                                            //有多个节点
    {
        node* next=queue->head->next;
        free(queue->head);
        queue->head=next;
    }
}

QueueDatatype QueueFront(Queue* queue)              //取队头数据
{
    assert(queue);
    assert(!QueueEmpty(queue));                     //队列不为空
    return queue->head->data;
}

QueueDatatype QueueBack(Queue* queue)               //取队尾数据
{
    assert(queue);
    assert(!QueueEmpty(queue));                     //队列不为空
    return queue->tail->data;
}

int QueueSize(Queue* queue)                         //队列数据个数
{
    assert(queue);
    node* cur=queue->head;
    int size=0;
    while(cur)
    {
        size++;
        cur=cur->next;
    }
    return size;
}

bool QueueEmpty(Queue* queue)                       //检查队列是否为空
{
    assert(queue);
    return queue->head==NULL;
}