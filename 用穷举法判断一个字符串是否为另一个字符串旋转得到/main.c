#include <stdio.h>
#include <string.h>

int is_rotate(char *str1,char* str2)      //abcdef --> bcdefa --> cdefab
{
	int len=strlen(str1);
	for(int i=0;i<len;i++)
	{
		int temp=*str1;
		for(int j=0;j<len-1;j++)
		{
			*(str1+j)=*(str1+j+1);
		}
		*(str1+len-1)=temp;
		if(strcmp(str1,str2)==0)
		return 1;
	}
	return 0;
}

int main() 
{
	char str1[20]="abcdef";
	char str2[20]="cdefab";
	int ret=is_rotate(str1,str2);
	if(ret==1)
	printf("yes!\n");
	else
	printf("no!\n");
	return 0;
}