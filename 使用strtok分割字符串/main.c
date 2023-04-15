#include <stdio.h>
#include <string.h>

int main() 
{
	char str[20]="1920466903@qq.com";
	char tmp[20]={0};
	strcpy(tmp,str);
	char* ret=NULL;
	for(ret=strtok(tmp,"@.");ret!=NULL;ret=strtok(NULL,"@."))
	{
		printf("%s\n",ret);
	}
	return 0;
}