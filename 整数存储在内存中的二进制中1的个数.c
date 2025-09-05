#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;

	while (a)
	{
		a = a& (a - 1);
		count++;
	}

	printf("count = %d\n", count);
	return 0;
}