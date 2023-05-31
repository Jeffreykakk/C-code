#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

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

//快速排序递归写法
//1.每一趟排序指定一个key，排完序后key前的元素都小于等于key，key后的元素都大于等于key
//2.每一趟排序都将key排到了正确的位置，再递归排key的左区间和右区间
//3.当递归的区间只有一个元素或不存在时，递归结束，排序完成


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
    int key_pos=left;
    while(left<right)
    {
        //right先走，找比key小的值
        while(left<right && arr[right]>=arr[key_pos])
        right--;
        //left后走，找比key大的值
        while(left<right && arr[left]<=arr[key_pos])
        left++;
        Swap(&arr[left],&arr[right]);
    }
    Swap(&arr[key_pos],&arr[left]);
    key_pos=left;
    return key_pos;
}

//hoare法
void QuickSort(int* arr,int begin,int end)
{
    //递归的区间只有一个元素或不存在时
    // if(begin>=end)
    // return;

    //优化最小区间法
    if(end-begin<=15)
    InsertSort(arr+begin,end-begin+1);

    else
    {
        //将基准值排到相应位置
        int key_pos=PartSort(arr,begin,end);
        
        //递归排序左右两个区间
        //[begin,key_pos-1] key_pos [key_pos+1,end]
        QuickSort(arr,begin,key_pos-1);
        QuickSort(arr,key_pos+1,end);
    }
    
}




void QuickSort_test()
{
    int size=1000000;
    srand((unsigned int)time(NULL));
    int* arr=(int*)malloc(sizeof(int)*size);
    int i=0;
    for(i=0;i<size;i++)
    arr[i]=rand()%10000;

    //传待排区间的左右下标
    int e1=clock();
    QuickSort(arr,0,size-1);
    int e2=clock();
    //printarr(arr,size);
    printf("QuickSort-> %d\n",e2-e1);

    //QuickSort排序有序数据
    e1=clock();
    QuickSort(arr,0,size-1);
    e2=clock();
    printf("QuickSort-> %d\n",e2-e1);

    free(arr);

}

int main()
{
    QuickSort_test();
    system("pause");
    return 0;
}