#include <stdio.h>
#include <stdlib.h>

//在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针
//例如，链表 1->2->3->3->4->4->5，处理后为 1->2->5

struct ListNode 
{
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplication(struct ListNode* pHead)
{
    if(pHead == NULL || pHead->next == NULL)
        return pHead;
    struct ListNode* n0 = NULL;
    struct ListNode* n1 = pHead;
    struct ListNode* n2 = n1->next;
    while(n2 != NULL)
    {
        //如果相邻节点不相同，则不需要删除，更新节点，继续向后遍历
        if(n1->val != n2->val)
        {
            n0 = n1;
            n1 = n2;
            n2 = n2->next;
        }
        else
        {
            //如果相邻节点相同,则n2去找第一个不相同的节点
            while(n2 && n2->val == n1->val)
            n2 = n2->next;
            //重新链接，如果要删除的包括头节点，则更新头节点
            if(n0)
            n0->next = n2;
            else
            pHead = n2;
            // 删除掉重复的节点
            while(n1 != n2)
            {
                struct ListNode* next = n1->next;
                free(n1);
                n1 = next;
            }
            //更新节点
            n1 = n2;
            if(n2)
            n2 = n2->next;
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