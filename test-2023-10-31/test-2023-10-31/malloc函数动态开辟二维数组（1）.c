#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int** p = (int**)malloc(3 * sizeof(int*));//开辟行

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		*(p + i) = (int*)malloc(5 * sizeof(int));//开辟列
	}
	
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

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%p ", &p[i][j]);
		}
		printf("\n");
	}


	//释放
	for (i = 0; i < 3; i++)
	{
		free(*(p + i));
	}
		
	return 0;
}