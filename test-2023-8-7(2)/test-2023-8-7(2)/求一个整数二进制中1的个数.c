#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	int input = 0;
	scanf("%d", &input);
	for (i = 0; i < 32; i++)
	{
		if (((input >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}