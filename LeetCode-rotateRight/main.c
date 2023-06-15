#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//给你一个链表的头节点 head ，旋转链表，将链表每个节点向右移动 k 个位置

struct ListNode 
{
    int val;
    struct ListNode *next;
};

struct ListNode* rotateRight(struct ListNode* head, int k){
    if(head==NULL||k==0)
    return head;
    int count=0;
    struct ListNode* cur=head;
    while(cur)
    {
        count++;
        cur=cur->next;
    }
    k=k%count;
    if(k==0)
    return head;
    struct ListNode* slow=head;
    struct ListNode* fast=head;
    while(k--)
    fast=fast->next;
    while(fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    struct ListNode* newhead=slow->next;
    slow->next=NULL;
    fast->next=head;
    return newhead;
}

int main()
{
    struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val=-1;
    n2->val=5;
    n3->val=3;
    n4->val=4;
    n5->val=0;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    struct ListNode* head=rotateRight(n1,2);
    while(head)
    {
        printf("%d->",head->val);
        head=head->next;
    }
    printf("NULL\n");
    system("pause");
}