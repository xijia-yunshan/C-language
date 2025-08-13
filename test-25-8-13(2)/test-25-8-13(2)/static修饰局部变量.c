#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test()
{
	static int a = 0;
	a++;
	printf("%d ", a);
}

int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}