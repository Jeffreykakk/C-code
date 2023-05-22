#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char password1[20]="abcd1234";
    char password2[100]={0};
    char ch=0;
    int i=0;
    printf("Please input password: ");
    while((ch=getch())!='\r')
    {
        password2[i++]=ch;
        printf("*");
    }
    while(strcmp(password1,password2)!=0)
    {
        i=0;
        memset(password2,0,100);
        printf("\nPlease input password again: ");
        while((ch=getch())!='\r')
        {
            password2[i++]=ch;
            printf("*");
        }
    }
    printf("\n登陆成功\n");
    return 0;
}