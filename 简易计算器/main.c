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
	do
	{	
		menu();
		printf("choose : ");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				printf("two number: ");
				scanf("%d %d",&x,&y);
				printf("%d\n",add(x,y));
				break;
			case 2:
				printf("two number: ");
				scanf("%d %d",&x,&y);
				printf("%d\n",sub(x,y));
				break;
			case 3:
				printf("two number: ");
				scanf("%d %d",&x,&y);
				printf("%d\n",mul(x,y));
				break;
			case 4:
				printf("two number: ");
				scanf("%d %d",&x,&y);
				printf("%d\n",div(x,y));
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