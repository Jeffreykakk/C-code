#include <stdio.h>
#include <stdlib.h>

//给你一个链表的头节点head和一个整数val
//请你删除链表中所有满足Node.val==val的节点，并返回新的头节点

//1.找到值为val的节点并删除
//2.连接被删除节点的前后两个节点

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
    node* prev=NULL;
    while(cur)
    {
        if(cur->val==val)       //删除
        {
            if(cur==head)      //头删
            {
                node* del=cur;
                cur=cur->next;
                free(del);
                head=cur;
            }
            else
            {
                prev->next=cur->next;
                free(cur);
                cur=prev->next;
            }
        }
        else
        {
            prev=cur;       //记录上一个节点
            cur=cur->next;
        }     
    }
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