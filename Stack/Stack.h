#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <windows.h>

typedef int StackDatatype;

typedef struct Stack
{
    StackDatatype* data;
    int top;
    int capacity;
}stack;

void StackInit(stack* st);

void StackDestroy(stack* st);

bool StackEmpty(stack* st);

void StackPush(stack* st,StackDatatype x);

void StackPop(stack* st);

StackDatatype StackTop(stack* st);

int StackSize(stack* st);

