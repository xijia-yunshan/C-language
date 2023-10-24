#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//对非动态开辟内存使用free释放
int main()
{
	int a = 10;
	int* p = &a;
	free(p);
	p = NULL;
	return 0;
}