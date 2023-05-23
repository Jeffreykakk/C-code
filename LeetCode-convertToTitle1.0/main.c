#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//给你一个整数columnNumber，返回它在Excel表中相对应的列名称

char * convertToTitle(int columnNumber)
{
   int n=columnNumber,count=0;
   while(n>0)
   {
       n-=pow(26,count+1);
       count++;
   }
   char* s=(char*)malloc((count+1)*sizeof(char));
   int i=0,j=count-1;
   n=columnNumber;
   while(i<count)
   {
       if(j!=0)
       {
            char ch=0;
            while(n>pow(26,j))
            {
                ch++;
                n-=pow(26,j);
            }
            s[i]=ch+64;
            i++;
            j--;
       }
       else
       {
           s[i]=n+64;
           i++;
       }
   }
   s[i]='\0';
   return s;
}

int main()
{
    char* s=convertToTitle(703);
    printf("%s\n",s);
    free(s);
    return 0;
}