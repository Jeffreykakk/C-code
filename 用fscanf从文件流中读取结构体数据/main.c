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
	fscanf(pf,"%s %d",s.name,&s.age);
	printf("%s\n%d",s.name,s.age);
	fclose(pf);
	pf=NULL;
	return 0;
}