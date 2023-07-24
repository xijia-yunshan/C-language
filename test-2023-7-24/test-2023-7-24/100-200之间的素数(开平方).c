#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i < 200; i += 2)
	{
		int flag = 1;
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}