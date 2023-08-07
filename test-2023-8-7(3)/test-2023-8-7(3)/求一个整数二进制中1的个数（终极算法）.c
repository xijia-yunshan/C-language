#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	int count = 0;
	scanf("%d", &input);
	while (input != 0)
	{
		input = input&(input - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}