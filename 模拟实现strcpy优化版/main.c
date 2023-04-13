#include <stdio.h>
#include <assert.h>

void mystrcpy(char* des,const char*sou)
{
	assert(des);
	assert(sou);
	while(*des++=*sou++);
}

int main() 
{
	char str1[20]="abcdef";
	char str2[20]="hello";
	mystrcpy(str1,str2);
	printf("%s",str1);
	return 0;
}