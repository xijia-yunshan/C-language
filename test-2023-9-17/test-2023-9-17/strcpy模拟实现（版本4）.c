#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//destָ��Ŀռ�����Ҫ�ı�ģ�����srcָ��Ŀռ��ǲ��������ı��
void my_strcpy(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	
	//��������'\0'֮ǰ���ַ�
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}