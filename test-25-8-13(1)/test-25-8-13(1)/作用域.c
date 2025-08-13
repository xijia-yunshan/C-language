#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int b;
int main()
{
	{
		int a = 10;//local variables
		printf("%d\n", a);
	}
	//printf("%d\n", a);error
	printf("%d\n", b);
	return 0;
}