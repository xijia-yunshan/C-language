#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)realloc(NULL, 40);
	//��realloc������һ������ΪNULLָ��ʱ�������൱��malloc����
	return 0;
}