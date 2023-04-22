#include <stdio.h>
#include <string.h>

void reverse(char* left,char* right)
{
	while(left<right)
	{
		char tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}

int ispalindrome(char* str,int sz)
{
	int len=strlen(str);
	char cpy[sz];
	strcpy(cpy,str);
	reverse(cpy,cpy+len-1);
	if(strcmp(str,cpy)==0)
	return 1;
	else
	return 0;
}

int main() 
{
	char str[20]={0};
	int sz=sizeof(str)/sizeof(str[0]);
	gets(str);
	if(ispalindrome(str,sz))
	printf("yes!\n");
	else
	printf("no!\n");
	return 0;
}