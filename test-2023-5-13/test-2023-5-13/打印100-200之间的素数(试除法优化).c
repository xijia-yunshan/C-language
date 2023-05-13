#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int counter = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= i/2; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j>i/2)
		{
			printf("%d ", i);
			counter++;
		}
	}
	printf("\ncounter=%d\n", counter);
	return 0;
}