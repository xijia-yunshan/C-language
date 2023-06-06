#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int caculate(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*caculate(n - 1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = caculate(n);
	printf("%d\n", ret);
	return 0;
}