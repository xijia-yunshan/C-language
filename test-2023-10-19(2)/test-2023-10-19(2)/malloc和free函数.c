#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//malloc�������ڴ�
//free���ͷ��ڴ�

int main()
{
	//����10�����Ϳռ䡪40���ֽ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	//ʹ�ÿռ�
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	//0 1 2 3 4 5 6 7 8 9
	//��ӡ
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}

	//�ͷ�
	free(p);//freeֻ���ͷŶ�̬����Ŀռ�
	p = NULL;
	return 0;
}
//malloc��������Ŀռ���ô����?
//1.free����
//2.�Լ����ͷŵ�ʱ�򣬳��������Ҳ���ɲ���ϵͳ����
//3.malloc���ڶ����������ڴ�