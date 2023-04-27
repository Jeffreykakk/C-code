#include <stdio.h>

int main() 
{
	char letter=0;
	letter=getchar();
	if(letter>='a'&&letter<='z')
	printf("%c\n",letter-32);
	else
	printf("input error\n");
	return 0;
}