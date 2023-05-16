#include <stdio.h>
#include <stdlib.h>

//给你一个链表，输出该链表中倒数第k个节点

//1.设立两个指针，一个快指针，一个慢指针
//2.快指针先走k步（判断k与链表长度的大小）
//3.快指针和慢指针同时走，当快指针走到空时，慢指针刚好走到倒数第k个节点

//快慢指针法，只遍历一次链表

typedef struct ListNode 
{
    int val;
    struct ListNode* next;
}node;

void print(node* head)
{
    while(head)
    {
        printf("%d->",head->val);
        head=head->next;
    }
    printf("NULL\n");
}

node* FindKthToTail(node* head,int k)
{
    node* fast=head;
    node* slow=head;
    while(k--)
    {
        if(fast==NULL)          //还没走到k步，fast已经走到空，k大于链表长度
        return NULL;
        fast=fast->next;
    }
    while(fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}


int main()
{
    node* n1=(node*)malloc(sizeof(node));
    node* n2=(node*)malloc(sizeof(node));
    node* n3=(node*)malloc(sizeof(node));
    node* n4=(node*)malloc(sizeof(node));
    node* n5=(node*)malloc(sizeof(node));

    node* plist=n1;

    n1->val=1;
    n2->val=2;
    n3->val=3;
    n4->val=4;
    n5->val=5;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    print(plist);

    node* slow=FindKthToTail(plist,3);
    print(slow);

    return 0;
}