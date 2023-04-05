#include <stdio.h>

void reverse(char str[])
{
	char* temp=str;
	if(*str!='\0')
	reverse(++str);
	printf("%c",*temp);
}

int main() 
{
	char str[]={0};
	scanf("%s",str);
	reverse(str);
	return 0;
}