#include <stdio.h>
#include <string.h>

int main() 
{
	int password[20],ret;
	printf("password:\n");
	while(ret<3)
	{
		scanf("%s",password);
		if(strcmp(password,"123456")==0)
		{
			printf("right\n");
			break;
		}
		if(strcmp(password,"123456")!=0)
		printf("wrong\n");
		ret++;
	}
	if(ret==3)
	printf("quit");
	return 0;
}