#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

typedef int SLLdatatype;

typedef struct SLLnode
{
    SLLdatatype data;               //链表单个节点存放的有效数据
    struct SLLnode* next;           //链表单个节点存放的指向下一个节点的地址
}Node;

void SLLPrint(Node* phead);
void SLLPushBack(Node** phead,SLLdatatype x);
void SLLPopBack(Node** phead);
void SLLPushFront(Node** pphead,SLLdatatype x);
void SLLPopFront(Node** pphead);
void SLLInsert(Node** pphead,SLLdatatype y,SLLdatatype x);
void SLLErease(Node** pphead,SLLdatatype x);
void SLLDestroy(Node* phead);