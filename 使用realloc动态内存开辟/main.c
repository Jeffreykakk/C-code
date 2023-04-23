#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int* p=(int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		perror("main_malloc");
		return 1;
	}
	int i=0;
	for(i=0;i<10;i++)
	p[i]=i;
	for(i=0;i<10;i++)
	printf("%d ",p[i]);
	printf("\n");
	int *ptr=(int*)realloc(p,9*sizeof(int));
	if(ptr==NULL)
	{
		perror("main_realloc");
		return 1;
	}
	else
	p=ptr;
	for(i=0;i<9;i++)
	printf("%d ",p[i]);
	free(p);
	p=NULL;
	return 0;
}