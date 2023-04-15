#include <stdio.h>
#include <errno.h>

//fail to call library fuction -->generate error codes
//global varible --> int errno;

int main() 
{
	//fail to open the file , return NULL
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	//read the file
	fclose(pf);	//close the file
	pf=NULL;
	return 0;
}