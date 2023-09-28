#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 1;
	if (*(char*)&a == 1)//只拿1个字节
	{
		printf("小端字节序\n");
	}
	else 
	{
		printf("大端字节序\n");
	}
	return 0;
}