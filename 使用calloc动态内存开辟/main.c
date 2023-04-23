#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int* p=(int*)calloc(10,sizeof(int));
	if(p==NULL)
	{
		perror("main");
		return 1;
	}
	int i=0;
	for(i=0;i<10;i++)
	printf("%d ",p[i]);
	printf("\n");
	for(i=0;i<10;i++)
	p[i]=i;
	for(i=0;i<10;i++)
	printf("%d ",p[i]);
	free(p);
	p=NULL;
	return 0;
}