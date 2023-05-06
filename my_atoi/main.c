#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <windows.h>

enum State                  
{
    INVALID,                //非法情况  1.传空指针  2.传空字符串  3.遇到非数字字符  4.数据溢出
    VALID
};

enum State state=VALID;     //定义全局变量来判断转换的字符串是否合法

//将字符串转化为数字输出
int my_atoi(char* str)
{
    int flag=1;             //定义flag区分正负
    long long num=0;        //用long long来存储数据确保不会溢出
    if(str==NULL)           //非法情况1
    {
        state=INVALID;
        return 0;
    }
    if(*str=='\0')          //非法情况2
    {
        state=INVALID;
        return 0;
    }
    while(!isdigit(*str))         //跳过非数字字符
    {
        if(*str=='-')               //处理负号
        {
            flag=-1;
            str++;
        }
        else                        //字符不是负号，非法情况3
        {
            state=INVALID;
            str++;
        }
    }
    while(isdigit(*str))            //处理数字字符
    {
        num=num*10+(*str-'0')*flag;
        str++;
    }
    if(*str)                        //处理完数字字符，下一个字符不是'\0'  非法情况3
    {
        state=INVALID;
        return 0;
    }
    if(num>INT_MAX||num<INT_MIN)    //非法情况4
    {
        state=INVALID;
        return (int)num;
    }
    else
    return (int)num;
}


int main()
{
    char str[50]={0};
    gets(str);
    int ret=my_atoi(str);
    if(state==VALID)
    printf("合法转化 : %d\n",ret);
    else
    printf("非法转化\n");
    system("pause");
    return 0;
}