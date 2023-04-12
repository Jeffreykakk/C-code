#include <stdio.h>

int add(int x,int y)
{
	return x+y;
}

int sub(int x,int y) 
{
	return x-y;
}

int mul(int x,int y)
{
	return x*y;
}

int div(int x,int y)
{
	return x/y;
}

void menu()
{
	printf("\n");
	printf("*************************\n");
	printf("******1.add  2.sub ******\n");
	printf("******3.mul  4.div ******\n");	
	printf("*********0. exit*********\n");
}

int main() 
{	
	int input=0;
	int x=0,y=0;
	int(*p[5])(int ,int)={NULL,add,sub,mul,div};
	do
	{	
		menu();
		printf("choose : ");
		scanf("%d",&input);
		if(input>=1&&input<=4)
		{
			printf("two number: ");
			scanf("%d %d",&x,&y);
			printf("%d\n",(p[input])(x,y));
		}
		else if(input==0)
		{
			printf("exit!\n");
		}
		else
		printf("input error!\n");
	}
	while(input);
	return 0;
}