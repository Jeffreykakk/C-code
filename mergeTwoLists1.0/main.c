#include <stdio.h>
#include <stdlib.h>

//将两个升序链表合并为一个新的升序链表并返回
//新链表是通过拼接给定的两个链表的所有节点组成的

//1.设立带哨兵位的头节点
//2.分别用plist1和plist2遍历两个链表
//3.将较小的数尾插到哨兵位后
//4.当一个链表遍历完，把带哨兵位链表的尾节点与未遍历完链表的头节点连接

//归并排序法

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

node* mergeTwoLists(node* list1,node* list2)
{
    node* head=(node*)malloc(sizeof(node));     //设立哨兵位的头节点
    node* tail=head;
    tail->next=NULL;
    while(list1 && list2)
    {
        if(list1->val<list2->val)
        {
            tail->next=list1;
            list1=list1->next;
            
        }
        else
        {
            tail->next=list2;
            list2=list2->next;
        }
        tail=tail->next;
    }
    if(list1)
    tail->next=list1;
    if(list2)
    tail->next=list2;
    node* newhead=head->next;
    free(head);
    return newhead;
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
    n33->next=NULL;

    print(plist2);
    
    node* newnode=mergeTwoLists(plist1,plist2);
    print(newnode);
    return 0;
}