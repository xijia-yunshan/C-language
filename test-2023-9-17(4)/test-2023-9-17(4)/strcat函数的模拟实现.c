#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* dest, char* src)
{
	char* ret = dest;
	//NULL
	assert(dest);
	assert(src);
	//�ҵ�Ŀ��ռ��е�\0
	while (*dest != '\0')
	{
		dest++;
	}
	//2.��������
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello \0xxxxxxxx";
	char* p = "world";

	my_strcat(arr1, p);
	printf("%s\n", arr1);
	return 0;
}