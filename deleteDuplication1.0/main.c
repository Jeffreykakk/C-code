#include <stdio.h>
#include <stdlib.h>

//在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针
//例如，链表 1->2->3->3->4->4->5，处理后为 1->2->5

struct ListNode 
{
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplication(struct ListNode* pHead ) 
{
    //定义prev，cur，next，tail节点
    //tail记录删除节点的前一个节点
    //用cur遍历链表，如果cur->val==prev->val，free掉cur和prev
    //tail->next连接
    struct ListNode* prev=pHead;
    struct ListNode* cur=pHead;
    struct ListNode* tail=pHead;
    int del=0;
    while(cur)
    {
        if(prev==cur)
        {
            //检查是否删过
            if(cur->val==del)
            {
                if(pHead==cur)
                {
                    struct ListNode* next=cur->next;
                    free(cur);
                    cur=prev=next;
                    pHead=next;
                    tail=pHead;
                }
                else 
                {
                    struct ListNode* next=cur->next;
                    free(cur);
                    cur=prev=next;
                    tail->next=next;
                }
            }
            else
            cur=cur->next;
        }
        else 
        {
            //删除
            if(cur->val==prev->val)
            {
                del=cur->val;
                if(prev==pHead)
                {
                    struct ListNode* next=cur->next;
                    free(prev);
                    free(cur);
                    cur=prev=next;
                    pHead=next;
                    tail=pHead;
                }
                else 
                {
                    struct ListNode* next=cur->next;
                    free(prev);
                    free(cur);
                    cur=prev=next;
                    tail->next=prev;
                }
                
            }
            else 
            {
                cur=cur->next;
                tail=prev;
                prev=prev->next;
            }
        }
    }
    return pHead;
}

int main()
{
    struct ListNode* n1=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3=(struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val=n2->val=n3->val=1;
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    struct ListNode* head=deleteDuplication(n1);
    while(head)
    {
        printf("%d->",head->val);
        head=head->next;
    }
    printf("NULL\n");
    return 0;
}