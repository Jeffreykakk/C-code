#include <stdio.h>

char* mystrcat(char* des,const char* sou)
{
	char* str=des;
	while(*des)
	des++;
	while(*des++=*sou++);
	return str;
}

int main() 
{
	char str[20]="hello ";	
	printf("%s",mystrcat(str,"bit"));
	return 0;
}