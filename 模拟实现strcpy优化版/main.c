#include <stdio.h>
#include <assert.h>

char* mystrcpy(char* des,const char*sou)
{
	assert(des);
	assert(sou);
	char* str=des;
	while(*des++=*sou++);
	return str;
}

int main() 
{
	char str1[20]="abcdef";
	char str2[20]="hello";
	printf("%s",mystrcpy(str1,str2));
	return 0;
}