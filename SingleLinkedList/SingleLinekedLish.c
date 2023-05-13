#include "SingleLinkedList.h"

void SLLPrint(Node* phead)                                //打印链表存储的数据
{
    while(phead)
    {
        printf("%d->",phead->data);
        phead=phead->next;
    }
    printf("NULL\n");
}

Node* BuyNode(SLLdatatype x)                              //创建一个新节点
{
    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
}

Node* SLLSearch(Node* phead,SLLdatatype x)                //查找链表存储的数据，找到后返回存储的地址
{
    while(phead)                                          //遍历链表
    {
        if(phead->data==x)
        return phead;
        phead=phead->next;
    }
    return NULL;
}

void SLLPushBack(Node** pphead,SLLdatatype x)             //尾插
{
    assert(pphead);
    Node* newnode=BuyNode(x);                             //链表为空的情况
    if(*pphead==NULL)
    *pphead=newnode; 
    else                                                  //链表不为空的情况
    {
        Node* cur=*pphead;
        while(cur->next)                                  //找链表的尾节点
        cur=cur->next;
        cur->next=newnode;
    } 
}

void SLLPopBack(Node** pphead)                             //尾删
{
    assert(pphead);
    assert(*pphead);                                       //链表为空无法删除
    if((*pphead)->next==NULL)                              //链表只有一个节点的情况
    {
        free(*pphead);
        *pphead=NULL;
    }
    else                                                  //链表有多个节点的情况
    {
        Node* cur=*pphead;
        while(cur->next->next!=NULL)                      //找到链表倒数第二个节点
        cur=cur->next;
        free(cur->next);
        cur->next=NULL;
    }
}

void SLLPushFront(Node** pphead,SLLdatatype x)            //头插
{
    assert(pphead);
    Node* newnode=BuyNode(x);
    newnode->next=*pphead;
    *pphead=newnode;
}

void SLLPopFront(Node** pphead)                           //头删
{
    assert(pphead);
    assert(*pphead);                                      //链表为空无法删除
    Node* tmp=*pphead;
    *pphead=(*pphead)->next;
    free(tmp);
}

void SLLInsert(Node** pphead,SLLdatatype y,SLLdatatype x) //任意数据位置前插入
{
    assert(pphead);
    Node* newnode=BuyNode(x);
    if(*pphead==NULL)                                     //链表为空即为头插
    SLLPushFront(pphead,x);
    else                                                  //链表不为空的情况
    {
        Node* ret=SLLSearch(*pphead,y);                   //查找要插入的位置
        if(ret==NULL)                                     //未找到要插入的位置
        {
            printf("未找到要插入的位置\n");
            return;
        }
        else
        {
            if(ret==*pphead)                              //要插入的位置在第一个节点前，即为头插
            SLLPushFront(pphead,x);
            else                                          //要插入的位置不为第一个节点前
            {
                Node* prev=*pphead;
                while(prev->next!=ret)                    //找到要插入位置的前一个节点
                prev=prev->next;
                prev->next=newnode;
                newnode->next=ret;
            }
        }
    }
}

void SLLErease(Node** pphead,SLLdatatype y)               //任意位置删除
{
    assert(pphead);
    assert(*pphead);                                      //链表为空无法删除
    Node* ret=SLLSearch(*pphead,y);                       //查找要删除的节点
    if(ret==NULL)                                         //未找到要删除的节点
    {
        printf("未找到要删除的数据\n");
        return;
    }
    else
    {
        if(ret==*pphead)                                  //只有一个节点
        {
            free(ret);
            *pphead=NULL;
        }
        else                                              //多个节点
        {
            Node* prev=*pphead;
            while(prev->next!=ret)                        //找到要删除的前一个节点
            prev=prev->next;
            prev->next=ret->next;
            free(ret);
            ret==NULL;
        }
    }
}