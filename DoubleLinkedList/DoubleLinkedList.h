#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <windows.h>

typedef int DLLdatatype;

typedef struct DLLnode
{
    DLLdatatype data;               //链表单个节点存放的有效数据
    struct DLLnode* next;           //链表单个节点存放的指向下一个节点的地址
    struct DLLnode* prev;           //链表单个节点存放的指向前一个节点的地址
}Node;

Node* DLLInit();
void DLLPrint(Node* head);
void DLLPushBack(Node* head,DLLdatatype x);
void DLLPopBack(Node* head);
void DLLPushFront(Node* head,DLLdatatype x);
void DLLPopFront(Node* head);
Node* DLLSearch(Node* head,DLLdatatype x);
void DLLInsert(Node* pos,DLLdatatype x);
void DLLErase(Node* pos);
void DLLDestroy(Node* head);