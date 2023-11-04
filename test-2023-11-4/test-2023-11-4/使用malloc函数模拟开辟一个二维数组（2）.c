#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int(*p)[5] = (int(*)[5])malloc(3 * 5 * sizeof(int));
	
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &p[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", p[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%p ", &p[i][j]);
		}
		printf("\n");
	}

	free(p);
	p = NULL;

	return 0;
}