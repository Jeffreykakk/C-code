#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//字符串逆置，防止整型溢出

void reversestr(char* str)
{
    int len=strlen(str);
    int left=0;
    int right=len-1;
    while(left<right)
    {
        char tmp=str[left];
        str[left]=str[right];
        str[right]=tmp;
        left++;
        right--;
    }
}


bool isPalindrome(int x)
{
    char origin[12]={0};
    char reverse[12]={0};
    sprintf(origin,"%d",x);
    strcpy(reverse,origin);
    reversestr(reverse);
    return strcmp(reverse,origin)==0;
}

int main()
{
    int ret=isPalindrome(-123);
    if(ret)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}