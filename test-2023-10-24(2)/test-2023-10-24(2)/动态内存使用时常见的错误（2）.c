#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//对动态开辟空间的越界访问
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}

	//越界访问
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;
	return 0;
}