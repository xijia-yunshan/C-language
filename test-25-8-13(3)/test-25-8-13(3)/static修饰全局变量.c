#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int g_val;

int main()
{
	printf("%d\n", g_val);
	return 0;
}