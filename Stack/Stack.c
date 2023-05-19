#include "Stack.h"

void StackInit(stack* st)           //栈的初始化
{
    assert(st);
    st->data=NULL;
    st->capacity=st->top=0;
}

void StackDestroy(stack* st)        //栈的销毁
{
    assert(st);
    free(st->data);
    st->capacity=st->top=0;
}

bool StackEmpty(stack* st)          //检查栈是否为空
{
    assert(st);
    return st->top==0;
}

void StackPush(stack* st,StackDatatype x)           //向栈中存放数据
{
    assert(st);
    if(st->capacity==st->top)       //考虑扩容
    {
        int newcapacity=st->capacity==0?4:st->capacity*2;
        StackDatatype* tmp=(StackDatatype*)realloc(st->data,newcapacity*sizeof(StackDatatype));
        if(tmp==NULL)
        {
            printf("扩容失败\n");
            exit(-1);
        }
        st->capacity=newcapacity;
        st->data=tmp;
    }
    st->data[st->top]=x;
    st->top++;
}

void StackPop(stack* st)            //删除栈中的数据
{
    assert(st);
    assert(!StackEmpty(st));        //栈不为空
    st->top--;
}

StackDatatype StackTop(stack* st)   //取出栈顶的数据
{
    assert(st);
    assert(!StackEmpty(st));        //栈不为空
    return st->data[st->top-1];
}

int StackSize(stack* st)            //栈中存放数据的个数
{
    assert(st);
    return st->top;
}