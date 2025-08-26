#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Hanoi(int n)
{
	if (n == 1)
		return 1;
	else
		return 2 * Hanoi(n - 1) + 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Hanoi(n);
	printf("%d\n", ret);
	return 0;
}