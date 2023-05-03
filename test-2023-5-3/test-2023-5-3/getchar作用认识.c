#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}