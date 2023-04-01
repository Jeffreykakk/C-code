#include <stdio.h>
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void initboard(char board[ROW][COL],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}
}

void displayboard(char board[ROW][COL],int row,int col)
{
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		for(int j=0;j<row;j++)
		{
			if(i<row-1)
			printf("---");
			if(i<row-1&&j<col-1)
			printf("|");
		}
		printf("\n");
	}
}

void player(char board[ROW][COL],int row,int col)
{
	printf("\nlocation :");
	int x=-1,y=-1;
	while(1)
	{
		scanf("%d%d",&x,&y);
		if(board[x-1][y-1]==' ')
		{
			board[x-1][y-1]='#';
			break;
		}
		printf("\nlocation error!\n");
	}
}

void computer(char board[ROW][COL],int row,int col)
{
	
	while(1)
	{
		int x=rand()%row;
		int y=rand()%col;
		if(board[x][y]==' ')
		{
			board[x][y]='*';
			break;
		}
	}
}

int isfull(char board[ROW][COL],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			return 0;
		}
	}
	return 1;
}

char iswin(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][2]!=' ')
		return board[i][0];
	}
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[2][i]!=' ')
		return board[0][i];
	}
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]!=' ')
	return board[1][1];
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[2][0]!=' ')
	return board[1][1];
	if(1==isfull(board,row,col))
	return 'd';
	else
	return 'c';
}

void game()
{
	system("cls");
	char ret=-1;
	srand((unsigned int)time(NULL));
	char board[ROW][COL]={0};
	initboard(board,ROW,COL);
	displayboard(board,ROW,COL);
	while(1)
	{
		player(board,ROW,COL);
		system("cls");
		ret=iswin(board,ROW,COL);
		if(ret!='c')
		break;
		computer(board,ROW,COL);
		displayboard(board,ROW,COL);
		ret=iswin(board,ROW,COL);
		if(ret!='c')
		break;
	}
	if(ret=='#')
	printf("\nyou win!!!\n");
	if(ret=='*')
	printf("\nyou lose!!!\n");
	if(ret=='d')
	printf("\ndraw!!!\n");
}

void menu()
{
	printf("\n");
	printf("*************************\n");
	printf("******1 play 0 exit******\n");
	printf("*************************\n");
}

int main() 
{
	int input;
	do
	{
		menu();
		printf("\nnumber>: ");
		scanf("%d",&input);
		switch (input)
		{
			case 0:
				printf("\nexit!!!\n");
				break;
			case 1:
				game();
				break;
			default :
				printf("\ninput error!!!\n");
				break;
		}
	}
	while(input);
	return 0;
}