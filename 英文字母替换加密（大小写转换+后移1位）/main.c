#include <stdio.h>

int main()
{
    char ch[100];
    gets(ch);
    int i=0;
    int sz=sizeof(ch)/sizeof(ch[0]);    
	for(i = 0;i < sz;i++)
    {
        if(ch[i]>=97&&ch[i]<122)
            ch[i]-=31;
        else
        {
            if(ch[i]>=65&&ch[i]<90)
            ch[i]+=33;
            else
            {
            	if(ch[i]==122)
            	ch[i]-=57;
            	else
            	{
            		if(ch[i]==90)
            		ch[i]+=7;
				}
			}
        }
    }
    puts(ch);
    return 0;
}