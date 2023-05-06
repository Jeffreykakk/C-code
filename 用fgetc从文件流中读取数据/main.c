#include <stdio.h>
#include <stdlib.h>


int main() 
{
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		perror("fopen");
		return 1;
	}
	int ret=fgetc(pf);
	printf("%c",ret);
	ret=fgetc(pf);
	printf("%c",ret);
	ret=fgetc(pf);
	printf("%c",ret);
	ret=fgetc(pf);
	printf("%c",ret);
	ret=fgetc(pf);
	printf("%c",ret);
	ret=fgetc(pf);
	printf("%c",ret);
	ret=fgetc(pf);
	printf("%c",ret);
	fclose(pf);
	pf==NULL;
	return 0;
}