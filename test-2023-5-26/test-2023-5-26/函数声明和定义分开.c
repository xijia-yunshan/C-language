#define _CRT_SECURE_NO_WARNINGS
#include "add.h"
#include "sub.h"
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum=add(a, b);
	printf("%d\n", sum);
	int ret =sub(a,b);
	printf("%d\n", ret);
	return 0;
}