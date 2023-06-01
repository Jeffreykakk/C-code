#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void CountSort(int* arr,int n)
{
    int i=0;
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    int range=max-min+1;
    int* count=(int*)malloc(sizeof(int)*range);
    memset(count,0,sizeof(int)*range);
    for(i=0;i<n;i++)
    count[arr[i]-min]++;
    int j=0;
    for(i=0;i<range;i++)
    {
        while(count[i]--)
        arr[j++]=i+min;
    }
    free(count);
}

int main()
{
    srand((unsigned int)time(NULL));
    int i=0;
    int arr[100]={0};
    for(i=0;i<100;i++)
    arr[i]=rand()%100+150;
    CountSort(arr,100);
    for(i=0;i<100;i++)
    printf("%d ",arr[i]);
    system("pause");
    return 0;
}