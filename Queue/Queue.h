#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <windows.h>

typedef int QueueDatatype;

typedef struct Queuenode
{
    QueueDatatype data;
    struct Queuenode* next;
}node;

typedef struct Queue
{
    node* head;
    node* tail;
}Queue;

void QueueInit(Queue* queue);
void QueueDestroy(Queue* queue);
void QueuePush(Queue* queue,QueueDatatype x);
void QueuePop(Queue* queue);
QueueDatatype QueueFront(Queue* queue);
QueueDatatype QueueBack(Queue* queue);
int QueueSize(Queue* queue);
bool QueueEmpty(Queue* queue);
