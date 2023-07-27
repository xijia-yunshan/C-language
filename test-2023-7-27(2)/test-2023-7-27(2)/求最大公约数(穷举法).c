#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
		i = b;
	else
		i = a;
	for (int j = i; j > 0; j--)
	{
		if (a % j == 0 && b % j == 0)
		{
			printf("最大公约数为：%d\n", j);
			break;
		}
	}
	return 0;
}