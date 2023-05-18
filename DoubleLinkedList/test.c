#include  "DoubleLinkedList.h"

void test(Node* head)
{
    DLLPushBack(head,1);
    DLLPushBack(head,2);
    DLLPushFront(head,0);
    Node* pos=DLLSearch(head,1);
    DLLInsert(pos,0);
    pos=DLLSearch(head,2);
    DLLErase(pos);
    DLLPrint(head);
    DLLDestroy(head);
    head=NULL;
}

int main()
{
    Node* plist=DLLInit();
    test(plist);
    system("pause");
    return 0;
}
