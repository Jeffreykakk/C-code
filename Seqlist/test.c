#include "Seqlist.h"

void SLtest(SL* psl)
{
    SLPushBack(psl,1);
    SLPushBack(psl,2);
    SLPushBack(psl,3);
    SLPushBack(psl,4);
    SLPushBack(psl,5);
    SLPrint(psl);
    SLPopBack(psl);
    SLPopBack(psl);
    SLPopBack(psl);
    SLPrint(psl);
    SLPushFront(psl,0);
    SLPushFront(psl,0);
    SLPrint(psl);
    SLPopFront(psl);
    SLPopFront(psl);
    SLPrint(psl);
    SLInsert(psl,1,3);
    SLInsert(psl,1,3);
    SLInsert(psl,1,3);
    SLPrint(psl);
    SLErase(psl,3);
    SLPrint(psl);
    SLErase(psl,SLSearch(psl,3));
    SLPrint(psl);
}

int main()
{
    SL sl={0};
    SLinit(&sl);
    SLtest(&sl);
    SLDestroy(&sl);
    system("pause");
    return 0;
}