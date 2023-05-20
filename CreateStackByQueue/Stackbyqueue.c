#include "Stackbyqueue.h"

//请你仅使用两个队列实现一个后入先出（LIFO）的栈，并支持普通栈的全部四种操作（push、top、pop 和 empty）

Stack* StackInit()
{
    Stack* st=(Stack*)malloc(sizeof(Stack));
    QueueInit(&(st->q1));
    QueueInit(&(st->q2));
    return st;
}

void StackDestroy(Stack* st)
{
    QueueDestroy(&(st->q1));
    QueueDestroy(&(st->q2));
    free(st);
}

void StackPush(Stack* st,QueueDatatype x)
{
    if(!QueueEmpty(&(st->q1)))
    QueuePush(&(st->q1),x);
    else
    QueuePush(&(st->q2),x);
}

QueueDatatype StackTop(Stack* st)
{
    assert(!StackEmpty(st));         //为空无法取数据
    if(!QueueEmpty(&(st->q1)))
    return QueueBack(&(st->q1));
    else
    return QueueBack(&(st->q2));
}

void StackPop(Stack* st)
{
    assert(!StackEmpty(st));         //为空无法删除数据

    //挪动数据
    if(!QueueEmpty(&(st->q1)))       
    {
        while(QueueSize(&(st->q1))>1)
        {
            QueuePush(&(st->q2),QueueFront(&(st->q1)));
            QueuePop(&(st->q1));
        }
        QueuePop(&(st->q1));
    }
    else 
    {
        while(QueueSize(&(st->q2))>1)
        {
            QueuePush(&(st->q1),QueueFront(&(st->q2)));
            QueuePop(&(st->q2));
        }
        QueuePop(&(st->q2));
    }
}

bool StackEmpty(Stack* st)
{
    return QueueEmpty(&(st->q1)) && QueueEmpty(&(st->q2));
}


