#include <stdio.h>

typedef struct complex
{
	int real;
	int unreal;
}com;

void init(com* c1,com* c2)
{
	printf("c1:\n");
	printf("real:\n");
	scanf("%d",&c1->real);
	printf("unreal:\n");
	scanf("%d",&c1->unreal);
	printf("c2:\n");
	printf("real:\n");
	scanf("%d",&c2->real);
	printf("unreal:\n");
	scanf("%d",&c2->unreal);
}

void count(com* c1,com* c2)
{
	printf("real:%d\n",c1->real*c2->real-c1->unreal*c2->unreal);
	printf("unreal:%d\n",c1->real*c2->unreal+c1->unreal*c2->real);
}

int main() 
{
	com c1={0},c2={0};
	init(&c1,&c2);
	count(&c1,&c2);
	return 0;
}