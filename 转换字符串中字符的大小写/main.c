#include <stdio.h>
#include <ctype.h>

int main() 
{
	char str[20]={0};
	int i=0;
	gets(str);
	while(str[i]!=0)
	{
		if(islower(str[i])!=0)
		str[i]=toupper(str[i]);
		else
		str[i]=tolower(str[i]);
		i++;
	}
	printf("%s",str);
	return 0;
}