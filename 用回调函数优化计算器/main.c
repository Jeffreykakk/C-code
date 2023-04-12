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

void cal(int(*p)(int,int))
{
	int x=0,y=0;
	printf("two number: ");
	scanf("%d %d",&x,&y);
	printf("%d\n",p(x,y));
}

int main() 
{	
	int input=0;
	do
	{	
		menu();
		printf("choose : ");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				cal(add);
				break;
			case 2:
				cal(sub);
				break;
			case 3:
				cal(mul);
				break;
			case 4:
				cal(div);
				break;
			case 0:
				printf("exit!\n");
				break;
			default:
				printf("input error!\n");
				break;
		}
	}
	while(input);
	return 0;
}