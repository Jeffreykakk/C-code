#include <stdio.h>

int main() 
{
	char ch=0,buf[27]={0};
	FILE* pf=fopen("test.txt","w+");
	if(pf==NULL)
	{
		perror("fopen");
		return 1;
	}
	for(ch='a';ch<='z';ch++)
	fputc(ch,pf);
	rewind(pf);
	fgets(buf,27,pf);
	fclose(pf);
	pf=NULL;
	printf(buf);
	return 0;
}