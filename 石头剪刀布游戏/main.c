#include <stdio.h>
#include <string.h>

int main()
{
	int k=0,count=0;
	char arr[10]={0};
	scanf("%d",&k);
	getchar();
	while(1)
	{
		gets(arr);
		if(strcmp(arr,"End")==0)
		break;
		if(count==k)
		{
			printf("%s\n",arr);
			count=0;
		}
		else
		{
			if(strcmp(arr,"ChuiZi")==0)
			printf("Bu\n");
			if(strcmp(arr,"JianDao")==0)
			printf("ChuiZi\n");
			if(strcmp(arr,"Bu")==0)
			printf("JianDao\n");
			count++;
		}
	}
	return 0;
}
