#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//ʹ��free�����ͷ�һ���ֿ��ٵĶ�̬�ڴ�ռ�
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p = i + 1;
		p++;
	}
	//1 2 3 4 5 [] [] [] [] []
	free(p);//free�ͷŵ��ǿռ����ʼλ��
	p = NULL;
	return 0;
}