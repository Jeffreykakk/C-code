#include "Stack.h"

//给定一个只包括(){}[]的字符串s，判断字符串是否有效
//有效字符串需满足：
//1.左括号必须用相同类型的右括号闭合
//2.左括号必须以正确的顺序闭合
//3.每个右括号都有一个对应的相同类型的左括号


bool isValid(char * s)
{
    stack st={0};
    StackInit(&st);
    while(*s)
    {
        if(*s=='('||*s=='['||*s=='{')
        {
            StackPush(&st,*s);
            s++;
        }
        else
        {
            if(StackEmpty(&st))
            {
                StackDestroy(&st);
                return false;
            }
            char ch=StackTop(&st);
            StackPop(&st);
            if(*s==')')
            {
                if(ch!='(')
                {
                    StackDestroy(&st);
                    return false; 
                }
            }
            if(*s==']')
            {
                if(ch!='[')
                {
                    StackDestroy(&st);
                    return false; 
                }
            }
            if(*s=='}')
            {
                if(ch!='{')
                {
                    StackDestroy(&st);
                    return false; 
                }
            }
            s++;
        }
    }
    if(!StackEmpty(&st))
    {
        StackDestroy(&st);
        return false;
    }
    StackDestroy(&st);
    return true;
}

int main()
{
    char s[]="(";
    int ret=isValid(s);
    if(ret==true)
    printf("Valid\n");
    else
    printf("Invalid\n");
    system("pause");
    return 0;
}