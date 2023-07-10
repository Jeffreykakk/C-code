#include <stdio.h>

int countSegments(char * s)
{
    if(*s=='\0')		//""
    return 0;
    int count=0,flag=1;
    while(*s==' ')		//"  "
    s++;
    if(*s=='\0')
    return 0;
	while(*s)
    {
        if(*s==' ')
        {
        	if(flag==1)
        	{
        		count++;
        		flag=0;
			}
		}
		else
		flag=1;
        s++;
    }
    if(flag==1)
    return ++count;
    else
    return count;
}

int main()
{
    char str[50]={0};
    gets(str);    
    int ret=countSegments(str);
    printf("%d\n",ret);
    return 0;
}