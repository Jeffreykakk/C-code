#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//给你两个单链表的头节点headA和headB
//请你找出并返回两个单链表相交的起始节点
//如果两个链表不存在相交节点，返回NULL

//1.分别求出两个链表的长度lenA和lenB，并算出长度差gap，用两个链表的尾节点地址是否相同判断是否相交
//2.若相交，长度较长的链表先走gap步，再分别比较向后节点的地址
//3.若地址相同则说明为交点，返回第一个交点


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

node* getIntersectionNode(node* headA,node* headB)
{
    node* curA=headA;
    node* curB=headB;
    int lenA=0,lenB=0;
    while(curA)
    {
        lenA++;
        curA=curA->next;
    }
    while(curB)
    {
        lenB++;
        curB=curB->next;
    }
    if(curA!=curB)
    return NULL;
    int gap=fabs(lenA-lenB);
    node* longlist=headA;
    node* shortlist=headB;
    if(lenA<lenB)
    {
        longlist=headB;
        shortlist=headA;
    }
    while(gap--)
    {
        longlist=longlist->next;
    }
    while(longlist!=shortlist)
    {
        longlist=longlist->next;
        shortlist=shortlist->next;
    }
    return longlist;
}


int main()
{
    //链表1
    node* n1=(node*)malloc(sizeof(node));
    node* n2=(node*)malloc(sizeof(node));
    node* n3=(node*)malloc(sizeof(node));
    node* n4=(node*)malloc(sizeof(node));
    node* n5=(node*)malloc(sizeof(node));

    node* plist1=n1;

    n1->val=1;
    n2->val=3;
    n3->val=3;
    n4->val=4;
    n5->val=5;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    print(plist1);

    //链表2
    node* n11=(node*)malloc(sizeof(node));
    node* n22=(node*)malloc(sizeof(node));
    node* n33=(node*)malloc(sizeof(node));

    node* plist2=n11;

    n11->val=1;
    n22->val=2;
    n33->val=4;

    n11->next=n22;
    n22->next=n33;
    n33->next=n2;

    print(plist2);
    
    node* IntersectionNode=getIntersectionNode(plist1,plist2);
    print(IntersectionNode);
    return 0;
}