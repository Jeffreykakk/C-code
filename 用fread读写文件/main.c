#include <stdio.h>
#include <stdlib.h>

struct stu
{
	char name[10];
	int age;
};

int main() 
{
	struct stu s={0};
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		perror("fopen");
		return 1;
	}
	fread(&s,sizeof(struct stu),1,pf);
	printf("%s\n%d\n",s.name,s.age);
	fclose(pf);
	pf=NULL;
	return 0;
}