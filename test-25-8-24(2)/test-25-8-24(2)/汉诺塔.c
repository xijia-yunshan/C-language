#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = (int)pow(2, n) - 1;
	printf("%d\n", ret);
	return 0;
}