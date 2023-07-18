#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define counter 10

void game();
void Iitboard(char board[ROWS][COLS], int rows, int cols, char set);
void Display(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_mine_count(char board[ROWS][COLS], int x, int y);

