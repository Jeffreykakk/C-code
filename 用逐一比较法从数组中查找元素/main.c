#include <stdio.h>

int main() 
{
	char ch[]={1,2,3,4,5,6,7,8,9,10};
	int k,sz,i;
	printf("find number:> ");
	scanf("%d",&k);
	sz=sizeof(ch)/sizeof(ch[0]);
	for(i=0;i<sz;i++)
	{
		if(ch[i]==k)
		{
			printf("over index:%d\n",i);
			break;
		}
	}
	if(i==sz)
	printf("nothing\n");
	return 0;
}