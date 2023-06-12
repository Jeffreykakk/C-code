#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};

void print(struct ListNode* head)
{
    while(head)
    {
        printf("%d->",head->val);
        head=head->next;
    }
    printf("NULL\n");
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode* fast=head;
    struct ListNode* slow=head;
    struct ListNode* prev=NULL;
    while(n--)
    {
        fast=fast->next;
    }
    while(fast)
    {
        prev=slow;
        fast=fast->next;
        slow=slow->next;
    }
    if(slow==head)
    {
        head=head->next;
        free(slow);
    }
    else
    {
        prev->next=slow->next;
        free(slow);
    }
    return head;
}

int main()
{
    struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));

    n1->val=1;
    n2->val=2;

    n1->next=n2;
    n2->next=NULL;
    struct ListNode *phead = n1;
    phead=removeNthFromEnd(phead,2);

    print(phead);

    return 0;
}