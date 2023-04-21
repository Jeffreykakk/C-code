#include <stdio.h>
#include <string.h>

int count(char* str1,char* str2)
{
	int count=0;
	char* str=strstr(str1,str2);
	while(1)
	{
		if(!str)
		break;
		else
		{
			count++;
			str++;
			str=strstr(str,str2);
		}
	}
	return count;
}

int main() 
{
	char str1[10]="abcdaaa";
	char str2[10]="aa";
	printf("%d",count(str1,str2));
	return 0;
}