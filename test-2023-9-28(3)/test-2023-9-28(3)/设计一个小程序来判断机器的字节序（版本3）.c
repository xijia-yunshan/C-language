#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_sys(int* pa)
{
	return *(char*)pa;
}

int main()
{
	int a = 1;//��ַ��0x000001
	int ret = check_sys(&a);
	if (ret == 1)
	{
		printf("С���ֽ���\n");
	}
	else
	{
		printf("����ֽ���\n");
	}

	return 0;
}