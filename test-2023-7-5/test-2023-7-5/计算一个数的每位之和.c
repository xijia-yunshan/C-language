#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int input)
{
	if (input > 9)
	{
		return sum(input / 10) + input % 10;
	}
	else
		return input;
}

int main()
{
	int input = 0;
	printf("������һ����:>");
	scanf("%d", &input);
	sum(input);
	printf("%d\n", sum(input));
	return 0;
}