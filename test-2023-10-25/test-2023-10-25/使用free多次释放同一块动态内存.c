#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	//...

	//释放
	//...
	free(p);
	//p = NULL;

	free(p);
	//如果没有赋值成空指针，多次释放一定会出问题
	//p = NULL;
	return 0;
}
