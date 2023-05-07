#include <stdio.h>
#include <windows.h>

//写一个宏，模拟实现offsetof计算结构体成员的偏移量

#define OFFSETOF(struct_name,member_name)  (int)(&( ( (struct_name*) 0 ) ->member_name))

//1.将0地址强制类型转换为结构体类型的指针
//2.通过0地址访问结构体成员
//3.取出成员地址并将其强制类型转换为int，即为成员的偏移量

struct A
{
    int a;
    short b;
    int c;
    char d;
};


int main()
{
    printf("%d\n",OFFSETOF(struct A,a));
    printf("%d\n",OFFSETOF(struct A,b));
    printf("%d\n",OFFSETOF(struct A,c));
    printf("%d\n",OFFSETOF(struct A,d));
    system("pause");
    return 0;
}