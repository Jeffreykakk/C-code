#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <assert.h>

typedef struct 
{
    int* data;
    int k;
    int head;
    int tail;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k);

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);

bool myCircularQueueDeQueue(MyCircularQueue* obj);

int myCircularQueueFront(MyCircularQueue* obj);

int myCircularQueueRear(MyCircularQueue* obj);

bool myCircularQueueIsEmpty(MyCircularQueue* obj);

bool myCircularQueueIsFull(MyCircularQueue* obj);

void myCircularQueueFree(MyCircularQueue* obj);