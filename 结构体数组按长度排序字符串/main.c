#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct str
{
	char arr[20];
	int len;
}str;

void init(str* strs,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		gets((strs+i)->arr);
		(strs+i)->len=strlen((strs+i)->arr);
	}
}

int cmp(const void* e1,const void* e2)
{
	return ((str*)e1)->len-((str*)e2)->len;
}

int main() 
{
	int n=0,i=0;
	scanf("%d",&n);
	getchar();
	str strs[n];
	init(strs,n);
	qsort(strs,n,sizeof(str),cmp);
	for(i=0;i<n;i++)
	printf("%s  ",(strs+i)->arr);
	return 0;
}