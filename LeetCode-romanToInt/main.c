#include <stdio.h>
#include <windows.h>

// 给定一个罗马数字，将其转换成整数

int romanToInt(char * s)
{
    int sum=0;
    while(*s)
    {
        if(*s=='I'&&*(s+1)=='V')
        {
            sum+=4;
            s+=2;
        }
        else if(*s=='I'&&*(s+1)=='X')
        {
            sum+=9;
            s+=2;
        }
        else if(*s=='X'&&*(s+1)=='L')
        {
            sum+=40;
            s+=2;
        }
        else if(*s=='X'&&*(s+1)=='C')
        {
            sum+=90;
            s+=2;
        }
        else if(*s=='C'&&*(s+1)=='D')
        {
            sum+=400;
            s+=2;
        }
        else if(*s=='C'&&*(s+1)=='M')
        {
            sum+=900;
            s+=2;
        }
        else if(*s=='I')
        {
            sum+=1;
            s++;
        }
        else if(*s=='V')
        {
            sum+=5;
            s++;
        }
        else if(*s=='X')
        {
            sum+=10;
            s++;
        }
        else if(*s=='L')
        {
            sum+=50;
            s++;
        }
        else if(*s=='C')
        {
            sum+=100;
            s++;
        }
        else if(*s=='D')
        {
            sum+=500;
            s++;
        }
        else if(*s=='M')
        {
            sum+=1000;
            s++;
        }
    }
    return sum;
}

int main()
{
    char str[30]={0};
    scanf("%s",str);
    int ret =romanToInt(str);
    printf("%d\n",ret);
    system("pause");
    return 0;
}