#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <windows.h>

//给你链表的头节点 head ，每 k 个节点一组进行翻转，请你返回修改后的链表
//k 是一个正整数，它的值小于或等于链表的长度
//如果节点总数不是 k 的整数倍，那么请将最后剩余的节点保持原有顺序
//你不能只是单纯的改变节点内部的值，而是需要实际进行节点交换


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

struct ListNode *reverseList(struct ListNode *head, struct ListNode *tail)
{
    struct ListNode *prev = NULL;
    struct ListNode *cur = head;
    struct ListNode *next = NULL;
    while (1)
    {
        next = cur->next;
        cur->next = prev;
        if (cur == tail)
            break;
        prev = cur;
        cur = next;
    }
    return cur;
}

bool checkreverse(struct ListNode **fast, int k)
{
    if (*fast == NULL)
        return false;
    while (k--)
    {
        *fast = (*fast)->next;
        if (*fast == NULL)
            return false;
    }
    return true;
}

struct ListNode *reverseKGroup(struct ListNode *head, int k)
{
    if (k == 1)
        return head;
    struct ListNode *phead = (struct ListNode *)malloc(sizeof(struct ListNode));
    phead->next = head;
    struct ListNode *prev = phead;
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (checkreverse(&fast, k - 1))
    {
        struct ListNode *next = fast->next;
        prev->next = reverseList(slow, fast);
        prev = slow;
        slow = next;
        fast = slow;
    }
    prev->next = slow;
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
    head = reverseKGroup(head,2);
    SLLPrint(head);
    SLLDestroy(head);
    system("pause");
    return 0;
}