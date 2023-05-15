#include <stdio.h>
#include <stdlib.h>

//给你单链表的头结点head，请你找出并返回链表的中间结点
//如果有两个中间结点，则返回第二个中间结点

//1.设立两个指针，一个快指针，一个慢指针
//2.快指针一次走两个节点，慢指针一次走一个节点
//3.快指针走到尾时，慢指针走到中间位置

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

node* middleNode(node* head)
{
    node* fast=head;
    node* slow=head;
    while(fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


int main()
{
    node* n1=(node*)malloc(sizeof(node));
    node* n2=(node*)malloc(sizeof(node));
    node* n3=(node*)malloc(sizeof(node));
    node* n4=(node*)malloc(sizeof(node));
    // node* n5=(node*)malloc(sizeof(node));

    node* plist=n1;

    n1->val=1;
    n2->val=2;
    n3->val=3;
    n4->val=4;
    // n5->val=5;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;
    // n5->next=NULL;

    print(plist);
    node* mid=middleNode(plist);
    print(mid);
    return 0;
}