#include <stdio.h>
#include <string.h>


int main() 
{
	char str_max[80]={0},str[80]={0};
	int n=0,i=0,len_max=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			len_max=strlen(gets(str));
			strcpy(str_max,str);
		}
		else
		{
			if(len_max<strlen(gets(str)))
			{
				len_max=strlen(str);
				strcpy(str_max,str);
			}
		}
	}
	printf("The longest is: %s\n",str_max);
	return 0;
}