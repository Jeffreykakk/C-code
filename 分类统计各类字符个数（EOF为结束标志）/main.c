#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s );

int main()
{
    char s[MAXS];
    ReadString(s);
    StringCount(s);
    return 0;
}

void ReadString( char* s)
{
	char ch=0;
	int count=0;
	while((ch=getchar())!=EOF&&count<MAXS-1)
	{
		*s=ch;
		s++;
		count++;
	}
	*s='\0';
}

void StringCount( char* s)
{
	int upper=0,lower=0,blank=0,digit=0,other=0;
	while(*s)
	{
		if(*s>='A'&&*s<='Z')
		upper++;
		else if(*s>='a'&&*s<='z')
		lower++;
		else if(*s==' ')
		blank++;
		else if(*s>='0'&&*s<='9')
		digit++;
		else
		other++;
		s++;
	}
	printf("%d %d %d %d %d",upper,lower,blank,digit,other);
}