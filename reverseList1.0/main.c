#include <stdio.h>
#include <stdlib.h>

//给你单链表的头节点head，请你反转链表，并返回反转后的链表

//1.设立一个新的newhead并置为空
//2.按序遍历链表，并把每一个节点头插到newhead前
//3.每次头插后改变newhead的指向，最后返回newhead

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
    node* newhead=NULL;
    node* cur=head;
    while(cur)
    {
        node* next=cur->next;
        cur->next=newhead;
        newhead=cur;
        cur=next;
    }
    return newhead;
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

