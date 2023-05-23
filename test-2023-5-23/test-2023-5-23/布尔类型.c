#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool is_prime(int x)
{
	int j = 0;
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x%j == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int i = 0;
	int counter = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			counter++;
		}
	}
	printf("\ncounter=%d\n", counter);
	return 0;
}