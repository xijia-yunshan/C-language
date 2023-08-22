#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find(int arr[][5], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;
	while (x < r&&y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y]>k)
		{
			y--;
		}
		else
		{
			printf("找到了，是arr[%d][%d]\n", x, y);
			return;
		}
	}
	printf("找不到\n");
}

int main()
{
	int arr[5][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15 }, { 16, 17, 18, 19, 20 }, { 21, 22, 23, 24, 25 } };
	int k = 0;
	printf("请输入要找的数：");
	scanf("%d", &k);
	find(arr, k, 5, 5);
	return 0;
}