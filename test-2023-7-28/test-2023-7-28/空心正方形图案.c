#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input = 0;
	while (scanf("%d", &input) != EOF)
	{
		int i = 0;
		int j = 0;
		for (i = 1; i <= input; i++)
		{
			for (j = 1; j <= input; j++)
			{
				if (i == 1 || i == input || j == 1 || j == input)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}