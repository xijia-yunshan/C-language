#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int counter = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
			counter++;
		}
		else if (i / 10 == 9)
		{
			printf("%d ", i);
			counter++;
		}
	}
	printf("\ncounter=%d\n", counter);
	return 0;
}