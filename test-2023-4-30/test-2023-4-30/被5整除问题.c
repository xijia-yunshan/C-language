#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 0;
	scanf("%d", &x);
	int y = x % 5;
	if (y == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}