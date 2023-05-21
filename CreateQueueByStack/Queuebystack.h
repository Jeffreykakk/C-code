#pragma once

//请你仅使用两个栈实现先入先出队列
//队列应当支持一般队列支持的所有操作（push、pop、peek、empty）

#include "Stack.h"

typedef struct 
{
    stack st1;
    stack st2;
} MyQueue;


MyQueue* myQueueCreate();
void myQueuePush(MyQueue* obj, int x);
int myQueuePop(MyQueue* obj);
int myQueuePeek(MyQueue* obj);
bool myQueueEmpty(MyQueue* obj);
void myQueueFree(MyQueue* obj);