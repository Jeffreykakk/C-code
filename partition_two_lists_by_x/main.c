#include <stdio.h>
#include <stdlib.h>

//给一链表和定值x，编写一段代码将所有小于x的结点排在其余节点之前
//不能改变原来的数据顺序，返回重新排列后的链表的头指针

//1.设立两个带哨兵位的头节点，一个连接小于x的数，另一个连接大于等于x的数
//2.遍历原链表后，将两个链表相连

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

node* partition(node* pHead, int x)
{
    node* greaterhead=(node*)malloc(sizeof(node));
    node* minorhead=(node*)malloc(sizeof(node));
    node* greatertail=greaterhead;
    node* minortail=minorhead;
    node* cur=pHead;
    while(cur)
    {
        if(cur->val<x)
        {
            minortail->next=cur;
            minortail=minortail->next;
            cur=cur->next;
            minortail->next=NULL;
        }
        else
        {
            greatertail->next=cur;
            greatertail=greatertail->next;
            cur=cur->next;
            greatertail->next=NULL;
        }
    }
    minortail->next=greaterhead->next;
    pHead=minorhead->next;
    free(greaterhead);
    free(minorhead);
    return pHead;
}


int main()
{
    //链表1
    node* n1=(node*)malloc(sizeof(node));
    node* n2=(node*)malloc(sizeof(node));
    node* n3=(node*)malloc(sizeof(node));
    node* n4=(node*)malloc(sizeof(node));
    node* n5=(node*)malloc(sizeof(node));

    node* plist=n1;

    n1->val=6;
    n2->val=3;
    n3->val=3;
    n4->val=1;
    n5->val=7;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;


    //链表2
    // node* n11=(node*)malloc(sizeof(node));
    // node* n22=(node*)malloc(sizeof(node));
    // node* n33=(node*)malloc(sizeof(node));

    // node* plist2=n11;

    // n11->val=1;
    // n22->val=2;
    // n33->val=4;

    // n11->next=n22;
    // n22->next=n33;
    // n33->next=NULL;

    // print(plist2);
    
    plist=partition(plist,4);
    print(plist);
    return 0;
}