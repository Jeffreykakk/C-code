#include "Heap.h"

void test()
{
    heap hp={0};
    HeapInit(&hp);
    int arr[10]={6,7,4,2,3,1,9,0,5,8};
    int i=0;
    for(i=0;i<10;i++)
    HeapPush(&hp,arr[i]);
    for(i=0;i<10;i++)
    printf("%d ",hp.data[i]);
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",HeapTop(&hp));
        HeapPop(&hp);
    }
    printf("\n");
    printf("size = %d\n",hp.size);
    myHeapDestroy(&hp);
}

int main()
{
    test();
    system("pause");
    return 0;
}