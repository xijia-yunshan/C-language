#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000];
	int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
		//10000000000000000000000000000001
		//11111111111111111111111111111110
		//11111111111111111111111111111111 - ²¹Âë

		
	}
	printf("%d", strlen(a));
	return 0;
}
