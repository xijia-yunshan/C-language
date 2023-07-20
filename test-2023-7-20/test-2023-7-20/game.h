#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//定义9*9棋盘（数组）
#define ROW 9
#define COL 9

//由于棋盘边界雷的个数不好统计，所以要在棋盘上加两行
#define ROWS ROW+2
#define COLS COL+2

#define number 15

void game();
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_mine_count(char board[ROWS][COLS], int x, int y);
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y);