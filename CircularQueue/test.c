#include "circularqueue.h"

int main()
{
    MyCircularQueue* queue=myCircularQueueCreate(3);
    myCircularQueueEnQueue(queue,1);
    myCircularQueueEnQueue(queue,2);
    myCircularQueueEnQueue(queue,3);
    myCircularQueueDeQueue(queue);
    myCircularQueueDeQueue(queue);
    myCircularQueueEnQueue(queue,3);
    myCircularQueueEnQueue(queue,5);
    myCircularQueueDeQueue(queue);
    myCircularQueueDeQueue(queue);
    myCircularQueueDeQueue(queue);  //
    myCircularQueueDeQueue(queue);
    myCircularQueueFree(queue);
    system("pause");
    return 0;
}