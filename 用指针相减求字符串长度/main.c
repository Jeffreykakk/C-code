#include <stdio.h>

int mystrlen(char* p)
{
	char* start=p;
	while(*p!='\0')
	{
		p++;
	}
	return p-start;
}

int main() 
{
	char str[]="abc";
	int ret=mystrlen(str);
	printf("%d",ret);
	return 0;
}