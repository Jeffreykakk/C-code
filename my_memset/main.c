#include <stdio.h>
#include <windows.h>

char* my_memset(char* p,int n,int size)
{
    char* start=p;          //用start接收起始地址
    int i=0;
    for(i=0;i<size;i++)
    *(p+i)=n;
    return start;           //返回起始地址
}


int main()
{
    char str[]="this is a test";
    my_memset(str,'*',4);
    printf(str);
    system("pause");
    return 0;
}