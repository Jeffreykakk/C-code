#include <stdio.h>
#include <windows.h>

//编写程序，实现输入的时间，屏幕显示一秒后的时间。显示格式为HH:MM:SS

typedef struct time
{
    int hour;
    int minute;
    int second;
}time;

void SecondLater(time* t)
{
    if(t->second+1==60)
    {
        t->second=0;
        t->minute+=1;
        if(t->minute==60)
        {
            t->minute=0;
            t->hour+=1;
            if(t->hour==24)
            t->hour=0;
        }
    }
    else
    t->second++;
}


int main()
{
    time t={0};
    scanf("%d:%d:%d",&t.hour,&t.minute,&t.second);
    SecondLater(&t);
    printf("%02d:%02d:%02d\n",t.hour,t.minute,t.second);
    system("pause");
    return 0;
}