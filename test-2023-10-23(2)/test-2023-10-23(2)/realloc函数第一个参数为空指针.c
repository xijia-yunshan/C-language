#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)realloc(NULL, 40);
	//当realloc函数第一个参数为NULL指针时，功能相当于malloc函数
	return 0;
}