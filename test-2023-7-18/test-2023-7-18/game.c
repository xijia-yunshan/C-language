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
	printf("-----ɨ����Ϸ-----\n");
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
	printf("-----ɨ����Ϸ-----\n");
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
	int win = 0;//�ҵ����׸���
	while (win<row*col-counter)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (show[x][y] != '*')
			{
				printf("�����걻�Ų���ˣ������ظ��Ų�\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը���ˣ�\n");
					Display(mine, ROW, COL);
					break;
				}
				else//���������
				{
					win++;
					//ͳ��x��y��Χ�м�����
					int ret = get_mine_count(mine, x, y);
					show[x][y] = ret + '0';//ת���������ַ�
					Display(show, ROW, COL);

				}
			}
		}
		else
		{
			printf("����Ƿ����������룡\n");
		}
	}
	if (win == row*col - counter)
	{
		printf("��ϲ�㣬���׳ɹ���");
		Display(mine, ROW, COL);
	}
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//������
	char show[ROWS][COLS] = { 0 };//�Ų���
	//��ʼ��Ϊ'0'
	Initboard(mine, ROWS, COLS, '0');
	//��ʼ��Ϊ'*'
	Initboard(show, ROWS, COLS, '*');
	//������
	Setmine(mine, ROW, COL);
	//��ӡmine
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);
	//�Ų���
	Findmine(mine, show, ROW, COL);
}