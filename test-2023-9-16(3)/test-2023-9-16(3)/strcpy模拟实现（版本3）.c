#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <assert.h>
//strcpy函数的模拟实现—版本3

void my_strcpy(char* dest, char* src)
{
	assert(dest);
	assert(src);
	//拷贝的是'\0'之前的字符
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