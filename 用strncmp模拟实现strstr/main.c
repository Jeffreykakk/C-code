#include <stdio.h>
#include <string.h>

char* mystrstr(char* str1,char* str2)
{
	if(*str2==0)
	return NULL;
	int len=strlen(str2);
	char* end=str1+strlen(str1);
	while(end-str1>=len)
	{
		int ret=strncmp(str1,str2,len);
		if(ret==0)
		return str1;
		str1++;
	}
	return NULL;
}

int main() 
{
	char str1[]="abbbcde";
	char str2[]="bcde";
	char* p=mystrstr(str1,str2);
	if(p!=NULL)
	printf("can find\n%s",p);
	else
	printf("can not find\n");
	return 0;
}