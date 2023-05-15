#include <stdio.h>
#include <stdlib.h>

//给你单链表的头节点head，请你反转链表，并返回反转后的链表

//1.设立一个prev,cur,next分别指向三个连续的节点
//2.令prev为空，cur为head，next记录下个节点
//3.将原先相邻节点的指向倒置

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

node* reverseList(node* head)
{
    node* prev=NULL;
    node* cur=head;
    node* next=NULL;
    while(cur)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
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
    plist=reverseList(plist);
    print(plist);
    return 0;
}

