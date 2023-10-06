#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct A
{
	int a;
	short b;
	int c;
	char d;
};

struct B
{
	int a;
	short b;
	char c;
	int d;
};

int main()
{
	int ret1 = sizeof(struct A);
	int ret2 = sizeof(struct B);

	printf("%d ", ret1);
	printf("%d\n", ret2);
	return 0;
}