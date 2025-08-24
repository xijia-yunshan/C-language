#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Jump(int n)
{
	if (n > 0 && n < 2)
		return 1;
	else
		return Jump(n - 1) + Jump(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Jump(n);
	printf("%d\n", ret);
	return 0;
}