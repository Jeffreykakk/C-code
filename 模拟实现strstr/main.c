#include <stdio.h>

char* mystrstr(char* str1,char* str2)
{
	if(*str2==0)
	return NULL;
	char* s1=NULL;
	char* s2=NULL;
	char* cp=str1;
	while(*cp)
	{
		s1=cp;
		s2=str2;
		while((*s1==*s2)&&*s2)
		{
			s1++;
			s2++;
		}
		if(*s2==0)
		return cp;
		cp++;
	}
	return NULL;
}

int main() 
{
	char str1[]="abbbcde";
	char str2[]="bcdde";
	char* p=mystrstr(str1,str2);
	if(p!=NULL)
	printf("can find\n%s",p);
	else
	printf("can not find\n");
	return 0;
}