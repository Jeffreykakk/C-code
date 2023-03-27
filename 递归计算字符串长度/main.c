#include <stdio.h>

int strlen(char* str)
{
	if(*str!='\0')
	return 1+strlen(str+1);
	else
	return 0;
}

int main() 
{
	char arr[]="abcdef";
	int ret;
	ret=strlen(arr);
	printf("%d",ret);
	return 0;
}