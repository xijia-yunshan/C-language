#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int x)
{
	int j = 0;
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x%j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	int counter = 0;
	for (i = 100; i <= 200; i++)
	{
		is_prime(i);
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
			counter++;
		}
	}
	printf("\ncounter=%d\n", counter);
	return 0;
}