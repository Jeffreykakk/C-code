#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char buf[20]={0};
	gets(buf);
	int num=0;
	sscanf(buf,"%d",&num);
	printf("%d",num);
	return 0;
}