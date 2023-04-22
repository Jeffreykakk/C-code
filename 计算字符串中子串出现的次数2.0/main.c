#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i=0,j=0,k=0,count=0;
    char str1[50]={0};
	char str2[20]={0};
    printf("two strings:");
    gets(str1);
    gets(str2);
    int len1=strlen(str1),len2=strlen(str2);
    for(i=0;i<=len1-len2;i++)
	{
		for(j=0,k=i;j<len2&&str2[j]==str1[k];j++,k++);
        if(j==len2)count++;
    }
	printf("%d\n",count);
    return 0;
}