#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[4] = { 1, 2, 3, 4 };

	int *ptr1 = (int *)(&a + 1);

	int *ptr2 = (int *)((long long)a + 1);

	printf("%x, %x", ptr1[-1], *ptr2);
	//x64环境下，指针的大小是8个字节，
	//我们假设a的地址是0x0012ff4020304050，int只占4个字节，强制转换后会发生截断，即变成了0x20304050，会造成非法访问 ——> long long
	return 0;
}