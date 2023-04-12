#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
	char name[20];
	int age;
};

int cmp_age(const void*e1,const void*e2)
{
	return ( ( ( (struct stu*)e1) ->age) - ( ( (struct stu*)e2 )->age) );
}

int cmp_name(const void*e1,const void*e2)
{
	return strcmp( ( (struct stu*)e1) ->name, ( (struct stu*)e2 )->name );
}

int main() 
{
	struct stu s[3]={ {"zhangsan",23},{"lisi",43},{"wangwu",33} };
	int sz=sizeof(s)/sizeof(s[0]);
	printf("sort by name\n");
	qsort(s,sz,sizeof(s[0]),cmp_name);
	for(int i=0;i<sz;i++)
	printf("%s,%d  ",s[i].name,s[i].age);
	printf("\n");
	printf("\nsort by age\n");
	qsort(s,sz,sizeof(s[0]),cmp_age);
	for(int i=0;i<sz;i++)
	printf("%s,%d  ",s[i].name,s[i].age);
	
	return 0;
}