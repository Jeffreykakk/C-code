#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//给你一个长度为n的链表，每个节点包含一个额外增加的随机指针random，该指针可以指向链表中的任何节点或空节点
//构造这个链表的深拷贝，深拷贝应该正好由n个全新节点组成，其中每个新节点的值都设为其对应的原节点的值
//新节点的next指针和random指针也都应指向复制链表中的新节点，并使原链表和复制链表中的这些指针能够表示相同的链表状态
//复制链表中的指针都不应指向原链表中的节点


//1.将拷贝的节点插入到原链表节点的后面
//2.如果原节点random指向为NULL，拷贝节点random也指向NULL
//3.原节点random不指向NULL，拷贝节点copy->random=cur->random->next
//4.将拷贝的节点尾插连接，并恢复原链表


typedef struct ListNode 
{
    int val;
    struct ListNode* next;
    struct ListNode* random;
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



node* copyRandomList(node* head)
{
    node* cur=head;

    //将拷贝的节点插入到原链表节点的后面
    while(cur)
    {
        //cur  copy  next
        node* copy=(node*)malloc(sizeof(node));
        node* next=cur->next;
        copy->val=cur->val;
        cur->next=copy;
        copy->next=next;
        cur=next;
    }

    //连接拷贝节点的random
    cur=head;
    while(cur)
    {
        node* copy=cur->next;
        node* next=copy->next;
        if(cur->random==NULL)
        copy->random=NULL;
        else
        copy->random=cur->random->next;
        cur=next;
    }

    //将拷贝的节点尾插连接，并恢复原链表
    node* copyhead=NULL;
    node* copytail=NULL;
    cur=head;
    while(cur)
    {
        node* copy=cur->next;
        node* next=copy->next;
        cur->next=next;
        if(copyhead==NULL)
        {
            copyhead=copy;
            copytail=copy;
        }
        else
        {
            copytail->next=copy;
            copytail=copytail->next;
        }
        cur=next;
    }
    return copyhead;
}

int main()
{
    node* n1=(node*)malloc(sizeof(node));
    node* n2=(node*)malloc(sizeof(node));
    node* n3=(node*)malloc(sizeof(node));
    node* n4=(node*)malloc(sizeof(node));
    node* n5=(node*)malloc(sizeof(node));

    node* plist=n1;

    n1->val=7;
    n2->val=13;
    n3->val=11;
    n4->val=10;
    n5->val=1;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    n1->random=NULL;
    n2->random=n1;
    n3->random=n5;
    n4->random=n3;
    n5->random=n1;

    print(plist);
    node* copyhead=copyRandomList(plist);
    print(copyhead);
    return 0;
}