#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

typedef int HeapDataType;

typedef struct Heap
{
    HeapDataType* data;
    int size;
    int capacity;
}heap;

void HeapInit(heap* pheap);

void myHeapDestroy(heap* pheap);

void HeapPush(heap* pheap,HeapDataType x);

void HeapPop(heap* pheap);

HeapDataType HeapTop(heap* pheap);

int myHeapSize(heap* pheap);

bool HeapEmpty(heap* pheap);

void Swap(HeapDataType* e1, HeapDataType* e2);

void AdjustUp(HeapDataType* data,int child);

void AdjustDown(HeapDataType* data,int size,int parent);

