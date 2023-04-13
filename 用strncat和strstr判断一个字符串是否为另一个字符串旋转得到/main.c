#include <stdio.h>
#include <string.h>

int is_rotate(char *str1,char* str2)      //abcdef --> bcdefa --> cdefab
{
	if(strcmp(str1,str2)==0)
	return 0;
	int len=strlen(str1);
	strncat(str1,str1,len);
	char* p=strstr(str1,str2);
	return p!=NULL;
}

int main() 
{
	char str1[20]="abcdef";
	char str2[20]="dcefab";
	int ret=is_rotate(str1,str2);
	if(ret==1)
	printf("yes!\n");
	else
	printf("no!\n");	
	return 0;
}