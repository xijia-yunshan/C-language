#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��NULLָ�������
//malloc
//calloc
//realloc
//�ڿ���/�����ռ�ʧ�ܵ�ʱ�򣬻᷵�ؿ�ָ��

int main()
{
	int* p = (int*)malloc(40);
	//if��p==NULL��
	//{
	//	perror("malloc");
	//	return 1;
	//}
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;//NULL+0��ȻΪ��ָ��
	}
	return 0;
}