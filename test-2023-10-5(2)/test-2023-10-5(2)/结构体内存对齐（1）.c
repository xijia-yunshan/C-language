#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S1
{
	char c1;
	char c2;
	int a;
};

struct S2
{
	char c1;
	int a;
	char c2;
};

int main()
{
	struct S1 s1 = { 'a', 'b', 100 };
	struct S2 s2 = { 'a', 100, 'b' };
	printf("%u\n", sizeof(s1));
	printf("%u\n", sizeof(s2));
	return 0;
}