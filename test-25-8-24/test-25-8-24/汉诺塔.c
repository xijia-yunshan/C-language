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
		Hanoi(n - 1, start, end, temp);//��n-1��Բ��ͨ�����һ�������ƶ����м��Ǹ�����
		move(start, end);//ʣ�����һԲ��ֱ���ƶ������һ������
		Hanoi(n - 1, temp, start, end);//�м��Ǹ�������n-1��Բ��ͨ����һ�������ƶ�������Ǹ����ӣ�Ŀ�����ӣ�
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}