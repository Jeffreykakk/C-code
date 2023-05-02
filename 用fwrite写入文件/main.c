#include <stdio.h>
#include <stdlib.h>

struct stu
{
	char name[10];
	int age;
};

int main() 
{
	struct stu s={"Jeffrey",18};
	FILE* pf=fopen("test.txt","w");
	if(pf==NULL)
	{
		perror("fopen");
		return 1;
	}
	fwrite(&s,sizeof(struct stu),1,pf);
	fclose(pf);
	pf=NULL;
	return 0;
}