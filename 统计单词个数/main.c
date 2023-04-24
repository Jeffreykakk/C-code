#include <stdio.h>

int count(const char* str)
{
    int count=0,flag=1;
    while(*str==' ')
    str++;
	while(*str)
    {
        if(*str==' ')
        {
        	if(flag==1)
        	{
        		count++;
        		flag=0;
			}
		}
		else
		flag=1;
        str++;
    }
    if(flag==1)
    return ++count;
    return count;
}

int main()
{
    char str[50]={0};
    gets(str);    
    int ret=count(str);
    printf("%d\n",ret);
    return 0;
}