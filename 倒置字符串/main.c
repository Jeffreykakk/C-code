#include <stdio.h>

char* reverse(char* p)
{
	char* left=p;
	char* right=p+strlen(p)-1;
	while(left<right)
	{
		int temp=*left;
		*left=*right;
		*right=temp;
		left++;
		right--;
	}
	return p;
}

int main() 
{
	char str[]="hello";
	printf("%s",reverse(str));
	return 0;
}