#include <stdio.h>

int strlen_(char* str)
{
	int count;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}

int main() 
{
	int ret;
	char arr[]="abcdef";
	ret=strlen_(arr);
	printf("%d",ret);
	return 0;
}