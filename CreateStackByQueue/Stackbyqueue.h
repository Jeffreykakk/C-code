#include "Queue.h"

typedef struct Stackbyqueue
{
    Queue q1;
    Queue q2;
}Stack;

Stack* StackInit();
void StackDestroy(Stack* st);
void StackPush(Stack* st,QueueDatatype x);
QueueDatatype StackTop(Stack* st);
void StackPop(Stack* st);
bool StackEmpty(Stack* st);