#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	//NULL
	assert(dest);
	assert(src);
	//��������'\0'֮ǰ���ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//Ŀ��ռ����ʼ��ַ
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };

	char* p = my_strcpy(arr2, arr1);
	//��ʽ����
	printf("%s\n", p);
	return 0;
}