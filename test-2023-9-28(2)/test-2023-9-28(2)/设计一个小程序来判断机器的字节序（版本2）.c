#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_sys(int* pa)
{
	if (*(char*)pa == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
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
