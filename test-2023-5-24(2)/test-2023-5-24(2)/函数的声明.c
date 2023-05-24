#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add();
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret=Add(a,b);
	printf("%d\n", ret);
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}