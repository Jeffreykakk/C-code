#include <stdio.h>

void reverse(char str[])
{
	if(*str!='\0')
	{
		printf("%c ",*str);
		reverse(++str);
	}
}

int main() 
{
	char str[]={0};
	scanf("%s",str);
	reverse(str);
	return 0;
}