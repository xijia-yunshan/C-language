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
	int a = 1;//地址：0x000001
	int ret = check_sys(&a);
	if (ret == 1)
	{
		printf("小端字节序\n");
	}
	else
	{
		printf("大端字节序\n");
	}
	
	return 0;
}
