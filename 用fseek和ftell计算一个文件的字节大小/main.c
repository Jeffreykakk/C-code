#include <stdio.h>

int main() 
{
	FILE* pf=fopen("test.txt","w");
	if(pf==NULL)
	{
		perror("fopen");
		return 1;
	}
	fputs("Jeffrey",pf);
	fclose(pf);
	pf=NULL;
	pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		perror("fopen");
		return 1;
	}
	fseek(pf,0,SEEK_END);
	int size=ftell(pf);
	fclose(pf);
	pf=NULL;
	printf("%d",size);
	return 0;
}