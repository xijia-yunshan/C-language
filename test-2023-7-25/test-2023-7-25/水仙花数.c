#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i < 1000; i++)
	{
		int x = i % 10;
		int tmp = i / 10;
		int y = tmp % 10;
		int z = i / 100;
		if (i == x*x*x + y*y*y + z*z*z)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}