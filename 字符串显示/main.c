#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>

int main()
{
    char ch1[]="helloworld";
    char ch2[]="          ";
    int left,right,len;
    left=0;
    len=strlen(ch1);
    right=len-1;
    while(left<=right)
    {
        ch2[left]=ch1[left];
        ch2[right]=ch1[right];
        left++;
        right--;
        printf("%s\n",ch2);
        sleep(1); 
        system("cls");
    }
    printf("%s\n",ch2);
    return 0;
  }