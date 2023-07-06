#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n, int k)
{
	if (k > 1)
	{
		int ret = n*factorial(n, k - 1);
	}
	else
		return n;
}

int main()
{
	int n = 0;
	int k = 0;
	printf("请输入n和k的值:>");
	scanf("%d %d", &n, &k);
	factorial(n, k);
	printf("%d\n", factorial(n, k));
	return 0;
}