#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//����9*9���̣����飩
#define ROW 9
#define COL 9

//�������̱߽��׵ĸ�������ͳ�ƣ�����Ҫ�������ϼ�����
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