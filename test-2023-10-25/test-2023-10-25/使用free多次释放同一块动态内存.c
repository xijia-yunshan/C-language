#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	//...

	//�ͷ�
	//...
	free(p);
	//p = NULL;

	free(p);
	//���û�и�ֵ�ɿ�ָ�룬����ͷ�һ���������
	//p = NULL;
	return 0;
}
