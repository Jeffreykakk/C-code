#include <stdio.h>
#include <stdlib.h>


struct ListNode 
{
    int val;
    struct ListNode *next;
};

struct ListNode* insertionSortList(struct ListNode* head)
{
    struct ListNode* tail=head;     //有序队列的最后一位
    struct ListNode* phead=(struct ListNode*)malloc(sizeof(struct ListNode));   //哨兵位
    phead->next=head;
    while(tail->next)       //有序队列后为空，即排序完成
    {
        struct ListNode* tmp=tail->next;       //无序队列第一位，即待排序元素
        struct ListNode* cur=phead->next;      //有序队列第一位
        struct ListNode* next=tmp->next;       //无序队列第二位
        struct ListNode* prev=phead;
        if(tmp->val<tail->val)      //无序队列第一个如果小于有序队列最后一个，说明要插入排序
        {
            while(cur!=tmp)
            {
                //插入
                if(cur->val>tmp->val)
                {
                    prev->next=tmp;
                    tmp->next=cur;
                    tail->next=next;
                    prev=phead;
                    break;
                }
                else
                {
                    cur=cur->next;
                    prev=prev->next;
                }
            }
        }
        tail=tmp;
    }
    struct ListNode* newhead=phead->next;
    free(phead);
    return newhead;
}

int main()
{
    struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n5=(struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val=-1;
    n2->val=5;
    n3->val=3;
    n4->val=4;
    n5->val=0;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    struct ListNode* head=insertionSortList(n1);
    while(head)
    {
        printf("%d->",head->val);
        head=head->next;
    }
    printf("NULL\n");
}