#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p = (struct Test*)0x100000;

int main()
{
	printf("%p\n", p + 0x1);//0x1 == 1
	//0x100014        ����0x100020����Ҫת����16��������

	printf("%p\n", (unsigned long)p + 0x1);//p��ǿ������ת�������͡�0x100001

	printf("%p\n", (unsigned int*)p + 0x1);//0x100004

	return 0;
}