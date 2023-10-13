#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S
{
	char c;
	int i;
};

union U
{
	char c;
	int i;
};

int main()
{
	union U u = { 0 };
	printf("%d\n", sizeof(u));

	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.c));

	return 0;
}