#include "Queuebystack.h"

void test()
{
    MyQueue* queue=myQueueCreate();
    myQueuePush(queue, 0);
    myQueuePush(queue, 1);
    myQueuePush(queue, 2);
    myQueuePush(queue, 3);
    while(!myQueueEmpty(queue))
    printf("%d\n",myQueuePop(queue));
}

int main()
{
    test();
    system("pause");
    return 0;
}