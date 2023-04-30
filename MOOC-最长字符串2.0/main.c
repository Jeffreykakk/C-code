#include <stdio.h>
#include <string.h>


int main() 
{
	int n=0,i=0,len_max=0,pos=0;
	scanf("%d",&n);
	getchar();
	char str[n][80];
	for(i=0;i<n;i++)
	gets(str[i]);
	for(i=0;i<n;i++)
	{
		if(strlen(str[i])>len_max)
		{
			len_max=strlen(str[i]);
			pos=i;
		}
	}
	printf("The longest is: %s\n",str[pos]);
	return 0;
}