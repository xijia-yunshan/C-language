#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果。
	//1 3
	//5 0
	//0 0
	int *p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}
