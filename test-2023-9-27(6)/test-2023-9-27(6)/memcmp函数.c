#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//memcmp�������� һ���ֽ�һ���ֽڱȽ�
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abqwertyuio";
//	int ret = memcmp(arr1, arr2, 5);
//	printf("%d\n", ret);
//}

//memcmp���˱������Ƚ��ַ����ַ������⣬�����Ա������Ƚ��������͵�����
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 1, 3, 5, 7, 9 };
	int ret = memcmp(arr1, arr2, 4);
	printf("%d\n", ret);
	return 0;
}