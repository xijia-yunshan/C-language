#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//memset��������ֻ��Ҫ֪������þ�����
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//ע��㣺memset�����ֽ�Ϊ��λ�����ڴ�ֵ��
	memset(arr, 1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
