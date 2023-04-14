#include <stdio.h>

int mystrncmp(const char* const des,char* sou,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(*(des+i)!=*(sou+i))
		return *(des+i)-*(sou+i);
		else
		{
			if(*des==0)
			return 0;
		}
	}
	return 0;
}

int main() 
{
	char str1[20]="abcd";
	char str2[20]="abcd";
	int n=0;
	scanf("%d",&n);
	int ret=mystrncmp(str1,str2,n);
	printf("%d",ret);
	return 0;
}