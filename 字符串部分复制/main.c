#include <stdio.h>
#include <string.h>
#define MAXN 20

void strmcpy( char *dest, int m, char *src );
void ReadString(char* src); 

int main()
{
    char dest[MAXN], src[MAXN];
    int m;
    scanf("%d\n", &m);
    ReadString(src);
    strmcpy(dest,m,src);
    printf("%s\n",dest);
    return 0;
}

void ReadString(char* src)
{
	gets(src);
}

void strmcpy( char *dest, int m, char *src )
{
	int len=strlen(src),i=0;
	if(m>len)
	*dest='\0';
	else
	while(dest[i++]=src[m++-1]);	
}