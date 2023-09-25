#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char *a[] = { "work", "at", "alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}