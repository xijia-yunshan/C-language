#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ�����������μ��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ����
	//1 3
	//5 0
	//0 0
	int *p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}
