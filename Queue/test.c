#include "Queue.h"

void test()
{
    Queue queue={0};
    QueueInit(&queue);
    QueuePush(&queue,0);
    QueuePush(&queue,1);
    QueuePush(&queue,2);
    QueuePop(&queue);
    QueuePop(&queue);
    int head=QueueFront(&queue);
    int tail=QueueBack(&queue);
    int size=QueueSize(&queue);
    printf("head = %d\ntail = %d\nsize = %d\n",head,tail,size);
}

int main()
{
    test();
    system("pause");
    return 0;
}