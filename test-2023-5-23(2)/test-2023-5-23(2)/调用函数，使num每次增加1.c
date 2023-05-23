#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ADD(int* x)
{
	return ++(*x);
}

int main()
{
	int i = 0;
	int num = 0;
	for (i = 0; i < 10; i++)
	{
		num = ADD(&num);
		printf("%d ", num);
	}
	return 0;
}