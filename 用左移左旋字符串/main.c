#include <stdio.h>
#include <string.h>

void left_rotate(char *str,int k)      //abcdef --> bcdefa --> cdefab
{
	int len=strlen(str);
	for(int i=0;i<k;i++)
	{
		int temp=*str;
		for(int j=0;j<len-1;j++)
		{
			*(str+j)=*(str+j+1);
		}
		*(str+len-1)=temp;
	}
}

int main() 
{
	char str[20]="abcdef";
	int k=0;
	scanf("%d",&k);
	left_rotate(str,k);
	printf("%s",str);
	return 0;
}