#include "Stack.h"

void test()
{
    stack st;
    StackInit(&st);
    StackPush(&st,0);
    StackPush(&st,1);
    StackPush(&st,2);
    StackPush(&st,3);
    StackPush(&st,4);
    int top=0;
    while(!StackEmpty(&st))
    {
        top=StackTop(&st);
        printf("%d ",top);
        StackPop(&st);
    }
}

int main()
{
    test();
    system("pause");
    return 0;
}