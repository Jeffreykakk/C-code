#include <stdio.h>
#include <string.h>


int main() 
{
	char str[80]={0};
	int n=0,i=0,len_max=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		if(i==0)
		len_max=strlen(gets(str));
		else
		{
			if(len_max<strlen(gets(str)))
			len_max=strlen(str);
		}
	}
	printf("%d",len_max);
	return 0;
}