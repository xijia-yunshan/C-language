#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void move(char start, char end)
{
	printf("%c->%c ", start, end);
}

void Hanoi(int n, char start, char temp, char end)
{
	if (n == 1)
		move(start, end);
	else
	{
		Hanoi(n - 1, start, end, temp);//把n-1个圆盘通过最后一根柱子移动到中间那根柱子
		move(start, end);//剩下最后一圆盘直接移动到最后一根柱子
		Hanoi(n - 1, temp, start, end);//中间那根柱子上n-1个圆盘通过第一根柱子移动到最后那根柱子（目标柱子）
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}