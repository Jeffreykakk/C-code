#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

// 给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点
//你必须在不修改节点内部的值的情况下完成本题（只能进行节点交换）

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

struct ListNode *swapPairs(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    struct ListNode *phead = (struct ListNode *)malloc(sizeof(struct ListNode));
    phead->next = head;
    struct ListNode *n1 = phead, *n2 = head, *n3 = head->next;
    while (n2 && n3)
    {
        struct ListNode *n4 = n3->next;
        n1->next = n3;
        n3->next = n2;
        n2->next = n4;
        n1 = n2;
        n2 = n4;
        if (n2 != NULL)
            n3 = n2->next;
    }
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
    head=swapPairs(head);
    SLLPrint(head);
    SLLDestroy(head);
    system("pause");
    return 0;
}