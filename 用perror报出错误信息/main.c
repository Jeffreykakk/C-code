#include <stdio.h>
#include <errno.h>


int main() 
{
	//fail to open the file , return NULL
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		perror("fopen");  //1.convert error codes into error messages
		return 1;		  //2.print error messages(include custom information)
	}
	//read the file
	fclose(pf);	//close the file
	pf=NULL;
	return 0;
}