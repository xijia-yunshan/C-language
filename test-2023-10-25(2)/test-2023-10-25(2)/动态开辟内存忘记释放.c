#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void test()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return;
	}
	//ʹ��
	//...
	if (3 + 2 == 5)
	{
		return;
	}
	//�ͷ�
	free(p);
	p = NULL;
}

int main()
{
	test();
	//�����˳�
	//7*24һֱ��

	return 0;
}