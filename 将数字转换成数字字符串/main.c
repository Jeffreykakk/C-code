#include <stdio.h>
#include <string.h>

int main() 
{
	int num=0;
	scanf("%d",&num);
	char buf[10]={0};
	sprintf(buf,"%d",num);
	printf(buf);
	return 0;
}

