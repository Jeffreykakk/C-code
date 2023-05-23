#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * addBinary(char * a, char * b)
{
    int len1=strlen(a);
    int len2=strlen(b);
    int size=len1>len2?len1+2:len2+2;
    char* adds=(char*)malloc(size*sizeof(char));
    adds[size-2]='\0';
    int i=len1-1;   //数组a元素下标
    int j=len2-1;   //数组b元素下标
    int flag=0;     //判断是否进位
    int k=size-3;   //数组adds元素下标
    while(i>=0&&j>=0)
    {
        int c=a[i]+b[j]+flag-2*'0';
        flag=0;
        if(c>=2)    //进位
        {
            adds[k]=c%2+'0';
            flag=1;
        }
        else
        {
            adds[k]=c+'0';
        }
        i--;
        j--;
        k--;
    }
    while(i>=0)
    {
        int c=a[i]+flag-'0';
        flag=0;
        if(c==2)
        {
            adds[k]='0';
            flag=1;
        }
        else
        {
            adds[k]=c+'0';
        }
        i--;
        k--;
    }
    while(j>=0)
    {
        int c=b[j]+flag-'0';
        flag=0;
        if(c==2)
        {
            adds[k]='0';
            flag=1;
        }
        else
        {
            adds[k]=c+'0';
        }
        j--;
        k--;
    }
    if(flag==1)
    {
        for(k=size-2;k>=0;k--)
        adds[k+1]=adds[k];
        adds[0]='1';
    }
    return adds;
}

int main()
{
    char a[]="1111";
    char b[]="1111";
    char* adds=addBinary(a,b);
    printf("%s\n",adds);
    free(adds);
    adds=NULL;
    return 0;
}