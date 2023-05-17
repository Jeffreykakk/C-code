#include  "SingleLinkedList.h"

void test()
{
    Node* plist=NULL;
    SLLPushBack(&plist,3);
    SLLPushBack(&plist,4);
    SLLPushBack(&plist,5);
    SLLPrint(plist);
    SLLPopBack(&plist);
    SLLPrint(plist);
    SLLPushFront(&plist,2);
    SLLPushFront(&plist,1);
    SLLPrint(plist);
    SLLPopFront(&plist);
    SLLPopFront(&plist);
    SLLInsert(&plist,3,2);
    SLLInsert(&plist,2,1);
    SLLInsert(&plist,1,0);
    SLLPrint(plist);
    SLLErease(&plist,3);
    SLLPrint(plist);
    SLLErease(&plist,1);
    SLLPrint(plist);
    SLLDestroy(plist);
    plist=NULL;
    SLLPrint(plist);
}

int main()
{
    test();
    system("pause");
    return 0;
}
