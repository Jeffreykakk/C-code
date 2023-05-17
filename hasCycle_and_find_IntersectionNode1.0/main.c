#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//给定一个链表的头节点head，返回链表开始入环的第一个节点
//如果链表无环，则返回NULL

//1.分别创建快指针与慢指针，快指针一次走两步，慢指针一次走一步
//2.若链表没有环，则fast一定会走到空，返回false
//3.若链表有环，当fast和slow进环，且fast与slow相遇时创建meet指针
//4.meet与head指针各走一步，当两个指针相遇时，即为入环的第一个节点


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



node* detectCycle(node* phead)
{
    node* slow=phead;
    node* fast=phead;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            node* meet=fast;
            node* inter=phead;
            while(1)
            {
                if(meet==inter)
                return inter;
                meet=meet->next;
                inter=inter->next;
            }
        }
    }
    return NULL;
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
    n5->next=n3;

    node* inter=detectCycle(plist);
    printf("%d\n",inter->val);
    return 0;
}