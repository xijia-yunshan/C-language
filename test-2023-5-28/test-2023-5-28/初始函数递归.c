#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(unsigned int n)
{
	if (n > 9)//stop condition
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}