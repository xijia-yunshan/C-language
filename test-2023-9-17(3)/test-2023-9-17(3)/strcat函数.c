#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//strcat���ַ���׷��
//1.Ŀ��ռ��е���\0�������￪ʼ׷�ӣ���Դͷ�ַ����е���\0��׷��ʲôʱ�������
//2.Ŀ��ռ�Ҫ�㹻��Ŀ������޸�

int main()
{
	char arr1[20] = "hello ";
	char* p = "world";

	strcat(arr1, p);
	printf("%s\n", arr1);
	return 0;
}