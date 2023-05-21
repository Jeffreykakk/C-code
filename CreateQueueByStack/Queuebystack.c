#include "Queuebystack.h"

MyQueue* myQueueCreate()
{
    MyQueue* queue=(MyQueue*)malloc(sizeof(MyQueue));
    StackInit(&queue->st1);
    StackInit(&queue->st2);
    return queue;
}

void myQueuePush(MyQueue* obj, int x)           //st1用来进数据，st2用来出数据
{
    StackPush(&obj->st1,x);
}

int myQueuePop(MyQueue* obj)
{
    if(StackEmpty(&obj->st2))                  //st2为空，将st1中数据倒出
    {
        while(!StackEmpty(&obj->st1))
        {
            StackPush(&obj->st2,StackTop(&obj->st1));
            StackPop(&obj->st1);
        }
    }
    int top=StackTop(&obj->st2);
    StackPop(&obj->st2);
    return top;
}

int myQueuePeek(MyQueue* obj)
{
    if(StackEmpty(&obj->st2))                  //st2为空，将st1中数据倒出
    {
        while(!StackEmpty(&obj->st1))
        {
            StackPush(&obj->st2,StackTop(&obj->st1));
            StackPop(&obj->st1);
        }
    }
    int top=StackTop(&obj->st2);
    return top;
}

bool myQueueEmpty(MyQueue* obj)
{
    return StackEmpty(&obj->st1)&&StackEmpty(&obj->st2);
}

void myQueueFree(MyQueue* obj)
{
    StackDestroy(&obj->st1);
    StackDestroy(&obj->st2);
    free(obj);
}

