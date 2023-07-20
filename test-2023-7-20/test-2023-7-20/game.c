#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----扫雷游戏----\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----扫雷游戏----\n");
}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = number;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (board[x][y]== '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			int ret = board[x + i][y + j] - '0';
			sum = sum + ret;
		}
	}
	return sum;
}

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
	if (get_mine_count(mine, x, y) == 0)
	{
		show[x][y] = ' ';
		int i = 0;
		int j = 0;
		for (i = -1; i < 1; i++)
		{
			for (j = -1; j < 1; j++)
			{
				if (show[x + i][y + j] == '*' && x + i >=1 && x + i <= row && y + j >=1  && y + j <= col)
				{
					Expand(mine, show, row, col, x + i, y + j);
				}
			}
		}
	}
	else
	{
		show[x][y] = get_mine_count(mine, x, y) + '0';
	}
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - number)
	{
			printf("请输入坐标:>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row&&y >= 1 && y <= col)
			{
				if (show[x][y] != '*')
				{
					printf("该坐标已被排查，请重新输入！\n");
				}
				else
				{
					if (mine[x][y] == '1')
					{
						printf("很遗憾，你被炸死了\n");
						Displayboard(mine, ROW, COL);
						break;
					}
					else
					{
						win++;
						//没有被炸死，统计周围雷的个数
						Expand(mine, show, row, col, x, y);
						Displayboard(show, ROW, COL);
					}
				}
			}
			else
			{
				printf("坐标非法，请重新输入！\n");
			}
	}
	if (win == row*col - number)
	{
		printf("恭喜你，你赢了\n");
		Displayboard(mine, ROW, COL);
	}		
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//安排雷的棋盘11*11
	char show[ROWS][COLS] = { 0 };//排查雷的棋盘11*11
	
	//将mine初始化为'0'，show棋盘初始化为'*'
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	
	//安排雷
	Setmine(mine, ROW, COL);//注意：埋雷的时候也是传ROW、COL
	
	//打印mine和show
	//Displayboard(mine, ROW, COL);设置雷的棋盘不用打印
	Displayboard(show, ROW, COL);
	
	//打印mine
	//Displayboard(mine, ROW, COL);
	
	//找雷
	Findmine(mine, show, ROW, COL);
	
}