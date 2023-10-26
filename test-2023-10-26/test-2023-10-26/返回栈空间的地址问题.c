#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* GetMemory()
{
	char p[] = "hello world";
	return p;
}

int main()
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
	return 0;
}