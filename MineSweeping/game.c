#include "game.h"

void menu()     //打印菜单
{
    printf("\n");
    printf("*********************\n");
    printf("*** 1 play 0 exit ***\n");
    printf("*********************\n");
}

void init_board_set(char board_set[ROW][COL])       //初始化布置雷的棋盘，雷--'1'  非雷--'0'
{
    int i=0;
    for(i=0;i<ROW;i++)
    {
        int j=0;
        for(j=0;j<COL;j++)
        {
            board_set[i][j]='0';
        }
    }
}

void init_board_sweep(char board_sweep[row][col])       //初始化排查雷的棋盘，未排查--'*'
{
    int i=0;
    for(i=0;i<row;i++)
    {
        int j=0;
        for(j=0;j<col;j++)
        {
            board_sweep[i][j]='*';
        }
    }
}

void mine_set(char board_set[ROW][COL])     //将初始化后全为非雷（'0'）的棋盘上布置雷（'1'）
{
    int i=0;
    for(i=0;i<Mine;i++)
    {
        int x=rand()%9+1;
        int y=rand()%9+1;
        while(board_set[x][y]=='1')     //判断布置雷的位置是否重复
        {
            x=rand()%9+1;
            y=rand()%9+1;
        }
        board_set[x][y]='1';
    }
}

void board_sweep_display(char board_sweep[row][col])        //打印排查雷的棋盘
{
    int i=0;
    for(i=1;i<=row;i++)     //打印列号
    {
        if(i==1)
        printf("  %d  ",i);
        else
        printf(" %d  ",i);
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        int j=0;
        printf("%d",i+1);       //打印行号
        for(j=0;j<col;j++)
        {
            if(j!=col-1)
            printf(" %c |",board_sweep[i][j]);
            else
            printf(" %c ",board_sweep[i][j]);
        }
        printf("\n");
        if(i!=row-1)
        {
            for(j=0;j<col;j++)
            {
                if(j!=col-1)
                {
                    if(j==0)
                    printf(" ---|");
                    else
                    printf("---|");
                }
                else
                printf("---");
            }
        }
        printf("\n");
    }
}

void board_set_display(char board_set[ROW][COL])        //打印布置雷的棋盘
{
    int i=0;
    for(i=0;i<ROW;i++)
    {
        int j=0;
        for(j=0;j<COL;j++)
        {
            printf("%c ",board_set[i][j]);
        }
        printf("\n");
    }
}

int sweep(char board_set[ROW][COL],char board_sweep[row][col])      //排查雷，踩到雷返回1，未踩到雷返回0
{
    int x=0,y=0;
    printf("请输入要排查的坐标>: ");
    scanf("%d %d",&x,&y);
    while(x<1||x>9||y<1||y>9)       //判断输入坐标的合法性
    {
        printf("坐标输入不合法，请重新输入>: ");
        scanf("%d %d",&x,&y);
    }
    while(board_sweep[x-1][y-1]!='*')       //判断坐标是否重复
    {
        printf("输入的坐标已排查，请重新输入>: ");
        scanf("%d %d",&x,&y);
    }
    if(board_set[x][y]=='1')
    return 1;       //踩到雷，返回1
    board_sweep[x-1][y-1]=board_set[x-1][y-1]+
                           board_set[x][y-1]+
                           board_set[x+1][y-1]+
                           board_set[x-1][y]+
                           board_set[x][y]+
                           board_set[x+1][y]+
                           board_set[x-1][y+1]+
                           board_set[x][y+1]+
                           board_set[x+1][y+1]-8*'0';       //显示排查坐标周围雷的个数
    return 0;       //未踩到雷，返回0
}

void mine_display(char board_set[ROW][COL])
{
    int i=0;
    for(i=1;i<=9;i++)
    {
        int j=0;
        for(j=1;j<=9;j++)
        printf("%c ",board_set[i][j]);
        printf("\n");
    }
}

void game()
{
    int flag=0;         //利用flag接收排查雷函数的返回值
    int count=0;        //利用count记录排查雷的次数
    srand((unsigned)time(NULL));
    char board_set[ROW][COL]={0};
    char board_sweep[row][col]={0};
    init_board_set(board_set);
    init_board_sweep(board_sweep);
    mine_set(board_set);
    while(count<row*col-Mine)       //count到排查次数说明排雷成功
    {
        board_sweep_display(board_sweep);       //打印排查雷的棋盘
        //board_set_display(board_set);           //打印布置雷的棋盘
        flag=sweep(board_set,board_sweep);
        if(flag==1)         //排查雷函数的返回值为1，踩到雷
        {
            printf("你被雷炸死了\n");
            break;
        }
        //flag==0   未踩到雷，游戏继续
        count++;      
        system("cls");  
    }
    if(count==row*col-Mine)         //判断跳出循环是否为获胜的情况
    printf("扫雷成功\n");
    else                            //被炸死，公布雷的位置
    {
        printf("以下是数字为1是雷的位置\n");
        mine_display(board_set);
    }
}