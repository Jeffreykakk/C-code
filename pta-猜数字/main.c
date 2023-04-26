#include <stdio.h>


int main() 
{
	int guess=0,num=0,count=0,n=0;
	scanf("%d %d",&num,&count);
	while(n<=count)
	{
		n++;
		scanf("%d",&guess);
		if(guess<0)
		break;
		if(guess>num)
		{
			printf("Too big\n");
		}
		else if(guess<num)
		{
			printf("Too small\n");
		}
		else
		{
			break;
		}
	}
	if(n>count||guess<0)
	printf("Game Over\n");
	else
	{
		if(n==1)
		printf("Bingo!\n");
		else if(n<=3)
		printf("Lucky You!\n");
		else
		printf("Good Guess!\n");
	}
	return 0;
}
