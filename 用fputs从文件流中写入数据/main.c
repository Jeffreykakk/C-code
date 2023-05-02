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
	fputs("hello\n",pf);
	fputs("Jeffrey\n",pf);
	fclose(pf);
	pf=NULL;
	return 0;
}