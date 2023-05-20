#include "Stackbyqueue.h"

void test()
{
    Stack* st=StackInit();
    StackPush(st,0);
    StackPush(st,1);
    StackPush(st,2);
    int top=StackTop(st);
    printf("%d\n",top);
    StackPop(st);
    top=StackTop(st);
    printf("%d\n",top);
    StackPop(st);
    top=StackTop(st);
    printf("%d\n",top);
}

int main()
{
    test();
    system("pause");
    return 0;
}