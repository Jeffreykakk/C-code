#include <stdio.h>

int mystrcmp(const char* str1,const char* str2)
{
	while(*str1==*str2)
	{
		if(*str1==0)
		return 0;
		str1++;
		str2++;
	}
	return *str1-*str2;
}

int main() 
{
	char str1[]="abbd";
	char str2[]="abcdef";
	int ret=mystrcmp(str1,str2);
	printf("%d\n",ret);
	return 0;
}