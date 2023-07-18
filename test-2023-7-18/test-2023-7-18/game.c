#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
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



void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----扫雷游戏-----\n");
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
	printf("-----扫雷游戏-----\n");
}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = counter;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return (board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] - 8*'0');
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到非雷个数
	while (win<row*col-counter)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标被排查过了，不能重复排查\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了！\n");
					Display(mine, ROW, COL);
					break;
				}
				else//如果不是雷
				{
					win++;
					//统计x，y周围有几个雷
					int ret = get_mine_count(mine, x, y);
					show[x][y] = ret + '0';//转换成数字字符
					Display(show, ROW, COL);

				}
			}
		}
		else
		{
			printf("坐标非法请重新输入！\n");
		}
	}
	if (win == row*col - counter)
	{
		printf("恭喜你，排雷成功！");
		Display(mine, ROW, COL);
	}
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//安排雷
	char show[ROWS][COLS] = { 0 };//排查雷
	//初始化为'0'
	Initboard(mine, ROWS, COLS, '0');
	//初始化为'*'
	Initboard(show, ROWS, COLS, '*');
	//布置雷
	Setmine(mine, ROW, COL);
	//打印mine
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);
	//排查雷
	Findmine(mine, show, ROW, COL);
}