#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构

//1.找到链表的中间节点
//2.将链表后半段逆置
//3.一个指针遍历未翻转的部分，另一个指针遍历翻转的部分，判断是否为回文结构

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

bool checkPalindromeList(node* phead)
{
    node* mid=middleNode(phead);
    node* reversehead=reverseList(mid);
    while(reversehead)
    {
        if(phead->val!=reversehead->val)
        return false;
        phead=phead->next;
        reversehead=reversehead->next;
    }
    return true;
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
    n4->val=2;
    n5->val=1;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    print(plist);
    int ret=checkPalindromeList(plist);
    if(ret==true)
    printf("yes\n");
    return 0;
}