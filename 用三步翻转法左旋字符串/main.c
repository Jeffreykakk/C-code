#include <stdio.h>
#include <string.h>

void reverse(char* left,char* right)
{
	while(left<right)
	{
		int temp=*left;
		*left=*right;
		*right=temp;
		left++;
		right--;
	}
}

void left_rotate(char *str,int k)      //ab cdef --> ba fedc --> cdef ab
{
	int len=strlen(str);
	reverse(str,str+k-1);
	reverse(str+k,str+len-1);
	reverse(str,str+len-1);
}

int main() 
{
	char str[20]="abcdef";
	int k=0;
	scanf("%d",&k);
	left_rotate(str,k);
	printf("%s",str);
	return 0;
}