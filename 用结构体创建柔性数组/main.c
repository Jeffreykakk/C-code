#include <stdio.h>
#include <stdlib.h>

struct S
{
	int n;
	int arr[];
};

int main() 
{
	struct S *p = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
	if(p==NULL)
	return 1;
	p->n=0;
	int i=0;
	for(i=1;i<=10;i++)
	p->arr[i]=i;
	printf("%d ",p->n);
	for(i=1;i<=10;i++)
	printf("%d ",p->arr[i]);
	free(p);
	p=NULL;
	return 0;
}