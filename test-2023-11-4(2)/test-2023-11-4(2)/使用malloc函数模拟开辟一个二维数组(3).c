#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(3 * 5 * sizeof(int));

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &p[i*5+j]);
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", p[i*5+j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%p ", &p[i*5+j]);
		}
		printf("\n");
	}
	return 0;
}