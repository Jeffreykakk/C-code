#include <stdio.h>
#include <string.h>

char* mystrncpy(char* des,const char* sou,int n)
{
	char* str=des;
	while(*sou&&n)
	{
		*des++=*sou++;
		n--;
	}
	if(n!=0)
	{
		while(n--)
		*des++=0;
	}
	return str;
}

int main() 
{
	char str[6]="hello";
	int n=0;
	scanf("%d",&n);
	printf("%s\n",mystrncpy(str,"bit",n));
	return 0;
}