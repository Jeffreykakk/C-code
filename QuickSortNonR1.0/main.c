#include <time.h>
#include "Stack.h"


void InsertSort(int* arr,int n)
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        //[0,end]为有序区间
        int end=i;
        //无序区间的第一个元素，即待排元素
        int tmp=arr[end+1];
        //单趟排序
        while(end>=0)
        {
            //后移元素
            if(tmp<arr[end])
            {
                arr[end+1]=arr[end];
                end--;
            }
            else
            break;
        }
        arr[end+1]=tmp;
    }
}

void printarr(int* arr,int size)
{
    int i=0;
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}

//快速排序非递归写法
//1.每一趟排序指定一个key，排完序后key前的元素都小于等于key，key后的元素都大于等于key
//2.每一趟排序都将key排到了正确的位置，再用栈将待排的子区间入栈模拟实现递归
//3.区间只有一个元素或不存在时，不入栈，当栈空了，即排序结束


void Swap(int* e1,int* e2)
{
    int tmp=*e1;
    *e1=*e2;
    *e2=tmp;
}

//三数取中优化法，解决快排在有序或接近有序情况下效率降低至O(n^2)的缺陷
int getmid(int* arr,int left,int right)
{
    int mid=(left+right)/2;
    if(arr[left]<arr[mid])
    {
        if(arr[mid]<arr[right])
        return mid;
        else if(arr[right]<arr[left])
        return left;
        else
        return right;
    }
    else
    {
        if(arr[right]<arr[mid])
        return mid;
        else if(arr[right]>arr[left])
        return left;
        else
        return right;
    }
}

//单趟排序
int PartSort(int* arr,int left,int right)
{
    int mid=getmid(arr,left,right);
    Swap(&arr[mid],&arr[left]);
    int prev=left;
    int cur=left+1;
    int key_pos=left;
    while(cur<=right)
    {
        //cur后移找比key小的值
        if(arr[cur]<arr[key_pos] && ++prev!=cur)
        Swap(&arr[cur],&arr[prev]);
        cur++;
    }
    Swap(&arr[prev],&arr[key_pos]);
    key_pos=prev;
    return key_pos;
}

//前后指针法
void QuickSort(int* arr,int begin,int end)
{
    //递归的区间只有一个元素或不存在时
    // if(begin>=end)
    // return;

    //优化最小区间法
    if(end-begin<=15)
    InsertSort(arr+begin,end-begin+1);
    stack st;
    StackInit(&st);
    StackPush(&st,end);
    StackPush(&st,begin);
    while(!StackEmpty(&st))
    {
        int left=StackTop(&st);
        StackPop(&st);
        int right=StackTop(&st);
        StackPop(&st);
        int key=PartSort(arr,left,right);

        //[left,key-1] key [key+1,right]
        if(key+1<right)
        {
            StackPush(&st,right);
            StackPush(&st,key+1);
        }
        if(left<key-1)
        {
            StackPush(&st,key-1);
            StackPush(&st,left);
        }
    }
    StackDestroy(&st);
}




void QuickSort_test()
{
    int size=20;
    srand((unsigned int)time(NULL));
    int* arr=(int*)malloc(sizeof(int)*size);
    int i=0;
    for(i=0;i<size;i++)
    arr[i]=rand()%100;
    
    //传待排区间的左右下标
    QuickSort(arr,0,size-1);
    printarr(arr,size);
    
    free(arr);

}

int main()
{
    QuickSort_test();
    system("pause");
    return 0;
}