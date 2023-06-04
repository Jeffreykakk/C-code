#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct SLLNode
{
    int val;
    struct SLLNode* next;
}node;

node* Buynode(int x)
{
    node* newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    newnode->val=x;
    return newnode;
}

node* SLLPush(node* head,int x)
{
    node* newnode=Buynode(x);
    if(head==NULL)
    return newnode;
    else
    {
        node* cur=head;
        while(cur->next)
        cur=cur->next;
        cur->next=newnode;
        return head;
    }
}

void SLLPrint(node* head)
{
    node* cur=head;
    while(cur)
    {
        printf("--%d",cur->val);
        cur=cur->next;
    }
    printf("\n");
}

node* MergeList(node* head1,node* head2)
{
    node* newhead=(node*)malloc(sizeof(node));
    node* cur1=head1;
    node* cur2=head2;
    node* tail=newhead;
    while(cur1&&cur2)
    {
        node* next1=cur1->next;
        node* next2=cur2->next;
        cur1->next=cur2->next=NULL;
        tail->next=cur1;
        cur1->next=cur2;
        tail=cur2;
        cur1=next1;
        cur2=next2;
    }
    while(cur1)
    {
        node* next=cur1->next;
        cur1->next=NULL;
        tail->next=cur1;
        tail=cur1;
        cur1=next;
    }
    while(cur2)
    {
        node* next=cur2->next;
        cur2->next=NULL;
        tail->next=cur2;
        tail=cur2;
        cur2=next;
    }
    node* head=newhead->next;
    free(newhead);
    return head;
}

int main()
{
    int num=0,m=0,n=0,i=0;
    int arr1[100]={0};
    int arr2[100]={0};
    scanf("%d",&num);
    while(num!=-1)
    {
        arr1[m++]=num;
        scanf("%d",&num);
    }
    scanf("%d",&num);
    while(num!=-1)
    {
        arr2[n++]=num;
        scanf("%d",&num);
    }
    node* plist1=NULL;
    node* plist2=NULL;
    for(i=0;i<m;i++)
    plist1=SLLPush(plist1,arr1[i]);
    for(i=0;i<n;i++)
    plist2=SLLPush(plist2,arr2[i]);
    SLLPrint(plist1);
    SLLPrint(plist2);
    node* plist=NULL;
    plist=MergeList(plist1,plist2);
    SLLPrint(plist);
    system("pause");
    return 0;
}