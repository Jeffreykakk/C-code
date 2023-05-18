#include "DoubleLinkedList.h"

Node* DLLInit()                                         //初始化链表，设立哨兵位
{
    Node* head=(Node*)malloc(sizeof(Node));
    head->next=head;
    head->prev=head;
    return head;
}

bool isempty(Node* head)
{
    assert(head);
    return head==head->next;
}

Node* Buynode(DLLdatatype x)                             //创建新的节点
{
    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

void DLLPrint(Node* head)
{
    assert(head);
    Node* cur=head->next;
    while(cur!=head)
    {
        printf("%d->",cur->data);
        cur=cur->next;
    }
    printf("NULL\n");
}

void DLLPushBack(Node* head,DLLdatatype x)               //尾插
{
    assert(head);

    //tail newnode head

    // Node* newnode=Buynode(x);
    // Node* tail=head->prev;
    // tail->next=newnode;
    // newnode->prev=tail;
    // newnode->next=head;
    // head->prev=newnode;

    //复用DLLInsert
    DLLInsert(head,x);
}

void DLLPopBack(Node* head)                              //尾删
{
    assert(head);
    assert(!isempty(head));                              //链表不为空

    // Node* tail=head->prev;
    // Node* prev=tail->prev;
    // free(tail);
    // tail=NULL;
    // prev->next=head;
    // head->prev=prev;

    //复用DLLErase
    DLLErase(head->prev);
}

void DLLPushFront(Node* head,DLLdatatype x)               //头插
{
    assert(head);

    //head  newnode  next
    // Node* newnode=Buynode(x);
    // Node* next=head->next;
    // head->next=newnode;
    // newnode->prev=head;
    // newnode->next=next;
    // next->prev=newnode;

    //复用DLLInsert
    DLLInsert(head->next,x);
}

void DLLPopFront(Node* head)                              //头删
{
    assert(head);
    assert(!isempty(head));                              //链表不为空

    // Node* next=head->next->next;
    // free(head->next);
    // head->next=next;
    // next->prev=head;

    //复用DLLErase
    DLLErase(head->next);
}

Node* DLLSearch(Node* head,DLLdatatype x)                //寻找链表存储的数据
{
    Node* cur=head->next;
    while(cur!=head)
    {
        if(cur->data==x)
        return cur;
        cur=cur->next;
    }
    return NULL;
}

void DLLInsert(Node* pos,DLLdatatype x)                 //任意节点前插入数据 
{
    assert(pos);
    //prev  newnode  pos
    Node* newnode=Buynode(x);
    Node* prev=pos->prev;
    prev->next=newnode;
    newnode->prev=prev;
    newnode->next=pos;
    pos->prev=newnode;
}

void DLLErase(Node* pos)                                //删除任意节点
{
    assert(pos);
    //prev  pos  next
    Node* prev=pos->prev;
    Node* next=pos->next;
    free(pos);
    prev->next=next;
    next->prev=prev;
}

void DLLDestroy(Node* head)                             //链表的销毁
{
    Node* cur=head->next;
    while(cur!=head)
    {
        Node* next=cur->next;
        free(cur);
        cur=next;
    }
    free(cur);
}