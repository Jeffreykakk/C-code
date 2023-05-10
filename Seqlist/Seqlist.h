#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>
typedef int SLdatatype;     //顺序表存放数据的类型

typedef struct Seqlist
{
    SLdatatype* data;       //用指针来维护为存放数据而动态开辟的内存空间
    int size;               
    int capacity;
}SL;

void SLinit(SL* psl);
void SLPrint(SL* psl);
void SLPushBack(SL* psl,SLdatatype dat);
void SLPopBack(SL* psl);
void SLPushFront(SL* psl,SLdatatype dat);
void SLPopFront(SL* psl);
void SLInsert(SL* psl,int pos,SLdatatype dat);
void SLErase(SL* psl,int pos);
int SLSearch(SL* psl,int dat);