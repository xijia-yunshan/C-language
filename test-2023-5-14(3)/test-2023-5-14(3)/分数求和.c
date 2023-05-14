#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	double sum = 0.0;
	double ret = 0.0;
	int k = 1;
	for (i = 1; i < 100; i++)
	{
		 ret= k*1.0 / i;
		 sum = ret + sum;
		 k = -k;
	}
	printf("%.1f\n", sum);
	return 0;
}