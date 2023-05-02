#include <stdio.h>
#include <stdlib.h>

struct stu
{
	char name[10];
	int age;
};

int main() 
{
	struct stu s={"Jeffrey",19};
	char buf[100]={0};
	sprintf(buf,"%s\n%d",s.name,s.age);
	printf(buf);
	return 0;
}