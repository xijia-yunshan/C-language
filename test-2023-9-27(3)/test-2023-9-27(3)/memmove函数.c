#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//Դͷ�����ݺ�Ŀ�������ص����������
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//1 2 1 2 3 4 5 8 9 10
	//1 2 1 2 1 2 1 8 9 10��

	//Ϊʲô���������Ľ����
	//memcpy�������Դ����ص����ڴ�֮������ݿ���
	//�ڴ�֮������������ص�������ʹ��memmove����
	//my_memcpy(arr+2, arr, 20);

	memmove(arr + 2, arr, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;

}