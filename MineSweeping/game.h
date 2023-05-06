#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define Mine 10
#define row 9
#define col 9
#define ROW 11
#define COL 11 

void menu();
void game();
void init_board_set(char board_set[ROW][COL]);
void init_board_sweep(char board_sweep[row][col]);
void mine_set(char board_set[ROW][COL]);
void board_sweep_display(char board_sweep[row][col]);
void board_set_display(char board_set[ROW][COL]);
int sweep(char board_set[ROW][COL],char board_sweep[row][col]);