#include <stdio.h>
#include <stdlib.h>


int main() 
{
	FILE* pf=fopen("test.txt","w");
	if(pf==NULL)
	{
		perror("fopen");
		return 1;
	}
	fputc('J',pf);
	fputc('e',pf);
	fputc('f',pf);
	fputc('f',pf);
	fputc('r',pf);
	fputc('e',pf);
	fputc('y',pf);
	fclose(pf);
	pf=NULL;
	return 0;
}