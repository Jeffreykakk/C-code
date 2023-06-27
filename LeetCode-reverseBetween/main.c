#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <windows.h>

// 给你单链表的头指针 head 和两个整数 left 和 right ，其中 left <= right 
// 请你反转从位置 left 到位置 right 的链表节点，返回反转后的链表


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

struct ListNode *reverseList(struct ListNode *left, struct ListNode *right)
{
    struct ListNode *prev = NULL;
    struct ListNode *cur = left;
    struct ListNode *next = NULL;
    while (1)
    {
        next = cur->next;
        cur->next = prev;
        if (cur == right)
            break;
        prev = cur;
        cur = next;
    }
    return cur;
}

struct ListNode *reverseBetween(struct ListNode *head, int left, int right)
{
    if (left == right)
        return head;
    struct ListNode *phead = (struct ListNode *)malloc(sizeof(struct ListNode));
    phead->next = head;
    struct ListNode *slow = phead;
    struct ListNode *fast = phead;
    struct ListNode *prev = phead;
    while (left--)
    {
        slow = slow->next;
        if (prev->next != slow)
            prev = prev->next;
    }
    while (right--)
        fast = fast->next;
    struct ListNode *next = fast->next;
    prev->next = reverseList(slow, fast);
    slow->next = next;
    struct ListNode *newhead = phead->next;
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
    struct ListNode* n1=Buynode(1);
    struct ListNode* n2=Buynode(2);
    struct ListNode* n3=Buynode(3);
    struct ListNode* n4=Buynode(4);
    struct ListNode* n5=Buynode(5);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    struct ListNode* head=n1;
    SLLPrint(head);
    head = reverseBetween(head,2,4);
    SLLPrint(head);
    SLLDestroy(head);
    system("pause");
    return 0;
}