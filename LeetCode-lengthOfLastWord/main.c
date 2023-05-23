#include <stdio.h>

//给你一个字符串s，由若干单词组成，单词前后用一些空格字符隔开
//返回字符串中最后一个单词的长度


//双指针法，一个指针找最最后一个单词，另一个指针找尾

int lengthOfLastWord(char * s)
{
    char* head=s;
    char* tail=s;
    int blank=0;
    while(*tail)
    {
        if(*tail==' ')
        {
            while(*tail==' ')
            {
                tail++;
                blank++;
            }
            if(*tail!='\0')
            {
                blank=0;
                head=tail;
            }
        }
        else
        tail++;
        
    }
    return tail-head-blank;
}

int main()
{
    char s[]="   fly me   to   the moon  ";
    int len=lengthOfLastWord(s);
    printf("%d\n",len);
    return 0;
}