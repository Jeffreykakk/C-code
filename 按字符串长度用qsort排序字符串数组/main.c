#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* e1,const void* e2)
{
	return strlen(e1)-strlen(e2);
}

int main() 
{
	char strs[5][20]={"rbcd","acced","sadasd","esd","zd"};
	qsort(strs,5,20,cmp);
	int i=0;
	for(i=0;i<5;i++)
	printf("%s  ",strs[i]);
	return 0;
}