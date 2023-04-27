#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	return 0;
}