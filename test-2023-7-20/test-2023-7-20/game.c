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
	printf("-----ɨ����Ϸ----\n");
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
	printf("-----ɨ����Ϸ----\n");
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
			printf("����������:>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row&&y >= 1 && y <= col)
			{
				if (show[x][y] != '*')
				{
					printf("�������ѱ��Ų飬���������룡\n");
				}
				else
				{
					if (mine[x][y] == '1')
					{
						printf("���ź����㱻ը����\n");
						Displayboard(mine, ROW, COL);
						break;
					}
					else
					{
						win++;
						//û�б�ը����ͳ����Χ�׵ĸ���
						Expand(mine, show, row, col, x, y);
						Displayboard(show, ROW, COL);
					}
				}
			}
			else
			{
				printf("����Ƿ������������룡\n");
			}
	}
	if (win == row*col - number)
	{
		printf("��ϲ�㣬��Ӯ��\n");
		Displayboard(mine, ROW, COL);
	}		
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//�����׵�����11*11
	char show[ROWS][COLS] = { 0 };//�Ų��׵�����11*11
	
	//��mine��ʼ��Ϊ'0'��show���̳�ʼ��Ϊ'*'
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	
	//������
	Setmine(mine, ROW, COL);//ע�⣺���׵�ʱ��Ҳ�Ǵ�ROW��COL
	
	//��ӡmine��show
	//Displayboard(mine, ROW, COL);�����׵����̲��ô�ӡ
	Displayboard(show, ROW, COL);
	
	//��ӡmine
	//Displayboard(mine, ROW, COL);
	
	//����
	Findmine(mine, show, ROW, COL);
	
}