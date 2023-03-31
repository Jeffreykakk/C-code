#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define chance 8

void menu()
{
	printf("\n");
	printf("*************************\n");
	printf("******1 play 0 exit******\n");
	printf("*************************\n");
}

game()
{
	int guess,count=0,dat=rand()%100+1;
	while(count!=chance)
	{
		printf("\n number>:");
		scanf("%d",&guess);
		if(guess>dat)
		{
			printf("too big\n");
			count++;
		}
		else if(guess<dat)
		{
			printf("too small\n");
			count++;
		}
		else
		{
			printf("too luncky!\n");
			break;
		}
	}
	if(count==chance)
	printf("\ntoo many chances\ntoo unlucky!\n");
}

int main() 
{
	srand((unsigned)time(NULL));
	int input;
	do
	{
		menu();
		printf("\nchoose>: ");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("\ninput error\n");
		}
	}
	while(input);
	return 0;
}