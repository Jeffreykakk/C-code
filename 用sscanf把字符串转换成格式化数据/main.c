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
	char buf[100]="Jeffrey 18";
	sscanf(buf,"%s %d",s.name,&s.age);
	printf("%s\n%d",s.name,s.age);
	return 0;
}