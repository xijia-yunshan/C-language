#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 1;
	if (*(char*)&a == 1)//ֻ��1���ֽ�
	{
		printf("С���ֽ���\n");
	}
	else 
	{
		printf("����ֽ���\n");
	}
	return 0;
}