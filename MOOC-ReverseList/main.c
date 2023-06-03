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

node* SLLPushBack(node* head,int x)
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


node* SLLReverse(node* head)
{
    node* newhead=NULL;
    node* cur=head;
    while(cur)
    {
        if(newhead==NULL)
        {
            node* next=cur->next;
            newhead=cur;
            cur->next=NULL;
            cur=next;
        }
        else
        {
            node* next=cur->next;
            cur->next=newhead;
            newhead=cur;
            cur=next;
        }
    }
    return newhead;
}


int main()
{
    int num=0,n=0,i=0;
    int arr[100]={0};
    scanf("%d",&num);
    while(num!=-1)
    {
        arr[n++]=num;
        scanf("%d",&num);
    }
    node* plist=NULL;
    for(i=0;i<n;i++)
    plist=SLLPushBack(plist,arr[i]);
    SLLPrint(plist);
    plist=SLLReverse(plist);
    SLLPrint(plist);
    system("pause");
    return 0;
}