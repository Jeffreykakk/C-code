#include <stdio.h>

char* mystrncat(char* des,char* sou,int n)
{
	char* str=des;
	while(*des)
	des++;
	while(n&&*sou)
	{
		n--;
		*des++=*sou++;
	}
	*des='\0';
	return str;
}

int main() 
{
	int n=0;
	scanf("%d",&n);
	char str[20]="hello ";
	printf("%s",mystrncat(str,"bit!",n));
	return 0;
}