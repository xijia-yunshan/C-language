#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void test()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return;
	}
	//使用
	//...
	if (3 + 2 == 5)
	{
		return;
	}
	//释放
	free(p);
	p = NULL;
}

int main()
{
	test();
	//程序不退出
	//7*24一直跑

	return 0;
}