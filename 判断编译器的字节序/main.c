#include <stdio.h>

int main() 
{
	int a=0x11223344;
	char* pa=(char*)&a;
	if(*pa==0x44)
	printf("small\n");
	if(*pa==0x11)
	printf("big\n");
	return 0;
}