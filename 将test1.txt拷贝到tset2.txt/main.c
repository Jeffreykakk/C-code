#include <stdio.h>

int main() 
{
	FILE* pfread=fopen("test1.txt","r");
	if(pfread==NULL)
	{
		perror("fopen test1.txt");
		return 1;
	}
	FILE* pfwrite=fopen("test2.txt","w");
	if(pfwrite==NULL)
	{
		fclose(pfread);
		pfread=NULL;
		perror("fopen test2.txt");
		return 1;
	}
	char ch=0;
	while( (ch = fgetc(pfread)) != EOF)
	fputc(ch,pfwrite);
	if(feof(pfread))
	printf("read successfully\n");
	else
	printf("read unsuccessfully\n");
	fclose(pfread);
	pfread=NULL;
	fclose(pfwrite);
	pfwrite=NULL;
	return 0;
}