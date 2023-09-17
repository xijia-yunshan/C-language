#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	//NULL
	assert(dest);
	assert(src);
	//拷贝的是'\0'之前的字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//目标空间的起始地址
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };

	char* p = my_strcpy(arr2, arr1);
	//链式访问
	printf("%s\n", p);
	return 0;
}