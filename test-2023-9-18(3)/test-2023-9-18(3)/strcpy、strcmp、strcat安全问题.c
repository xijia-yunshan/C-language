#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//strcpy��strcmp��strcat�����Ȳ������Ƶ��ַ���������������Ŀ��ռ�Ų��ŵ��£����ڰ�ȫ������
int main()
{
	char arr1[3] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}