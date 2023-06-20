#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

// 给你两个非空的链表，表示两个非负的整数
//它们每位数字都是按照逆序的方式存储的，并且每个节点只能存储一位数字
//请你将两个数相加，并以相同形式返回一个表示和的链表。
//你可以假设除了数字0之外，这两个数都不会以0开头



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

void SLLPrint(struct ListNode* head)
{
    if(head==NULL)
    return;
    SLLPrint(head->next);
    printf("%d",head->val);
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    int flag = 0;
    struct ListNode *cur1 = l1;
    struct ListNode *cur2 = l2;
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tail = head;
    while (cur1 && cur2)
    {
        int add = cur1->val + cur2->val + flag;
        flag = 0;
        if (add >= 10)
        {
            add = add % 10;
            flag = 1;
        }
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = add;
        if (tail == head)
            head->next = node;
        tail->next = node;
        tail = node;
        cur1 = cur1->next;
        cur2 = cur2->next;
    }
    while (cur1)
    {
        int add = cur1->val + flag;
        flag = 0;
        if (add >= 10)
        {
            add = add % 10;
            flag = 1;
        }
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = add;
        tail->next = node;
        tail = node;
        cur1 = cur1->next;
    }
    while (cur2)
    {
        int add = cur2->val + flag;
        flag = 0;
        if (add >= 10)
        {
            add = add % 10;
            flag = 1;
        }
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = add;
        tail->next = node;
        tail = node;
        cur2 = cur2->next;
    }
    if (flag == 1)
    {
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = 1;
        tail->next = node;
        tail = node;
    }
    tail->next = NULL;
    struct ListNode *phead = head->next;
    free(head);
    return phead;
}

int main()
{
    struct ListNode* n1=Buynode(9);
    struct ListNode* n2=Buynode(9);
    struct ListNode* n3=Buynode(9);
    struct ListNode* n4=Buynode(9);
    n1->next=n2;
    n2->next=NULL;
    n3->next=n4;
    n4->next=NULL;
    SLLPrint(n1);
    printf("\n");
    SLLPrint(n3);
    printf("\n");
    struct ListNode* head=addTwoNumbers(n1,n3);
    SLLPrint(head);
    printf("\n");
    SLLDestroy(n1);
    SLLDestroy(n3);
    SLLDestroy(head);

    system("pause");
    return 0;
}