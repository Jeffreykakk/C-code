#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <windows.h>

// 给你链表的头结点 head ，请将其按 升序 排列并返回排序后的链表
// 计数排序

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* Buynode(int x)
{
    struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->next=NULL;
    newnode->val=x;
    return newnode;
}



void SLLPrint(struct ListNode* head)
{
    struct ListNode* cur=head;
    while(cur)
    {
        printf("%d->",cur->val);
        cur=cur->next;
    }
    printf("NULL\n");
}


struct ListNode* sortList(struct ListNode* head)
{
    if(head==NULL)
    return NULL;
    struct ListNode* cur=head;
    int max=head->val;
    int min=head->val;
    while(cur)
    {
        if(cur->val>max)
        max=cur->val;
        if(cur->val<min)
        min=cur->val;
        cur=cur->next;
    }
    int range=max-min;
    int* count=(int*)malloc(sizeof(int)*(range+1));
    memset(count,0,sizeof(int)*(range+1));
    cur=head;
    while(cur)
    {
        count[cur->val-min]++;
        cur=cur->next;
    }
    cur=head;
    while(cur)
    {
        struct ListNode* next=cur->next;
        free(cur);
        cur=next;
    }
    struct ListNode* phead=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* prev=phead;
    int i=0;
    for(i=0;i<=range;i++)
    {
        while(count[i]--)
        {
            struct ListNode* node=(struct ListNode*)malloc(sizeof(struct ListNode));
            node->val=i+min;
            prev->next=node;
            prev=node;
        }
    }
    prev->next=NULL;
    free(count);
    struct ListNode* newhead=phead->next;
    free(phead);
    return newhead;
}

void SLLDestroy(struct ListNode *phead)
{
    assert(phead);
    struct ListNode *cur = phead;
    while (cur)
    {
        struct ListNode *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main()
{
    struct ListNode* n1=Buynode(-1);
    struct ListNode* n2=Buynode(5);
    struct ListNode* n3=Buynode(3);
    struct ListNode* n4=Buynode(4);
    struct ListNode* n5=Buynode(0);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    struct ListNode* head=n1;
    SLLPrint(head);
    head = sortList(head);
    SLLPrint(head);
    SLLDestroy(head);
    system("pause");
    return 0;
}