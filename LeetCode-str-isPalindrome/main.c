#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void reverse(char* s)
{
    int left=0;
    int right=strlen(s)-1;
    while(left<right)
    {
        int tmp=s[left];
        s[left]=s[right];
        s[right]=tmp;
        left++;
        right--;
    }
}

bool isPalindrome(char * s)
{
    int len1=strlen(s);
    char* remove=(char*)malloc(sizeof(char)*(len1+1));
    int k=0;
    while(*s)
    {
        if(isalpha(*s)||isdigit(*s))
        {
            if(isupper(*s))
            remove[k]=tolower(*s);
            else
            remove[k]=*s;
            k++;
        }
        s++;
    }
    remove[k]='\0';
    int len2=strlen(remove);
    printf("%s\n",remove);
    char* reversestr=(char*)malloc(sizeof(char)*(len2+1));
    reversestr=strcpy(reversestr,remove);
    reverse(reversestr);
    printf("%s\n",reversestr);
    int ret=strcmp(reversestr,remove)==0;
    free(remove);
    free(reversestr);
    return ret;
}

int main()
{
    char s[]="A man, a plan, a canal: Panama";
    int ret=isPalindrome(s);
    return 0;
}