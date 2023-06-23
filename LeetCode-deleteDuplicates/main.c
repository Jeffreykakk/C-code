#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

//给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 
//返回已排序的链表

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

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    struct ListNode *slow = head;
    struct ListNode *fast = head->next;
    while (fast)
    {
        if (slow->val != fast->val)
        {
            slow = slow->next;
            fast = fast->next;
        }
        else
        {
            struct ListNode *next = fast->next;
            free(fast);
            fast = next;
            slow->next = fast;
        }
    }
    return head;
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
    struct ListNode* n2=Buynode(1);
    struct ListNode* n3=Buynode(2);
    struct ListNode* n4=Buynode(2);
    struct ListNode* n5=Buynode(5);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    struct ListNode* head=n1;
    SLLPrint(head);
    head = deleteDuplicates(head);
    SLLPrint(head);
    SLLDestroy(head);
    system("pause");
    return 0;
}