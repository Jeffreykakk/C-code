#include <stdio.h>
#include <string.h>
//i like beijing.
//beijing. ->beijing. like ->beijing. like i 
int save(char*p1,char*p10,char*p2)
{
	while(1)
	{
		if(*p2==0)
		{
			while(p1<=p10)
			{
				*p2=*p1;
				p1++;
				p2++;
			}
			*p2=' ';
			return 0;
		}
		else
		p2++;
	}
}

int main()
{
	char arr1[100]={0};
	char arr2[100]={0};
	gets(arr1);
	char* end=arr1+strlen(arr1)-1;
	char* start=end;
	while(arr1<=start)
	{
		while(*start!=' '&&arr1<start)
		start--;
		if(arr1<start)
		save(start+1,end,arr2);
		else
		save(start,end,arr2);
		end=start-1;
		start=end;
	}
	printf("%s",arr2);
	return 0;
}
