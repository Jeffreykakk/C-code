#include <stdio.h>
#include <stdlib.h>

//给你一个链表的头节点head和一个整数val
//请你删除链表中所有满足Node.val==val的节点，并返回新的头节点

//1.把所有值不为val的节点按原来的顺序连接
//2.删除值为val的节点

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

node* removeElements(node* head, int val)
{
    print(head);
    node* cur=head;
    node* tail=NULL;        //记录尾节点
    while(cur)
    {
        if(cur->val!=val)
        {
            if(tail==NULL)
            {
                tail=cur;
                cur=cur->next;
            }
            else
            {
                tail->next=cur;
                cur=cur->next;
                tail=tail->next;
            }
        }
        else                //删除
        {
            if(cur==head)   //头删
            {
                cur=cur->next;
                free(head);
                head=cur;
            }
            else
            {
                node* del=cur;
                cur=cur->next;
                free(del);
            }
        }
    }
    if(tail!=NULL)
    tail->next=NULL;
    print(head);
    return head;
}

int main()
{  
    node* n1=(node*)malloc(sizeof(node));
    node* n2=(node*)malloc(sizeof(node));
    node* n3=(node*)malloc(sizeof(node));
    node* n4=(node*)malloc(sizeof(node));
    node* n5=(node*)malloc(sizeof(node));
    node* n6=(node*)malloc(sizeof(node));
    node* n7=(node*)malloc(sizeof(node));
    node* plist=n1;
    n1->val=1;
    n2->val=2;
    n3->val=6;
    n4->val=3;
    n5->val=4;
    n6->val=5;
    n7->val=6;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    n7->next=NULL;
    removeElements(plist,1);
    return 0;
}