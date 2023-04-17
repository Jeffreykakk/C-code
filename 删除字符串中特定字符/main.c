#include <stdio.h>

char* deletechar(char str[],char ch)
{
    char* start=str;
    int i=0;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]==ch)
        {
            int j=i;
            while( str[j]!=0)  
            {
                str[j]=str[j+1];
                j++;
            }
        }
    }
    return start;
}

int main()
{
    char str[20]={0};
    gets(str);
    char ch=0;
    printf("delete  char:");
    scanf("%c",&ch);
    printf("%s\n",deletechar(str,ch));
    return 0;
}