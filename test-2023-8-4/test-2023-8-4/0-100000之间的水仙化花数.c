#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>




int main()
{
	int num = 0;
	int count = 0;
	for (num = 0; num <= 100000; num++)
	{
		if (num == 0)
		{
			printf("%d ", num);
			count++;
		}
		else
		{
			int i = num;
			int n = 0;
			double sum = 0;
			while (num != 0)
			{
				num = num / 10;
				n++;
			}
			num = i;
			while (num != 0)
			{
				int ret = num % 10;
				num = num / 10;
				sum = sum + pow(ret, n);
			}
			num = i;
			if (sum == num)
			{
				printf("%d ", num);
				count++;
			}
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}