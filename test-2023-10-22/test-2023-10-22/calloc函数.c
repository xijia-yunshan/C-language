#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("calloc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	return 0;
}
//calloc������malloc�������������ڣ�calloc�����������ڴ�ռ��Ժ󣬻��ȳ�ʼ��Ϊ0����malloc�����򲻻������Ŀռ��ʼ����
//�Ժ���ôѡ�����ֺ�����
//���ֻ��������һ��ռ䣬��malloc��������֮��������ʼ���ڴ�ռ䣬��calloc
//�������Ժ󣬶�������free���ͷ�
