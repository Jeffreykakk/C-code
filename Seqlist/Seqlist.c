#include "Seqlist.h"

void capacitycheck(SL* psl)                         //增容函数
{
    assert(psl);
    if(psl->capacity==psl->size)                    //数据个数等于容量时考虑增容
    {
        int newcapacity=psl->capacity==0?4:psl->capacity*2;     
        psl->capacity=newcapacity;
        SLdatatype* tmp=(SLdatatype*)realloc(psl->data,psl->capacity*sizeof(SLdatatype));
        if(tmp==NULL)
        {
            printf("增容失败\n");
            exit(-1);
        }
        psl->data=tmp;
    }
}


void SLinit(SL* psl)                                //将顺序表初始化
{
    assert(psl);
    psl->capacity=psl->size=0;
    psl->data=NULL;
}

void SLPrint(SL* psl)                               //打印顺序表储存的数据
{
    assert(psl);
    int i=0;
    for(i=0;i<psl->size;i++)
    printf("%d ",psl->data[i]);
    printf("\n");
}

void SLPushBack(SL* psl,SLdatatype dat)             //尾插
{
    assert(psl);
    capacitycheck(psl);                             //考虑增容
    psl->data[psl->size]=dat;
    psl->size++;
}

void SLPopBack(SL* psl)                             //尾删
{
    assert(psl);
    assert(psl->size>0);                            //顺序表为空无法删除
    psl->size--;
}

void SLPushFront(SL* psl,SLdatatype dat)            //头插
{
    assert(psl);
    capacitycheck(psl);                             //考虑增容
    int end=psl->size-1;
    while(end>=0)                                   //挪动顺序表中储存的数据
    {
        psl->data[end+1]=psl->data[end];
        end--;
    }
    psl->data[0]=dat;
    psl->size++;
}

void SLPopFront(SL* psl)                            //头删
{
    assert(psl);
    assert(psl->size>0);                            //顺序表为空无法删除
    int begin=1;
    while(begin<=psl->size)
    {
        psl->data[begin-1]=psl->data[begin];
        begin++;
    }
    psl->size--;
}

void SLInsert(SL* psl,int pos,SLdatatype dat)      //任意位置插入
{
    assert(psl);
    assert(pos>=0&&pos<=psl->size);                //判断插入数据位置的合法性
    capacitycheck(psl);                            //考虑增容
    int end=psl->size-1;
    while(end>=pos)
    {
        psl->data[end+1]=psl->data[end];
        end--;
    }
    psl->data[pos]=dat;
    psl->size++;
}

void SLErase(SL* psl,int pos)                      //任意位置删除
{
    assert(psl);
    assert(pos>=0&&pos<psl->size);                 //判断删除数据位置的合法性
    int begin=pos;
    while(begin<psl->size-1)                       //挪动数据
    {
        psl->data[begin]=psl->data[begin+1];
        begin++;
    }
    psl->size--;
}

int SLSearch(SL* psl,int dat)                      //查找顺序表中存储的数据
{
    int i=0;
    for(i=0;i<psl->size;i++)
    {
        if(psl->data[i]==dat)
        return i;
    }
    printf("没找到\n");
    return -1;
}