#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	while (scanf("%d", &input) != EOF)
	{
		int i = 0;
		for (i = 0; i < input; i++)
		{
			int j = 0;
			for (j = 0; j < input; j++)
			{
				if (i == j || i + j == input-1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}