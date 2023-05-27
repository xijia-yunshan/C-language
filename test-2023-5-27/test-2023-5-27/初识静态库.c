#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"

#pragma comment(lib,"add.lib")
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}