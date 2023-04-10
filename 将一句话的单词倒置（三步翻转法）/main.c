#include <stdio.h>
#include <string.h>

void reverse(char* left,char* right)
{
	while(left<right)
	{
		char temp=*left;
		*left=*right;
		*right=temp;
		left++;
		right--;
	}
}

//abc def\0 -> fed cba\0 -> def abc\0

int main() 
{
	char arr[100]={0};
	gets(arr);
	reverse(arr,arr+strlen(arr)-1);
	char* start=arr;
	while(*start)
	{	
		char* end=start;
		while(*end!=' '&&*end!='\0')
		{
			end++;
		}
		reverse(start,end-1);
		if(*end!='\0')
		start=end+1;
		else
		start=end;
	}
	printf("%s",arr);
	return 0;
}